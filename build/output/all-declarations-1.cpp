#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"


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

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_insertAtIndex (const GALGAS_abstractLexicalRoutineActualArgumentAST inOperand0,
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

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_removeAtIndex (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
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

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_popFirst (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
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

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_popLast (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
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

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::plusAssign_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST inOperand,
                                                                           C_Compiler * /* inCompiler */
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

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_insertAtIndex (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST inOperand0,
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

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_removeAtIndex (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
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

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_popFirst (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
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

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_popLast (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
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

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::plusAssign_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST inOperand,
                                                                            C_Compiler * /* inCompiler */
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

GALGAS_bool GALGAS_lexicalArgumentModeAST::getter_isLexicalInputMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalInputMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalArgumentModeAST::getter_isLexicalInputOutputMode (UNUSED_LOCATION_ARGS) const {
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

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_insertAtIndex (const GALGAS_lexicalArgumentModeAST inOperand0,
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

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_removeAtIndex (GALGAS_lexicalArgumentModeAST & outOperand0,
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

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_popFirst (GALGAS_lexicalArgumentModeAST & outOperand0,
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

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_popLast (GALGAS_lexicalArgumentModeAST & outOperand0,
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

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::plusAssign_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST inOperand,
                                                                             C_Compiler * /* inCompiler */
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

void GALGAS_externRoutineListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

void GALGAS_externRoutineListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

void GALGAS_externRoutineListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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

void GALGAS_externRoutineListAST::setter_popLast (GALGAS_lstring & outOperand0,
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

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result = GALGAS_externRoutineListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result = GALGAS_externRoutineListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result = GALGAS_externRoutineListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::plusAssign_operation (const GALGAS_externRoutineListAST inOperand,
                                                        C_Compiler * /* inCompiler */
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

void GALGAS_lexicalExternFunctionFormalArgumentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

void GALGAS_lexicalExternFunctionFormalArgumentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

void GALGAS_lexicalExternFunctionFormalArgumentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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

void GALGAS_lexicalExternFunctionFormalArgumentListAST::setter_popLast (GALGAS_lstring & outOperand0,
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

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::plusAssign_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST inOperand,
                                                                              C_Compiler * /* inCompiler */
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

void GALGAS_externFunctionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

void GALGAS_externFunctionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

void GALGAS_externFunctionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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

void GALGAS_externFunctionListAST::setter_popLast (GALGAS_lstring & outOperand0,
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

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result = GALGAS_externFunctionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result = GALGAS_externFunctionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result = GALGAS_externFunctionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST::plusAssign_operation (const GALGAS_externFunctionListAST inOperand,
                                                         C_Compiler * /* inCompiler */
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

void GALGAS_indexingListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

void GALGAS_indexingListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

void GALGAS_indexingListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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

void GALGAS_indexingListAST::setter_popLast (GALGAS_lstring & outOperand0,
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

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::plusAssign_operation (const GALGAS_indexingListAST inOperand,
                                                   C_Compiler * /* inCompiler */
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

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_string (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_string == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_char (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_char == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_uint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_uint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_sint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_sint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_double (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_double == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_bigint (UNUSED_LOCATION_ARGS) const {
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

void GALGAS_lexicalSentValueList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

void GALGAS_lexicalSentValueList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

void GALGAS_lexicalSentValueList::setter_popFirst (GALGAS_lstring & outOperand0,
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

void GALGAS_lexicalSentValueList::setter_popLast (GALGAS_lstring & outOperand0,
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

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList::plusAssign_operation (const GALGAS_lexicalSentValueList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalSentValueList::getter_mLexicalFormalSelectorAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_string GALGAS_lexicalSentValueList::getter_mLexicalAttributeNameAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_lexicalTypeEnum GALGAS_lexicalSentValueList::getter_mLexicalTypeAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_terminalMap GALGAS_terminalMap::getter_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_terminalMap::setter_insertKey (GALGAS_lstring inKey,
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

GALGAS_lexicalSentValueList GALGAS_terminalMap::getter_mSentAttributeListForKey (const GALGAS_string & inKey,
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

void GALGAS_terminalMap::setter_setMSentAttributeListForKey (GALGAS_lexicalSentValueList inAttributeValue,
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

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::getter_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_lexicalTypeMap::setter_insertKey (GALGAS_lstring inKey,
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

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeMap::getter_mLexicalTypeForKey (const GALGAS_string & inKey,
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

void GALGAS_lexicalTypeMap::setter_setMLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
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

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::getter_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_lexicalAttributeMap::setter_insertKey (GALGAS_lstring inKey,
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

GALGAS_lexicalTypeEnum GALGAS_lexicalAttributeMap::getter_mLexicalTypeForKey (const GALGAS_string & inKey,
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

void GALGAS_lexicalAttributeMap::setter_setMLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
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
//                                                                                                                     *
//                                      Class for element of '@terminalList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_terminalList : public cCollectionElement {
  public : GALGAS_terminalList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_terminalList (const GALGAS_lstring & in_mTerminalName,
                                            const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                            const GALGAS_string & in_mSyntaxErrorMessage,
                                            const GALGAS_bool & in_mIsEndOfTemplateMark,
                                            const GALGAS_bool & in_mAtomicSelection,
                                            const GALGAS_uint & in_mStyleIndex
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

cCollectionElement_terminalList::cCollectionElement_terminalList (const GALGAS_lstring & in_mTerminalName,
                                                                  const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                                                  const GALGAS_string & in_mSyntaxErrorMessage,
                                                                  const GALGAS_bool & in_mIsEndOfTemplateMark,
                                                                  const GALGAS_bool & in_mAtomicSelection,
                                                                  const GALGAS_uint & in_mStyleIndex
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTerminalName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_mIsEndOfTemplateMark, in_mAtomicSelection, in_mStyleIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_terminalList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_terminalList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalList (mObject.mAttribute_mTerminalName, mObject.mAttribute_mSentAttributeList, mObject.mAttribute_mSyntaxErrorMessage, mObject.mAttribute_mIsEndOfTemplateMark, mObject.mAttribute_mAtomicSelection, mObject.mAttribute_mStyleIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_terminalList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalName" ":" ;
  mObject.mAttribute_mTerminalName.description (ioString, inIndentation) ;
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
  ioString << "mIsEndOfTemplateMark" ":" ;
  mObject.mAttribute_mIsEndOfTemplateMark.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAtomicSelection" ":" ;
  mObject.mAttribute_mAtomicSelection.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyleIndex" ":" ;
  mObject.mAttribute_mStyleIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_terminalList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalList * operand = (cCollectionElement_terminalList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList::GALGAS_terminalList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList::GALGAS_terminalList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_terminalList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lexicalSentValueList & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_bool & inOperand3,
                                                                    const GALGAS_bool & inOperand4,
                                                                    const GALGAS_uint & inOperand5
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_terminalList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_lstring & in_mTerminalName,
                                                     const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                                     const GALGAS_string & in_mSyntaxErrorMessage,
                                                     const GALGAS_bool & in_mIsEndOfTemplateMark,
                                                     const GALGAS_bool & in_mAtomicSelection,
                                                     const GALGAS_uint & in_mStyleIndex
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = NULL ;
  macroMyNew (p, cCollectionElement_terminalList (in_mTerminalName,
                                                  in_mSentAttributeList,
                                                  in_mSyntaxErrorMessage,
                                                  in_mIsEndOfTemplateMark,
                                                  in_mAtomicSelection,
                                                  in_mStyleIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                               const GALGAS_lexicalSentValueList & inOperand1,
                                               const GALGAS_string & inOperand2,
                                               const GALGAS_bool & inOperand3,
                                               const GALGAS_bool & inOperand4,
                                               const GALGAS_uint & inOperand5
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                const GALGAS_lexicalSentValueList inOperand1,
                                                const GALGAS_string inOperand2,
                                                const GALGAS_bool inOperand3,
                                                const GALGAS_bool inOperand4,
                                                const GALGAS_uint inOperand5,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                GALGAS_lexicalSentValueList & outOperand1,
                                                GALGAS_string & outOperand2,
                                                GALGAS_bool & outOperand3,
                                                GALGAS_bool & outOperand4,
                                                GALGAS_uint & outOperand5,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalList) ;
      outOperand0 = p->mObject.mAttribute_mTerminalName ;
      outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
      outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mAttribute_mIsEndOfTemplateMark ;
      outOperand4 = p->mObject.mAttribute_mAtomicSelection ;
      outOperand5 = p->mObject.mAttribute_mStyleIndex ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::setter_popFirst (GALGAS_lstring & outOperand0,
                                           GALGAS_lexicalSentValueList & outOperand1,
                                           GALGAS_string & outOperand2,
                                           GALGAS_bool & outOperand3,
                                           GALGAS_bool & outOperand4,
                                           GALGAS_uint & outOperand5,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mAttribute_mTerminalName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mAttribute_mAtomicSelection ;
    outOperand5 = p->mObject.mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::setter_popLast (GALGAS_lstring & outOperand0,
                                          GALGAS_lexicalSentValueList & outOperand1,
                                          GALGAS_string & outOperand2,
                                          GALGAS_bool & outOperand3,
                                          GALGAS_bool & outOperand4,
                                          GALGAS_uint & outOperand5,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mAttribute_mTerminalName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mAttribute_mAtomicSelection ;
    outOperand5 = p->mObject.mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::method_first (GALGAS_lstring & outOperand0,
                                        GALGAS_lexicalSentValueList & outOperand1,
                                        GALGAS_string & outOperand2,
                                        GALGAS_bool & outOperand3,
                                        GALGAS_bool & outOperand4,
                                        GALGAS_uint & outOperand5,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mAttribute_mTerminalName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mAttribute_mAtomicSelection ;
    outOperand5 = p->mObject.mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::method_last (GALGAS_lstring & outOperand0,
                                       GALGAS_lexicalSentValueList & outOperand1,
                                       GALGAS_string & outOperand2,
                                       GALGAS_bool & outOperand3,
                                       GALGAS_bool & outOperand4,
                                       GALGAS_uint & outOperand5,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mAttribute_mTerminalName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mAttribute_mAtomicSelection ;
    outOperand5 = p->mObject.mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::add_operation (const GALGAS_terminalList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::plusAssign_operation (const GALGAS_terminalList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalList::getter_mTerminalNameAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mTerminalName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_terminalList::getter_mSentAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_lexicalSentValueList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mSentAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalList::getter_mSyntaxErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mSyntaxErrorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_terminalList::getter_mIsEndOfTemplateMarkAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mIsEndOfTemplateMark ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_terminalList::getter_mAtomicSelectionAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mAtomicSelection ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalList::getter_mStyleIndexAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mStyleIndex ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalList::cEnumerator_terminalList (const GALGAS_terminalList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList_2D_element cEnumerator_terminalList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalList::current_mTerminalName (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mTerminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList cEnumerator_terminalList::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_terminalList::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_terminalList::current_mIsEndOfTemplateMark (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mIsEndOfTemplateMark ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_terminalList::current_mAtomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mAtomicSelection ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_terminalList::current_mStyleIndex (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mStyleIndex ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @terminalList type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalList ("terminalList",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalList result ;
  const GALGAS_terminalList * p = (const GALGAS_terminalList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalExplicitTokenListMap::cMapElement_lexicalExplicitTokenListMap (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_lstring & in_mTerminal,
                                                                                  const GALGAS_lstringlist & in_mFeatureList
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTerminal (in_mTerminal),
mAttribute_mFeatureList (in_mFeatureList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalExplicitTokenListMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTerminal.isValid () && mAttribute_mFeatureList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalExplicitTokenListMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalExplicitTokenListMap (mAttribute_lkey, mAttribute_mTerminal, mAttribute_mFeatureList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalExplicitTokenListMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminal" ":" ;
  mAttribute_mTerminal.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureList" ":" ;
  mAttribute_mFeatureList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalExplicitTokenListMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalExplicitTokenListMap * operand = (cMapElement_lexicalExplicitTokenListMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTerminal.objectCompare (operand->mAttribute_mTerminal) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFeatureList.objectCompare (operand->mAttribute_mFeatureList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap::GALGAS_lexicalExplicitTokenListMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap::GALGAS_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap & GALGAS_lexicalExplicitTokenListMap::operator = (const GALGAS_lexicalExplicitTokenListMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::constructor_mapWithMapToOverride (const GALGAS_lexicalExplicitTokenListMap & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_lstring & inArgument0,
                                                              const GALGAS_lstringlist & inArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalExplicitTokenListMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMap::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_lstring inArgument0,
                                                           GALGAS_lstringlist inArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' terminal has been already declared in the list" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalExplicitTokenListMap_searchKey = "the '%K' terminal is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMap::method_searchKey (GALGAS_lstring inKey,
                                                           GALGAS_lstring & outArgument0,
                                                           GALGAS_lstringlist & outArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_lexicalExplicitTokenListMap_searchKey
                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    outArgument0 = p->mAttribute_mTerminal ;
    outArgument1 = p->mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExplicitTokenListMap::getter_mTerminalForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    result = p->mAttribute_mTerminal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lexicalExplicitTokenListMap::getter_mFeatureListForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) attributes ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    result = p->mAttribute_mFeatureList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMap::setter_setMTerminalForKey (GALGAS_lstring inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMap * p = (cMapElement_lexicalExplicitTokenListMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    p->mAttribute_mTerminal = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMap::setter_setMFeatureListForKey (GALGAS_lstringlist inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMap * p = (cMapElement_lexicalExplicitTokenListMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    p->mAttribute_mFeatureList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalExplicitTokenListMap * GALGAS_lexicalExplicitTokenListMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMap * result = (cMapElement_lexicalExplicitTokenListMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalExplicitTokenListMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalExplicitTokenListMap::cEnumerator_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap_2D_element cEnumerator_lexicalExplicitTokenListMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return GALGAS_lexicalExplicitTokenListMap_2D_element (p->mAttribute_lkey, p->mAttribute_mTerminal, p->mAttribute_mFeatureList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMap::current_mTerminal (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return p->mAttribute_mTerminal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_lexicalExplicitTokenListMap::current_mFeatureList (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return p->mAttribute_mFeatureList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalExplicitTokenListMap type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ("lexicalExplicitTokenListMap",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  const GALGAS_lexicalExplicitTokenListMap * p = (const GALGAS_lexicalExplicitTokenListMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitTokenListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@tokenSortedlist' sorted list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_tokenSortedlist : public cSortedListElement {
  public : GALGAS_tokenSortedlist_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_tokenSortedlist (const GALGAS_uint & in_mLength,
                                               const GALGAS_string & in_mName,
                                               const GALGAS_string & in_mTerminalName
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

cSortedListElement_tokenSortedlist::cSortedListElement_tokenSortedlist (const GALGAS_uint & in_mLength,
                                                                        const GALGAS_string & in_mName,
                                                                        const GALGAS_string & in_mTerminalName
                                                                        COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mLength, in_mName, in_mTerminalName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_tokenSortedlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_tokenSortedlist::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_tokenSortedlist (mObject.mAttribute_mLength, mObject.mAttribute_mName, mObject.mAttribute_mTerminalName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_tokenSortedlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLength" ":" ;
  mObject.mAttribute_mLength.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalName" ":" ;
  mObject.mAttribute_mTerminalName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_tokenSortedlist::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_tokenSortedlist * operand = (cSortedListElement_tokenSortedlist *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_tokenSortedlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist::GALGAS_tokenSortedlist (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_tokenSortedlist::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_tokenSortedlist * operand = (const cSortedListElement_tokenSortedlist *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_tokenSortedlist) ;
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mLength.objectCompare (operand->mObject.mAttribute_mLength) ;
  }
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mName.objectCompare (operand->mObject.mAttribute_mName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_tokenSortedlist result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::constructor_sortedListWithValue (const GALGAS_uint & inOperand0,
                                                                                const GALGAS_string & inOperand1,
                                                                                const GALGAS_string & inOperand2
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_tokenSortedlist result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_tokenSortedlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.addObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist::addAssign_operation (const GALGAS_uint & inOperand0,
                                                  const GALGAS_string & inOperand1,
                                                  const GALGAS_string & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_tokenSortedlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist::plusAssign_operation (const GALGAS_tokenSortedlist inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist::setter_popSmallest (GALGAS_uint & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mAttribute_mLength ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mTerminalName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist::setter_popGreatest (GALGAS_uint & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mAttribute_mLength ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mTerminalName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist::method_smallest (GALGAS_uint & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mAttribute_mLength ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mTerminalName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist::method_greatest (GALGAS_uint & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mAttribute_mLength ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mTerminalName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_tokenSortedlist::cEnumerator_tokenSortedlist (const GALGAS_tokenSortedlist & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element cEnumerator_tokenSortedlist::current (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_tokenSortedlist::current_mLength (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mAttribute_mLength ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_tokenSortedlist::current_mName (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_tokenSortedlist::current_mTerminalName (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mAttribute_mTerminalName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @tokenSortedlist type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tokenSortedlist ("tokenSortedlist",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tokenSortedlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tokenSortedlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tokenSortedlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_tokenSortedlist result ;
  const GALGAS_tokenSortedlist * p = (const GALGAS_tokenSortedlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tokenSortedlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tokenSortedlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalExplicitTokenListMapMap::cMapElement_lexicalExplicitTokenListMapMap (const GALGAS_lstring & inKey,
                                                                                        const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                                                        const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                                                        const GALGAS_bool & in_mShouldBeGenerated
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mExplicitTokenListMap (in_mExplicitTokenListMap),
mAttribute_mTokenSortedList (in_mTokenSortedList),
mAttribute_mShouldBeGenerated (in_mShouldBeGenerated) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalExplicitTokenListMapMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mExplicitTokenListMap.isValid () && mAttribute_mTokenSortedList.isValid () && mAttribute_mShouldBeGenerated.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalExplicitTokenListMapMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalExplicitTokenListMapMap (mAttribute_lkey, mAttribute_mExplicitTokenListMap, mAttribute_mTokenSortedList, mAttribute_mShouldBeGenerated COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalExplicitTokenListMapMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExplicitTokenListMap" ":" ;
  mAttribute_mExplicitTokenListMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTokenSortedList" ":" ;
  mAttribute_mTokenSortedList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mShouldBeGenerated" ":" ;
  mAttribute_mShouldBeGenerated.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalExplicitTokenListMapMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalExplicitTokenListMapMap * operand = (cMapElement_lexicalExplicitTokenListMapMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExplicitTokenListMap.objectCompare (operand->mAttribute_mExplicitTokenListMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTokenSortedList.objectCompare (operand->mAttribute_mTokenSortedList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mShouldBeGenerated.objectCompare (operand->mAttribute_mShouldBeGenerated) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap::GALGAS_lexicalExplicitTokenListMapMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap::GALGAS_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap & GALGAS_lexicalExplicitTokenListMapMap::operator = (const GALGAS_lexicalExplicitTokenListMapMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::constructor_mapWithMapToOverride (const GALGAS_lexicalExplicitTokenListMapMap & inMapToOverride
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 const GALGAS_lexicalExplicitTokenListMap & inArgument0,
                                                                 const GALGAS_tokenSortedlist & inArgument1,
                                                                 const GALGAS_bool & inArgument2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMapMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMapMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalExplicitTokenListMapMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap::setter_insertKey (GALGAS_lstring inKey,
                                                              GALGAS_lexicalExplicitTokenListMap inArgument0,
                                                              GALGAS_tokenSortedlist inArgument1,
                                                              GALGAS_bool inArgument2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMapMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMapMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' token list has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalExplicitTokenListMapMap_searchKey = "the '%K' token list is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap::method_searchKey (GALGAS_lstring inKey,
                                                              GALGAS_lexicalExplicitTokenListMap & outArgument0,
                                                              GALGAS_tokenSortedlist & outArgument1,
                                                              GALGAS_bool & outArgument2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) performSearch (inKey,
                                                                                                                               inCompiler,
                                                                                                                               kSearchErrorMessage_lexicalExplicitTokenListMapMap_searchKey
                                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    outArgument0 = p->mAttribute_mExplicitTokenListMap ;
    outArgument1 = p->mAttribute_mTokenSortedList ;
    outArgument2 = p->mAttribute_mShouldBeGenerated ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMapMap::getter_mExplicitTokenListMapForKey (const GALGAS_string & inKey,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_lexicalExplicitTokenListMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mAttribute_mExplicitTokenListMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist GALGAS_lexicalExplicitTokenListMapMap::getter_mTokenSortedListForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_tokenSortedlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mAttribute_mTokenSortedList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalExplicitTokenListMapMap::getter_mShouldBeGeneratedForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mAttribute_mShouldBeGenerated ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMExplicitTokenListMapForKey (GALGAS_lexicalExplicitTokenListMap inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mAttribute_mExplicitTokenListMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMTokenSortedListForKey (GALGAS_tokenSortedlist inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mAttribute_mTokenSortedList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMShouldBeGeneratedForKey (GALGAS_bool inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mAttribute_mShouldBeGenerated = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalExplicitTokenListMapMap * GALGAS_lexicalExplicitTokenListMapMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMapMap * result = (cMapElement_lexicalExplicitTokenListMapMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalExplicitTokenListMapMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalExplicitTokenListMapMap::cEnumerator_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap_2D_element cEnumerator_lexicalExplicitTokenListMapMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return GALGAS_lexicalExplicitTokenListMapMap_2D_element (p->mAttribute_lkey, p->mAttribute_mExplicitTokenListMap, p->mAttribute_mTokenSortedList, p->mAttribute_mShouldBeGenerated) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMapMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap cEnumerator_lexicalExplicitTokenListMapMap::current_mExplicitTokenListMap (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mAttribute_mExplicitTokenListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist cEnumerator_lexicalExplicitTokenListMapMap::current_mTokenSortedList (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mAttribute_mTokenSortedList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_lexicalExplicitTokenListMapMap::current_mShouldBeGenerated (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mAttribute_mShouldBeGenerated ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexicalExplicitTokenListMapMap type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ("lexicalExplicitTokenListMapMap",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMapMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMapMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMapMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  const GALGAS_lexicalExplicitTokenListMapMap * p = (const GALGAS_lexicalExplicitTokenListMapMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitTokenListMapMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMapMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalMessageMap::cMapElement_lexicalMessageMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_lstring & in_mLexicalMessage,
                                                              const GALGAS_bool & in_mMessageIsUsed
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalMessage (in_mLexicalMessage),
mAttribute_mMessageIsUsed (in_mMessageIsUsed) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalMessageMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalMessage.isValid () && mAttribute_mMessageIsUsed.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalMessageMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalMessageMap (mAttribute_lkey, mAttribute_mLexicalMessage, mAttribute_mMessageIsUsed COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalMessageMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalMessage" ":" ;
  mAttribute_mLexicalMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageIsUsed" ":" ;
  mAttribute_mMessageIsUsed.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalMessageMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalMessageMap * operand = (cMapElement_lexicalMessageMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalMessage.objectCompare (operand->mAttribute_mLexicalMessage) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMessageIsUsed.objectCompare (operand->mAttribute_mMessageIsUsed) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap::GALGAS_lexicalMessageMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap::GALGAS_lexicalMessageMap (const GALGAS_lexicalMessageMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap & GALGAS_lexicalMessageMap::operator = (const GALGAS_lexicalMessageMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::constructor_mapWithMapToOverride (const GALGAS_lexicalMessageMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_lstring & inArgument0,
                                                    const GALGAS_bool & inArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_lexicalMessageMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalMessageMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalMessageMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_lstring inArgument0,
                                                 GALGAS_bool inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalMessageMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalMessageMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' message has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalMessageMap_searchKey = "the '%K' message is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_lstring & outArgument0,
                                                 GALGAS_bool & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_lexicalMessageMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    outArgument0 = p->mAttribute_mLexicalMessage ;
    outArgument1 = p->mAttribute_mMessageIsUsed ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalMessageMap::getter_mLexicalMessageForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    result = p->mAttribute_mLexicalMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalMessageMap::getter_mMessageIsUsedForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    result = p->mAttribute_mMessageIsUsed ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageMap::setter_setMLexicalMessageForKey (GALGAS_lstring inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalMessageMap * p = (cMapElement_lexicalMessageMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    p->mAttribute_mLexicalMessage = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageMap::setter_setMMessageIsUsedForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalMessageMap * p = (cMapElement_lexicalMessageMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    p->mAttribute_mMessageIsUsed = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalMessageMap * GALGAS_lexicalMessageMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalMessageMap * result = (cMapElement_lexicalMessageMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalMessageMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalMessageMap::cEnumerator_lexicalMessageMap (const GALGAS_lexicalMessageMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap_2D_element cEnumerator_lexicalMessageMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return GALGAS_lexicalMessageMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalMessage, p->mAttribute_mMessageIsUsed) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalMessageMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalMessageMap::current_mLexicalMessage (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return p->mAttribute_mLexicalMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_lexicalMessageMap::current_mMessageIsUsed (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return p->mAttribute_mMessageIsUsed ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @lexicalMessageMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageMap ("lexicalMessageMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalMessageMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalMessageMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  const GALGAS_lexicalMessageMap * p = (const GALGAS_lexicalMessageMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalMessageMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@lexicalRoutineFormalArgumentList' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalRoutineFormalArgumentList : public cCollectionElement {
  public : GALGAS_lexicalRoutineFormalArgumentList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                const GALGAS_string & in_mArgumentNameForComment
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

cCollectionElement_lexicalRoutineFormalArgumentList::cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                          const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                          const GALGAS_string & in_mArgumentNameForComment
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalFormalArgumentMode, in_mLexicalFormalArgumentType, in_mArgumentNameForComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalRoutineFormalArgumentList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalRoutineFormalArgumentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalRoutineFormalArgumentList (mObject.mAttribute_mLexicalFormalArgumentMode, mObject.mAttribute_mLexicalFormalArgumentType, mObject.mAttribute_mArgumentNameForComment COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalRoutineFormalArgumentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFormalArgumentMode" ":" ;
  mObject.mAttribute_mLexicalFormalArgumentMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFormalArgumentType" ":" ;
  mObject.mAttribute_mLexicalFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentNameForComment" ":" ;
  mObject.mAttribute_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalRoutineFormalArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRoutineFormalArgumentList * operand = (cCollectionElement_lexicalRoutineFormalArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList::GALGAS_lexicalRoutineFormalArgumentList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList::GALGAS_lexicalRoutineFormalArgumentList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::constructor_listWithValue (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                            const GALGAS_lexicalTypeEnum & inOperand1,
                                                                                                            const GALGAS_string & inOperand2
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRoutineFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                         const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                         const GALGAS_string & in_mArgumentNameForComment
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineFormalArgumentList * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (in_mLexicalFormalArgumentMode,
                                                                      in_mLexicalFormalArgumentType,
                                                                      in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::addAssign_operation (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                   const GALGAS_lexicalTypeEnum & inOperand1,
                                                                   const GALGAS_string & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::setter_insertAtIndex (const GALGAS_lexicalArgumentModeAST inOperand0,
                                                                    const GALGAS_lexicalTypeEnum inOperand1,
                                                                    const GALGAS_string inOperand2,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::setter_removeAtIndex (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                    GALGAS_lexicalTypeEnum & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
      outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
      outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
      outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::setter_popFirst (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                               GALGAS_lexicalTypeEnum & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::setter_popLast (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                              GALGAS_lexicalTypeEnum & outOperand1,
                                                              GALGAS_string & outOperand2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::method_first (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                            GALGAS_lexicalTypeEnum & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::method_last (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                           GALGAS_lexicalTypeEnum & outOperand1,
                                                           GALGAS_string & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::add_operation (const GALGAS_lexicalRoutineFormalArgumentList & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::plusAssign_operation (const GALGAS_lexicalRoutineFormalArgumentList inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalArgumentModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mAttribute_mLexicalFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalRoutineFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mAttribute_mArgumentNameForComment ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRoutineFormalArgumentList::cEnumerator_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element cEnumerator_lexicalRoutineFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST cEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentMode (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mAttribute_mLexicalFormalArgumentMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mAttribute_mLexicalFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexicalRoutineFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mAttribute_mArgumentNameForComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalRoutineFormalArgumentList type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ("lexicalRoutineFormalArgumentList",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineFormalArgumentList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  const GALGAS_lexicalRoutineFormalArgumentList * p = (const GALGAS_lexicalRoutineFormalArgumentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalRoutineMap::cMapElement_lexicalRoutineMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                                              const GALGAS_stringlist & in_mErrorMessageList,
                                                              const GALGAS_bool & in_mIsExtern
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalRoutineFormalArgumentList (in_mLexicalRoutineFormalArgumentList),
mAttribute_mErrorMessageList (in_mErrorMessageList),
mAttribute_mIsExtern (in_mIsExtern) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalRoutineMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalRoutineFormalArgumentList.isValid () && mAttribute_mErrorMessageList.isValid () && mAttribute_mIsExtern.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalRoutineMap (mAttribute_lkey, mAttribute_mLexicalRoutineFormalArgumentList, mAttribute_mErrorMessageList, mAttribute_mIsExtern COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalRoutineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRoutineFormalArgumentList" ":" ;
  mAttribute_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessageList" ":" ;
  mAttribute_mErrorMessageList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExtern" ":" ;
  mAttribute_mIsExtern.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalRoutineMap * operand = (cMapElement_lexicalRoutineMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalRoutineFormalArgumentList.objectCompare (operand->mAttribute_mLexicalRoutineFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessageList.objectCompare (operand->mAttribute_mErrorMessageList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsExtern.objectCompare (operand->mAttribute_mIsExtern) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap::GALGAS_lexicalRoutineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap::GALGAS_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap & GALGAS_lexicalRoutineMap::operator = (const GALGAS_lexicalRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::constructor_mapWithMapToOverride (const GALGAS_lexicalRoutineMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_lexicalRoutineFormalArgumentList & inArgument0,
                                                    const GALGAS_stringlist & inArgument1,
                                                    const GALGAS_bool & inArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalRoutineMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_lexicalRoutineFormalArgumentList inArgument0,
                                                 GALGAS_stringlist inArgument1,
                                                 GALGAS_bool inArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalRoutineMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexical routine has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalRoutineMap_searchKey = "the '%K' lexical routine is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_lexicalRoutineFormalArgumentList & outArgument0,
                                                 GALGAS_stringlist & outArgument1,
                                                 GALGAS_bool & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_lexicalRoutineMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    outArgument0 = p->mAttribute_mLexicalRoutineFormalArgumentList ;
    outArgument1 = p->mAttribute_mErrorMessageList ;
    outArgument2 = p->mAttribute_mIsExtern ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineMap::getter_mLexicalRoutineFormalArgumentListForKey (const GALGAS_string & inKey,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mAttribute_mLexicalRoutineFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_lexicalRoutineMap::getter_mErrorMessageListForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mAttribute_mErrorMessageList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalRoutineMap::getter_mIsExternForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mAttribute_mIsExtern ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::setter_setMLexicalRoutineFormalArgumentListForKey (GALGAS_lexicalRoutineFormalArgumentList inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mAttribute_mLexicalRoutineFormalArgumentList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::setter_setMErrorMessageListForKey (GALGAS_stringlist inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mAttribute_mErrorMessageList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::setter_setMIsExternForKey (GALGAS_bool inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mAttribute_mIsExtern = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalRoutineMap * GALGAS_lexicalRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * result = (cMapElement_lexicalRoutineMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalRoutineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRoutineMap::cEnumerator_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap_2D_element cEnumerator_lexicalRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return GALGAS_lexicalRoutineMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalRoutineFormalArgumentList, p->mAttribute_mErrorMessageList, p->mAttribute_mIsExtern) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList cEnumerator_lexicalRoutineMap::current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mAttribute_mLexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_lexicalRoutineMap::current_mErrorMessageList (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mAttribute_mErrorMessageList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_lexicalRoutineMap::current_mIsExtern (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mAttribute_mIsExtern ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @lexicalRoutineMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineMap ("lexicalRoutineMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  const GALGAS_lexicalRoutineMap * p = (const GALGAS_lexicalRoutineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@lexicalFunctionFormalArgumentList' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalFunctionFormalArgumentList : public cCollectionElement {
  public : GALGAS_lexicalFunctionFormalArgumentList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                 const GALGAS_string & in_mArgumentNameForComment
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

cCollectionElement_lexicalFunctionFormalArgumentList::cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                                                            const GALGAS_string & in_mArgumentNameForComment
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalType, in_mArgumentNameForComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalFunctionFormalArgumentList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalFunctionFormalArgumentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalFunctionFormalArgumentList (mObject.mAttribute_mLexicalType, mObject.mAttribute_mArgumentNameForComment COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalFunctionFormalArgumentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mObject.mAttribute_mLexicalType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentNameForComment" ":" ;
  mObject.mAttribute_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalFunctionFormalArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalFunctionFormalArgumentList * operand = (cCollectionElement_lexicalFunctionFormalArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList::GALGAS_lexicalFunctionFormalArgumentList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList::GALGAS_lexicalFunctionFormalArgumentList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::constructor_listWithValue (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                                                              const GALGAS_string & inOperand1
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                          const GALGAS_string & in_mArgumentNameForComment
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (in_mLexicalType,
                                                                       in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::addAssign_operation (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                    const GALGAS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::setter_insertAtIndex (const GALGAS_lexicalTypeEnum inOperand0,
                                                                     const GALGAS_string inOperand1,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::setter_removeAtIndex (GALGAS_lexicalTypeEnum & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
      outOperand0 = p->mObject.mAttribute_mLexicalType ;
      outOperand1 = p->mObject.mAttribute_mArgumentNameForComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::setter_popFirst (GALGAS_lexicalTypeEnum & outOperand0,
                                                                GALGAS_string & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
    outOperand1 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::setter_popLast (GALGAS_lexicalTypeEnum & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
    outOperand1 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::method_first (GALGAS_lexicalTypeEnum & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
    outOperand1 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::method_last (GALGAS_lexicalTypeEnum & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
    outOperand1 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::add_operation (const GALGAS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::plusAssign_operation (const GALGAS_lexicalFunctionFormalArgumentList inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionFormalArgumentList::getter_mLexicalTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mAttribute_mLexicalType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalFunctionFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mAttribute_mArgumentNameForComment ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalFunctionFormalArgumentList::cEnumerator_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element cEnumerator_lexicalFunctionFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalFunctionFormalArgumentList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mAttribute_mLexicalType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexicalFunctionFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mAttribute_mArgumentNameForComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalFunctionFormalArgumentList type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ("lexicalFunctionFormalArgumentList",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionFormalArgumentList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  const GALGAS_lexicalFunctionFormalArgumentList * p = (const GALGAS_lexicalFunctionFormalArgumentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalFunctionMap::cMapElement_lexicalFunctionMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                                                const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                                                const GALGAS_string & in_mReplacementFunctionName,
                                                                const GALGAS_bool & in_mIsExtern
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalTypeList (in_mLexicalTypeList),
mAttribute_mReturnedLexicalType (in_mReturnedLexicalType),
mAttribute_mReplacementFunctionName (in_mReplacementFunctionName),
mAttribute_mIsExtern (in_mIsExtern) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalFunctionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalTypeList.isValid () && mAttribute_mReturnedLexicalType.isValid () && mAttribute_mReplacementFunctionName.isValid () && mAttribute_mIsExtern.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalFunctionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalFunctionMap (mAttribute_lkey, mAttribute_mLexicalTypeList, mAttribute_mReturnedLexicalType, mAttribute_mReplacementFunctionName, mAttribute_mIsExtern COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalFunctionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalTypeList" ":" ;
  mAttribute_mLexicalTypeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedLexicalType" ":" ;
  mAttribute_mReturnedLexicalType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementFunctionName" ":" ;
  mAttribute_mReplacementFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExtern" ":" ;
  mAttribute_mIsExtern.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalFunctionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalFunctionMap * operand = (cMapElement_lexicalFunctionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalTypeList.objectCompare (operand->mAttribute_mLexicalTypeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnedLexicalType.objectCompare (operand->mAttribute_mReturnedLexicalType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReplacementFunctionName.objectCompare (operand->mAttribute_mReplacementFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsExtern.objectCompare (operand->mAttribute_mIsExtern) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap::GALGAS_lexicalFunctionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap::GALGAS_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap & GALGAS_lexicalFunctionMap::operator = (const GALGAS_lexicalFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::constructor_mapWithMapToOverride (const GALGAS_lexicalFunctionMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_lexicalFunctionFormalArgumentList & inArgument0,
                                                     const GALGAS_lexicalTypeEnum & inArgument1,
                                                     const GALGAS_string & inArgument2,
                                                     const GALGAS_bool & inArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalFunctionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_lexicalFunctionFormalArgumentList inArgument0,
                                                  GALGAS_lexicalTypeEnum inArgument1,
                                                  GALGAS_string inArgument2,
                                                  GALGAS_bool inArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalFunctionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexical function has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalFunctionMap_searchKey = "the '%K' lexical function is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_lexicalFunctionFormalArgumentList & outArgument0,
                                                  GALGAS_lexicalTypeEnum & outArgument1,
                                                  GALGAS_string & outArgument2,
                                                  GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_lexicalFunctionMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    outArgument0 = p->mAttribute_mLexicalTypeList ;
    outArgument1 = p->mAttribute_mReturnedLexicalType ;
    outArgument2 = p->mAttribute_mReplacementFunctionName ;
    outArgument3 = p->mAttribute_mIsExtern ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionMap::getter_mLexicalTypeListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mLexicalTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionMap::getter_mReturnedLexicalTypeForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mReturnedLexicalType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalFunctionMap::getter_mReplacementFunctionNameForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mReplacementFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalFunctionMap::getter_mIsExternForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mIsExtern ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::setter_setMLexicalTypeListForKey (GALGAS_lexicalFunctionFormalArgumentList inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mLexicalTypeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::setter_setMReturnedLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mReturnedLexicalType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::setter_setMReplacementFunctionNameForKey (GALGAS_string inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mReplacementFunctionName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::setter_setMIsExternForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mIsExtern = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalFunctionMap * GALGAS_lexicalFunctionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * result = (cMapElement_lexicalFunctionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalFunctionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalFunctionMap::cEnumerator_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap_2D_element cEnumerator_lexicalFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return GALGAS_lexicalFunctionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalTypeList, p->mAttribute_mReturnedLexicalType, p->mAttribute_mReplacementFunctionName, p->mAttribute_mIsExtern) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList cEnumerator_lexicalFunctionMap::current_mLexicalTypeList (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mLexicalTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalFunctionMap::current_mReturnedLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mReturnedLexicalType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexicalFunctionMap::current_mReplacementFunctionName (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mReplacementFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_lexicalFunctionMap::current_mIsExtern (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mIsExtern ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalFunctionMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionMap ("lexicalFunctionMap",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  const GALGAS_lexicalFunctionMap * p = (const GALGAS_lexicalFunctionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@templateDelimitorList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateDelimitorList : public cCollectionElement {
  public : GALGAS_templateDelimitorList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateDelimitorList (const GALGAS_lstring & in_mStartString,
                                                     const GALGAS_lstring & in_mEndString,
                                                     const GALGAS_bool & in_mPreservesStartDelimiter
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

cCollectionElement_templateDelimitorList::cCollectionElement_templateDelimitorList (const GALGAS_lstring & in_mStartString,
                                                                                    const GALGAS_lstring & in_mEndString,
                                                                                    const GALGAS_bool & in_mPreservesStartDelimiter
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_mEndString, in_mPreservesStartDelimiter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateDelimitorList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateDelimitorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateDelimitorList (mObject.mAttribute_mStartString, mObject.mAttribute_mEndString, mObject.mAttribute_mPreservesStartDelimiter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateDelimitorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartString" ":" ;
  mObject.mAttribute_mStartString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndString" ":" ;
  mObject.mAttribute_mEndString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPreservesStartDelimiter" ":" ;
  mObject.mAttribute_mPreservesStartDelimiter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateDelimitorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateDelimitorList * operand = (cCollectionElement_templateDelimitorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateDelimitorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList::GALGAS_templateDelimitorList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList::GALGAS_templateDelimitorList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateDelimitorList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_bool & inOperand2
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateDelimitorList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateDelimitorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mStartString,
                                                              const GALGAS_lstring & in_mEndString,
                                                              const GALGAS_bool & in_mPreservesStartDelimiter
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = NULL ;
  macroMyNew (p, cCollectionElement_templateDelimitorList (in_mStartString,
                                                           in_mEndString,
                                                           in_mPreservesStartDelimiter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_bool & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateDelimitorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_bool inOperand2,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateDelimitorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_bool & outOperand2,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
      outOperand0 = p->mObject.mAttribute_mStartString ;
      outOperand1 = p->mObject.mAttribute_mEndString ;
      outOperand2 = p->mObject.mAttribute_mPreservesStartDelimiter ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mEndString ;
    outOperand2 = p->mObject.mAttribute_mPreservesStartDelimiter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_bool & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mEndString ;
    outOperand2 = p->mObject.mAttribute_mPreservesStartDelimiter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_bool & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mEndString ;
    outOperand2 = p->mObject.mAttribute_mPreservesStartDelimiter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_bool & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mEndString ;
    outOperand2 = p->mObject.mAttribute_mPreservesStartDelimiter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::add_operation (const GALGAS_templateDelimitorList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::plusAssign_operation (const GALGAS_templateDelimitorList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateDelimitorList::getter_mStartStringAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mAttribute_mStartString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateDelimitorList::getter_mEndStringAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mAttribute_mEndString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_templateDelimitorList::getter_mPreservesStartDelimiterAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mAttribute_mPreservesStartDelimiter ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateDelimitorList::cEnumerator_templateDelimitorList (const GALGAS_templateDelimitorList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList_2D_element cEnumerator_templateDelimitorList::current (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateDelimitorList::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mAttribute_mStartString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateDelimitorList::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mAttribute_mEndString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_templateDelimitorList::current_mPreservesStartDelimiter (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mAttribute_mPreservesStartDelimiter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @templateDelimitorList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateDelimitorList ("templateDelimitorList",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateDelimitorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateDelimitorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateDelimitorList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateDelimitorList result ;
  const GALGAS_templateDelimitorList * p = (const GALGAS_templateDelimitorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateDelimitorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_styleMap::cMapElement_styleMap (const GALGAS_lstring & inKey,
                                            const GALGAS_lstring & in_mComment,
                                            const GALGAS_uint & in_mStyleIndex
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mComment (in_mComment),
mAttribute_mStyleIndex (in_mStyleIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_styleMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mComment.isValid () && mAttribute_mStyleIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_styleMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_styleMap (mAttribute_lkey, mAttribute_mComment, mAttribute_mStyleIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_styleMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mAttribute_mComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyleIndex" ":" ;
  mAttribute_mStyleIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_styleMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_styleMap * operand = (cMapElement_styleMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mComment.objectCompare (operand->mAttribute_mComment) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStyleIndex.objectCompare (operand->mAttribute_mStyleIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap::GALGAS_styleMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap::GALGAS_styleMap (const GALGAS_styleMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap & GALGAS_styleMap::operator = (const GALGAS_styleMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_styleMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_styleMap::constructor_mapWithMapToOverride (const GALGAS_styleMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_styleMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_styleMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           const GALGAS_lstring & inArgument0,
                                           const GALGAS_uint & inArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * p = NULL ;
  macroMyNew (p, cMapElement_styleMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@styleMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::setter_insertKey (GALGAS_lstring inKey,
                                        GALGAS_lstring inArgument0,
                                        GALGAS_uint inArgument1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * p = NULL ;
  macroMyNew (p, cMapElement_styleMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' style is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_styleMap_searchKey = "the '%K' style is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::method_searchKey (GALGAS_lstring inKey,
                                        GALGAS_lstring & outArgument0,
                                        GALGAS_uint & outArgument1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_styleMap_searchKey
                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_styleMap) ;
    outArgument0 = p->mAttribute_mComment ;
    outArgument1 = p->mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_styleMap::getter_mCommentForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    result = p->mAttribute_mComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_styleMap::getter_mStyleIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    result = p->mAttribute_mStyleIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::setter_setMCommentForKey (GALGAS_lstring inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_styleMap * p = (cMapElement_styleMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    p->mAttribute_mComment = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::setter_setMStyleIndexForKey (GALGAS_uint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_styleMap * p = (cMapElement_styleMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    p->mAttribute_mStyleIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_styleMap * GALGAS_styleMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * result = (cMapElement_styleMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_styleMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_styleMap::cEnumerator_styleMap (const GALGAS_styleMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap_2D_element cEnumerator_styleMap::current (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return GALGAS_styleMap_2D_element (p->mAttribute_lkey, p->mAttribute_mComment, p->mAttribute_mStyleIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_styleMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_styleMap::current_mComment (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return p->mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_styleMap::current_mStyleIndex (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return p->mAttribute_mStyleIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @styleMap type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_styleMap ("styleMap",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_styleMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_styleMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_styleMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_styleMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_styleMap result ;
  const GALGAS_styleMap * p = (const GALGAS_styleMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_styleMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalTagMap::cMapElement_lexicalTagMap (const GALGAS_lstring & inKey
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalTagMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalTagMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalTagMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalTagMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalTagMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalTagMap * operand = (cMapElement_lexicalTagMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap::GALGAS_lexicalTagMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap::GALGAS_lexicalTagMap (const GALGAS_lexicalTagMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap & GALGAS_lexicalTagMap::operator = (const GALGAS_lexicalTagMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (const GALGAS_lexicalTagMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTagMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTagMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalTagMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalTagMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTagMap::setter_insertKey (GALGAS_lstring inKey,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalTagMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' tag is already declared in %L" ;
  const char * kShadowErrorMessage = "the '%K' tag declaration shadows the tag declared in %L" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalTagMap_searchKey = "the '%K' tag is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTagMap::method_searchKey (GALGAS_lstring inKey,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalTagMap * p = (const cMapElement_lexicalTagMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_lexicalTagMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_lexicalTagMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalTagMap * GALGAS_lexicalTagMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * result = (cMapElement_lexicalTagMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalTagMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalTagMap::cEnumerator_lexicalTagMap (const GALGAS_lexicalTagMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap_2D_element cEnumerator_lexicalTagMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalTagMap * p = (const cMapElement_lexicalTagMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTagMap) ;
  return GALGAS_lexicalTagMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalTagMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @lexicalTagMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagMap ("lexicalTagMap",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalTagMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalTagMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  const GALGAS_lexicalTagMap * p = (const GALGAS_lexicalTagMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTagMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST::GALGAS_optionDefaultValueEnumAST (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_noDefaultValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_unsignedDefaultValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_stringDefaultValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_optionDefaultValueEnumAST [4] = {
  "(not built)",
  "noDefaultValue",
  "unsignedDefaultValue",
  "stringDefaultValue"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_isNoDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noDefaultValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_isUnsignedDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unsignedDefaultValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_isStringDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stringDefaultValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionDefaultValueEnumAST::description (C_String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @optionDefaultValueEnumAST: " << gEnumNameArrayFor_optionDefaultValueEnumAST [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_optionDefaultValueEnumAST::objectCompare (const GALGAS_optionDefaultValueEnumAST & inOperand) const {
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
//                                           @optionDefaultValueEnumAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ("optionDefaultValueEnumAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionDefaultValueEnumAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionDefaultValueEnumAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionDefaultValueEnumAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  const GALGAS_optionDefaultValueEnumAST * p = (const GALGAS_optionDefaultValueEnumAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionDefaultValueEnumAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionDefaultValueEnumAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@commandLineOptionListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_commandLineOptionListAST : public cCollectionElement {
  public : GALGAS_commandLineOptionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_commandLineOptionListAST (const GALGAS_lstring & in_mOptionTypeName,
                                                        const GALGAS_lstring & in_mOptionInternalName,
                                                        const GALGAS_lchar & in_mOptionInvocationLetter,
                                                        const GALGAS_lstring & in_mOptionInvocationString,
                                                        const GALGAS_lstring & in_mOptionComment,
                                                        const GALGAS_lstring & in_mOptionDefaultValue,
                                                        const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
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

cCollectionElement_commandLineOptionListAST::cCollectionElement_commandLineOptionListAST (const GALGAS_lstring & in_mOptionTypeName,
                                                                                          const GALGAS_lstring & in_mOptionInternalName,
                                                                                          const GALGAS_lchar & in_mOptionInvocationLetter,
                                                                                          const GALGAS_lstring & in_mOptionInvocationString,
                                                                                          const GALGAS_lstring & in_mOptionComment,
                                                                                          const GALGAS_lstring & in_mOptionDefaultValue,
                                                                                          const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionTypeName, in_mOptionInternalName, in_mOptionInvocationLetter, in_mOptionInvocationString, in_mOptionComment, in_mOptionDefaultValue, in_mOptionDefaultValueKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_commandLineOptionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_commandLineOptionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_commandLineOptionListAST (mObject.mAttribute_mOptionTypeName, mObject.mAttribute_mOptionInternalName, mObject.mAttribute_mOptionInvocationLetter, mObject.mAttribute_mOptionInvocationString, mObject.mAttribute_mOptionComment, mObject.mAttribute_mOptionDefaultValue, mObject.mAttribute_mOptionDefaultValueKind COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_commandLineOptionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionTypeName" ":" ;
  mObject.mAttribute_mOptionTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionInternalName" ":" ;
  mObject.mAttribute_mOptionInternalName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionInvocationLetter" ":" ;
  mObject.mAttribute_mOptionInvocationLetter.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionInvocationString" ":" ;
  mObject.mAttribute_mOptionInvocationString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionComment" ":" ;
  mObject.mAttribute_mOptionComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionDefaultValue" ":" ;
  mObject.mAttribute_mOptionDefaultValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionDefaultValueKind" ":" ;
  mObject.mAttribute_mOptionDefaultValueKind.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_commandLineOptionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_commandLineOptionListAST * operand = (cCollectionElement_commandLineOptionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_commandLineOptionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST::GALGAS_commandLineOptionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST::GALGAS_commandLineOptionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_lchar & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_lstring & inOperand4,
                                                                                            const GALGAS_lstring & inOperand5,
                                                                                            const GALGAS_optionDefaultValueEnumAST & inOperand6
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_commandLineOptionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mOptionTypeName,
                                                                 const GALGAS_lstring & in_mOptionInternalName,
                                                                 const GALGAS_lchar & in_mOptionInvocationLetter,
                                                                 const GALGAS_lstring & in_mOptionInvocationString,
                                                                 const GALGAS_lstring & in_mOptionComment,
                                                                 const GALGAS_lstring & in_mOptionDefaultValue,
                                                                 const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_commandLineOptionListAST (in_mOptionTypeName,
                                                              in_mOptionInternalName,
                                                              in_mOptionInvocationLetter,
                                                              in_mOptionInvocationString,
                                                              in_mOptionComment,
                                                              in_mOptionDefaultValue,
                                                              in_mOptionDefaultValueKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1,
                                                           const GALGAS_lchar & inOperand2,
                                                           const GALGAS_lstring & inOperand3,
                                                           const GALGAS_lstring & inOperand4,
                                                           const GALGAS_lstring & inOperand5,
                                                           const GALGAS_optionDefaultValueEnumAST & inOperand6
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_commandLineOptionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_lchar inOperand2,
                                                            const GALGAS_lstring inOperand3,
                                                            const GALGAS_lstring inOperand4,
                                                            const GALGAS_lstring inOperand5,
                                                            const GALGAS_optionDefaultValueEnumAST inOperand6,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_commandLineOptionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lchar & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            GALGAS_lstring & outOperand5,
                                                            GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
      outOperand0 = p->mObject.mAttribute_mOptionTypeName ;
      outOperand1 = p->mObject.mAttribute_mOptionInternalName ;
      outOperand2 = p->mObject.mAttribute_mOptionInvocationLetter ;
      outOperand3 = p->mObject.mAttribute_mOptionInvocationString ;
      outOperand4 = p->mObject.mAttribute_mOptionComment ;
      outOperand5 = p->mObject.mAttribute_mOptionDefaultValue ;
      outOperand6 = p->mObject.mAttribute_mOptionDefaultValueKind ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lchar & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       GALGAS_lstring & outOperand4,
                                                       GALGAS_lstring & outOperand5,
                                                       GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mAttribute_mOptionTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionInternalName ;
    outOperand2 = p->mObject.mAttribute_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mAttribute_mOptionInvocationString ;
    outOperand4 = p->mObject.mAttribute_mOptionComment ;
    outOperand5 = p->mObject.mAttribute_mOptionDefaultValue ;
    outOperand6 = p->mObject.mAttribute_mOptionDefaultValueKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lchar & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_lstring & outOperand4,
                                                      GALGAS_lstring & outOperand5,
                                                      GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mAttribute_mOptionTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionInternalName ;
    outOperand2 = p->mObject.mAttribute_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mAttribute_mOptionInvocationString ;
    outOperand4 = p->mObject.mAttribute_mOptionComment ;
    outOperand5 = p->mObject.mAttribute_mOptionDefaultValue ;
    outOperand6 = p->mObject.mAttribute_mOptionDefaultValueKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lchar & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_lstring & outOperand4,
                                                    GALGAS_lstring & outOperand5,
                                                    GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mAttribute_mOptionTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionInternalName ;
    outOperand2 = p->mObject.mAttribute_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mAttribute_mOptionInvocationString ;
    outOperand4 = p->mObject.mAttribute_mOptionComment ;
    outOperand5 = p->mObject.mAttribute_mOptionDefaultValue ;
    outOperand6 = p->mObject.mAttribute_mOptionDefaultValueKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lchar & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   GALGAS_lstring & outOperand4,
                                                   GALGAS_lstring & outOperand5,
                                                   GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mAttribute_mOptionTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionInternalName ;
    outOperand2 = p->mObject.mAttribute_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mAttribute_mOptionInvocationString ;
    outOperand4 = p->mObject.mAttribute_mOptionComment ;
    outOperand5 = p->mObject.mAttribute_mOptionDefaultValue ;
    outOperand6 = p->mObject.mAttribute_mOptionDefaultValueKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::add_operation (const GALGAS_commandLineOptionListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result = GALGAS_commandLineOptionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result = GALGAS_commandLineOptionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result = GALGAS_commandLineOptionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::plusAssign_operation (const GALGAS_commandLineOptionListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionInternalNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionInternalName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_commandLineOptionListAST::getter_mOptionInvocationLetterAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lchar result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionInvocationLetter ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionInvocationStringAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionInvocationString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionCommentAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionDefaultValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionDefaultValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_commandLineOptionListAST::getter_mOptionDefaultValueKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_optionDefaultValueEnumAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionDefaultValueKind ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_commandLineOptionListAST::cEnumerator_commandLineOptionListAST (const GALGAS_commandLineOptionListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST_2D_element cEnumerator_commandLineOptionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionInternalName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionInternalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar cEnumerator_commandLineOptionListAST::current_mOptionInvocationLetter (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionInvocationLetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionInvocationString (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionInvocationString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionComment (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST cEnumerator_commandLineOptionListAST::current_mOptionDefaultValueKind (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionDefaultValueKind ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @commandLineOptionListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionListAST ("commandLineOptionListAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_commandLineOptionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_commandLineOptionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST result ;
  const GALGAS_commandLineOptionListAST * p = (const GALGAS_commandLineOptionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_commandLineOptionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_commandLineOptionMap::cMapElement_commandLineOptionMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_char & in_mOptionChar,
                                                                    const GALGAS_string & in_mOptionString,
                                                                    const GALGAS_string & in_mComment,
                                                                    const GALGAS_string & in_mDefaultValue
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mOptionChar (in_mOptionChar),
mAttribute_mOptionString (in_mOptionString),
mAttribute_mComment (in_mComment),
mAttribute_mDefaultValue (in_mDefaultValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_commandLineOptionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOptionChar.isValid () && mAttribute_mOptionString.isValid () && mAttribute_mComment.isValid () && mAttribute_mDefaultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_commandLineOptionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_commandLineOptionMap (mAttribute_lkey, mAttribute_mOptionChar, mAttribute_mOptionString, mAttribute_mComment, mAttribute_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_commandLineOptionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionChar" ":" ;
  mAttribute_mOptionChar.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionString" ":" ;
  mAttribute_mOptionString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mAttribute_mComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValue" ":" ;
  mAttribute_mDefaultValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_commandLineOptionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_commandLineOptionMap * operand = (cMapElement_commandLineOptionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOptionChar.objectCompare (operand->mAttribute_mOptionChar) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionString.objectCompare (operand->mAttribute_mOptionString) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mComment.objectCompare (operand->mAttribute_mComment) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDefaultValue.objectCompare (operand->mAttribute_mDefaultValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap::GALGAS_commandLineOptionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap::GALGAS_commandLineOptionMap (const GALGAS_commandLineOptionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap & GALGAS_commandLineOptionMap::operator = (const GALGAS_commandLineOptionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_commandLineOptionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::constructor_mapWithMapToOverride (const GALGAS_commandLineOptionMap & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_char & inArgument0,
                                                       const GALGAS_string & inArgument1,
                                                       const GALGAS_string & inArgument2,
                                                       const GALGAS_string & inArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_commandLineOptionMap * p = NULL ;
  macroMyNew (p, cMapElement_commandLineOptionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@commandLineOptionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_char inArgument0,
                                                    GALGAS_string inArgument1,
                                                    GALGAS_string inArgument2,
                                                    GALGAS_string inArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_commandLineOptionMap * p = NULL ;
  macroMyNew (p, cMapElement_commandLineOptionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' command line option has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_commandLineOptionMap_searchKey = "the '%K' command line option is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_char & outArgument0,
                                                    GALGAS_string & outArgument1,
                                                    GALGAS_string & outArgument2,
                                                    GALGAS_string & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_commandLineOptionMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    outArgument0 = p->mAttribute_mOptionChar ;
    outArgument1 = p->mAttribute_mOptionString ;
    outArgument2 = p->mAttribute_mComment ;
    outArgument3 = p->mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_commandLineOptionMap::getter_mOptionCharForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_char result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mOptionChar ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap::getter_mOptionStringForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mOptionString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap::getter_mCommentForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap::getter_mDefaultValueForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mDefaultValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::setter_setMOptionCharForKey (GALGAS_char inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mOptionChar = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::setter_setMOptionStringForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mOptionString = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::setter_setMCommentForKey (GALGAS_string inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mComment = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::setter_setMDefaultValueForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mDefaultValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_commandLineOptionMap * GALGAS_commandLineOptionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_commandLineOptionMap * result = (cMapElement_commandLineOptionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_commandLineOptionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_commandLineOptionMap::cEnumerator_commandLineOptionMap (const GALGAS_commandLineOptionMap & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap_2D_element cEnumerator_commandLineOptionMap::current (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return GALGAS_commandLineOptionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mOptionChar, p->mAttribute_mOptionString, p->mAttribute_mComment, p->mAttribute_mDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char cEnumerator_commandLineOptionMap::current_mOptionChar (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_commandLineOptionMap::current_mOptionString (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_commandLineOptionMap::current_mComment (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_commandLineOptionMap::current_mDefaultValue (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mDefaultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @commandLineOptionMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionMap ("commandLineOptionMap",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_commandLineOptionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_commandLineOptionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap result ;
  const GALGAS_commandLineOptionMap * p = (const GALGAS_commandLineOptionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_commandLineOptionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@guiSimpleAttributeListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_guiSimpleAttributeListAST : public cCollectionElement {
  public : GALGAS_guiSimpleAttributeListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_guiSimpleAttributeListAST (const GALGAS_lstring & in_mKey,
                                                         const GALGAS_lstring & in_mValue
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

cCollectionElement_guiSimpleAttributeListAST::cCollectionElement_guiSimpleAttributeListAST (const GALGAS_lstring & in_mKey,
                                                                                            const GALGAS_lstring & in_mValue
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_guiSimpleAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_guiSimpleAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiSimpleAttributeListAST (mObject.mAttribute_mKey, mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_guiSimpleAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKey" ":" ;
  mObject.mAttribute_mKey.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_guiSimpleAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiSimpleAttributeListAST * operand = (cCollectionElement_guiSimpleAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiSimpleAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST::GALGAS_guiSimpleAttributeListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST::GALGAS_guiSimpleAttributeListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_guiSimpleAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mKey,
                                                                  const GALGAS_lstring & in_mValue
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_guiSimpleAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (in_mKey,
                                                               in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lstring & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
      outOperand0 = p->mObject.mAttribute_mKey ;
      outOperand1 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::add_operation (const GALGAS_guiSimpleAttributeListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::plusAssign_operation (const GALGAS_guiSimpleAttributeListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiSimpleAttributeListAST::getter_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    result = p->mObject.mAttribute_mKey ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiSimpleAttributeListAST::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiSimpleAttributeListAST::cEnumerator_guiSimpleAttributeListAST (const GALGAS_guiSimpleAttributeListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST_2D_element cEnumerator_guiSimpleAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiSimpleAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject.mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiSimpleAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @guiSimpleAttributeListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ("guiSimpleAttributeListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiSimpleAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiSimpleAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiSimpleAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST result ;
  const GALGAS_guiSimpleAttributeListAST * p = (const GALGAS_guiSimpleAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiSimpleAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiSimpleAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@guiCompoundAttributeListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_guiCompoundAttributeListAST : public cCollectionElement {
  public : GALGAS_guiCompoundAttributeListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_guiCompoundAttributeListAST (const GALGAS_lstring & in_mKey,
                                                           const GALGAS_lstring & in_mAttributeName,
                                                           const GALGAS_lstring & in_mValue
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

cCollectionElement_guiCompoundAttributeListAST::cCollectionElement_guiCompoundAttributeListAST (const GALGAS_lstring & in_mKey,
                                                                                                const GALGAS_lstring & in_mAttributeName,
                                                                                                const GALGAS_lstring & in_mValue
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mAttributeName, in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_guiCompoundAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_guiCompoundAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiCompoundAttributeListAST (mObject.mAttribute_mKey, mObject.mAttribute_mAttributeName, mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_guiCompoundAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKey" ":" ;
  mObject.mAttribute_mKey.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_guiCompoundAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiCompoundAttributeListAST * operand = (cCollectionElement_guiCompoundAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiCompoundAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST::GALGAS_guiCompoundAttributeListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST::GALGAS_guiCompoundAttributeListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_guiCompoundAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mKey,
                                                                    const GALGAS_lstring & in_mAttributeName,
                                                                    const GALGAS_lstring & in_mValue
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCompoundAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (in_mKey,
                                                                 in_mAttributeName,
                                                                 in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_lstring & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_lstring inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
      outOperand0 = p->mObject.mAttribute_mKey ;
      outOperand1 = p->mObject.mAttribute_mAttributeName ;
      outOperand2 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::add_operation (const GALGAS_guiCompoundAttributeListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::plusAssign_operation (const GALGAS_guiCompoundAttributeListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::getter_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mAttribute_mKey ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mAttribute_mAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiCompoundAttributeListAST::cEnumerator_guiCompoundAttributeListAST (const GALGAS_guiCompoundAttributeListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST_2D_element cEnumerator_guiCompoundAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @guiCompoundAttributeListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ("guiCompoundAttributeListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiCompoundAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiCompoundAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCompoundAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST result ;
  const GALGAS_guiCompoundAttributeListAST * p = (const GALGAS_guiCompoundAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiCompoundAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCompoundAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@terminalLabelListAST' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_terminalLabelListAST : public cCollectionElement {
  public : GALGAS_terminalLabelListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_terminalLabelListAST (const GALGAS_lstring & in_mTerminal,
                                                    const GALGAS_uint & in_mDisplayFlags
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

cCollectionElement_terminalLabelListAST::cCollectionElement_terminalLabelListAST (const GALGAS_lstring & in_mTerminal,
                                                                                  const GALGAS_uint & in_mDisplayFlags
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTerminal, in_mDisplayFlags) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_terminalLabelListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_terminalLabelListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalLabelListAST (mObject.mAttribute_mTerminal, mObject.mAttribute_mDisplayFlags COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_terminalLabelListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminal" ":" ;
  mObject.mAttribute_mTerminal.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDisplayFlags" ":" ;
  mObject.mAttribute_mDisplayFlags.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_terminalLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalLabelListAST * operand = (cCollectionElement_terminalLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST::GALGAS_terminalLabelListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST::GALGAS_terminalLabelListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_terminalLabelListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uint & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_terminalLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mTerminal,
                                                             const GALGAS_uint & in_mDisplayFlags
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalLabelListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_terminalLabelListAST (in_mTerminal,
                                                          in_mDisplayFlags COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_uint & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalLabelListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_uint inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalLabelListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_uint & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
      outOperand0 = p->mObject.mAttribute_mTerminal ;
      outOperand1 = p->mObject.mAttribute_mDisplayFlags ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_uint & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mTerminal ;
    outOperand1 = p->mObject.mAttribute_mDisplayFlags ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mTerminal ;
    outOperand1 = p->mObject.mAttribute_mDisplayFlags ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_uint & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mTerminal ;
    outOperand1 = p->mObject.mAttribute_mDisplayFlags ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mTerminal ;
    outOperand1 = p->mObject.mAttribute_mDisplayFlags ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::add_operation (const GALGAS_terminalLabelListAST & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result = GALGAS_terminalLabelListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result = GALGAS_terminalLabelListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result = GALGAS_terminalLabelListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::plusAssign_operation (const GALGAS_terminalLabelListAST inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalLabelListAST::getter_mTerminalAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    result = p->mObject.mAttribute_mTerminal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalLabelListAST::getter_mDisplayFlagsAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    result = p->mObject.mAttribute_mDisplayFlags ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalLabelListAST::cEnumerator_terminalLabelListAST (const GALGAS_terminalLabelListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST_2D_element cEnumerator_terminalLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalLabelListAST::current_mTerminal (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mAttribute_mTerminal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_terminalLabelListAST::current_mDisplayFlags (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mAttribute_mDisplayFlags ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @terminalLabelListAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalLabelListAST ("terminalLabelListAST",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalLabelListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST result ;
  const GALGAS_terminalLabelListAST * p = (const GALGAS_terminalLabelListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@guiLabelListAST' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_guiLabelListAST : public cCollectionElement {
  public : GALGAS_guiLabelListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_guiLabelListAST (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                               const GALGAS_terminalLabelListAST & in_mTerminalList,
                                               const GALGAS_location & in_mLocation
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

cCollectionElement_guiLabelListAST::cCollectionElement_guiLabelListAST (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                                        const GALGAS_terminalLabelListAST & in_mTerminalList,
                                                                        const GALGAS_location & in_mLocation
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLeadingCharacterStrippedCount, in_mTerminalList, in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_guiLabelListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_guiLabelListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiLabelListAST (mObject.mAttribute_mLeadingCharacterStrippedCount, mObject.mAttribute_mTerminalList, mObject.mAttribute_mLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_guiLabelListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLeadingCharacterStrippedCount" ":" ;
  mObject.mAttribute_mLeadingCharacterStrippedCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalList" ":" ;
  mObject.mAttribute_mTerminalList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocation" ":" ;
  mObject.mAttribute_mLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_guiLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiLabelListAST * operand = (cCollectionElement_guiLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST::GALGAS_guiLabelListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST::GALGAS_guiLabelListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_guiLabelListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                          const GALGAS_terminalLabelListAST & inOperand1,
                                                                          const GALGAS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_guiLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                        const GALGAS_terminalLabelListAST & in_mTerminalList,
                                                        const GALGAS_location & in_mLocation
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_guiLabelListAST (in_mLeadingCharacterStrippedCount,
                                                     in_mTerminalList,
                                                     in_mLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::addAssign_operation (const GALGAS_uint & inOperand0,
                                                  const GALGAS_terminalLabelListAST & inOperand1,
                                                  const GALGAS_location & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                   const GALGAS_terminalLabelListAST inOperand1,
                                                   const GALGAS_location inOperand2,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                   GALGAS_terminalLabelListAST & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
      outOperand0 = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
      outOperand1 = p->mObject.mAttribute_mTerminalList ;
      outOperand2 = p->mObject.mAttribute_mLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::setter_popFirst (GALGAS_uint & outOperand0,
                                              GALGAS_terminalLabelListAST & outOperand1,
                                              GALGAS_location & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mAttribute_mTerminalList ;
    outOperand2 = p->mObject.mAttribute_mLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::setter_popLast (GALGAS_uint & outOperand0,
                                             GALGAS_terminalLabelListAST & outOperand1,
                                             GALGAS_location & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mAttribute_mTerminalList ;
    outOperand2 = p->mObject.mAttribute_mLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::method_first (GALGAS_uint & outOperand0,
                                           GALGAS_terminalLabelListAST & outOperand1,
                                           GALGAS_location & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mAttribute_mTerminalList ;
    outOperand2 = p->mObject.mAttribute_mLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::method_last (GALGAS_uint & outOperand0,
                                          GALGAS_terminalLabelListAST & outOperand1,
                                          GALGAS_location & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mAttribute_mTerminalList ;
    outOperand2 = p->mObject.mAttribute_mLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::plusAssign_operation (const GALGAS_guiLabelListAST inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_guiLabelListAST::getter_mLeadingCharacterStrippedCountAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_guiLabelListAST::getter_mTerminalListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_terminalLabelListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mAttribute_mTerminalList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_guiLabelListAST::getter_mLocationAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mAttribute_mLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiLabelListAST::cEnumerator_guiLabelListAST (const GALGAS_guiLabelListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element cEnumerator_guiLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_guiLabelListAST::current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST cEnumerator_guiLabelListAST::current_mTerminalList (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mAttribute_mTerminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_guiLabelListAST::current_mLocation (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mAttribute_mLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @guiLabelListAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiLabelListAST ("guiLabelListAST",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiLabelListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST result ;
  const GALGAS_guiLabelListAST * p = (const GALGAS_guiLabelListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@withLexiqueListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_withLexiqueListAST : public cCollectionElement {
  public : GALGAS_withLexiqueListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_withLexiqueListAST (const GALGAS_lstring & in_mLexiqueFileName,
                                                  const GALGAS_guiLabelListAST & in_mLabels,
                                                  const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                  const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
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

cCollectionElement_withLexiqueListAST::cCollectionElement_withLexiqueListAST (const GALGAS_lstring & in_mLexiqueFileName,
                                                                              const GALGAS_guiLabelListAST & in_mLabels,
                                                                              const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                                              const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexiqueFileName, in_mLabels, in_mSimpleAttributes, in_mCompoundAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_withLexiqueListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_withLexiqueListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_withLexiqueListAST (mObject.mAttribute_mLexiqueFileName, mObject.mAttribute_mLabels, mObject.mAttribute_mSimpleAttributes, mObject.mAttribute_mCompoundAttributes COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_withLexiqueListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueFileName" ":" ;
  mObject.mAttribute_mLexiqueFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabels" ":" ;
  mObject.mAttribute_mLabels.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSimpleAttributes" ":" ;
  mObject.mAttribute_mSimpleAttributes.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCompoundAttributes" ":" ;
  mObject.mAttribute_mCompoundAttributes.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_withLexiqueListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_withLexiqueListAST * operand = (cCollectionElement_withLexiqueListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_withLexiqueListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST::GALGAS_withLexiqueListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST::GALGAS_withLexiqueListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_withLexiqueListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_guiLabelListAST & inOperand1,
                                                                                const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                const GALGAS_guiCompoundAttributeListAST & inOperand3
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_withLexiqueListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_lstring & in_mLexiqueFileName,
                                                           const GALGAS_guiLabelListAST & in_mLabels,
                                                           const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                           const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_withLexiqueListAST (in_mLexiqueFileName,
                                                        in_mLabels,
                                                        in_mSimpleAttributes,
                                                        in_mCompoundAttributes COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                     const GALGAS_guiLabelListAST & inOperand1,
                                                     const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                     const GALGAS_guiCompoundAttributeListAST & inOperand3
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_withLexiqueListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                      const GALGAS_guiLabelListAST inOperand1,
                                                      const GALGAS_guiSimpleAttributeListAST inOperand2,
                                                      const GALGAS_guiCompoundAttributeListAST inOperand3,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_withLexiqueListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                      GALGAS_guiLabelListAST & outOperand1,
                                                      GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                      GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
      outOperand0 = p->mObject.mAttribute_mLexiqueFileName ;
      outOperand1 = p->mObject.mAttribute_mLabels ;
      outOperand2 = p->mObject.mAttribute_mSimpleAttributes ;
      outOperand3 = p->mObject.mAttribute_mCompoundAttributes ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                 GALGAS_guiLabelListAST & outOperand1,
                                                 GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                 GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueFileName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
    outOperand2 = p->mObject.mAttribute_mSimpleAttributes ;
    outOperand3 = p->mObject.mAttribute_mCompoundAttributes ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                GALGAS_guiLabelListAST & outOperand1,
                                                GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueFileName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
    outOperand2 = p->mObject.mAttribute_mSimpleAttributes ;
    outOperand3 = p->mObject.mAttribute_mCompoundAttributes ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::method_first (GALGAS_lstring & outOperand0,
                                              GALGAS_guiLabelListAST & outOperand1,
                                              GALGAS_guiSimpleAttributeListAST & outOperand2,
                                              GALGAS_guiCompoundAttributeListAST & outOperand3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueFileName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
    outOperand2 = p->mObject.mAttribute_mSimpleAttributes ;
    outOperand3 = p->mObject.mAttribute_mCompoundAttributes ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::method_last (GALGAS_lstring & outOperand0,
                                             GALGAS_guiLabelListAST & outOperand1,
                                             GALGAS_guiSimpleAttributeListAST & outOperand2,
                                             GALGAS_guiCompoundAttributeListAST & outOperand3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueFileName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
    outOperand2 = p->mObject.mAttribute_mSimpleAttributes ;
    outOperand3 = p->mObject.mAttribute_mCompoundAttributes ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::plusAssign_operation (const GALGAS_withLexiqueListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_withLexiqueListAST::getter_mLexiqueFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mAttribute_mLexiqueFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_withLexiqueListAST::getter_mLabelsAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiLabelListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mAttribute_mLabels ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_withLexiqueListAST::getter_mSimpleAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiSimpleAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mAttribute_mSimpleAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_withLexiqueListAST::getter_mCompoundAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiCompoundAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mAttribute_mCompoundAttributes ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_withLexiqueListAST::cEnumerator_withLexiqueListAST (const GALGAS_withLexiqueListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST_2D_element cEnumerator_withLexiqueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_withLexiqueListAST::current_mLexiqueFileName (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mAttribute_mLexiqueFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST cEnumerator_withLexiqueListAST::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mAttribute_mLabels ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST cEnumerator_withLexiqueListAST::current_mSimpleAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mAttribute_mSimpleAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST cEnumerator_withLexiqueListAST::current_mCompoundAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mAttribute_mCompoundAttributes ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @withLexiqueListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_withLexiqueListAST ("withLexiqueListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_withLexiqueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_withLexiqueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_withLexiqueListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST result ;
  const GALGAS_withLexiqueListAST * p = (const GALGAS_withLexiqueListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_withLexiqueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@guiCommandLineOptionList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_guiCommandLineOptionList : public cCollectionElement {
  public : GALGAS_guiCommandLineOptionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_guiCommandLineOptionList (const GALGAS_string & in_mOptionComponent,
                                                        const GALGAS_string & in_mOptionIdentifier,
                                                        const GALGAS_char & in_mOptionChar,
                                                        const GALGAS_string & in_mOptionString,
                                                        const GALGAS_string & in_mComment
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

cCollectionElement_guiCommandLineOptionList::cCollectionElement_guiCommandLineOptionList (const GALGAS_string & in_mOptionComponent,
                                                                                          const GALGAS_string & in_mOptionIdentifier,
                                                                                          const GALGAS_char & in_mOptionChar,
                                                                                          const GALGAS_string & in_mOptionString,
                                                                                          const GALGAS_string & in_mComment
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionComponent, in_mOptionIdentifier, in_mOptionChar, in_mOptionString, in_mComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_guiCommandLineOptionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_guiCommandLineOptionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiCommandLineOptionList (mObject.mAttribute_mOptionComponent, mObject.mAttribute_mOptionIdentifier, mObject.mAttribute_mOptionChar, mObject.mAttribute_mOptionString, mObject.mAttribute_mComment COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_guiCommandLineOptionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionComponent" ":" ;
  mObject.mAttribute_mOptionComponent.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionIdentifier" ":" ;
  mObject.mAttribute_mOptionIdentifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionChar" ":" ;
  mObject.mAttribute_mOptionChar.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionString" ":" ;
  mObject.mAttribute_mOptionString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mObject.mAttribute_mComment.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_guiCommandLineOptionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiCommandLineOptionList * operand = (cCollectionElement_guiCommandLineOptionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiCommandLineOptionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList::GALGAS_guiCommandLineOptionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList::GALGAS_guiCommandLineOptionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_char & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_string & inOperand4
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_guiCommandLineOptionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_string & in_mOptionComponent,
                                                                 const GALGAS_string & in_mOptionIdentifier,
                                                                 const GALGAS_char & in_mOptionChar,
                                                                 const GALGAS_string & in_mOptionString,
                                                                 const GALGAS_string & in_mComment
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = NULL ;
  macroMyNew (p, cCollectionElement_guiCommandLineOptionList (in_mOptionComponent,
                                                              in_mOptionIdentifier,
                                                              in_mOptionChar,
                                                              in_mOptionString,
                                                              in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::addAssign_operation (const GALGAS_string & inOperand0,
                                                           const GALGAS_string & inOperand1,
                                                           const GALGAS_char & inOperand2,
                                                           const GALGAS_string & inOperand3,
                                                           const GALGAS_string & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                            const GALGAS_string inOperand1,
                                                            const GALGAS_char inOperand2,
                                                            const GALGAS_string inOperand3,
                                                            const GALGAS_string inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_char & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            GALGAS_string & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
      outOperand0 = p->mObject.mAttribute_mOptionComponent ;
      outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
      outOperand2 = p->mObject.mAttribute_mOptionChar ;
      outOperand3 = p->mObject.mAttribute_mOptionString ;
      outOperand4 = p->mObject.mAttribute_mComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::plusAssign_operation (const GALGAS_guiCommandLineOptionList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionComponentAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mAttribute_mOptionComponent ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionIdentifierAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mAttribute_mOptionIdentifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_guiCommandLineOptionList::getter_mOptionCharAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_char result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mAttribute_mOptionChar ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionStringAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mAttribute_mOptionString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mCommentAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mAttribute_mComment ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiCommandLineOptionList::cEnumerator_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element cEnumerator_guiCommandLineOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionComponent (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mOptionComponent ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mOptionIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char cEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @guiCommandLineOptionList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCommandLineOptionList ("guiCommandLineOptionList",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiCommandLineOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiCommandLineOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCommandLineOptionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  const GALGAS_guiCommandLineOptionList * p = (const GALGAS_guiCommandLineOptionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiCommandLineOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMap::cMapElement_extensionMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_string & in_mLexiqueName
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexiqueName (in_mLexiqueName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexiqueName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionMap (mAttribute_lkey, mAttribute_mLexiqueName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueName" ":" ;
  mAttribute_mLexiqueName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMap * operand = (cMapElement_extensionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (operand->mAttribute_mLexiqueName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap::GALGAS_extensionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap::GALGAS_extensionMap (const GALGAS_extensionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap & GALGAS_extensionMap::operator = (const GALGAS_extensionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_extensionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_extensionMap::constructor_mapWithMapToOverride (const GALGAS_extensionMap & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_extensionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_string & inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * p = NULL ;
  macroMyNew (p, cMapElement_extensionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMap::setter_insertKey (GALGAS_lstring inKey,
                                            GALGAS_string inArgument0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * p = NULL ;
  macroMyNew (p, cMapElement_extensionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extensionMap::getter_mLexiqueNameForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    result = p->mAttribute_mLexiqueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMap::setter_setMLexiqueNameForKey (GALGAS_string inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_extensionMap * p = (cMapElement_extensionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    p->mAttribute_mLexiqueName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMap * GALGAS_extensionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * result = (cMapElement_extensionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionMap::cEnumerator_extensionMap (const GALGAS_extensionMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap_2D_element cEnumerator_extensionMap::current (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return GALGAS_extensionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexiqueName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return p->mAttribute_mLexiqueName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @extensionMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMap ("extensionMap",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_extensionMap::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  const GALGAS_extensionMap * p = (const GALGAS_extensionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@textMacroList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_textMacroList : public cCollectionElement {
  public : GALGAS_textMacroList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_textMacroList (const GALGAS_string & in_mKey,
                                             const GALGAS_string & in_mContents
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

cCollectionElement_textMacroList::cCollectionElement_textMacroList (const GALGAS_string & in_mKey,
                                                                    const GALGAS_string & in_mContents
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mContents) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_textMacroList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_textMacroList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_textMacroList (mObject.mAttribute_mKey, mObject.mAttribute_mContents COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_textMacroList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKey" ":" ;
  mObject.mAttribute_mKey.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mContents" ":" ;
  mObject.mAttribute_mContents.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_textMacroList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_textMacroList * operand = (cCollectionElement_textMacroList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_textMacroList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList::GALGAS_textMacroList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList::GALGAS_textMacroList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_textMacroList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                      const GALGAS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_textMacroList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_textMacroList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mKey,
                                                      const GALGAS_string & in_mContents
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_textMacroList * p = NULL ;
  macroMyNew (p, cCollectionElement_textMacroList (in_mKey,
                                                   in_mContents COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_textMacroList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_textMacroList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_textMacroList) ;
      outOperand0 = p->mObject.mAttribute_mKey ;
      outOperand1 = p->mObject.mAttribute_mContents ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::plusAssign_operation (const GALGAS_textMacroList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_textMacroList::getter_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    result = p->mObject.mAttribute_mKey ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_textMacroList::getter_mContentsAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    result = p->mObject.mAttribute_mContents ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_textMacroList::cEnumerator_textMacroList (const GALGAS_textMacroList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element cEnumerator_textMacroList::current (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_textMacroList::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject.mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_textMacroList::current_mContents (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject.mAttribute_mContents ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @textMacroList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_textMacroList ("textMacroList",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_textMacroList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_textMacroList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_textMacroList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_textMacroList result ;
  const GALGAS_textMacroList * p = (const GALGAS_textMacroList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_textMacroList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@importedLexiqueList' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_importedLexiqueList : public cCollectionElement {
  public : GALGAS_importedLexiqueList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_importedLexiqueList (const GALGAS_string & in_mLexiqueClassName,
                                                   const GALGAS_string & in_mBlockComment,
                                                   const GALGAS_string & in_mTitle,
                                                   const GALGAS_textMacroList & in_mTextMacroList,
                                                   const GALGAS_guiLabelListAST & in_mLabels
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

cCollectionElement_importedLexiqueList::cCollectionElement_importedLexiqueList (const GALGAS_string & in_mLexiqueClassName,
                                                                                const GALGAS_string & in_mBlockComment,
                                                                                const GALGAS_string & in_mTitle,
                                                                                const GALGAS_textMacroList & in_mTextMacroList,
                                                                                const GALGAS_guiLabelListAST & in_mLabels
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexiqueClassName, in_mBlockComment, in_mTitle, in_mTextMacroList, in_mLabels) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_importedLexiqueList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_importedLexiqueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_importedLexiqueList (mObject.mAttribute_mLexiqueClassName, mObject.mAttribute_mBlockComment, mObject.mAttribute_mTitle, mObject.mAttribute_mTextMacroList, mObject.mAttribute_mLabels COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_importedLexiqueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueClassName" ":" ;
  mObject.mAttribute_mLexiqueClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBlockComment" ":" ;
  mObject.mAttribute_mBlockComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTitle" ":" ;
  mObject.mAttribute_mTitle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTextMacroList" ":" ;
  mObject.mAttribute_mTextMacroList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabels" ":" ;
  mObject.mAttribute_mLabels.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_importedLexiqueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_importedLexiqueList * operand = (cCollectionElement_importedLexiqueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_importedLexiqueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList::GALGAS_importedLexiqueList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList::GALGAS_importedLexiqueList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_importedLexiqueList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2,
                                                                                  const GALGAS_textMacroList & inOperand3,
                                                                                  const GALGAS_guiLabelListAST & inOperand4
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_importedLexiqueList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_importedLexiqueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_string & in_mLexiqueClassName,
                                                            const GALGAS_string & in_mBlockComment,
                                                            const GALGAS_string & in_mTitle,
                                                            const GALGAS_textMacroList & in_mTextMacroList,
                                                            const GALGAS_guiLabelListAST & in_mLabels
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_importedLexiqueList * p = NULL ;
  macroMyNew (p, cCollectionElement_importedLexiqueList (in_mLexiqueClassName,
                                                         in_mBlockComment,
                                                         in_mTitle,
                                                         in_mTextMacroList,
                                                         in_mLabels COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::addAssign_operation (const GALGAS_string & inOperand0,
                                                      const GALGAS_string & inOperand1,
                                                      const GALGAS_string & inOperand2,
                                                      const GALGAS_textMacroList & inOperand3,
                                                      const GALGAS_guiLabelListAST & inOperand4
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_importedLexiqueList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                       const GALGAS_string inOperand1,
                                                       const GALGAS_string inOperand2,
                                                       const GALGAS_textMacroList inOperand3,
                                                       const GALGAS_guiLabelListAST inOperand4,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_importedLexiqueList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       GALGAS_textMacroList & outOperand3,
                                                       GALGAS_guiLabelListAST & outOperand4,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
      outOperand0 = p->mObject.mAttribute_mLexiqueClassName ;
      outOperand1 = p->mObject.mAttribute_mBlockComment ;
      outOperand2 = p->mObject.mAttribute_mTitle ;
      outOperand3 = p->mObject.mAttribute_mTextMacroList ;
      outOperand4 = p->mObject.mAttribute_mLabels ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::setter_popFirst (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_textMacroList & outOperand3,
                                                  GALGAS_guiLabelListAST & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueClassName ;
    outOperand1 = p->mObject.mAttribute_mBlockComment ;
    outOperand2 = p->mObject.mAttribute_mTitle ;
    outOperand3 = p->mObject.mAttribute_mTextMacroList ;
    outOperand4 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::setter_popLast (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_textMacroList & outOperand3,
                                                 GALGAS_guiLabelListAST & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueClassName ;
    outOperand1 = p->mObject.mAttribute_mBlockComment ;
    outOperand2 = p->mObject.mAttribute_mTitle ;
    outOperand3 = p->mObject.mAttribute_mTextMacroList ;
    outOperand4 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::method_first (GALGAS_string & outOperand0,
                                               GALGAS_string & outOperand1,
                                               GALGAS_string & outOperand2,
                                               GALGAS_textMacroList & outOperand3,
                                               GALGAS_guiLabelListAST & outOperand4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueClassName ;
    outOperand1 = p->mObject.mAttribute_mBlockComment ;
    outOperand2 = p->mObject.mAttribute_mTitle ;
    outOperand3 = p->mObject.mAttribute_mTextMacroList ;
    outOperand4 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::method_last (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_textMacroList & outOperand3,
                                              GALGAS_guiLabelListAST & outOperand4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueClassName ;
    outOperand1 = p->mObject.mAttribute_mBlockComment ;
    outOperand2 = p->mObject.mAttribute_mTitle ;
    outOperand3 = p->mObject.mAttribute_mTextMacroList ;
    outOperand4 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::plusAssign_operation (const GALGAS_importedLexiqueList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList::getter_mLexiqueClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mAttribute_mLexiqueClassName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList::getter_mBlockCommentAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mAttribute_mBlockComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList::getter_mTitleAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mAttribute_mTitle ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_importedLexiqueList::getter_mTextMacroListAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_textMacroList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mAttribute_mTextMacroList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_importedLexiqueList::getter_mLabelsAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_guiLabelListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mAttribute_mLabels ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_importedLexiqueList::cEnumerator_importedLexiqueList (const GALGAS_importedLexiqueList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element cEnumerator_importedLexiqueList::current (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_importedLexiqueList::current_mLexiqueClassName (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mLexiqueClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_importedLexiqueList::current_mBlockComment (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mBlockComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_importedLexiqueList::current_mTitle (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mTitle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList cEnumerator_importedLexiqueList::current_mTextMacroList (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mTextMacroList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST cEnumerator_importedLexiqueList::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mLabels ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @importedLexiqueList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_importedLexiqueList ("importedLexiqueList",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_importedLexiqueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_importedLexiqueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_importedLexiqueList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_importedLexiqueList result ;
  const GALGAS_importedLexiqueList * p = (const GALGAS_importedLexiqueList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_importedLexiqueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionComponentMapForGeneration::cMapElement_optionComponentMapForGeneration (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_guiAnalysisContext & in_mGuiComponentContext
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mGuiComponentContext (in_mGuiComponentContext) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_optionComponentMapForGeneration::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mGuiComponentContext.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_optionComponentMapForGeneration::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_optionComponentMapForGeneration (mAttribute_lkey, mAttribute_mGuiComponentContext COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_optionComponentMapForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuiComponentContext" ":" ;
  mAttribute_mGuiComponentContext.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_optionComponentMapForGeneration::compare (const cCollectionElement * inOperand) const {
  cMapElement_optionComponentMapForGeneration * operand = (cMapElement_optionComponentMapForGeneration *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mGuiComponentContext.objectCompare (operand->mAttribute_mGuiComponentContext) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration::GALGAS_optionComponentMapForGeneration (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration::GALGAS_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration & GALGAS_optionComponentMapForGeneration::operator = (const GALGAS_optionComponentMapForGeneration & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::constructor_mapWithMapToOverride (const GALGAS_optionComponentMapForGeneration & inMapToOverride
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentMapForGeneration result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForGeneration::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_guiAnalysisContext & inArgument0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForGeneration (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionComponentMapForGeneration insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForGeneration::setter_insertKey (GALGAS_lstring inKey,
                                                               GALGAS_guiAnalysisContext inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForGeneration (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' option component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext GALGAS_optionComponentMapForGeneration::getter_mGuiComponentContextForKey (const GALGAS_string & inKey,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) attributes ;
  GALGAS_guiAnalysisContext result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
    result = p->mAttribute_mGuiComponentContext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForGeneration::setter_setMGuiComponentContextForKey (GALGAS_guiAnalysisContext inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForGeneration * p = (cMapElement_optionComponentMapForGeneration *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
    p->mAttribute_mGuiComponentContext = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionComponentMapForGeneration * GALGAS_optionComponentMapForGeneration::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * result = (cMapElement_optionComponentMapForGeneration *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionComponentMapForGeneration) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_optionComponentMapForGeneration::cEnumerator_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration_2D_element cEnumerator_optionComponentMapForGeneration::current (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
  return GALGAS_optionComponentMapForGeneration_2D_element (p->mAttribute_lkey, p->mAttribute_mGuiComponentContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_optionComponentMapForGeneration::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext cEnumerator_optionComponentMapForGeneration::current_mGuiComponentContext (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
  return p->mAttribute_mGuiComponentContext ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @optionComponentMapForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForGeneration ("optionComponentMapForGeneration",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionComponentMapForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionComponentMapForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  const GALGAS_optionComponentMapForGeneration * p = (const GALGAS_optionComponentMapForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentMapForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@propertyInCollectionListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_propertyInCollectionListAST : public cCollectionElement {
  public : GALGAS_propertyInCollectionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_propertyInCollectionListAST (const GALGAS_lstring & in_mPropertyTypeName,
                                                           const GALGAS_lstring & in_mPropertyName,
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

cCollectionElement_propertyInCollectionListAST::cCollectionElement_propertyInCollectionListAST (const GALGAS_lstring & in_mPropertyTypeName,
                                                                                                const GALGAS_lstring & in_mPropertyName,
                                                                                                const GALGAS_lstringlist & in_mFeatureList
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyTypeName, in_mPropertyName, in_mFeatureList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_propertyInCollectionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_propertyInCollectionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_propertyInCollectionListAST (mObject.mAttribute_mPropertyTypeName, mObject.mAttribute_mPropertyName, mObject.mAttribute_mFeatureList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_propertyInCollectionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyTypeName" ":" ;
  mObject.mAttribute_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mAttribute_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureList" ":" ;
  mObject.mAttribute_mFeatureList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_propertyInCollectionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyInCollectionListAST * operand = (cCollectionElement_propertyInCollectionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyInCollectionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST::GALGAS_propertyInCollectionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST::GALGAS_propertyInCollectionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstringlist & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_propertyInCollectionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mPropertyTypeName,
                                                                    const GALGAS_lstring & in_mPropertyName,
                                                                    const GALGAS_lstringlist & in_mFeatureList
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyInCollectionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_propertyInCollectionListAST (in_mPropertyTypeName,
                                                                 in_mPropertyName,
                                                                 in_mFeatureList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_lstringlist & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyInCollectionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_lstringlist inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyInCollectionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstringlist & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
      outOperand0 = p->mObject.mAttribute_mPropertyTypeName ;
      outOperand1 = p->mObject.mAttribute_mPropertyName ;
      outOperand2 = p->mObject.mAttribute_mFeatureList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstringlist & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mAttribute_mPropertyTypeName ;
    outOperand1 = p->mObject.mAttribute_mPropertyName ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstringlist & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mAttribute_mPropertyTypeName ;
    outOperand1 = p->mObject.mAttribute_mPropertyName ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstringlist & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mAttribute_mPropertyTypeName ;
    outOperand1 = p->mObject.mAttribute_mPropertyName ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstringlist & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mAttribute_mPropertyTypeName ;
    outOperand1 = p->mObject.mAttribute_mPropertyName ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::plusAssign_operation (const GALGAS_propertyInCollectionListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyInCollectionListAST::getter_mPropertyTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mAttribute_mPropertyTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyInCollectionListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mAttribute_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_propertyInCollectionListAST::getter_mFeatureListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mAttribute_mFeatureList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_propertyInCollectionListAST::cEnumerator_propertyInCollectionListAST (const GALGAS_propertyInCollectionListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST_2D_element cEnumerator_propertyInCollectionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_propertyInCollectionListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mAttribute_mPropertyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_propertyInCollectionListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mAttribute_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_propertyInCollectionListAST::current_mFeatureList (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mAttribute_mFeatureList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @propertyInCollectionListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyInCollectionListAST ("propertyInCollectionListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyInCollectionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyInCollectionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyInCollectionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST result ;
  const GALGAS_propertyInCollectionListAST * p = (const GALGAS_propertyInCollectionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyInCollectionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

