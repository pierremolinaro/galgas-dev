#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Class for element of '@templateInstructionSwitchBranchListForGeneration' list                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateInstructionSwitchBranchListForGeneration : public cCollectionElement {
  public : GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_lstringlist & in_mConstantList,
                                                                                const GALGAS_templateInstructionListForGeneration & in_mInstructionList
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

cCollectionElement_templateInstructionSwitchBranchListForGeneration::cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                                          const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantList, in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateInstructionSwitchBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateInstructionSwitchBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionSwitchBranchListForGeneration (mObject.mAttribute_mConstantList, mObject.mAttribute_mInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateInstructionSwitchBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantList" ":" ;
  mObject.mAttribute_mConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateInstructionSwitchBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * operand = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration::GALGAS_templateInstructionSwitchBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration::GALGAS_templateInstructionSwitchBranchListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                                                                                            const GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionSwitchBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                         const GALGAS_lstringlist & in_mConstantList,
                                                                                         const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (in_mConstantList,
                                                                                      in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                                                   const GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::modifier_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                                                      const GALGAS_templateInstructionListForGeneration inOperand1,
                                                                                      const GALGAS_uint inInsertionIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::modifier_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                                                      GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                                      const GALGAS_uint inRemoveIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mConstantList ;
      outOperand1 = p->mObject.mAttribute_mInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::modifier_popFirst (GALGAS_lstringlist & outOperand0,
                                                                                 GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::modifier_popLast (GALGAS_lstringlist & outOperand0,
                                                                                GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::method_first (GALGAS_lstringlist & outOperand0,
                                                                            GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::method_last (GALGAS_lstringlist & outOperand0,
                                                                           GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::operator_concat (const GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::add_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand,
                                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::dotAssign_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration inOperand
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_templateInstructionSwitchBranchListForGeneration::reader_mConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mAttribute_mConstantList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::reader_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateInstructionSwitchBranchListForGeneration::cEnumerator_templateInstructionSwitchBranchListForGeneration (const GALGAS_templateInstructionSwitchBranchListForGeneration & inEnumeratedObject,
                                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element cEnumerator_templateInstructionSwitchBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mConstantList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mAttribute_mConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mAttribute_mInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @templateInstructionSwitchBranchListForGeneration type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ("templateInstructionSwitchBranchListForGeneration",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  const GALGAS_templateInstructionSwitchBranchListForGeneration * p = (const GALGAS_templateInstructionSwitchBranchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_templateVariableMap::cMapElement_templateVariableMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                  const GALGAS_string & in_mCppName
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTypeProxy (in_mTypeProxy),
mAttribute_mCppName (in_mCppName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_templateVariableMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTypeProxy.isValid () && mAttribute_mCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_templateVariableMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_templateVariableMap (mAttribute_lkey, mAttribute_mTypeProxy, mAttribute_mCppName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_templateVariableMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeProxy" ":" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mAttribute_mCppName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_templateVariableMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_templateVariableMap * operand = (cMapElement_templateVariableMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (operand->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppName.objectCompare (operand->mAttribute_mCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap::GALGAS_templateVariableMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap::GALGAS_templateVariableMap (const GALGAS_templateVariableMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap & GALGAS_templateVariableMap::operator = (const GALGAS_templateVariableMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap GALGAS_templateVariableMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_templateVariableMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap GALGAS_templateVariableMap::constructor_mapWithMapToOverride (const GALGAS_templateVariableMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_templateVariableMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap GALGAS_templateVariableMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_templateVariableMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                      const GALGAS_string & inArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * p = NULL ;
  macroMyNew (p, cMapElement_templateVariableMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@templateVariableMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap::modifier_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                     GALGAS_string inArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * p = NULL ;
  macroMyNew (p, cMapElement_templateVariableMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' variable is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_templateVariableMap_searchKey = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_templateVariableMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    outArgument0 = p->mAttribute_mTypeProxy ;
    outArgument1 = p->mAttribute_mCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_templateVariableMap::reader_mTypeProxyForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    result = p->mAttribute_mTypeProxy ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateVariableMap::reader_mCppNameForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    result = p->mAttribute_mCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap::modifier_setMTypeProxyForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_templateVariableMap * p = (cMapElement_templateVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    p->mAttribute_mTypeProxy = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap::modifier_setMCppNameForKey (GALGAS_string inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_templateVariableMap * p = (cMapElement_templateVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    p->mAttribute_mCppName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_templateVariableMap * GALGAS_templateVariableMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * result = (cMapElement_templateVariableMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_templateVariableMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateVariableMap::cEnumerator_templateVariableMap (const GALGAS_templateVariableMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap_2D_element cEnumerator_templateVariableMap::current (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return GALGAS_templateVariableMap_2D_element (p->mAttribute_lkey, p->mAttribute_mTypeProxy, p->mAttribute_mCppName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateVariableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_templateVariableMap::current_mTypeProxy (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mAttribute_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_templateVariableMap::current_mCppName (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mAttribute_mCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @templateVariableMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateVariableMap ("templateVariableMap",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateVariableMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateVariableMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVariableMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap GALGAS_templateVariableMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateVariableMap result ;
  const GALGAS_templateVariableMap * p = (const GALGAS_templateVariableMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateVariableMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVariableMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@lexicalInstructionListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalInstructionListAST : public cCollectionElement {
  public : GALGAS_lexicalInstructionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
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

cCollectionElement_lexicalInstructionListAST::cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalInstructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalInstructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalInstructionListAST (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalInstructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalInstructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalInstructionListAST * operand = (cCollectionElement_lexicalInstructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalInstructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_listWithValue (const GALGAS_lexicalInstructionAST & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalInstructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::addAssign_operation (const GALGAS_lexicalInstructionAST & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::modifier_insertAtIndex (const GALGAS_lexicalInstructionAST inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::modifier_removeAtIndex (GALGAS_lexicalInstructionAST & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::modifier_popFirst (GALGAS_lexicalInstructionAST & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::modifier_popLast (GALGAS_lexicalInstructionAST & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::method_first (GALGAS_lexicalInstructionAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::method_last (GALGAS_lexicalInstructionAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::operator_concat (const GALGAS_lexicalInstructionListAST & inOperand
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::add_operation (const GALGAS_lexicalInstructionListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::dotAssign_operation (const GALGAS_lexicalInstructionListAST inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalInstructionListAST::cEnumerator_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element cEnumerator_lexicalInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionAST cEnumerator_lexicalInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalInstructionListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionListAST ("lexicalInstructionListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  const GALGAS_lexicalInstructionListAST * p = (const GALGAS_lexicalInstructionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalInstructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@metamodelTemplateDelimitorListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_metamodelTemplateDelimitorListAST : public cCollectionElement {
  public : GALGAS_metamodelTemplateDelimitorListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_lstring & in_mStartString,
                                                                 const GALGAS_lstringlist & in_mOptionList,
                                                                 const GALGAS_lstring & in_mEndString
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

cCollectionElement_metamodelTemplateDelimitorListAST::cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_lstring & in_mStartString,
                                                                                                            const GALGAS_lstringlist & in_mOptionList,
                                                                                                            const GALGAS_lstring & in_mEndString
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_mOptionList, in_mEndString) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_metamodelTemplateDelimitorListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_metamodelTemplateDelimitorListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_metamodelTemplateDelimitorListAST (mObject.mAttribute_mStartString, mObject.mAttribute_mOptionList, mObject.mAttribute_mEndString COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_metamodelTemplateDelimitorListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartString" ":" ;
  mObject.mAttribute_mStartString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionList" ":" ;
  mObject.mAttribute_mOptionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndString" ":" ;
  mObject.mAttribute_mEndString.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_metamodelTemplateDelimitorListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_metamodelTemplateDelimitorListAST * operand = (cCollectionElement_metamodelTemplateDelimitorListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST::GALGAS_metamodelTemplateDelimitorListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST::GALGAS_metamodelTemplateDelimitorListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstringlist & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_metamodelTemplateDelimitorListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mStartString,
                                                                          const GALGAS_lstringlist & in_mOptionList,
                                                                          const GALGAS_lstring & in_mEndString
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_metamodelTemplateDelimitorListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (in_mStartString,
                                                                       in_mOptionList,
                                                                       in_mEndString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstringlist & inOperand1,
                                                                    const GALGAS_lstring & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_lstringlist inOperand1,
                                                                       const GALGAS_lstring inOperand2,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_lstringlist & outOperand1,
                                                                       GALGAS_lstring & outOperand2,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
      outOperand0 = p->mObject.mAttribute_mStartString ;
      outOperand1 = p->mObject.mAttribute_mOptionList ;
      outOperand2 = p->mObject.mAttribute_mEndString ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstringlist & outOperand1,
                                                                  GALGAS_lstring & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstringlist & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstringlist & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstringlist & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::operator_concat (const GALGAS_metamodelTemplateDelimitorListAST & inOperand
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::add_operation (const GALGAS_metamodelTemplateDelimitorListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::dotAssign_operation (const GALGAS_metamodelTemplateDelimitorListAST inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_metamodelTemplateDelimitorListAST::cEnumerator_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST_2D_element cEnumerator_metamodelTemplateDelimitorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_metamodelTemplateDelimitorListAST::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mAttribute_mStartString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_metamodelTemplateDelimitorListAST::current_mOptionList (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mAttribute_mOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_metamodelTemplateDelimitorListAST::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mAttribute_mEndString ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @metamodelTemplateDelimitorListAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ("metamodelTemplateDelimitorListAST",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_metamodelTemplateDelimitorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_metamodelTemplateDelimitorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_metamodelTemplateDelimitorListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  const GALGAS_metamodelTemplateDelimitorListAST * p = (const GALGAS_metamodelTemplateDelimitorListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_metamodelTemplateDelimitorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("metamodelTemplateDelimitorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@templateReplacementListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateReplacementListAST : public cCollectionElement {
  public : GALGAS_templateReplacementListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateReplacementListAST (const GALGAS_lstring & in_mMatchString,
                                                          const GALGAS_lstring & in_mReplacementString,
                                                          const GALGAS_lstring & in_mReplacementFunction
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

cCollectionElement_templateReplacementListAST::cCollectionElement_templateReplacementListAST (const GALGAS_lstring & in_mMatchString,
                                                                                              const GALGAS_lstring & in_mReplacementString,
                                                                                              const GALGAS_lstring & in_mReplacementFunction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMatchString, in_mReplacementString, in_mReplacementFunction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateReplacementListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateReplacementListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateReplacementListAST (mObject.mAttribute_mMatchString, mObject.mAttribute_mReplacementString, mObject.mAttribute_mReplacementFunction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateReplacementListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchString" ":" ;
  mObject.mAttribute_mMatchString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementString" ":" ;
  mObject.mAttribute_mReplacementString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementFunction" ":" ;
  mObject.mAttribute_mReplacementFunction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateReplacementListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateReplacementListAST * operand = (cCollectionElement_templateReplacementListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateReplacementListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST::GALGAS_templateReplacementListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST::GALGAS_templateReplacementListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateReplacementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mMatchString,
                                                                   const GALGAS_lstring & in_mReplacementString,
                                                                   const GALGAS_lstring & in_mReplacementFunction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_templateReplacementListAST (in_mMatchString,
                                                                in_mReplacementString,
                                                                in_mReplacementFunction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_lstring & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateReplacementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_lstring inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateReplacementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_lstring & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
      outOperand0 = p->mObject.mAttribute_mMatchString ;
      outOperand1 = p->mObject.mAttribute_mReplacementString ;
      outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::operator_concat (const GALGAS_templateReplacementListAST & inOperand
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::add_operation (const GALGAS_templateReplacementListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::dotAssign_operation (const GALGAS_templateReplacementListAST inOperand
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateReplacementListAST::cEnumerator_templateReplacementListAST (const GALGAS_templateReplacementListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST_2D_element cEnumerator_templateReplacementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mMatchString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mAttribute_mMatchString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mReplacementString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mAttribute_mReplacementString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mReplacementFunction (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mAttribute_mReplacementFunction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateReplacementListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateReplacementListAST ("templateReplacementListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateReplacementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReplacementListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateReplacementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateReplacementListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  const GALGAS_templateReplacementListAST * p = (const GALGAS_templateReplacementListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateReplacementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateReplacementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@lexicalRuleListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalRuleListAST : public cCollectionElement {
  public : GALGAS_lexicalRuleListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
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

cCollectionElement_lexicalRuleListAST::cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRule) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalRuleListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalRuleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalRuleListAST (mObject.mAttribute_mLexicalRule COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalRuleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRule" ":" ;
  mObject.mAttribute_mLexicalRule.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalRuleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRuleListAST * operand = (cCollectionElement_lexicalRuleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRuleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_listWithValue (const GALGAS_abstractLexicalRuleAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRuleListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRuleListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalRuleListAST (in_mLexicalRule COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::addAssign_operation (const GALGAS_abstractLexicalRuleAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::modifier_insertAtIndex (const GALGAS_abstractLexicalRuleAST inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::modifier_removeAtIndex (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
      outOperand0 = p->mObject.mAttribute_mLexicalRule ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::modifier_popFirst (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::modifier_popLast (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::method_first (GALGAS_abstractLexicalRuleAST & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::method_last (GALGAS_abstractLexicalRuleAST & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::operator_concat (const GALGAS_lexicalRuleListAST & inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::add_operation (const GALGAS_lexicalRuleListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::dotAssign_operation (const GALGAS_lexicalRuleListAST inOperand
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRuleListAST::cEnumerator_lexicalRuleListAST (const GALGAS_lexicalRuleListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element cEnumerator_lexicalRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRuleAST cEnumerator_lexicalRuleListAST::current_mLexicalRule (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject.mAttribute_mLexicalRule ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalRuleListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRuleListAST ("lexicalRuleListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRuleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRuleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRuleListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  const GALGAS_lexicalRuleListAST * p = (const GALGAS_lexicalRuleListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRuleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@lexicalMessageDeclarationListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalMessageDeclarationListAST : public cCollectionElement {
  public : GALGAS_lexicalMessageDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                                const GALGAS_lstring & in_mMessageValue
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

cCollectionElement_lexicalMessageDeclarationListAST::cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                                                                          const GALGAS_lstring & in_mMessageValue
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMessageName, in_mMessageValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalMessageDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalMessageDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalMessageDeclarationListAST (mObject.mAttribute_mMessageName, mObject.mAttribute_mMessageValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalMessageDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageName" ":" ;
  mObject.mAttribute_mMessageName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageValue" ":" ;
  mObject.mAttribute_mMessageValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalMessageDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalMessageDeclarationListAST * operand = (cCollectionElement_lexicalMessageDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mMessageName,
                                                                         const GALGAS_lstring & in_mMessageValue
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (in_mMessageName,
                                                                      in_mMessageValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_lstring inOperand1,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_lstring & outOperand1,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mMessageName ;
      outOperand1 = p->mObject.mAttribute_mMessageValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::operator_concat (const GALGAS_lexicalMessageDeclarationListAST & inOperand
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::add_operation (const GALGAS_lexicalMessageDeclarationListAST & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::dotAssign_operation (const GALGAS_lexicalMessageDeclarationListAST inOperand
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalMessageDeclarationListAST::cEnumerator_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST_2D_element cEnumerator_lexicalMessageDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mAttribute_mMessageName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageValue (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mAttribute_mMessageValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalMessageDeclarationListAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ("lexicalMessageDeclarationListAST",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalMessageDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalMessageDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  const GALGAS_lexicalMessageDeclarationListAST * p = (const GALGAS_lexicalMessageDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalMessageDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@lexicalAttributeListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalAttributeListAST : public cCollectionElement {
  public : GALGAS_lexicalAttributeListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalAttributeListAST (const GALGAS_lstring & in_mTypeName,
                                                       const GALGAS_lstring & in_mName
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

cCollectionElement_lexicalAttributeListAST::cCollectionElement_lexicalAttributeListAST (const GALGAS_lstring & in_mTypeName,
                                                                                        const GALGAS_lstring & in_mName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalAttributeListAST (mObject.mAttribute_mTypeName, mObject.mAttribute_mName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mAttribute_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalAttributeListAST * operand = (cCollectionElement_lexicalAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST::GALGAS_lexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST::GALGAS_lexicalAttributeListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mTypeName,
                                                                const GALGAS_lstring & in_mName
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalAttributeListAST (in_mTypeName,
                                                             in_mName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
      outOperand0 = p->mObject.mAttribute_mTypeName ;
      outOperand1 = p->mObject.mAttribute_mName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::operator_concat (const GALGAS_lexicalAttributeListAST & inOperand
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::add_operation (const GALGAS_lexicalAttributeListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::dotAssign_operation (const GALGAS_lexicalAttributeListAST inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalAttributeListAST::cEnumerator_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST_2D_element cEnumerator_lexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalAttributeListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalAttributeListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mAttribute_mName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalAttributeListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeListAST ("lexicalAttributeListAST",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  const GALGAS_lexicalAttributeListAST * p = (const GALGAS_lexicalAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@lexicalStyleListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalStyleListAST : public cCollectionElement {
  public : GALGAS_lexicalStyleListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalStyleListAST (const GALGAS_lstring & in_mName,
                                                   const GALGAS_lstring & in_mComment
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

cCollectionElement_lexicalStyleListAST::cCollectionElement_lexicalStyleListAST (const GALGAS_lstring & in_mName,
                                                                                const GALGAS_lstring & in_mComment
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalStyleListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalStyleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalStyleListAST (mObject.mAttribute_mName, mObject.mAttribute_mComment COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalStyleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mObject.mAttribute_mComment.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalStyleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalStyleListAST * operand = (cCollectionElement_lexicalStyleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalStyleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST::GALGAS_lexicalStyleListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST::GALGAS_lexicalStyleListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalStyleListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_lstring & in_mName,
                                                            const GALGAS_lstring & in_mComment
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalStyleListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalStyleListAST (in_mName,
                                                         in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
      outOperand0 = p->mObject.mAttribute_mName ;
      outOperand1 = p->mObject.mAttribute_mComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::method_first (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::method_last (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::operator_concat (const GALGAS_lexicalStyleListAST & inOperand
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::add_operation (const GALGAS_lexicalStyleListAST & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::dotAssign_operation (const GALGAS_lexicalStyleListAST inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalStyleListAST::cEnumerator_lexicalStyleListAST (const GALGAS_lexicalStyleListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST_2D_element cEnumerator_lexicalStyleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalStyleListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalStyleListAST::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mAttribute_mComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalStyleListAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStyleListAST ("lexicalStyleListAST",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalStyleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStyleListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalStyleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStyleListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  const GALGAS_lexicalStyleListAST * p = (const GALGAS_lexicalStyleListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStyleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStyleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@terminalDeclarationListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_terminalDeclarationListAST : public cCollectionElement {
  public : GALGAS_terminalDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_terminalDeclarationListAST (const GALGAS_lstring & in_mName,
                                                          const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                          const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                          const GALGAS_lstring & in_mStyle,
                                                          const GALGAS_lstringlist & in_mOptionList
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

cCollectionElement_terminalDeclarationListAST::cCollectionElement_terminalDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                              const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                              const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                                              const GALGAS_lstring & in_mStyle,
                                                                                              const GALGAS_lstringlist & in_mOptionList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_mStyle, in_mOptionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_terminalDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_terminalDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalDeclarationListAST (mObject.mAttribute_mName, mObject.mAttribute_mSentAttributeList, mObject.mAttribute_mSyntaxErrorMessage, mObject.mAttribute_mStyle, mObject.mAttribute_mOptionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_terminalDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mObject.mAttribute_mSentAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxErrorMessage" ":" ;
  mObject.mAttribute_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyle" ":" ;
  mObject.mAttribute_mStyle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionList" ":" ;
  mObject.mAttribute_mOptionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_terminalDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalDeclarationListAST * operand = (cCollectionElement_terminalDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST::GALGAS_terminalDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST::GALGAS_terminalDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                const GALGAS_lstring & inOperand3,
                                                                                                const GALGAS_lstringlist & inOperand4
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_terminalDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mName,
                                                                   const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                   const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                   const GALGAS_lstring & in_mStyle,
                                                                   const GALGAS_lstringlist & in_mOptionList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_terminalDeclarationListAST (in_mName,
                                                                in_mSentAttributeList,
                                                                in_mSyntaxErrorMessage,
                                                                in_mStyle,
                                                                in_mOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                             const GALGAS_lstring & inOperand2,
                                                             const GALGAS_lstring & inOperand3,
                                                             const GALGAS_lstringlist & inOperand4
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_sentLexicalAttributeListAST inOperand1,
                                                                const GALGAS_lstring inOperand2,
                                                                const GALGAS_lstring inOperand3,
                                                                const GALGAS_lstringlist inOperand4,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                                GALGAS_lstring & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                GALGAS_lstringlist & outOperand4,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mName ;
      outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
      outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mAttribute_mStyle ;
      outOperand4 = p->mObject.mAttribute_mOptionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           GALGAS_lstring & outOperand3,
                                                           GALGAS_lstringlist & outOperand4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          GALGAS_lstringlist & outOperand4,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_lstringlist & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_lstring & outOperand3,
                                                     GALGAS_lstringlist & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::operator_concat (const GALGAS_terminalDeclarationListAST & inOperand
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::add_operation (const GALGAS_terminalDeclarationListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::dotAssign_operation (const GALGAS_terminalDeclarationListAST inOperand
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalDeclarationListAST::cEnumerator_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST_2D_element cEnumerator_terminalDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST cEnumerator_terminalDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mStyle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_terminalDeclarationListAST::current_mOptionList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mOptionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @terminalDeclarationListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalDeclarationListAST ("terminalDeclarationListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  const GALGAS_terminalDeclarationListAST * p = (const GALGAS_terminalDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@sentLexicalAttributeListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_sentLexicalAttributeListAST : public cCollectionElement {
  public : GALGAS_sentLexicalAttributeListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                           const GALGAS_lstring & in_mAttributeName
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

cCollectionElement_sentLexicalAttributeListAST::cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                                const GALGAS_lstring & in_mAttributeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mAttributeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_sentLexicalAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_sentLexicalAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sentLexicalAttributeListAST (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mAttributeName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_sentLexicalAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_sentLexicalAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sentLexicalAttributeListAST * operand = (cCollectionElement_sentLexicalAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sentLexicalAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_sentLexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_lstring & in_mAttributeName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (in_mFormalSelector,
                                                                 in_mAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mAttributeName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::operator_concat (const GALGAS_sentLexicalAttributeListAST & inOperand
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::add_operation (const GALGAS_sentLexicalAttributeListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::dotAssign_operation (const GALGAS_sentLexicalAttributeListAST inOperand
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::reader_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::reader_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mAttribute_mAttributeName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_sentLexicalAttributeListAST::cEnumerator_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST_2D_element cEnumerator_sentLexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mAttribute_mAttributeName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sentLexicalAttributeListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ("sentLexicalAttributeListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sentLexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sentLexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sentLexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  const GALGAS_sentLexicalAttributeListAST * p = (const GALGAS_sentLexicalAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sentLexicalAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sentLexicalAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@lexicalListEntryListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalListEntryListAST : public cCollectionElement {
  public : GALGAS_lexicalListEntryListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                       const GALGAS_lstring & in_mTerminalSpelling,
                                                       const GALGAS_lstringlist & in_mFeatureList
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

cCollectionElement_lexicalListEntryListAST::cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                                                        const GALGAS_lstring & in_mTerminalSpelling,
                                                                                        const GALGAS_lstringlist & in_mFeatureList
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntrySpelling, in_mTerminalSpelling, in_mFeatureList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalListEntryListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalListEntryListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalListEntryListAST (mObject.mAttribute_mEntrySpelling, mObject.mAttribute_mTerminalSpelling, mObject.mAttribute_mFeatureList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalListEntryListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntrySpelling" ":" ;
  mObject.mAttribute_mEntrySpelling.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalSpelling" ":" ;
  mObject.mAttribute_mTerminalSpelling.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureList" ":" ;
  mObject.mAttribute_mFeatureList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalListEntryListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListEntryListAST * operand = (cCollectionElement_lexicalListEntryListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListEntryListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_lstringlist & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mEntrySpelling,
                                                                const GALGAS_lstring & in_mTerminalSpelling,
                                                                const GALGAS_lstringlist & in_mFeatureList
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalListEntryListAST (in_mEntrySpelling,
                                                             in_mTerminalSpelling,
                                                             in_mFeatureList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1,
                                                          const GALGAS_lstringlist & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_lstringlist inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_lstringlist & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
      outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
      outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
      outOperand2 = p->mObject.mAttribute_mFeatureList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstringlist & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstringlist & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lstringlist & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstringlist & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::operator_concat (const GALGAS_lexicalListEntryListAST & inOperand
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::add_operation (const GALGAS_lexicalListEntryListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::dotAssign_operation (const GALGAS_lexicalListEntryListAST inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalListEntryListAST::cEnumerator_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST_2D_element cEnumerator_lexicalListEntryListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mEntrySpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mAttribute_mEntrySpelling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mTerminalSpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mAttribute_mTerminalSpelling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_lexicalListEntryListAST::current_mFeatureList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mAttribute_mFeatureList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalListEntryListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListEntryListAST ("lexicalListEntryListAST",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalListEntryListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListEntryListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalListEntryListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListEntryListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  const GALGAS_lexicalListEntryListAST * p = (const GALGAS_lexicalListEntryListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListEntryListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListEntryListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@lexicalListDeclarationListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalListDeclarationListAST : public cCollectionElement {
  public : GALGAS_lexicalListDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                             const GALGAS_lstring & in_mStyle,
                                                             const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                             const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                             const GALGAS_lexicalListEntryListAST & in_mEntryList
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

cCollectionElement_lexicalListDeclarationListAST::cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                    const GALGAS_lstring & in_mStyle,
                                                                                                    const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                                                    const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                                    const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mStyle, in_mSyntaxErrorMessage, in_mSentAttributeList, in_mEntryList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalListDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalListDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalListDeclarationListAST (mObject.mAttribute_mName, mObject.mAttribute_mStyle, mObject.mAttribute_mSyntaxErrorMessage, mObject.mAttribute_mSentAttributeList, mObject.mAttribute_mEntryList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalListDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyle" ":" ;
  mObject.mAttribute_mStyle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxErrorMessage" ":" ;
  mObject.mAttribute_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mObject.mAttribute_mSentAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntryList" ":" ;
  mObject.mAttribute_mEntryList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalListDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListDeclarationListAST * operand = (cCollectionElement_lexicalListDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2,
                                                                                                      const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                                      const GALGAS_lexicalListEntryListAST & inOperand4
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mName,
                                                                      const GALGAS_lstring & in_mStyle,
                                                                      const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                      const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                      const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (in_mName,
                                                                   in_mStyle,
                                                                   in_mSyntaxErrorMessage,
                                                                   in_mSentAttributeList,
                                                                   in_mEntryList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_lstring & inOperand2,
                                                                const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                const GALGAS_lexicalListEntryListAST & inOperand4
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_lstring inOperand1,
                                                                   const GALGAS_lstring inOperand2,
                                                                   const GALGAS_sentLexicalAttributeListAST inOperand3,
                                                                   const GALGAS_lexicalListEntryListAST inOperand4,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   GALGAS_lstring & outOperand2,
                                                                   GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                                   GALGAS_lexicalListEntryListAST & outOperand4,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mName ;
      outOperand1 = p->mObject.mAttribute_mStyle ;
      outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
      outOperand4 = p->mObject.mAttribute_mEntryList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                              GALGAS_lexicalListEntryListAST & outOperand4,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                             GALGAS_lexicalListEntryListAST & outOperand4,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                         GALGAS_lexicalListEntryListAST & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                        GALGAS_lexicalListEntryListAST & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::operator_concat (const GALGAS_lexicalListDeclarationListAST & inOperand
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::add_operation (const GALGAS_lexicalListDeclarationListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::dotAssign_operation (const GALGAS_lexicalListDeclarationListAST inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalListDeclarationListAST::cEnumerator_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST_2D_element cEnumerator_lexicalListDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mStyle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST cEnumerator_lexicalListDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST cEnumerator_lexicalListDeclarationListAST::current_mEntryList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mEntryList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalListDeclarationListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ("lexicalListDeclarationListAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalListDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalListDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  const GALGAS_lexicalListDeclarationListAST * p = (const GALGAS_lexicalListDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@lexicalSendSearchListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalSendSearchListAST : public cCollectionElement {
  public : GALGAS_lexicalSendSearchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalSendSearchListAST (const GALGAS_lstring & in_mAttributeName,
                                                        const GALGAS_lstring & in_mSearchListName
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

cCollectionElement_lexicalSendSearchListAST::cCollectionElement_lexicalSendSearchListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                          const GALGAS_lstring & in_mSearchListName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mSearchListName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalSendSearchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalSendSearchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalSendSearchListAST (mObject.mAttribute_mAttributeName, mObject.mAttribute_mSearchListName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalSendSearchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSearchListName" ":" ;
  mObject.mAttribute_mSearchListName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalSendSearchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSendSearchListAST * operand = (cCollectionElement_lexicalSendSearchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSendSearchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST::GALGAS_lexicalSendSearchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST::GALGAS_lexicalSendSearchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSendSearchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mAttributeName,
                                                                 const GALGAS_lstring & in_mSearchListName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSendSearchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (in_mAttributeName,
                                                              in_mSearchListName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
      outOperand0 = p->mObject.mAttribute_mAttributeName ;
      outOperand1 = p->mObject.mAttribute_mSearchListName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::operator_concat (const GALGAS_lexicalSendSearchListAST & inOperand
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::add_operation (const GALGAS_lexicalSendSearchListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::dotAssign_operation (const GALGAS_lexicalSendSearchListAST inOperand
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalSendSearchListAST::cEnumerator_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST_2D_element cEnumerator_lexicalSendSearchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalSendSearchListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalSendSearchListAST::current_mSearchListName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mAttribute_mSearchListName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalSendSearchListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendSearchListAST ("lexicalSendSearchListAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSendSearchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendSearchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSendSearchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendSearchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  const GALGAS_lexicalSendSearchListAST * p = (const GALGAS_lexicalSendSearchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSendSearchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendSearchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@lexicalWhileBranchListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalWhileBranchListAST : public cCollectionElement {
  public : GALGAS_lexicalWhileBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                         const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
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

cCollectionElement_lexicalWhileBranchListAST::cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                                            const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mWhileExpression, in_mWhileInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalWhileBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalWhileBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalWhileBranchListAST (mObject.mAttribute_mWhileExpression, mObject.mAttribute_mWhileInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalWhileBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWhileExpression" ":" ;
  mObject.mAttribute_mWhileExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWhileInstructionList" ":" ;
  mObject.mAttribute_mWhileInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalWhileBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalWhileBranchListAST * operand = (cCollectionElement_lexicalWhileBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalWhileBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST::GALGAS_lexicalWhileBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST::GALGAS_lexicalWhileBranchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::constructor_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                              const GALGAS_lexicalInstructionListAST & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalWhileBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                  const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalWhileBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (in_mWhileExpression,
                                                               in_mWhileInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::addAssign_operation (const GALGAS_lexicalExpressionAST & inOperand0,
                                                            const GALGAS_lexicalInstructionListAST & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::modifier_insertAtIndex (const GALGAS_lexicalExpressionAST inOperand0,
                                                               const GALGAS_lexicalInstructionListAST inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::modifier_removeAtIndex (GALGAS_lexicalExpressionAST & outOperand0,
                                                               GALGAS_lexicalInstructionListAST & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
      outOperand0 = p->mObject.mAttribute_mWhileExpression ;
      outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::modifier_popFirst (GALGAS_lexicalExpressionAST & outOperand0,
                                                          GALGAS_lexicalInstructionListAST & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::modifier_popLast (GALGAS_lexicalExpressionAST & outOperand0,
                                                         GALGAS_lexicalInstructionListAST & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::method_first (GALGAS_lexicalExpressionAST & outOperand0,
                                                     GALGAS_lexicalInstructionListAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::method_last (GALGAS_lexicalExpressionAST & outOperand0,
                                                    GALGAS_lexicalInstructionListAST & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::operator_concat (const GALGAS_lexicalWhileBranchListAST & inOperand
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::add_operation (const GALGAS_lexicalWhileBranchListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::dotAssign_operation (const GALGAS_lexicalWhileBranchListAST inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalWhileBranchListAST::cEnumerator_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element cEnumerator_lexicalWhileBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cEnumerator_lexicalWhileBranchListAST::current_mWhileExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mAttribute_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cEnumerator_lexicalWhileBranchListAST::current_mWhileInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mAttribute_mWhileInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalWhileBranchListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ("lexicalWhileBranchListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalWhileBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalWhileBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWhileBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  const GALGAS_lexicalWhileBranchListAST * p = (const GALGAS_lexicalWhileBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalWhileBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWhileBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@lexicalSelectBranchListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalSelectBranchListAST : public cCollectionElement {
  public : GALGAS_lexicalSelectBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                          const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
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

cCollectionElement_lexicalSelectBranchListAST::cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                                              const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelectExpression, in_mSelectInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalSelectBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalSelectBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalSelectBranchListAST (mObject.mAttribute_mSelectExpression, mObject.mAttribute_mSelectInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalSelectBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectExpression" ":" ;
  mObject.mAttribute_mSelectExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectInstructionList" ":" ;
  mObject.mAttribute_mSelectInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalSelectBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSelectBranchListAST * operand = (cCollectionElement_lexicalSelectBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSelectBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST::GALGAS_lexicalSelectBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST::GALGAS_lexicalSelectBranchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::constructor_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                                const GALGAS_lexicalInstructionListAST & inOperand1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSelectBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                   const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSelectBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (in_mSelectExpression,
                                                                in_mSelectInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::addAssign_operation (const GALGAS_lexicalExpressionAST & inOperand0,
                                                             const GALGAS_lexicalInstructionListAST & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::modifier_insertAtIndex (const GALGAS_lexicalExpressionAST inOperand0,
                                                                const GALGAS_lexicalInstructionListAST inOperand1,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::modifier_removeAtIndex (GALGAS_lexicalExpressionAST & outOperand0,
                                                                GALGAS_lexicalInstructionListAST & outOperand1,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
      outOperand0 = p->mObject.mAttribute_mSelectExpression ;
      outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::modifier_popFirst (GALGAS_lexicalExpressionAST & outOperand0,
                                                           GALGAS_lexicalInstructionListAST & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::modifier_popLast (GALGAS_lexicalExpressionAST & outOperand0,
                                                          GALGAS_lexicalInstructionListAST & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::method_first (GALGAS_lexicalExpressionAST & outOperand0,
                                                      GALGAS_lexicalInstructionListAST & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::method_last (GALGAS_lexicalExpressionAST & outOperand0,
                                                     GALGAS_lexicalInstructionListAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::operator_concat (const GALGAS_lexicalSelectBranchListAST & inOperand
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::add_operation (const GALGAS_lexicalSelectBranchListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::dotAssign_operation (const GALGAS_lexicalSelectBranchListAST inOperand
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalSelectBranchListAST::cEnumerator_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element cEnumerator_lexicalSelectBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cEnumerator_lexicalSelectBranchListAST::current_mSelectExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mAttribute_mSelectExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cEnumerator_lexicalSelectBranchListAST::current_mSelectInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mAttribute_mSelectInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalSelectBranchListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ("lexicalSelectBranchListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSelectBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSelectBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  const GALGAS_lexicalSelectBranchListAST * p = (const GALGAS_lexicalSelectBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSelectBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Class for element of '@lexicalRoutineCallActualArgumentListAST' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalRoutineCallActualArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
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

cCollectionElement_lexicalRoutineCallActualArgumentListAST::cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRoutineActualArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalRoutineCallActualArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalRoutineCallActualArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalRoutineCallActualArgumentListAST (mObject.mAttribute_mLexicalRoutineActualArgument COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalRoutineCallActualArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRoutineActualArgument" ":" ;
  mObject.mAttribute_mLexicalRoutineActualArgument.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalRoutineCallActualArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * operand = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST::GALGAS_lexicalRoutineCallActualArgumentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST::GALGAS_lexicalRoutineCallActualArgumentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_listWithValue (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRoutineCallActualArgumentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (in_mLexicalRoutineActualArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::addAssign_operation (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::modifier_insertAtIndex (const GALGAS_abstractLexicalRoutineActualArgumentAST inOperand0,
                                                                             const GALGAS_uint inInsertionIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::modifier_removeAtIndex (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                             const GALGAS_uint inRemoveIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
      outOperand0 = p->mObject.mAttribute_mLexicalRoutineActualArgument ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::modifier_popFirst (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRoutineActualArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::modifier_popLast (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRoutineActualArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::method_first (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRoutineActualArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::method_last (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRoutineActualArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::operator_concat (const GALGAS_lexicalRoutineCallActualArgumentListAST & inOperand
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::add_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::dotAssign_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST inOperand
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRoutineCallActualArgumentListAST::cEnumerator_lexicalRoutineCallActualArgumentListAST (const GALGAS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element cEnumerator_lexicalRoutineCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRoutineActualArgumentAST cEnumerator_lexicalRoutineCallActualArgumentListAST::current_mLexicalRoutineActualArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject.mAttribute_mLexicalRoutineActualArgument ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalRoutineCallActualArgumentListAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ("lexicalRoutineCallActualArgumentListAST",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineCallActualArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineCallActualArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineCallActualArgumentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  const GALGAS_lexicalRoutineCallActualArgumentListAST * p = (const GALGAS_lexicalRoutineCallActualArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineCallActualArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallActualArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Class for element of '@lexicalFunctionCallActualArgumentListAST' list                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalFunctionCallActualArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
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

cCollectionElement_lexicalFunctionCallActualArgumentListAST::cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalActualInputArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalFunctionCallActualArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalFunctionCallActualArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalFunctionCallActualArgumentListAST (mObject.mAttribute_mLexicalActualInputArgument COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalFunctionCallActualArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalActualInputArgument" ":" ;
  mObject.mAttribute_mLexicalActualInputArgument.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalFunctionCallActualArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * operand = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST::GALGAS_lexicalFunctionCallActualArgumentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST::GALGAS_lexicalFunctionCallActualArgumentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_listWithValue (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalFunctionCallActualArgumentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (in_mLexicalActualInputArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::addAssign_operation (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::modifier_insertAtIndex (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST inOperand0,
                                                                              const GALGAS_uint inInsertionIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::modifier_removeAtIndex (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                              const GALGAS_uint inRemoveIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
      outOperand0 = p->mObject.mAttribute_mLexicalActualInputArgument ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::modifier_popFirst (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalActualInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::modifier_popLast (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalActualInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::method_first (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalActualInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::method_last (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalActualInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::operator_concat (const GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::add_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::dotAssign_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST inOperand
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalFunctionCallActualArgumentListAST::cEnumerator_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST & inEnumeratedObject,
                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element cEnumerator_lexicalFunctionCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST cEnumerator_lexicalFunctionCallActualArgumentListAST::current_mLexicalActualInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject.mAttribute_mLexicalActualInputArgument ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalFunctionCallActualArgumentListAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ("lexicalFunctionCallActualArgumentListAST",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallActualArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionCallActualArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallActualArgumentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  const GALGAS_lexicalFunctionCallActualArgumentListAST * p = (const GALGAS_lexicalFunctionCallActualArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCallActualArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallActualArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST::GALGAS_lexicalArgumentModeAST (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  result.mEnum = kEnum_lexicalInputMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  result.mEnum = kEnum_lexicalInputOutputMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_lexicalArgumentModeAST [3] = {
  "(not built)",
  "lexicalInputMode",
  "lexicalInputOutputMode"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalArgumentModeAST::reader_isLexicalInputMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalInputMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalArgumentModeAST::reader_isLexicalInputOutputMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalInputOutputMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalArgumentModeAST::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "<enum @lexicalArgumentModeAST: " << gEnumNameArrayFor_lexicalArgumentModeAST [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalArgumentModeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalArgumentModeAST ("lexicalArgumentModeAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalArgumentModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalArgumentModeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalArgumentModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalArgumentModeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  const GALGAS_lexicalArgumentModeAST * p = (const GALGAS_lexicalArgumentModeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalArgumentModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalArgumentModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Class for element of '@lexicalExternRoutineFormalArgumentListAST' list                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalExternRoutineFormalArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                                         const GALGAS_lstring & in_mLexicalTypeName,
                                                                         const GALGAS_lstring & in_mFormalArgumentName
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

cCollectionElement_lexicalExternRoutineFormalArgumentListAST::cCollectionElement_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                                                                                            const GALGAS_lstring & in_mLexicalTypeName,
                                                                                                                            const GALGAS_lstring & in_mFormalArgumentName
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPassingMode, in_mLexicalTypeName, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalExternRoutineFormalArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalExternRoutineFormalArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalExternRoutineFormalArgumentListAST (mObject.mAttribute_mPassingMode, mObject.mAttribute_mLexicalTypeName, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalExternRoutineFormalArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPassingMode" ":" ;
  mObject.mAttribute_mPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalTypeName" ":" ;
  mObject.mAttribute_mLexicalTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalExternRoutineFormalArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * operand = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST::GALGAS_lexicalExternRoutineFormalArgumentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST::GALGAS_lexicalExternRoutineFormalArgumentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_listWithValue (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_lstring & inOperand2
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalExternRoutineFormalArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                                                  const GALGAS_lstring & in_mLexicalTypeName,
                                                                                  const GALGAS_lstring & in_mFormalArgumentName
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST (in_mPassingMode,
                                                                               in_mLexicalTypeName,
                                                                               in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::addAssign_operation (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_lstring & inOperand2
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::modifier_insertAtIndex (const GALGAS_lexicalArgumentModeAST inOperand0,
                                                                               const GALGAS_lstring inOperand1,
                                                                               const GALGAS_lstring inOperand2,
                                                                               const GALGAS_uint inInsertionIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::modifier_removeAtIndex (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                               GALGAS_lstring & outOperand1,
                                                                               GALGAS_lstring & outOperand2,
                                                                               const GALGAS_uint inRemoveIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
      outOperand0 = p->mObject.mAttribute_mPassingMode ;
      outOperand1 = p->mObject.mAttribute_mLexicalTypeName ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::modifier_popFirst (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                          GALGAS_lstring & outOperand1,
                                                                          GALGAS_lstring & outOperand2,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mPassingMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::modifier_popLast (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                         GALGAS_lstring & outOperand1,
                                                                         GALGAS_lstring & outOperand2,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mPassingMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::method_first (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                     GALGAS_lstring & outOperand1,
                                                                     GALGAS_lstring & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mPassingMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::method_last (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    GALGAS_lstring & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mPassingMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::operator_concat (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::add_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand,
                                                                                                                  C_Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::dotAssign_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST inOperand
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalExternRoutineFormalArgumentListAST::cEnumerator_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inEnumeratedObject,
                                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element cEnumerator_lexicalExternRoutineFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST cEnumerator_lexicalExternRoutineFormalArgumentListAST::current_mPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject.mAttribute_mPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExternRoutineFormalArgumentListAST::current_mLexicalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject.mAttribute_mLexicalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExternRoutineFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalExternRoutineFormalArgumentListAST type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST ("lexicalExternRoutineFormalArgumentListAST",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExternRoutineFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExternRoutineFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExternRoutineFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result ;
  const GALGAS_lexicalExternRoutineFormalArgumentListAST * p = (const GALGAS_lexicalExternRoutineFormalArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExternRoutineFormalArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExternRoutineFormalArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@externRoutineListAST' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_externRoutineListAST : public cCollectionElement {
  public : GALGAS_externRoutineListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externRoutineListAST (const GALGAS_lstring & in_mRoutineName,
                                                    const GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                    const GALGAS_stringlist & in_mErrorMessageList
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

cCollectionElement_externRoutineListAST::cCollectionElement_externRoutineListAST (const GALGAS_lstring & in_mRoutineName,
                                                                                  const GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                                                  const GALGAS_stringlist & in_mErrorMessageList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mLexicalRoutineFormalArgumentList, in_mErrorMessageList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externRoutineListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externRoutineListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externRoutineListAST (mObject.mAttribute_mRoutineName, mObject.mAttribute_mLexicalRoutineFormalArgumentList, mObject.mAttribute_mErrorMessageList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_externRoutineListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineName" ":" ;
  mObject.mAttribute_mRoutineName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRoutineFormalArgumentList" ":" ;
  mObject.mAttribute_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessageList" ":" ;
  mObject.mAttribute_mErrorMessageList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_externRoutineListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externRoutineListAST * operand = (cCollectionElement_externRoutineListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externRoutineListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST::GALGAS_externRoutineListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST::GALGAS_externRoutineListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externRoutineListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                                    const GALGAS_stringlist & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_externRoutineListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mRoutineName,
                                                             const GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                             const GALGAS_stringlist & in_mErrorMessageList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externRoutineListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_externRoutineListAST (in_mRoutineName,
                                                          in_mLexicalRoutineFormalArgumentList,
                                                          in_mErrorMessageList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                       const GALGAS_stringlist & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externRoutineListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lexicalExternRoutineFormalArgumentListAST inOperand1,
                                                          const GALGAS_stringlist inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externRoutineListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lexicalExternRoutineFormalArgumentListAST & outOperand1,
                                                          GALGAS_stringlist & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
      outOperand0 = p->mObject.mAttribute_mRoutineName ;
      outOperand1 = p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
      outOperand2 = p->mObject.mAttribute_mErrorMessageList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lexicalExternRoutineFormalArgumentListAST & outOperand1,
                                                     GALGAS_stringlist & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mErrorMessageList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lexicalExternRoutineFormalArgumentListAST & outOperand1,
                                                    GALGAS_stringlist & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mErrorMessageList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_lexicalExternRoutineFormalArgumentListAST & outOperand1,
                                                GALGAS_stringlist & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mErrorMessageList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_lexicalExternRoutineFormalArgumentListAST & outOperand1,
                                               GALGAS_stringlist & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mErrorMessageList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::operator_concat (const GALGAS_externRoutineListAST & inOperand
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::add_operation (const GALGAS_externRoutineListAST & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result = GALGAS_externRoutineListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result = GALGAS_externRoutineListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::dotAssign_operation (const GALGAS_externRoutineListAST inOperand
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externRoutineListAST::cEnumerator_externRoutineListAST (const GALGAS_externRoutineListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST_2D_element cEnumerator_externRoutineListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externRoutineListAST::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject.mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST cEnumerator_externRoutineListAST::current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_externRoutineListAST::current_mErrorMessageList (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject.mAttribute_mErrorMessageList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externRoutineListAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externRoutineListAST ("externRoutineListAST",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externRoutineListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externRoutineListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineListAST result ;
  const GALGAS_externRoutineListAST * p = (const GALGAS_externRoutineListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externRoutineListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Class for element of '@lexicalExternFunctionFormalArgumentListAST' list                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalExternFunctionFormalArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lstring & in_mLexicalTypeName,
                                                                          const GALGAS_lstring & in_mFormalArgumentName
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

cCollectionElement_lexicalExternFunctionFormalArgumentListAST::cCollectionElement_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lstring & in_mLexicalTypeName,
                                                                                                                              const GALGAS_lstring & in_mFormalArgumentName
                                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalTypeName, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalExternFunctionFormalArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalExternFunctionFormalArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalExternFunctionFormalArgumentListAST (mObject.mAttribute_mLexicalTypeName, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalExternFunctionFormalArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalTypeName" ":" ;
  mObject.mAttribute_mLexicalTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalExternFunctionFormalArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * operand = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST::GALGAS_lexicalExternFunctionFormalArgumentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST::GALGAS_lexicalExternFunctionFormalArgumentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_lstring & inOperand1
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalExternFunctionFormalArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                   const GALGAS_lstring & in_mLexicalTypeName,
                                                                                   const GALGAS_lstring & in_mFormalArgumentName
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST (in_mLexicalTypeName,
                                                                                in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                             const GALGAS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                                const GALGAS_lstring inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                                GALGAS_lstring & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
      outOperand0 = p->mObject.mAttribute_mLexicalTypeName ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                           GALGAS_lstring & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                          GALGAS_lstring & outOperand1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::method_first (GALGAS_lstring & outOperand0,
                                                                      GALGAS_lstring & outOperand1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::method_last (GALGAS_lstring & outOperand0,
                                                                     GALGAS_lstring & outOperand1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::operator_concat (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::add_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand,
                                                                                                                    C_Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::dotAssign_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST inOperand
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalExternFunctionFormalArgumentListAST::cEnumerator_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inEnumeratedObject,
                                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element cEnumerator_lexicalExternFunctionFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (const cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExternFunctionFormalArgumentListAST::current_mLexicalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (const cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return p->mObject.mAttribute_mLexicalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExternFunctionFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (const cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @lexicalExternFunctionFormalArgumentListAST type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST ("lexicalExternFunctionFormalArgumentListAST",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExternFunctionFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExternFunctionFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExternFunctionFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result ;
  const GALGAS_lexicalExternFunctionFormalArgumentListAST * p = (const GALGAS_lexicalExternFunctionFormalArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExternFunctionFormalArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExternFunctionFormalArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@externFunctionListAST' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_externFunctionListAST : public cCollectionElement {
  public : GALGAS_externFunctionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externFunctionListAST (const GALGAS_lstring & in_mFunctionName,
                                                     const GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                     const GALGAS_lstring & in_mReturnedTypeName
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

cCollectionElement_externFunctionListAST::cCollectionElement_externFunctionListAST (const GALGAS_lstring & in_mFunctionName,
                                                                                    const GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                                                    const GALGAS_lstring & in_mReturnedTypeName
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFunctionName, in_mLexicalFunctionFormalArgumentList, in_mReturnedTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externFunctionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externFunctionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externFunctionListAST (mObject.mAttribute_mFunctionName, mObject.mAttribute_mLexicalFunctionFormalArgumentList, mObject.mAttribute_mReturnedTypeName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_externFunctionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionName" ":" ;
  mObject.mAttribute_mFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFunctionFormalArgumentList" ":" ;
  mObject.mAttribute_mLexicalFunctionFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedTypeName" ":" ;
  mObject.mAttribute_mReturnedTypeName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_externFunctionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externFunctionListAST * operand = (cCollectionElement_externFunctionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externFunctionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST::GALGAS_externFunctionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST::GALGAS_externFunctionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externFunctionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_externFunctionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mFunctionName,
                                                              const GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                              const GALGAS_lstring & in_mReturnedTypeName
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_externFunctionListAST (in_mFunctionName,
                                                           in_mLexicalFunctionFormalArgumentList,
                                                           in_mReturnedTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                        const GALGAS_lstring & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externFunctionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lexicalExternFunctionFormalArgumentListAST inOperand1,
                                                           const GALGAS_lstring inOperand2,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externFunctionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lexicalExternFunctionFormalArgumentListAST & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
      outOperand0 = p->mObject.mAttribute_mFunctionName ;
      outOperand1 = p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
      outOperand2 = p->mObject.mAttribute_mReturnedTypeName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lexicalExternFunctionFormalArgumentListAST & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    outOperand0 = p->mObject.mAttribute_mFunctionName ;
    outOperand1 = p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mReturnedTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lexicalExternFunctionFormalArgumentListAST & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    outOperand0 = p->mObject.mAttribute_mFunctionName ;
    outOperand1 = p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mReturnedTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lexicalExternFunctionFormalArgumentListAST & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    outOperand0 = p->mObject.mAttribute_mFunctionName ;
    outOperand1 = p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mReturnedTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lexicalExternFunctionFormalArgumentListAST & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    outOperand0 = p->mObject.mAttribute_mFunctionName ;
    outOperand1 = p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mReturnedTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::operator_concat (const GALGAS_externFunctionListAST & inOperand
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::add_operation (const GALGAS_externFunctionListAST & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result = GALGAS_externFunctionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result = GALGAS_externFunctionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST::dotAssign_operation (const GALGAS_externFunctionListAST inOperand
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externFunctionListAST::cEnumerator_externFunctionListAST (const GALGAS_externFunctionListAST & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST_2D_element cEnumerator_externFunctionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externFunctionListAST::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject.mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST cEnumerator_externFunctionListAST::current_mLexicalFunctionFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externFunctionListAST::current_mReturnedTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject.mAttribute_mReturnedTypeName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externFunctionListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionListAST ("externFunctionListAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externFunctionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externFunctionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionListAST result ;
  const GALGAS_externFunctionListAST * p = (const GALGAS_externFunctionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@indexingListAST' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_indexingListAST : public cCollectionElement {
  public : GALGAS_indexingListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_indexingListAST (const GALGAS_lstring & in_mIndexName,
                                               const GALGAS_lstring & in_mIndexComment
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

cCollectionElement_indexingListAST::cCollectionElement_indexingListAST (const GALGAS_lstring & in_mIndexName,
                                                                        const GALGAS_lstring & in_mIndexComment
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIndexName, in_mIndexComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_indexingListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_indexingListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_indexingListAST (mObject.mAttribute_mIndexName, mObject.mAttribute_mIndexComment COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_indexingListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexName" ":" ;
  mObject.mAttribute_mIndexName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexComment" ":" ;
  mObject.mAttribute_mIndexComment.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_indexingListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_indexingListAST * operand = (cCollectionElement_indexingListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_indexingListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST::GALGAS_indexingListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST::GALGAS_indexingListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_indexingListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_indexingListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_indexingListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mIndexName,
                                                        const GALGAS_lstring & in_mIndexComment
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_indexingListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_indexingListAST (in_mIndexName,
                                                     in_mIndexComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_indexingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_indexingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
      outOperand0 = p->mObject.mAttribute_mIndexName ;
      outOperand1 = p->mObject.mAttribute_mIndexComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mAttribute_mIndexName ;
    outOperand1 = p->mObject.mAttribute_mIndexComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mAttribute_mIndexName ;
    outOperand1 = p->mObject.mAttribute_mIndexComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mAttribute_mIndexName ;
    outOperand1 = p->mObject.mAttribute_mIndexComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mAttribute_mIndexName ;
    outOperand1 = p->mObject.mAttribute_mIndexComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::operator_concat (const GALGAS_indexingListAST & inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_indexingListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::add_operation (const GALGAS_indexingListAST & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_indexingListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::dotAssign_operation (const GALGAS_indexingListAST inOperand
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_indexingListAST::cEnumerator_indexingListAST (const GALGAS_indexingListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST_2D_element cEnumerator_indexingListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_indexingListAST::current_mIndexName (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mAttribute_mIndexName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_indexingListAST::current_mIndexComment (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mAttribute_mIndexComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @indexingListAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_indexingListAST ("indexingListAST",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_indexingListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_indexingListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_indexingListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_indexingListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_indexingListAST result ;
  const GALGAS_indexingListAST * p = (const GALGAS_indexingListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_indexingListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("indexingListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@galgas_33_LexiqueComponentListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_galgas_33_LexiqueComponentListAST : public cCollectionElement {
  public : GALGAS_galgas_33_LexiqueComponentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_galgas_33_LexiqueComponentListAST (const GALGAS_lstring & in_mLexiqueComponentName,
                                                                 const GALGAS_bool & in_mIsTemplate,
                                                                 const GALGAS_metamodelTemplateDelimitorListAST & in_mTemplateDelimitorList,
                                                                 const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                 const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeList,
                                                                 const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                                                 const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationList,
                                                                 const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationList,
                                                                 const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationList,
                                                                 const GALGAS_lexicalRuleListAST & in_mLexicalRuleList,
                                                                 const GALGAS_externRoutineListAST & in_mExternRoutineList,
                                                                 const GALGAS_externFunctionListAST & in_mExternFunctionList,
                                                                 const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                 const GALGAS_lstring & in_mIndexingDirectory
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

cCollectionElement_galgas_33_LexiqueComponentListAST::cCollectionElement_galgas_33_LexiqueComponentListAST (const GALGAS_lstring & in_mLexiqueComponentName,
                                                                                                            const GALGAS_bool & in_mIsTemplate,
                                                                                                            const GALGAS_metamodelTemplateDelimitorListAST & in_mTemplateDelimitorList,
                                                                                                            const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                                                            const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeList,
                                                                                                            const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                                                                                            const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationList,
                                                                                                            const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationList,
                                                                                                            const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationList,
                                                                                                            const GALGAS_lexicalRuleListAST & in_mLexicalRuleList,
                                                                                                            const GALGAS_externRoutineListAST & in_mExternRoutineList,
                                                                                                            const GALGAS_externFunctionListAST & in_mExternFunctionList,
                                                                                                            const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                                                            const GALGAS_lstring & in_mIndexingDirectory
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexiqueComponentName, in_mIsTemplate, in_mTemplateDelimitorList, in_mTemplateReplacementList, in_mLexicalAttributeList, in_mLexicalStyleList, in_mTerminalDeclarationList, in_mLexicalMessageDeclarationList, in_mLexicalListDeclarationList, in_mLexicalRuleList, in_mExternRoutineList, in_mExternFunctionList, in_mIndexingListAST, in_mIndexingDirectory) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_galgas_33_LexiqueComponentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_galgas_33_LexiqueComponentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_galgas_33_LexiqueComponentListAST (mObject.mAttribute_mLexiqueComponentName, mObject.mAttribute_mIsTemplate, mObject.mAttribute_mTemplateDelimitorList, mObject.mAttribute_mTemplateReplacementList, mObject.mAttribute_mLexicalAttributeList, mObject.mAttribute_mLexicalStyleList, mObject.mAttribute_mTerminalDeclarationList, mObject.mAttribute_mLexicalMessageDeclarationList, mObject.mAttribute_mLexicalListDeclarationList, mObject.mAttribute_mLexicalRuleList, mObject.mAttribute_mExternRoutineList, mObject.mAttribute_mExternFunctionList, mObject.mAttribute_mIndexingListAST, mObject.mAttribute_mIndexingDirectory COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_galgas_33_LexiqueComponentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueComponentName" ":" ;
  mObject.mAttribute_mLexiqueComponentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsTemplate" ":" ;
  mObject.mAttribute_mIsTemplate.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTemplateDelimitorList" ":" ;
  mObject.mAttribute_mTemplateDelimitorList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTemplateReplacementList" ":" ;
  mObject.mAttribute_mTemplateReplacementList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalAttributeList" ":" ;
  mObject.mAttribute_mLexicalAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalStyleList" ":" ;
  mObject.mAttribute_mLexicalStyleList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalDeclarationList" ":" ;
  mObject.mAttribute_mTerminalDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalMessageDeclarationList" ":" ;
  mObject.mAttribute_mLexicalMessageDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalListDeclarationList" ":" ;
  mObject.mAttribute_mLexicalListDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRuleList" ":" ;
  mObject.mAttribute_mLexicalRuleList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternRoutineList" ":" ;
  mObject.mAttribute_mExternRoutineList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternFunctionList" ":" ;
  mObject.mAttribute_mExternFunctionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexingListAST" ":" ;
  mObject.mAttribute_mIndexingListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexingDirectory" ":" ;
  mObject.mAttribute_mIndexingDirectory.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_galgas_33_LexiqueComponentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_LexiqueComponentListAST * operand = (cCollectionElement_galgas_33_LexiqueComponentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST::GALGAS_galgas_33_LexiqueComponentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST::GALGAS_galgas_33_LexiqueComponentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST GALGAS_galgas_33_LexiqueComponentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_galgas_33_LexiqueComponentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST GALGAS_galgas_33_LexiqueComponentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1,
                                                                                                              const GALGAS_metamodelTemplateDelimitorListAST & inOperand2,
                                                                                                              const GALGAS_templateReplacementListAST & inOperand3,
                                                                                                              const GALGAS_lexicalAttributeListAST & inOperand4,
                                                                                                              const GALGAS_lexicalStyleListAST & inOperand5,
                                                                                                              const GALGAS_terminalDeclarationListAST & inOperand6,
                                                                                                              const GALGAS_lexicalMessageDeclarationListAST & inOperand7,
                                                                                                              const GALGAS_lexicalListDeclarationListAST & inOperand8,
                                                                                                              const GALGAS_lexicalRuleListAST & inOperand9,
                                                                                                              const GALGAS_externRoutineListAST & inOperand10,
                                                                                                              const GALGAS_externFunctionListAST & inOperand11,
                                                                                                              const GALGAS_indexingListAST & inOperand12,
                                                                                                              const GALGAS_lstring & inOperand13
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_LexiqueComponentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_LexiqueComponentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_LexiqueComponentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mLexiqueComponentName,
                                                                          const GALGAS_bool & in_mIsTemplate,
                                                                          const GALGAS_metamodelTemplateDelimitorListAST & in_mTemplateDelimitorList,
                                                                          const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                          const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeList,
                                                                          const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                                                          const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationList,
                                                                          const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationList,
                                                                          const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationList,
                                                                          const GALGAS_lexicalRuleListAST & in_mLexicalRuleList,
                                                                          const GALGAS_externRoutineListAST & in_mExternRoutineList,
                                                                          const GALGAS_externFunctionListAST & in_mExternFunctionList,
                                                                          const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                          const GALGAS_lstring & in_mIndexingDirectory
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_galgas_33_LexiqueComponentListAST (in_mLexiqueComponentName,
                                                                       in_mIsTemplate,
                                                                       in_mTemplateDelimitorList,
                                                                       in_mTemplateReplacementList,
                                                                       in_mLexicalAttributeList,
                                                                       in_mLexicalStyleList,
                                                                       in_mTerminalDeclarationList,
                                                                       in_mLexicalMessageDeclarationList,
                                                                       in_mLexicalListDeclarationList,
                                                                       in_mLexicalRuleList,
                                                                       in_mExternRoutineList,
                                                                       in_mExternFunctionList,
                                                                       in_mIndexingListAST,
                                                                       in_mIndexingDirectory COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_LexiqueComponentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_bool & inOperand1,
                                                                    const GALGAS_metamodelTemplateDelimitorListAST & inOperand2,
                                                                    const GALGAS_templateReplacementListAST & inOperand3,
                                                                    const GALGAS_lexicalAttributeListAST & inOperand4,
                                                                    const GALGAS_lexicalStyleListAST & inOperand5,
                                                                    const GALGAS_terminalDeclarationListAST & inOperand6,
                                                                    const GALGAS_lexicalMessageDeclarationListAST & inOperand7,
                                                                    const GALGAS_lexicalListDeclarationListAST & inOperand8,
                                                                    const GALGAS_lexicalRuleListAST & inOperand9,
                                                                    const GALGAS_externRoutineListAST & inOperand10,
                                                                    const GALGAS_externFunctionListAST & inOperand11,
                                                                    const GALGAS_indexingListAST & inOperand12,
                                                                    const GALGAS_lstring & inOperand13
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_LexiqueComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_LexiqueComponentListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_bool inOperand1,
                                                                       const GALGAS_metamodelTemplateDelimitorListAST inOperand2,
                                                                       const GALGAS_templateReplacementListAST inOperand3,
                                                                       const GALGAS_lexicalAttributeListAST inOperand4,
                                                                       const GALGAS_lexicalStyleListAST inOperand5,
                                                                       const GALGAS_terminalDeclarationListAST inOperand6,
                                                                       const GALGAS_lexicalMessageDeclarationListAST inOperand7,
                                                                       const GALGAS_lexicalListDeclarationListAST inOperand8,
                                                                       const GALGAS_lexicalRuleListAST inOperand9,
                                                                       const GALGAS_externRoutineListAST inOperand10,
                                                                       const GALGAS_externFunctionListAST inOperand11,
                                                                       const GALGAS_indexingListAST inOperand12,
                                                                       const GALGAS_lstring inOperand13,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_LexiqueComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_LexiqueComponentListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_bool & outOperand1,
                                                                       GALGAS_metamodelTemplateDelimitorListAST & outOperand2,
                                                                       GALGAS_templateReplacementListAST & outOperand3,
                                                                       GALGAS_lexicalAttributeListAST & outOperand4,
                                                                       GALGAS_lexicalStyleListAST & outOperand5,
                                                                       GALGAS_terminalDeclarationListAST & outOperand6,
                                                                       GALGAS_lexicalMessageDeclarationListAST & outOperand7,
                                                                       GALGAS_lexicalListDeclarationListAST & outOperand8,
                                                                       GALGAS_lexicalRuleListAST & outOperand9,
                                                                       GALGAS_externRoutineListAST & outOperand10,
                                                                       GALGAS_externFunctionListAST & outOperand11,
                                                                       GALGAS_indexingListAST & outOperand12,
                                                                       GALGAS_lstring & outOperand13,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
      outOperand10.drop () ;
      outOperand11.drop () ;
      outOperand12.drop () ;
      outOperand13.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
      outOperand0 = p->mObject.mAttribute_mLexiqueComponentName ;
      outOperand1 = p->mObject.mAttribute_mIsTemplate ;
      outOperand2 = p->mObject.mAttribute_mTemplateDelimitorList ;
      outOperand3 = p->mObject.mAttribute_mTemplateReplacementList ;
      outOperand4 = p->mObject.mAttribute_mLexicalAttributeList ;
      outOperand5 = p->mObject.mAttribute_mLexicalStyleList ;
      outOperand6 = p->mObject.mAttribute_mTerminalDeclarationList ;
      outOperand7 = p->mObject.mAttribute_mLexicalMessageDeclarationList ;
      outOperand8 = p->mObject.mAttribute_mLexicalListDeclarationList ;
      outOperand9 = p->mObject.mAttribute_mLexicalRuleList ;
      outOperand10 = p->mObject.mAttribute_mExternRoutineList ;
      outOperand11 = p->mObject.mAttribute_mExternFunctionList ;
      outOperand12 = p->mObject.mAttribute_mIndexingListAST ;
      outOperand13 = p->mObject.mAttribute_mIndexingDirectory ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_LexiqueComponentListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_bool & outOperand1,
                                                                  GALGAS_metamodelTemplateDelimitorListAST & outOperand2,
                                                                  GALGAS_templateReplacementListAST & outOperand3,
                                                                  GALGAS_lexicalAttributeListAST & outOperand4,
                                                                  GALGAS_lexicalStyleListAST & outOperand5,
                                                                  GALGAS_terminalDeclarationListAST & outOperand6,
                                                                  GALGAS_lexicalMessageDeclarationListAST & outOperand7,
                                                                  GALGAS_lexicalListDeclarationListAST & outOperand8,
                                                                  GALGAS_lexicalRuleListAST & outOperand9,
                                                                  GALGAS_externRoutineListAST & outOperand10,
                                                                  GALGAS_externFunctionListAST & outOperand11,
                                                                  GALGAS_indexingListAST & outOperand12,
                                                                  GALGAS_lstring & outOperand13,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueComponentName ;
    outOperand1 = p->mObject.mAttribute_mIsTemplate ;
    outOperand2 = p->mObject.mAttribute_mTemplateDelimitorList ;
    outOperand3 = p->mObject.mAttribute_mTemplateReplacementList ;
    outOperand4 = p->mObject.mAttribute_mLexicalAttributeList ;
    outOperand5 = p->mObject.mAttribute_mLexicalStyleList ;
    outOperand6 = p->mObject.mAttribute_mTerminalDeclarationList ;
    outOperand7 = p->mObject.mAttribute_mLexicalMessageDeclarationList ;
    outOperand8 = p->mObject.mAttribute_mLexicalListDeclarationList ;
    outOperand9 = p->mObject.mAttribute_mLexicalRuleList ;
    outOperand10 = p->mObject.mAttribute_mExternRoutineList ;
    outOperand11 = p->mObject.mAttribute_mExternFunctionList ;
    outOperand12 = p->mObject.mAttribute_mIndexingListAST ;
    outOperand13 = p->mObject.mAttribute_mIndexingDirectory ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_LexiqueComponentListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_bool & outOperand1,
                                                                 GALGAS_metamodelTemplateDelimitorListAST & outOperand2,
                                                                 GALGAS_templateReplacementListAST & outOperand3,
                                                                 GALGAS_lexicalAttributeListAST & outOperand4,
                                                                 GALGAS_lexicalStyleListAST & outOperand5,
                                                                 GALGAS_terminalDeclarationListAST & outOperand6,
                                                                 GALGAS_lexicalMessageDeclarationListAST & outOperand7,
                                                                 GALGAS_lexicalListDeclarationListAST & outOperand8,
                                                                 GALGAS_lexicalRuleListAST & outOperand9,
                                                                 GALGAS_externRoutineListAST & outOperand10,
                                                                 GALGAS_externFunctionListAST & outOperand11,
                                                                 GALGAS_indexingListAST & outOperand12,
                                                                 GALGAS_lstring & outOperand13,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueComponentName ;
    outOperand1 = p->mObject.mAttribute_mIsTemplate ;
    outOperand2 = p->mObject.mAttribute_mTemplateDelimitorList ;
    outOperand3 = p->mObject.mAttribute_mTemplateReplacementList ;
    outOperand4 = p->mObject.mAttribute_mLexicalAttributeList ;
    outOperand5 = p->mObject.mAttribute_mLexicalStyleList ;
    outOperand6 = p->mObject.mAttribute_mTerminalDeclarationList ;
    outOperand7 = p->mObject.mAttribute_mLexicalMessageDeclarationList ;
    outOperand8 = p->mObject.mAttribute_mLexicalListDeclarationList ;
    outOperand9 = p->mObject.mAttribute_mLexicalRuleList ;
    outOperand10 = p->mObject.mAttribute_mExternRoutineList ;
    outOperand11 = p->mObject.mAttribute_mExternFunctionList ;
    outOperand12 = p->mObject.mAttribute_mIndexingListAST ;
    outOperand13 = p->mObject.mAttribute_mIndexingDirectory ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_LexiqueComponentListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_bool & outOperand1,
                                                             GALGAS_metamodelTemplateDelimitorListAST & outOperand2,
                                                             GALGAS_templateReplacementListAST & outOperand3,
                                                             GALGAS_lexicalAttributeListAST & outOperand4,
                                                             GALGAS_lexicalStyleListAST & outOperand5,
                                                             GALGAS_terminalDeclarationListAST & outOperand6,
                                                             GALGAS_lexicalMessageDeclarationListAST & outOperand7,
                                                             GALGAS_lexicalListDeclarationListAST & outOperand8,
                                                             GALGAS_lexicalRuleListAST & outOperand9,
                                                             GALGAS_externRoutineListAST & outOperand10,
                                                             GALGAS_externFunctionListAST & outOperand11,
                                                             GALGAS_indexingListAST & outOperand12,
                                                             GALGAS_lstring & outOperand13,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueComponentName ;
    outOperand1 = p->mObject.mAttribute_mIsTemplate ;
    outOperand2 = p->mObject.mAttribute_mTemplateDelimitorList ;
    outOperand3 = p->mObject.mAttribute_mTemplateReplacementList ;
    outOperand4 = p->mObject.mAttribute_mLexicalAttributeList ;
    outOperand5 = p->mObject.mAttribute_mLexicalStyleList ;
    outOperand6 = p->mObject.mAttribute_mTerminalDeclarationList ;
    outOperand7 = p->mObject.mAttribute_mLexicalMessageDeclarationList ;
    outOperand8 = p->mObject.mAttribute_mLexicalListDeclarationList ;
    outOperand9 = p->mObject.mAttribute_mLexicalRuleList ;
    outOperand10 = p->mObject.mAttribute_mExternRoutineList ;
    outOperand11 = p->mObject.mAttribute_mExternFunctionList ;
    outOperand12 = p->mObject.mAttribute_mIndexingListAST ;
    outOperand13 = p->mObject.mAttribute_mIndexingDirectory ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_LexiqueComponentListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_bool & outOperand1,
                                                            GALGAS_metamodelTemplateDelimitorListAST & outOperand2,
                                                            GALGAS_templateReplacementListAST & outOperand3,
                                                            GALGAS_lexicalAttributeListAST & outOperand4,
                                                            GALGAS_lexicalStyleListAST & outOperand5,
                                                            GALGAS_terminalDeclarationListAST & outOperand6,
                                                            GALGAS_lexicalMessageDeclarationListAST & outOperand7,
                                                            GALGAS_lexicalListDeclarationListAST & outOperand8,
                                                            GALGAS_lexicalRuleListAST & outOperand9,
                                                            GALGAS_externRoutineListAST & outOperand10,
                                                            GALGAS_externFunctionListAST & outOperand11,
                                                            GALGAS_indexingListAST & outOperand12,
                                                            GALGAS_lstring & outOperand13,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueComponentName ;
    outOperand1 = p->mObject.mAttribute_mIsTemplate ;
    outOperand2 = p->mObject.mAttribute_mTemplateDelimitorList ;
    outOperand3 = p->mObject.mAttribute_mTemplateReplacementList ;
    outOperand4 = p->mObject.mAttribute_mLexicalAttributeList ;
    outOperand5 = p->mObject.mAttribute_mLexicalStyleList ;
    outOperand6 = p->mObject.mAttribute_mTerminalDeclarationList ;
    outOperand7 = p->mObject.mAttribute_mLexicalMessageDeclarationList ;
    outOperand8 = p->mObject.mAttribute_mLexicalListDeclarationList ;
    outOperand9 = p->mObject.mAttribute_mLexicalRuleList ;
    outOperand10 = p->mObject.mAttribute_mExternRoutineList ;
    outOperand11 = p->mObject.mAttribute_mExternFunctionList ;
    outOperand12 = p->mObject.mAttribute_mIndexingListAST ;
    outOperand13 = p->mObject.mAttribute_mIndexingDirectory ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST GALGAS_galgas_33_LexiqueComponentListAST::operator_concat (const GALGAS_galgas_33_LexiqueComponentListAST & inOperand
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_LexiqueComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST GALGAS_galgas_33_LexiqueComponentListAST::add_operation (const GALGAS_galgas_33_LexiqueComponentListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_LexiqueComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_LexiqueComponentListAST result = GALGAS_galgas_33_LexiqueComponentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_LexiqueComponentListAST result = GALGAS_galgas_33_LexiqueComponentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_LexiqueComponentListAST::dotAssign_operation (const GALGAS_galgas_33_LexiqueComponentListAST inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_LexiqueComponentListAST::reader_mLexiqueComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mLexiqueComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_galgas_33_LexiqueComponentListAST::reader_mIsTemplateAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mIsTemplate ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_mTemplateDelimitorListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mTemplateDelimitorList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_mTemplateReplacementListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_templateReplacementListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mTemplateReplacementList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_mLexicalAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_lexicalAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mLexicalAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_mLexicalStyleListAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_lexicalStyleListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mLexicalStyleList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_mTerminalDeclarationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_terminalDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mTerminalDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_mLexicalMessageDeclarationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mLexicalMessageDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_mLexicalListDeclarationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_lexicalListDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mLexicalListDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_mLexicalRuleListAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_lexicalRuleListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mLexicalRuleList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_mExternRoutineListAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_externRoutineListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mExternRoutineList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_mExternFunctionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_externFunctionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mExternFunctionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_galgas_33_LexiqueComponentListAST::reader_mIndexingListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_indexingListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mIndexingListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_LexiqueComponentListAST::reader_mIndexingDirectoryAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_LexiqueComponentListAST * p = (cCollectionElement_galgas_33_LexiqueComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
    result = p->mObject.mAttribute_mIndexingDirectory ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_galgas_33_LexiqueComponentListAST::cEnumerator_galgas_33_LexiqueComponentListAST (const GALGAS_galgas_33_LexiqueComponentListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST_2D_element cEnumerator_galgas_33_LexiqueComponentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_LexiqueComponentListAST::current_mLexiqueComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mLexiqueComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_galgas_33_LexiqueComponentListAST::current_mIsTemplate (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mIsTemplate ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST cEnumerator_galgas_33_LexiqueComponentListAST::current_mTemplateDelimitorList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mTemplateDelimitorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST cEnumerator_galgas_33_LexiqueComponentListAST::current_mTemplateReplacementList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mTemplateReplacementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST cEnumerator_galgas_33_LexiqueComponentListAST::current_mLexicalAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mLexicalAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST cEnumerator_galgas_33_LexiqueComponentListAST::current_mLexicalStyleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mLexicalStyleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST cEnumerator_galgas_33_LexiqueComponentListAST::current_mTerminalDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mTerminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST cEnumerator_galgas_33_LexiqueComponentListAST::current_mLexicalMessageDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mLexicalMessageDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST cEnumerator_galgas_33_LexiqueComponentListAST::current_mLexicalListDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mLexicalListDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST cEnumerator_galgas_33_LexiqueComponentListAST::current_mLexicalRuleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mLexicalRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST cEnumerator_galgas_33_LexiqueComponentListAST::current_mExternRoutineList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mExternRoutineList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST cEnumerator_galgas_33_LexiqueComponentListAST::current_mExternFunctionList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mExternFunctionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST cEnumerator_galgas_33_LexiqueComponentListAST::current_mIndexingListAST (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mIndexingListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_LexiqueComponentListAST::current_mIndexingDirectory (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_LexiqueComponentListAST * p = (const cCollectionElement_galgas_33_LexiqueComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_LexiqueComponentListAST) ;
  return p->mObject.mAttribute_mIndexingDirectory ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @galgas3LexiqueComponentListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_LexiqueComponentListAST ("galgas3LexiqueComponentListAST",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_LexiqueComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_LexiqueComponentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_LexiqueComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_LexiqueComponentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST GALGAS_galgas_33_LexiqueComponentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_LexiqueComponentListAST result ;
  const GALGAS_galgas_33_LexiqueComponentListAST * p = (const GALGAS_galgas_33_LexiqueComponentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_LexiqueComponentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3LexiqueComponentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum::GALGAS_lexicalTypeEnum (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_string ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_char ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_uint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_uint_36__34_ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_sint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_sint_36__34_ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_double ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_bigint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::reader_isLexicalType_5F_string (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_string == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::reader_isLexicalType_5F_char (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_char == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::reader_isLexicalType_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_uint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::reader_isLexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_uint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::reader_isLexicalType_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_sint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::reader_isLexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_sint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::reader_isLexicalType_5F_double (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_double == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::reader_isLexicalType_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_bigint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeEnum::description (C_String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString << "<enum @lexicalTypeEnum: " << gEnumNameArrayFor_lexicalTypeEnum [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @lexicalTypeEnum type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeEnum ("lexicalTypeEnum",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalTypeEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalTypeEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeEnum (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  const GALGAS_lexicalTypeEnum * p = (const GALGAS_lexicalTypeEnum *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTypeEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@lexicalSentValueList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalSentValueList : public cCollectionElement {
  public : GALGAS_lexicalSentValueList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalSentValueList (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                    const GALGAS_string & in_mLexicalAttributeName,
                                                    const GALGAS_lexicalTypeEnum & in_mLexicalType
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

cCollectionElement_lexicalSentValueList::cCollectionElement_lexicalSentValueList (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                                                  const GALGAS_string & in_mLexicalAttributeName,
                                                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalFormalSelector, in_mLexicalAttributeName, in_mLexicalType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalSentValueList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalSentValueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalSentValueList (mObject.mAttribute_mLexicalFormalSelector, mObject.mAttribute_mLexicalAttributeName, mObject.mAttribute_mLexicalType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalSentValueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFormalSelector" ":" ;
  mObject.mAttribute_mLexicalFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalAttributeName" ":" ;
  mObject.mAttribute_mLexicalAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mObject.mAttribute_mLexicalType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalSentValueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSentValueList * operand = (cCollectionElement_lexicalSentValueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSentValueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList::GALGAS_lexicalSentValueList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList::GALGAS_lexicalSentValueList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalSentValueList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_lexicalTypeEnum & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSentValueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mLexicalFormalSelector,
                                                             const GALGAS_string & in_mLexicalAttributeName,
                                                             const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSentValueList * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalSentValueList (in_mLexicalFormalSelector,
                                                          in_mLexicalAttributeName,
                                                          in_mLexicalType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_string & inOperand1,
                                                       const GALGAS_lexicalTypeEnum & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSentValueList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_string inOperand1,
                                                          const GALGAS_lexicalTypeEnum inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSentValueList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_lexicalTypeEnum & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
      outOperand0 = p->mObject.mAttribute_mLexicalFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mLexicalAttributeName ;
      outOperand2 = p->mObject.mAttribute_mLexicalType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     GALGAS_lexicalTypeEnum & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mLexicalAttributeName ;
    outOperand2 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_lexicalTypeEnum & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mLexicalAttributeName ;
    outOperand2 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_string & outOperand1,
                                                GALGAS_lexicalTypeEnum & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mLexicalAttributeName ;
    outOperand2 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_string & outOperand1,
                                               GALGAS_lexicalTypeEnum & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mLexicalAttributeName ;
    outOperand2 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::operator_concat (const GALGAS_lexicalSentValueList & inOperand
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::add_operation (const GALGAS_lexicalSentValueList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList::dotAssign_operation (const GALGAS_lexicalSentValueList inOperand
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalSentValueList::reader_mLexicalFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mAttribute_mLexicalFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalSentValueList::reader_mLexicalAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mAttribute_mLexicalAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalSentValueList::reader_mLexicalTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mAttribute_mLexicalType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalSentValueList::cEnumerator_lexicalSentValueList (const GALGAS_lexicalSentValueList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList_2D_element cEnumerator_lexicalSentValueList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalSentValueList::current_mLexicalFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mAttribute_mLexicalFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexicalSentValueList::current_mLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mAttribute_mLexicalAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalSentValueList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mAttribute_mLexicalType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalSentValueList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSentValueList ("lexicalSentValueList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSentValueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSentValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSentValueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSentValueList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList result ;
  const GALGAS_lexicalSentValueList * p = (const GALGAS_lexicalSentValueList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSentValueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSentValueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_terminalMap::cMapElement_terminalMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_lexicalSentValueList & in_mSentAttributeList
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSentAttributeList (in_mSentAttributeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_terminalMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSentAttributeList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_terminalMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_terminalMap (mAttribute_lkey, mAttribute_mSentAttributeList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_terminalMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mAttribute_mSentAttributeList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_terminalMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_terminalMap * operand = (cMapElement_terminalMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSentAttributeList.objectCompare (operand->mAttribute_mSentAttributeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap::GALGAS_terminalMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap::GALGAS_terminalMap (const GALGAS_terminalMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap & GALGAS_terminalMap::operator = (const GALGAS_terminalMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_terminalMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_terminalMap::constructor_mapWithMapToOverride (const GALGAS_terminalMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_terminalMap::reader_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_terminalMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_lexicalSentValueList & inArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_terminalMap * p = NULL ;
  macroMyNew (p, cMapElement_terminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@terminalMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalMap::modifier_insertKey (GALGAS_lstring inKey,
                                             GALGAS_lexicalSentValueList inArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_terminalMap * p = NULL ;
  macroMyNew (p, cMapElement_terminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' terminal has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_terminalMap_searchKey = "the '%K' terminal is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_lexicalSentValueList & outArgument0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_terminalMap_searchKey
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    outArgument0 = p->mAttribute_mSentAttributeList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_terminalMap::reader_mSentAttributeListForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) attributes ;
  GALGAS_lexicalSentValueList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    result = p->mAttribute_mSentAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalMap::modifier_setMSentAttributeListForKey (GALGAS_lexicalSentValueList inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_terminalMap * p = (cMapElement_terminalMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    p->mAttribute_mSentAttributeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_terminalMap * GALGAS_terminalMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_terminalMap * result = (cMapElement_terminalMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_terminalMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalMap::cEnumerator_terminalMap (const GALGAS_terminalMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap_2D_element cEnumerator_terminalMap::current (LOCATION_ARGS) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalMap) ;
  return GALGAS_terminalMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSentAttributeList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList cEnumerator_terminalMap::current_mSentAttributeList (LOCATION_ARGS) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalMap) ;
  return p->mAttribute_mSentAttributeList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @terminalMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalMap ("terminalMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_terminalMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  const GALGAS_terminalMap * p = (const GALGAS_terminalMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalTypeMap::cMapElement_lexicalTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalType (in_mLexicalType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalTypeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalTypeMap (mAttribute_lkey, mAttribute_mLexicalType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mAttribute_mLexicalType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalTypeMap * operand = (cMapElement_lexicalTypeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalType.objectCompare (operand->mAttribute_mLexicalType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap::GALGAS_lexicalTypeMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap::GALGAS_lexicalTypeMap (const GALGAS_lexicalTypeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap & GALGAS_lexicalTypeMap::operator = (const GALGAS_lexicalTypeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::constructor_mapWithMapToOverride (const GALGAS_lexicalTypeMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTypeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_lexicalTypeEnum & inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeMap::modifier_insertKey (GALGAS_lstring inKey,
                                                GALGAS_lexicalTypeEnum inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '@%K' lexical type is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalTypeMap_searchKey = "there is no '@%K' lexical type" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_lexicalTypeEnum & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_lexicalTypeMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    outArgument0 = p->mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeMap::reader_mLexicalTypeForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    result = p->mAttribute_mLexicalType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeMap::modifier_setMLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalTypeMap * p = (cMapElement_lexicalTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    p->mAttribute_mLexicalType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalTypeMap * GALGAS_lexicalTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTypeMap * result = (cMapElement_lexicalTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalTypeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalTypeMap::cEnumerator_lexicalTypeMap (const GALGAS_lexicalTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap_2D_element cEnumerator_lexicalTypeMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
  return GALGAS_lexicalTypeMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalTypeMap::current_mLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
  return p->mAttribute_mLexicalType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @lexicalTypeMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeMap ("lexicalTypeMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  const GALGAS_lexicalTypeMap * p = (const GALGAS_lexicalTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalAttributeMap::cMapElement_lexicalAttributeMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalType (in_mLexicalType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalAttributeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalAttributeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalAttributeMap (mAttribute_lkey, mAttribute_mLexicalType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalAttributeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mAttribute_mLexicalType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalAttributeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalAttributeMap * operand = (cMapElement_lexicalAttributeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalType.objectCompare (operand->mAttribute_mLexicalType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap::GALGAS_lexicalAttributeMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap::GALGAS_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap & GALGAS_lexicalAttributeMap::operator = (const GALGAS_lexicalAttributeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::constructor_mapWithMapToOverride (const GALGAS_lexicalAttributeMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_lexicalTypeEnum & inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_lexicalAttributeMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalAttributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalAttributeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeMap::modifier_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_lexicalTypeEnum inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_lexicalAttributeMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalAttributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexical attribute has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalAttributeMap_searchKey = "the '%K' lexical attribute is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_lexicalTypeEnum & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_lexicalAttributeMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    outArgument0 = p->mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalAttributeMap::reader_mLexicalTypeForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    result = p->mAttribute_mLexicalType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeMap::modifier_setMLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalAttributeMap * p = (cMapElement_lexicalAttributeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    p->mAttribute_mLexicalType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalAttributeMap * GALGAS_lexicalAttributeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalAttributeMap * result = (cMapElement_lexicalAttributeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalAttributeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalAttributeMap::cEnumerator_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap_2D_element cEnumerator_lexicalAttributeMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
  return GALGAS_lexicalAttributeMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalAttributeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalAttributeMap::current_mLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
  return p->mAttribute_mLexicalType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalAttributeMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeMap ("lexicalAttributeMap",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalAttributeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalAttributeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  const GALGAS_lexicalAttributeMap * p = (const GALGAS_lexicalAttributeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexique_5F_component_5F_start_5F_symbol_i0_ (GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument_outLexiqueComponentRoot,
                                                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outLexiqueComponentRoot.drop () ; // Release 'out' argument
  GALGAS_bool var_isTemplate ;
  switch (select_lexiqueSyntax_0 (inCompiler)) {
  case 1: {
    var_isTemplate = GALGAS_bool (true) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_template) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 26)) ;
  } break ;
  case 2: {
    var_isTemplate = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 30)) ;
  GALGAS_lstring var_lexiqueComponentName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 32)) ;
  GALGAS_lstring var_indexingDirectory ;
  switch (select_lexiqueSyntax_1 (inCompiler)) {
  case 1: {
    var_indexingDirectory = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("lexiqueSyntax.galgas", 36)) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 38)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_in) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 39)) ;
    var_indexingDirectory = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 42)) ;
  if (var_sep.add_operation (GALGAS_string ("{"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 43)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("{"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 43)).stringValue () ;
  }
  GALGAS_metamodelTemplateDelimitorListAST var_templateDelimitorList = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 45)) ;
  GALGAS_templateReplacementListAST var_templateReplacementList = GALGAS_templateReplacementListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 46)) ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeList = GALGAS_lexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 47)) ;
  GALGAS_lexicalStyleListAST var_lexicalStyleList = GALGAS_lexicalStyleListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 48)) ;
  GALGAS_terminalDeclarationListAST var_terminalDeclarationList = GALGAS_terminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 49)) ;
  GALGAS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 50)) ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationList = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 51)) ;
  GALGAS_lexicalRuleListAST var_lexicalRuleList = GALGAS_lexicalRuleListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 52)) ;
  GALGAS_externRoutineListAST var_externRoutineList = GALGAS_externRoutineListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 53)) ;
  GALGAS_externFunctionListAST var_externFunctionList = GALGAS_externFunctionListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 54)) ;
  GALGAS_indexingListAST var_indexingListAST = GALGAS_indexingListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 55)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_2 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_3434 ;
      nt_extern_5F_routine_5F_or_5F_function_5F_declaration_ (var_externRoutineList, var_externFunctionList, syntaxDirectedTranslationResult_3434, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3434 ;
    } break ;
    case 3: {
      C_String syntaxDirectedTranslationResult_3511 ;
      nt_template_5F_delimitor_ (var_templateDelimitorList, syntaxDirectedTranslationResult_3511, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3511 ;
    } break ;
    case 4: {
      C_String syntaxDirectedTranslationResult_3572 ;
      nt_template_5F_replacement_ (var_templateReplacementList, syntaxDirectedTranslationResult_3572, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3572 ;
    } break ;
    case 5: {
      C_String syntaxDirectedTranslationResult_3644 ;
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList, syntaxDirectedTranslationResult_3644, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3644 ;
    } break ;
    case 6: {
      C_String syntaxDirectedTranslationResult_3701 ;
      nt_style_5F_declaration_ (var_lexicalStyleList, syntaxDirectedTranslationResult_3701, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3701 ;
    } break ;
    case 7: {
      C_String syntaxDirectedTranslationResult_3757 ;
      nt_terminal_5F_declaration_ (var_terminalDeclarationList, syntaxDirectedTranslationResult_3757, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3757 ;
    } break ;
    case 8: {
      C_String syntaxDirectedTranslationResult_3824 ;
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList, syntaxDirectedTranslationResult_3824, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3824 ;
    } break ;
    case 9: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_rule) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 72)) ;
      switch (select_lexiqueSyntax_3 (inCompiler)) {
      case 1: {
        C_String syntaxDirectedTranslationResult_3914 ;
        nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList, syntaxDirectedTranslationResult_3914, inCompiler) ;
        ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3914 ;
      } break ;
      case 2: {
        C_String syntaxDirectedTranslationResult_3970 ;
        nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList, syntaxDirectedTranslationResult_3970, inCompiler) ;
        ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3970 ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 78)) ;
    } break ;
    case 10: {
      C_String syntaxDirectedTranslationResult_4056 ;
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList, syntaxDirectedTranslationResult_4056, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_4056 ;
    } break ;
    case 11: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 82)) ;
      GALGAS_lstring var_indexName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_indexingNameDefinition, "") ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 83)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 84)) ;
      GALGAS_lstring var_indexComment = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 85)) ;
      var_indexingListAST.addAssign_operation (var_indexName, var_indexComment  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 86)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 87)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  var_sep = GALGAS_string (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 89)) ;
  if (var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 90)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 90)).stringValue () ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 91)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 92)) ;
  outArgument_outLexiqueComponentRoot = GALGAS_galgas_33_LexiqueComponentListAST_2D_element::constructor_new (var_lexiqueComponentName, var_isTemplate, var_templateDelimitorList, var_templateReplacementList, var_lexicalAttributeList, var_lexicalStyleList, var_terminalDeclarationList, var_lexicalMessageDeclarationList, var_lexicalListDeclarationList, var_lexicalRuleList, var_externRoutineList, var_externFunctionList, var_indexingListAST, var_indexingDirectory  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexique_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                 C_Lexique_galgas_32_Scanner * inCompiler) {
  switch (select_lexiqueSyntax_0 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_template) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 26)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 30)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 32)) ;
  switch (select_lexiqueSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 38)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_in) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 39)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_2 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_3434 ;
      nt_extern_5F_routine_5F_or_5F_function_5F_declaration_parse (syntaxDirectedTranslationResult_3434, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3434 ;
    } break ;
    case 3: {
      C_String syntaxDirectedTranslationResult_3511 ;
      nt_template_5F_delimitor_parse (syntaxDirectedTranslationResult_3511, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3511 ;
    } break ;
    case 4: {
      C_String syntaxDirectedTranslationResult_3572 ;
      nt_template_5F_replacement_parse (syntaxDirectedTranslationResult_3572, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3572 ;
    } break ;
    case 5: {
      C_String syntaxDirectedTranslationResult_3644 ;
      nt_lexical_5F_attribute_5F_declaration_parse (syntaxDirectedTranslationResult_3644, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3644 ;
    } break ;
    case 6: {
      C_String syntaxDirectedTranslationResult_3701 ;
      nt_style_5F_declaration_parse (syntaxDirectedTranslationResult_3701, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3701 ;
    } break ;
    case 7: {
      C_String syntaxDirectedTranslationResult_3757 ;
      nt_terminal_5F_declaration_parse (syntaxDirectedTranslationResult_3757, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3757 ;
    } break ;
    case 8: {
      C_String syntaxDirectedTranslationResult_3824 ;
      nt_lexical_5F_list_5F_declaration_parse (syntaxDirectedTranslationResult_3824, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3824 ;
    } break ;
    case 9: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_rule) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 72)) ;
      switch (select_lexiqueSyntax_3 (inCompiler)) {
      case 1: {
        C_String syntaxDirectedTranslationResult_3914 ;
        nt_lexical_5F_explicit_5F_rule_parse (syntaxDirectedTranslationResult_3914, inCompiler) ;
        ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3914 ;
      } break ;
      case 2: {
        C_String syntaxDirectedTranslationResult_3970 ;
        nt_lexical_5F_implicit_5F_rule_parse (syntaxDirectedTranslationResult_3970, inCompiler) ;
        ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3970 ;
      } break ;
      default:
        break ;
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 78)) ;
    } break ;
    case 10: {
      C_String syntaxDirectedTranslationResult_4056 ;
      nt_lexical_5F_message_5F_declaration_parse (syntaxDirectedTranslationResult_4056, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_4056 ;
    } break ;
    case 11: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 82)) ;
      inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_indexingNameDefinition, "") ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 83)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 84)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 85)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 87)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 89)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 91)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexique_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  switch (select_lexiqueSyntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_template) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 26)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 32)) ;
  switch (select_lexiqueSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 38)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_in) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 39)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_2 (inCompiler)) {
    case 2: {
      nt_extern_5F_routine_5F_or_5F_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_delimitor_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_template_5F_replacement_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_lexical_5F_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_style_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_terminal_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_list_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_rule) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 72)) ;
      switch (select_lexiqueSyntax_3 (inCompiler)) {
      case 1: {
        nt_lexical_5F_explicit_5F_rule_indexing (inCompiler) ;
      } break ;
      case 2: {
        nt_lexical_5F_implicit_5F_rule_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 78)) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 82)) ;
      inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_indexingNameDefinition, "") ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 83)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 84)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 85)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 87)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 89)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 91)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_template_5F_delimitor_i1_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_template) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 113)) ;
  GALGAS_lstring var_startString = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 114)) ;
  GALGAS_lstringlist var_optionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 115)) ;
  switch (select_lexiqueSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 118)) ;
    if (var_sep.isValid ()) {
      ioSyntaxDirectedTranslationResult << var_sep.stringValue () ;
    }
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
      var_sep = GALGAS_string (inCompiler->preceedingSeparatorString ()) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 121)) ;
      if (var_sep.add_operation (GALGAS_string ("%"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 122)).add_operation (var_optionName.reader_string (SOURCE_FILE ("lexiqueSyntax.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 122)).isValid ()) {
        ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("%"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 122)).add_operation (var_optionName.reader_string (SOURCE_FILE ("lexiqueSyntax.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 122)).stringValue () ;
      }
      var_optionList.addAssign_operation (var_optionName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 123)) ;
      switch (select_lexiqueSyntax_5 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 125)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 128)) ;
  GALGAS_lstring var_endString = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 129)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 130)) ;
  ioArgument_ioTemplateDelimitorList.addAssign_operation (var_startString, var_optionList, var_endString  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 131)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_template_5F_delimitor_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                               C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_template) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 113)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 114)) ;
  switch (select_lexiqueSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 118)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 121)) ;
      switch (select_lexiqueSyntax_5 (inCompiler)) {
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 125)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 128)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 129)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 130)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_template_5F_delimitor_i1_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_template) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 113)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 114)) ;
  switch (select_lexiqueSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 118)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 121)) ;
      switch (select_lexiqueSyntax_5 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 125)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 128)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 129)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_template_5F_replacement_i2_ (GALGAS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_replace) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 137)) ;
  GALGAS_lstring var_matchString = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 138)) ;
  GALGAS_lstring var_replacementString ;
  GALGAS_lstring var_replacementFunction ;
  switch (select_lexiqueSyntax_6 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 142)) ;
    var_replacementString = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 143)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 144)) ;
    var_replacementFunction = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 145)) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 147)) ;
    var_replacementString = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 148)) ;
    var_replacementFunction = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 149))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 151)) ;
  ioArgument_ioTemplateReplacement.addAssign_operation (var_matchString, var_replacementString, var_replacementFunction  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_template_5F_replacement_i2_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_replace) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 137)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 138)) ;
  switch (select_lexiqueSyntax_6 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 142)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 143)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 144)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 145)) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 147)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 151)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_template_5F_replacement_i2_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_replace) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 137)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 138)) ;
  switch (select_lexiqueSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 142)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 143)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 144)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 145)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 147)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_message_5F_declaration_i3_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 159)) ;
  GALGAS_lstring var_messageName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 160)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 161)) ;
  GALGAS_lstring var_messageValue = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 162)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 163)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssign_operation (var_messageName, var_messageValue  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_message_5F_declaration_i3_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                           C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 159)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 160)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 161)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 162)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 163)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_message_5F_declaration_i3_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 159)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 160)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 161)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 162)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 163)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_implicit_5F_rule_i4_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_list) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 170)) ;
  GALGAS_lstring var_listName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 171)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssign_operation (GALGAS_lexicalImplicitRuleAST::constructor_new (var_listName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 172))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_implicit_5F_rule_i4_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_list) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 170)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 171)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_implicit_5F_rule_i4_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_list) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 170)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_explicit_5F_rule_i5_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_lexicalExpressionAST var_lexicalRuleExpression ;
  C_String syntaxDirectedTranslationResult_7106 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression, syntaxDirectedTranslationResult_7106, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_7106 ;
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 179)) ;
  if (var_sep.add_operation (GALGAS_string ("{"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 180)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("{"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 180)).stringValue () ;
  }
  GALGAS_lexicalInstructionListAST var_instructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 181)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_7 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_7302 ;
      nt_lexical_5F_instruction_ (var_instructionList, syntaxDirectedTranslationResult_7302, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_7302 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  var_sep = GALGAS_string (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 186)) ;
  if (var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 187)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 187)).stringValue () ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_rule) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 188)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssign_operation (GALGAS_lexicalExplicitRuleAST::constructor_new (var_lexicalRuleExpression, var_instructionList  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 189))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 189)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_explicit_5F_rule_i5_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inCompiler) {
  C_String syntaxDirectedTranslationResult_7106 ;
  nt_lexical_5F_expression_parse (syntaxDirectedTranslationResult_7106, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_7106 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 179)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_7 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_7302 ;
      nt_lexical_5F_instruction_parse (syntaxDirectedTranslationResult_7302, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_7302 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 186)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_rule) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 188)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_explicit_5F_rule_i5_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 179)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_7 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 186)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_rule) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 188)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i6_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_send) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 195)) ;
  GALGAS_lexicalInstructionAST var_instruction ;
  C_String syntaxDirectedTranslationResult_7721 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction, syntaxDirectedTranslationResult_7721, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_7721 ;
  ioArgument_ioInstructionList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 197)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 198)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i6_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_send) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 195)) ;
  C_String syntaxDirectedTranslationResult_7721 ;
  nt_lexical_5F_send_5F_instruction_parse (syntaxDirectedTranslationResult_7721, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_7721 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 198)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i6_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_send) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 195)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 198)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i7_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_sentTerminal = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 204)) ;
  outArgument_outInstruction = GALGAS_lexicalSimpleSendInstructionAST::constructor_new (var_sentTerminal  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 205)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i7_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                        C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 204)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i7_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 204)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i8_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lexicalSendSearchListAST var_lexicalSendSearchList = GALGAS_lexicalSendSearchListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 211)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 212)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 214)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_in) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 215)) ;
    GALGAS_lstring var_searchListName = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 216)) ;
    var_lexicalSendSearchList.addAssign_operation (var_attributeName, var_searchListName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 217)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_default) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 218)) ;
    switch (select_lexiqueSyntax_8 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 220)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction ;
  switch (select_lexiqueSyntax_9 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_defaultSentTerminal = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 224)) ;
    var_lexicalSendDefaultAction = GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (var_defaultSentTerminal  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 225)) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 227)) ;
    GALGAS_lstring var_defaultErrorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 228)) ;
    var_lexicalSendDefaultAction = GALGAS_lexicalErrorByDefaultAST::constructor_new (var_defaultErrorMessageName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 229)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_lexicalStructuredSendInstructionAST::constructor_new (var_lexicalSendSearchList, var_lexicalSendDefaultAction  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 231)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i8_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                        C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 212)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 214)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_in) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 215)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 216)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_default) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 218)) ;
    switch (select_lexiqueSyntax_8 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 220)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_lexiqueSyntax_9 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 224)) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 227)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 228)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i8_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 212)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 214)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_in) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 215)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 216)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_default) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 218)) ;
    switch (select_lexiqueSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 220)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_lexiqueSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 224)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 227)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 228)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i9_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 239)) ;
  GALGAS_lexicalInstructionListAST var_repeatedInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 240)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_10 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_9424 ;
      nt_lexical_5F_instruction_ (var_repeatedInstructionList, syntaxDirectedTranslationResult_9424, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_9424 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lexicalWhileBranchListAST var_lexicalWhileBranchList = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 245)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    C_String syntaxDirectedTranslationResult_9560 ;
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList, syntaxDirectedTranslationResult_9560, inCompiler) ;
    ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_9560 ;
    switch (select_lexiqueSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 250)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 251)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 252)) ;
  GALGAS_lexicalInstructionAST var_i = GALGAS_lexicalRepeatInstructionAST::constructor_new (var_repeatedInstructionList, var_lexicalWhileBranchList  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 253)) ;
  ioArgument_ioInstructionList.addAssign_operation (var_i  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 256)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i9_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 239)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_10 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_9424 ;
      nt_lexical_5F_instruction_parse (syntaxDirectedTranslationResult_9424, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_9424 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    C_String syntaxDirectedTranslationResult_9560 ;
    nt_repeat_5F_while_5F_branch_parse (syntaxDirectedTranslationResult_9560, inCompiler) ;
    ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_9560 ;
    switch (select_lexiqueSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 250)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 251)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 252)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i9_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 239)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_10 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_indexing (inCompiler) ;
    switch (select_lexiqueSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 250)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 251)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 252)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_repeat_5F_while_5F_branch_i10_ (GALGAS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                               C_String & ioSyntaxDirectedTranslationResult,
                                                                               C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_while) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 262)) ;
  GALGAS_lexicalExpressionAST var_whileExpression ;
  C_String syntaxDirectedTranslationResult_10071 ;
  nt_lexical_5F_expression_ (var_whileExpression, syntaxDirectedTranslationResult_10071, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_10071 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 265)) ;
  GALGAS_lexicalInstructionListAST var_whileInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 266)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_12 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_10204 ;
      nt_lexical_5F_instruction_ (var_whileInstructionList, syntaxDirectedTranslationResult_10204, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_10204 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssign_operation (var_whileExpression, var_whileInstructionList  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 271)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_repeat_5F_while_5F_branch_i10_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                    C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_while) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 262)) ;
  C_String syntaxDirectedTranslationResult_10071 ;
  nt_lexical_5F_expression_parse (syntaxDirectedTranslationResult_10071, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_10071 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 265)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_12 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_10204 ;
      nt_lexical_5F_instruction_parse (syntaxDirectedTranslationResult_10204, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_10204 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_repeat_5F_while_5F_branch_i10_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_while) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 262)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 265)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_12 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i11_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_select) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 277)) ;
  GALGAS_lexicalSelectBranchListAST var_lexicalWhileBranchList = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 278)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    const GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_when) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 280)) ;
    if (var_sep.add_operation (GALGAS_string ("case"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 281)).isValid ()) {
      ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("case"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 281)).stringValue () ;
    }
    GALGAS_lexicalExpressionAST var_selectExpression ;
    C_String syntaxDirectedTranslationResult_10674 ;
    nt_lexical_5F_expression_ (var_selectExpression, syntaxDirectedTranslationResult_10674, inCompiler) ;
    ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_10674 ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 283)) ;
    GALGAS_lexicalInstructionListAST var_selectInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 284)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_lexiqueSyntax_14 (inCompiler)) {
      case 2: {
        C_String syntaxDirectedTranslationResult_10845 ;
        nt_lexical_5F_instruction_ (var_selectInstructionList, syntaxDirectedTranslationResult_10845, inCompiler) ;
        ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_10845 ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    var_lexicalWhileBranchList.addAssign_operation (var_selectExpression, var_selectInstructionList  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 289)) ;
    switch (select_lexiqueSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_default) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 292)) ;
  GALGAS_lexicalInstructionListAST var_defaultInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 293)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_lexiqueSyntax_15 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_11086 ;
      nt_lexical_5F_instruction_ (var_defaultInstructionList, syntaxDirectedTranslationResult_11086, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_11086 ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 298)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_select) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 299)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 300)) ;
  GALGAS_lexicalInstructionAST var_i = GALGAS_lexicalSelectInstructionAST::constructor_new (var_lexicalWhileBranchList, var_defaultInstructionList  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 301)) ;
  ioArgument_ioInstructionList.addAssign_operation (var_i  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 304)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i11_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_select) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 277)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_when) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 280)) ;
    C_String syntaxDirectedTranslationResult_10674 ;
    nt_lexical_5F_expression_parse (syntaxDirectedTranslationResult_10674, inCompiler) ;
    ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_10674 ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 283)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_lexiqueSyntax_14 (inCompiler)) {
      case 2: {
        C_String syntaxDirectedTranslationResult_10845 ;
        nt_lexical_5F_instruction_parse (syntaxDirectedTranslationResult_10845, inCompiler) ;
        ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_10845 ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_lexiqueSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_default) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 292)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_lexiqueSyntax_15 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_11086 ;
      nt_lexical_5F_instruction_parse (syntaxDirectedTranslationResult_11086, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_11086 ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 298)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_select) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 299)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 300)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i11_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_select) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 277)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_when) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 280)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 283)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_lexiqueSyntax_14 (inCompiler)) {
      case 2: {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_lexiqueSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_default) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 292)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_lexiqueSyntax_15 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 298)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_select) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 299)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 300)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i12_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_lstring var_actionName ;
  var_actionName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 311)) ;
  if (GALGAS_string (" (").isValid ()) {
    ioSyntaxDirectedTranslationResult << GALGAS_string (" (").stringValue () ;
  }
  GALGAS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 313)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_16 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 316)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '!'")  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 318)) ;
      }
      GALGAS_location var_passingModeLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 320)) ;
      GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg ;
      C_String syntaxDirectedTranslationResult_11929 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg, syntaxDirectedTranslationResult_11929, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_11929 ;
      var_actualArgumentList.addAssign_operation (GALGAS_lexicalFormalInputArgumentAST::constructor_new (var_passingModeLocation, var_arg  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 323))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 323)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 325)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '!'")  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 327)) ;
      }
      GALGAS_location var_passingModeLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 329)) ;
      GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 330)) ;
      GALGAS_lexicalAttributeInputOutputArgumentAST var_arg = GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (var_passingModeLocation, var_attributeName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 331)) ;
      var_actualArgumentList.addAssign_operation (var_arg  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 332)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstringlist var_errorMessageList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 334)) ;
  switch (select_lexiqueSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 337)) ;
    bool repeatFlag_5 = true ;
    while (repeatFlag_5) {
      GALGAS_lstring var_errorMessageName ;
      var_errorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 340)) ;
      var_errorMessageList.addAssign_operation (var_errorMessageName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 341)) ;
      switch (select_lexiqueSyntax_18 (inCompiler)) {
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 343)) ;
      } break ;
      default:
        repeatFlag_5 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 346)) ;
  if (var_sep.add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 347)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 347)).stringValue () ;
  }
  GALGAS_lexicalInstructionAST var_i = GALGAS_lexicalRoutineInstructionAST::constructor_new (var_actionName, var_actualArgumentList, var_errorMessageList  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 348)) ;
  ioArgument_ioInstructionList.addAssign_operation (var_i  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 352)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i12_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 311)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_16 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 316)) ;
      C_String syntaxDirectedTranslationResult_11929 ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (syntaxDirectedTranslationResult_11929, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_11929 ;
    } break ;
    case 3: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 325)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 330)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_lexiqueSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 337)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 340)) ;
      switch (select_lexiqueSyntax_18 (inCompiler)) {
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 343)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 346)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i12_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 311)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 316)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 325)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 330)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_lexiqueSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 337)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 340)) ;
      switch (select_lexiqueSyntax_18 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 343)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 346)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i13_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                                C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lchar var_character = inCompiler->synthetizedAttribute_charValue () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 359)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCharacterInputArgumentAST::constructor_new (var_character  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 360)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i13_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                     C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 359)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i13_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 359)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i14_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                                C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_luint var_unsignedValue = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 367)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalUnsignedInputArgumentAST::constructor_new (var_unsignedValue  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 368)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i14_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                     C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 367)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i14_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 367)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i15_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                                C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_location var_currentLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 375)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 376)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_new (var_currentLocation  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 377)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i15_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                     C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 376)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i15_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 376)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i16_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                                C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lstring var_idf = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 384)) ;
  C_String syntaxDirectedTranslationResult_14219 ;
  nt_function_5F_call_5F_or_5F_attribute_ (var_idf, outArgument_outEffectiveArgument, syntaxDirectedTranslationResult_14219, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_14219 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i16_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                     C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 384)) ;
  C_String syntaxDirectedTranslationResult_14219 ;
  nt_function_5F_call_5F_or_5F_attribute_parse (syntaxDirectedTranslationResult_14219, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_14219 ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i16_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 384)) ;
  nt_function_5F_call_5F_or_5F_attribute_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i17_ (const GALGAS_lstring constinArgument_inIdf,
                                                                                         GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outArgument,
                                                                                         C_String & /* ioSyntaxDirectedTranslationResult */,
                                                                                         C_Lexique_galgas_32_Scanner * /* inCompiler */) {
  outArgument_outArgument.drop () ; // Release 'out' argument
  outArgument_outArgument = GALGAS_lexicalAttributeInputArgumentAST::constructor_new (constinArgument_inIdf  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 391)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i17_parse (C_String & /* ioSyntaxDirectedTranslationResult */,
                                                                                              C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i17_indexing (C_Lexique_galgas_32_Scanner * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i18_ (const GALGAS_lstring constinArgument_inIdf,
                                                                                         GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outArgument,
                                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outArgument.drop () ; // Release 'out' argument
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 397)) ;
  GALGAS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 398)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_19 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 401)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '!'")  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 403)) ;
      }
      GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg ;
      C_String syntaxDirectedTranslationResult_15116 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg, syntaxDirectedTranslationResult_15116, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_15116 ;
      var_functionActualArgumentList.addAssign_operation (var_arg  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 407)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 409)) ;
  outArgument_outArgument = GALGAS_lexicalFunctionInputArgumentAST::constructor_new (constinArgument_inIdf, var_functionActualArgumentList  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 410)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i18_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                              C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 397)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_19 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 401)) ;
      C_String syntaxDirectedTranslationResult_15116 ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (syntaxDirectedTranslationResult_15116, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_15116 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 409)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i18_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 397)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 401)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 409)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i19_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 416)) ;
  GALGAS_lstring var_errorMessageName ;
  var_errorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 418)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 419)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalErrorInstructionAST::constructor_new (var_errorMessageName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 420))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 420)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i19_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 416)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 418)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 419)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i19_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 416)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 418)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 419)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i20_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 426)) ;
  GALGAS_lstring var_warningMessageName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 427)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 428)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalWarningInstructionAST::constructor_new (var_warningMessageName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 429))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 429)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i20_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 426)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 427)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 428)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i20_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 426)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 427)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 428)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i21_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_drop) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 435)) ;
  GALGAS_lstring var_terminalName ;
  var_terminalName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 438)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalDropInstructionAST::constructor_new (var_terminalName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 439))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 439)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i21_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_drop) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 435)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 437)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 438)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i21_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_drop) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 435)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 438)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i22_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_tag) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 445)) ;
  GALGAS_lstring var_tagName ;
  var_tagName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 447)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 448)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalTagInstructionAST::constructor_new (var_tagName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 449))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 449)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i22_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_tag) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 445)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 447)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 448)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i22_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_tag) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 445)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 447)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 448)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i23_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 455)) ;
  GALGAS_lstring var_tagName ;
  var_tagName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 457)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_send) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 458)) ;
  GALGAS_lstring var_terminalName ;
  var_terminalName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 460)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 461)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRewindInstructionAST::constructor_new (var_tagName, var_terminalName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 462))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 462)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i23_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 455)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 457)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_send) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 458)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 460)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 461)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i23_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 455)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 457)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_send) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 458)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 460)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 461)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i24_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_log) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 468)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 469)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalLogInstructionAST::constructor_new (SOURCE_FILE ("lexiqueSyntax.galgas", 470))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 470)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i24_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_log) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 468)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 469)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_instruction_i24_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_log) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 468)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 469)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_expression_i25_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  C_String syntaxDirectedTranslationResult_17564 ;
  nt_lexical_5F_term_ (outArgument_outExpression, syntaxDirectedTranslationResult_17564, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_17564 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_expression_i25_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inCompiler) {
  C_String syntaxDirectedTranslationResult_17564 ;
  nt_lexical_5F_term_parse (syntaxDirectedTranslationResult_17564, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_17564 ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_expression_i25_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  nt_lexical_5F_term_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_term_i26_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                     C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  C_String syntaxDirectedTranslationResult_17782 ;
  nt_lexical_5F_factor_ (outArgument_outExpression, syntaxDirectedTranslationResult_17782, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_17782 ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_20 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 485)) ;
      GALGAS_lexicalExpressionAST var_rightExpression ;
      C_String syntaxDirectedTranslationResult_17885 ;
      nt_lexical_5F_factor_ (var_rightExpression, syntaxDirectedTranslationResult_17885, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_17885 ;
      outArgument_outExpression = GALGAS_lexicalOrExpressionAST::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 488)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_term_i26_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_32_Scanner * inCompiler) {
  C_String syntaxDirectedTranslationResult_17782 ;
  nt_lexical_5F_factor_parse (syntaxDirectedTranslationResult_17782, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_17782 ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_20 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 485)) ;
      C_String syntaxDirectedTranslationResult_17885 ;
      nt_lexical_5F_factor_parse (syntaxDirectedTranslationResult_17885, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_17885 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_term_i26_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 485)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i27_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_string = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 495)) ;
  outArgument_outExpression = GALGAS_lexicalStringMatchAST::constructor_new (var_string  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 496)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i27_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 495)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i27_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 495)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i28_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 502)) ;
  GALGAS_lstring var_string = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 503)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 504)) ;
  GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 505)) ;
  outArgument_outExpression = GALGAS_lexicalStringNotMatchAST::constructor_new (var_string, var_errorMessage  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 506)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i28_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 502)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 503)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 504)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 505)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i28_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 502)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 503)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 504)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 505)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i29_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_character = inCompiler->synthetizedAttribute_charValue () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 512)) ;
  switch (select_lexiqueSyntax_21 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_lexicalCharacterMatchAST::constructor_new (var_character  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 514)) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 516)) ;
    GALGAS_lchar var_upperBound = inCompiler->synthetizedAttribute_charValue () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 517)) ;
    outArgument_outExpression = GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (var_character, var_upperBound  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 518)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i29_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 512)) ;
  switch (select_lexiqueSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 516)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 517)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i29_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 512)) ;
  switch (select_lexiqueSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 516)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 517)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i30_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_characterSet = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 525)) ;
  outArgument_outExpression = GALGAS_lexicalCharacterSetMatchAST::constructor_new (var_characterSet  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 526)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i30_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 525)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_factor_i30_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 525)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_list_5F_declaration_i31_ (GALGAS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                                                    C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_list) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 532)) ;
  GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 533)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 534)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_22 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 537)) ;
      GALGAS_lstring var_sentAttribute = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 538)) ;
      var_sentAttributeList.addAssign_operation (var_selector, var_sentAttribute  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 539)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 541)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 542)) ;
  GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 543)) ;
  GALGAS_lstring var_theStyle ;
  switch (select_lexiqueSyntax_23 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_style) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 546)) ;
    var_theStyle = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 547)) ;
  } break ;
  case 2: {
    var_theStyle = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 549))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 549)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 551)) ;
  if (GALGAS_string (" error message ").add_operation (var_errorMessage.mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexiqueSyntax.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 552)).add_operation (GALGAS_string ("{"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 552)).isValid ()) {
    ioSyntaxDirectedTranslationResult << GALGAS_string (" error message ").add_operation (var_errorMessage.mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexiqueSyntax.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 552)).add_operation (GALGAS_string ("{"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 552)).stringValue () ;
  }
  GALGAS_lexicalListEntryListAST var_entryList = GALGAS_lexicalListEntryListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 553)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    C_String syntaxDirectedTranslationResult_20255 ;
    nt_lexical_5F_list_5F_entry_ (var_entryList, syntaxDirectedTranslationResult_20255, inCompiler) ;
    ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_20255 ;
    switch (select_lexiqueSyntax_24 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 557)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 559)) ;
  if (var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 560)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 560)).stringValue () ;
  }
  ioArgument_ioLexicalListDeclarationList.addAssign_operation (var_name, var_theStyle, var_errorMessage, var_sentAttributeList, var_entryList  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 561)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_list_5F_declaration_i31_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_list) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 532)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 533)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_22 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 537)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 538)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 541)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 542)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 543)) ;
  switch (select_lexiqueSyntax_23 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_style) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 546)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 547)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 551)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    C_String syntaxDirectedTranslationResult_20255 ;
    nt_lexical_5F_list_5F_entry_parse (syntaxDirectedTranslationResult_20255, inCompiler) ;
    ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_20255 ;
    switch (select_lexiqueSyntax_24 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 557)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 559)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_list_5F_declaration_i31_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_list) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 532)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 533)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 537)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 538)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 541)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 542)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 543)) ;
  switch (select_lexiqueSyntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_style) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 546)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 547)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 551)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    switch (select_lexiqueSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 557)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 559)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_list_5F_entry_i32_ (GALGAS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_lstring var_entrySpelling = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 567)) ;
  GALGAS_lstringlist var_optionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 568)) ;
  switch (select_lexiqueSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 571)) ;
    if (var_sep.isValid ()) {
      ioSyntaxDirectedTranslationResult << var_sep.stringValue () ;
    }
    GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 573)) ;
    if (GALGAS_string ("%").add_operation (var_optionName.reader_string (SOURCE_FILE ("lexiqueSyntax.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 574)).isValid ()) {
      ioSyntaxDirectedTranslationResult << GALGAS_string ("%").add_operation (var_optionName.reader_string (SOURCE_FILE ("lexiqueSyntax.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 574)).stringValue () ;
    }
    var_optionList.addAssign_operation (var_optionName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 575)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_terminalSpelling ;
  switch (select_lexiqueSyntax_26 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 579)) ;
    var_terminalSpelling = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 580)) ;
  } break ;
  case 2: {
    var_terminalSpelling = var_entrySpelling ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssign_operation (var_entrySpelling, var_terminalSpelling, var_optionList  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 584)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_list_5F_entry_i32_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 567)) ;
  switch (select_lexiqueSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 571)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 573)) ;
  } break ;
  default:
    break ;
  }
  switch (select_lexiqueSyntax_26 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 579)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 580)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_list_5F_entry_i32_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 567)) ;
  switch (select_lexiqueSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 571)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 573)) ;
  } break ;
  default:
    break ;
  }
  switch (select_lexiqueSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 579)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 580)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_attribute_5F_declaration_i33_ (GALGAS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 590)) ;
  GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 591)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 592)) ;
  ioArgument_ioLexicalAttributeList.addAssign_operation (var_typeName, var_name  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 593)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_attribute_5F_declaration_i33_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                              C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 590)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 591)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 592)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_lexical_5F_attribute_5F_declaration_i33_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 590)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 591)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 592)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_terminal_5F_declaration_i34_ (GALGAS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_terminalDeclaration, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 599)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 600)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_27 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 603)) ;
      GALGAS_lstring var_sentAttribute = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 604)) ;
      var_sentAttributeList.addAssign_operation (var_selector, var_sentAttribute  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 605)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 607)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 608)) ;
  GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 609)) ;
  GALGAS_lstring var_theStyle ;
  switch (select_lexiqueSyntax_28 (inCompiler)) {
  case 1: {
    if (GALGAS_string (" ").isValid ()) {
      ioSyntaxDirectedTranslationResult << GALGAS_string (" ").stringValue () ;
    }
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_style) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 613)) ;
    var_theStyle = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 614)) ;
  } break ;
  case 2: {
    var_theStyle = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 616))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 616)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_optionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 618)) ;
  switch (select_lexiqueSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 621)) ;
    if (var_sep.isValid ()) {
      ioSyntaxDirectedTranslationResult << var_sep.stringValue () ;
    }
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 624)) ;
      if (GALGAS_string ("%").add_operation (var_optionName.reader_string (SOURCE_FILE ("lexiqueSyntax.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 625)).isValid ()) {
        ioSyntaxDirectedTranslationResult << GALGAS_string ("%").add_operation (var_optionName.reader_string (SOURCE_FILE ("lexiqueSyntax.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 625)).stringValue () ;
      }
      var_optionList.addAssign_operation (var_optionName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 626)) ;
      switch (select_lexiqueSyntax_30 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 628)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 631)) ;
  if (GALGAS_string (" error message ").add_operation (var_errorMessage.mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexiqueSyntax.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 632)).isValid ()) {
    ioSyntaxDirectedTranslationResult << GALGAS_string (" error message ").add_operation (var_errorMessage.mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexiqueSyntax.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 632)).stringValue () ;
  }
  ioArgument_ioTerminalDeclarationList.addAssign_operation (var_name, var_sentAttributeList, var_errorMessage, var_theStyle, var_optionList  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 633)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_terminal_5F_declaration_i34_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                  C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_terminalDeclaration, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 599)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_27 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 603)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 604)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 607)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 608)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 609)) ;
  switch (select_lexiqueSyntax_28 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_style) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 613)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 614)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_lexiqueSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 621)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 624)) ;
      switch (select_lexiqueSyntax_30 (inCompiler)) {
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 628)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 631)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_terminal_5F_declaration_i34_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 599)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_lexiqueSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 603)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 604)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 607)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 608)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 609)) ;
  switch (select_lexiqueSyntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_style) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 613)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 614)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_lexiqueSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 621)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 624)) ;
      switch (select_lexiqueSyntax_30 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 628)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 631)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_style_5F_declaration_i35_ (GALGAS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_style) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 639)) ;
  GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 640)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 641)) ;
  GALGAS_lstring var_comment = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 642)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 643)) ;
  ioArgument_ioLexicalStyleList.addAssign_operation (var_name, var_comment  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 644)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_style_5F_declaration_i35_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                               C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_style) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 639)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 640)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 641)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 642)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 643)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_style_5F_declaration_i35_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_style) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 639)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 640)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 641)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 642)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 643)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_extern_5F_routine_5F_or_5F_function_5F_declaration_i36_ (GALGAS_externRoutineListAST & ioArgument_ioExternRoutineList,
                                                                                                        GALGAS_externFunctionListAST & ioArgument_ioExternFunctionList,
                                                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                                                        C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_extern) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 652)) ;
  switch (select_lexiqueSyntax_31 (inCompiler)) {
  case 1: {
    const GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_routine) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 654)) ;
    if (var_sep.add_operation (GALGAS_string ("proc"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 655)).isValid ()) {
      ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("proc"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 655)).stringValue () ;
    }
    GALGAS_lstring var_routineName = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 656)) ;
    GALGAS_lexicalExternRoutineFormalArgumentListAST var_lexicalRoutineFormalArgumentList = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 657)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_lexiqueSyntax_32 (inCompiler)) {
      case 2: {
        GALGAS_lexicalArgumentModeAST var_lexicalArgumentMode ;
        switch (select_lexiqueSyntax_33 (inCompiler)) {
        case 1: {
          GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 662)) ;
          const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '\?!'")  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 664)) ;
          }
          var_lexicalArgumentMode = GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("lexiqueSyntax.galgas", 666)) ;
        } break ;
        case 2: {
          GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 668)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_location location_4 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '\?'")  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 670)) ;
          }
          var_lexicalArgumentMode = GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("lexiqueSyntax.galgas", 672)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_lexicalTypeName = inCompiler->synthetizedAttribute_tokenString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 674)) ;
        GALGAS_lstring var_formalArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 675)) ;
        var_lexicalRoutineFormalArgumentList.addAssign_operation (var_lexicalArgumentMode, var_lexicalTypeName, var_formalArgumentName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 676)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    GALGAS_stringlist var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 678)) ;
    switch (select_lexiqueSyntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 681)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        GALGAS_lstring var_errorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 683)) ;
        var_errorMessageList.addAssign_operation (var_errorMessageName.reader_string (SOURCE_FILE ("lexiqueSyntax.galgas", 684))  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 684)) ;
        switch (select_lexiqueSyntax_35 (inCompiler)) {
        case 2: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 686)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 689)) ;
    ioArgument_ioExternRoutineList.addAssign_operation (var_routineName, var_lexicalRoutineFormalArgumentList, var_errorMessageList  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 690)) ;
  } break ;
  case 2: {
    const GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_function) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 692)) ;
    if (var_sep.add_operation (GALGAS_string ("func"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 693)).isValid ()) {
      ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("func"), inCompiler COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 693)).stringValue () ;
    }
    GALGAS_lstring var_functionName = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 694)) ;
    GALGAS_lexicalExternFunctionFormalArgumentListAST var_lexicalFunctionFormalArgumentList = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("lexiqueSyntax.galgas", 695)) ;
    bool repeatFlag_6 = true ;
    while (repeatFlag_6) {
      switch (select_lexiqueSyntax_36 (inCompiler)) {
      case 2: {
        GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 698)) ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_location location_8 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_8, GALGAS_string ("the selector should be '\?'")  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 700)) ;
        }
        GALGAS_lstring var_lexicalTypeName = inCompiler->synthetizedAttribute_tokenString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 702)) ;
        GALGAS_lstring var_formalArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 703)) ;
        var_lexicalFunctionFormalArgumentList.addAssign_operation (var_lexicalTypeName, var_formalArgumentName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 704)) ;
      } break ;
      default:
        repeatFlag_6 = false ;
        break ;
      }
    }
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 706)) ;
    GALGAS_lstring var_returnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 707)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 708)) ;
    ioArgument_ioExternFunctionList.addAssign_operation (var_functionName, var_lexicalFunctionFormalArgumentList, var_returnedTypeName  COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 709)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_extern_5F_routine_5F_or_5F_function_5F_declaration_i36_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                             C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_extern) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 652)) ;
  switch (select_lexiqueSyntax_31 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_routine) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 654)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 656)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_lexiqueSyntax_32 (inCompiler)) {
      case 2: {
        switch (select_lexiqueSyntax_33 (inCompiler)) {
        case 1: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 662)) ;
        } break ;
        case 2: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 668)) ;
        } break ;
        default:
          break ;
        }
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 674)) ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 675)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_lexiqueSyntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 681)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 683)) ;
        switch (select_lexiqueSyntax_35 (inCompiler)) {
        case 2: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 686)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      break ;
    }
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 689)) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_function) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 692)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 694)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_lexiqueSyntax_36 (inCompiler)) {
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 698)) ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 702)) ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 703)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 706)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 707)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 708)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_lexiqueSyntax::rule_lexiqueSyntax_extern_5F_routine_5F_or_5F_function_5F_declaration_i36_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_extern) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 652)) ;
  switch (select_lexiqueSyntax_31 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_routine) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 654)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 656)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_lexiqueSyntax_32 (inCompiler)) {
      case 2: {
        switch (select_lexiqueSyntax_33 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 662)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 668)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 674)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 675)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_lexiqueSyntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 681)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 683)) ;
        switch (select_lexiqueSyntax_35 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 686)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 689)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_function) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 692)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 694)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_lexiqueSyntax_36 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 698)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 702)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 703)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 706)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 707)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("lexiqueSyntax.galgas", 708)) ;
  } break ;
  default:
    break ;
  }
}

