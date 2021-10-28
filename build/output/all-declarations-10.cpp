#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@galgas_33_QualifiedFeatureList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_galgas_33_QualifiedFeatureList : public cCollectionElement {
  public: GALGAS_galgas_33_QualifiedFeatureList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_lstring & in_mFeatureName,
                                                             const GALGAS_lstring & in_mFeatureValue
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_lstring & in_mFeatureName,
                                                                                                      const GALGAS_lstring & in_mFeatureValue
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFeatureName, in_mFeatureValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFeatureName, inElement.mProperty_mFeatureValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_galgas_33_QualifiedFeatureList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_QualifiedFeatureList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_galgas_33_QualifiedFeatureList (mObject.mProperty_mFeatureName, mObject.mProperty_mFeatureValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_galgas_33_QualifiedFeatureList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureName" ":" ;
  mObject.mProperty_mFeatureName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureValue" ":" ;
  mObject.mProperty_mFeatureValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_galgas_33_QualifiedFeatureList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_QualifiedFeatureList * operand = (cCollectionElement_galgas_33_QualifiedFeatureList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList::GALGAS_galgas_33_QualifiedFeatureList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList::GALGAS_galgas_33_QualifiedFeatureList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_QualifiedFeatureList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_galgas_33_QualifiedFeatureList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_QualifiedFeatureList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_lstring & in_mFeatureName,
                                                                       const GALGAS_lstring & in_mFeatureValue
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = NULL ;
  macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (in_mFeatureName,
                                                                    in_mFeatureValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_lstring & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_galgas_33_QualifiedFeatureList::setter_append (GALGAS_galgas_33_QualifiedFeatureList_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inElement COMMA_THERE)) ;
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

void GALGAS_galgas_33_QualifiedFeatureList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_galgas_33_QualifiedFeatureList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
        outOperand0 = p->mObject.mProperty_mFeatureName ;
        outOperand1 = p->mObject.mProperty_mFeatureValue ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_popLast (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::method_first (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::method_last (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::add_operation (const GALGAS_galgas_33_QualifiedFeatureList & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::plusAssign_operation (const GALGAS_galgas_33_QualifiedFeatureList inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_setMFeatureNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFeatureName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList::getter_mFeatureNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mProperty_mFeatureName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_setMFeatureValueAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFeatureValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList::getter_mFeatureValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mProperty_mFeatureValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_galgas_33_QualifiedFeatureList::cEnumerator_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element cEnumerator_galgas_33_QualifiedFeatureList::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mProperty_mFeatureName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureValue (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mProperty_mFeatureValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@galgas3QualifiedFeatureList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ("galgas3QualifiedFeatureList",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_QualifiedFeatureList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_QualifiedFeatureList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_QualifiedFeatureList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  const GALGAS_galgas_33_QualifiedFeatureList * p = (const GALGAS_galgas_33_QualifiedFeatureList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_QualifiedFeatureList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3QualifiedFeatureList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i0_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 23)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 23)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 23)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i1_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_ifExpression_979 ;
  nt_expression_ (var_ifExpression_979, inCompiler) ;
  GALGAS_location var_operatorLocation_1004 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_thenExpression_1069 ;
  nt_expression_ (var_thenExpression_1069, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  GALGAS_semanticExpressionAST var_elseExpression_1117 ;
  nt_expression_ (var_elseExpression_1117, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_operatorLocation_1004, var_ifExpression_979, var_thenExpression_1069, var_elseExpression_1117  COMMA_SOURCE_FILE ("expression-if.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i2_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_882 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryPlusExpressionAST::constructor_new (var_operatorLocation_882, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i3_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_883 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusExpressionAST::constructor_new (var_operatorLocation_883, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i4_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_842 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
  outArgument_outExpression = GALGAS_varInExpressionAST::constructor_new (var_identifier_842  COMMA_SOURCE_FILE ("expression-var.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-output-expression-list.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_963 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      GALGAS_semanticExpressionAST var_expression_1021 ;
      nt_expression_ (var_expression_1021, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_963, var_expression_1021, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 25))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i6_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
  outArgument_outExpression = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 25))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i7_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
  outArgument_outExpression = GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 32))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i8_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_883 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-literal-string.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_935 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    var_literalStringList_883.addAssign_operation (var_literalString_935.getter_string (HERE)  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 22)) ;
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outExpression = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 25)), var_literalStringList_883  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i9_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_852 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalCharExpressionAST::constructor_new (var_literalChar_852  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i10_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_860 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionAST::constructor_new (var_literalDouble_860  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i11_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint var_literalInt_1671 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionAST::constructor_new (var_literalInt_1671  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i12_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint var_literalInt_1959 = inCompiler->synthetizedAttribute_sint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49)) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionAST::constructor_new (var_literalInt_1959  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint_36__34_ var_literalInt_2249 = inCompiler->synthetizedAttribute_uint_36__34_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionAST::constructor_new (var_literalInt_2249  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint_36__34_ var_literalInt_2542 = inCompiler->synthetizedAttribute_sint_36__34_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionAST::constructor_new (var_literalInt_2542  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 64)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt_2834 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_bigint_5F_G COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 70)) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionAST::constructor_new (var_literalInt_2834  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_bigint_5F_G COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 70)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_bigint_5F_G COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1286 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 36)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1336 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1396 ;
      nt_simple_5F_expression_ (var_rightOperand_1396, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1286, var_leftOperand_1336, GALGAS_comparison::constructor_equal (SOURCE_FILE ("expression-comparison.galgas", 39)), var_rightOperand_1396  COMMA_SOURCE_FILE ("expression-comparison.galgas", 39)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_1539 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 42)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1589 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1649 ;
      nt_simple_5F_expression_ (var_rightOperand_1649, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1539, var_leftOperand_1589, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("expression-comparison.galgas", 45)), var_rightOperand_1649  COMMA_SOURCE_FILE ("expression-comparison.galgas", 45)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_1795 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 47)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 48)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1845 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1905 ;
      nt_simple_5F_expression_ (var_rightOperand_1905, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1795, var_leftOperand_1845, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas", 51)), var_rightOperand_1905  COMMA_SOURCE_FILE ("expression-comparison.galgas", 51)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_2055 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 53)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 54)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2105 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2165 ;
      nt_simple_5F_expression_ (var_rightOperand_2165, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2055, var_leftOperand_2105, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas", 57)), var_rightOperand_2165  COMMA_SOURCE_FILE ("expression-comparison.galgas", 57)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_2317 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 60)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2366 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2426 ;
      nt_simple_5F_expression_ (var_rightOperand_2426, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2317, var_leftOperand_2366, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("expression-comparison.galgas", 63)), var_rightOperand_2426  COMMA_SOURCE_FILE ("expression-comparison.galgas", 63)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_2575 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 66)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2624 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2684 ;
      nt_simple_5F_expression_ (var_rightOperand_2684, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2575, var_leftOperand_2624, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("expression-comparison.galgas", 69)), var_rightOperand_2684  COMMA_SOURCE_FILE ("expression-comparison.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 36)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 42)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 48)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 54)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 60)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 66)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 36)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 42)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 48)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 54)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 60)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 66)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2488 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2538 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2585 ;
      nt_term_ (var_rightOperand_2585, inCompiler) ;
      outArgument_outExpression = GALGAS_leftShiftExpressionAST::constructor_new (var_operatorLocation_2488, var_leftOperand_2538, var_rightOperand_2585  COMMA_SOURCE_FILE ("expression-additive.galgas", 67)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2719 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 69)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2769 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2816 ;
      nt_term_ (var_rightOperand_2816, inCompiler) ;
      outArgument_outExpression = GALGAS_rightShiftExpressionAST::constructor_new (var_operatorLocation_2719, var_leftOperand_2769, var_rightOperand_2816  COMMA_SOURCE_FILE ("expression-additive.galgas", 73)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2951 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3000 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3047 ;
      nt_term_ (var_rightOperand_3047, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionAST::constructor_new (var_operatorLocation_2951, var_leftOperand_3000, var_rightOperand_3047  COMMA_SOURCE_FILE ("expression-additive.galgas", 79)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_3175 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3225 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3272 ;
      nt_term_ (var_rightOperand_3272, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionNoOverflowAST::constructor_new (var_operatorLocation_3175, var_leftOperand_3225, var_rightOperand_3272  COMMA_SOURCE_FILE ("expression-additive.galgas", 85)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3410 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 87)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3459 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3506 ;
      nt_term_ (var_rightOperand_3506, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionAST::constructor_new (var_operatorLocation_3410, var_leftOperand_3459, var_rightOperand_3506  COMMA_SOURCE_FILE ("expression-additive.galgas", 91)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_3634 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3684 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3731 ;
      nt_term_ (var_rightOperand_3731, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionNoOverflowAST::constructor_new (var_operatorLocation_3634, var_leftOperand_3684, var_rightOperand_3731  COMMA_SOURCE_FILE ("expression-additive.galgas", 97)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i18_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_ (outArgument_outExpression, inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_endOfReceiverExpression_1558 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 41)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_is COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 42)) ;
    GALGAS_dynamicTypeComparisonKind var_kind_1624 ;
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 45)) ;
      var_kind_1624 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("expression-cast-expression.galgas", 46)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 48)) ;
      var_kind_1624 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-cast-expression.galgas", 49)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 51)) ;
      var_kind_1624 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("expression-cast-expression.galgas", 52)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_typeName_1813 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 54)) ;
    outArgument_outExpression = GALGAS_testDynamicClassInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_1558, var_kind_1624, var_typeName_1813  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 55)) ;
  } break ;
  case 3: {
    GALGAS_location var_endOfReceiverExpression_2011 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 62)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 63)) ;
    GALGAS_lstring var_typeName_2067 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 64)) ;
    outArgument_outExpression = GALGAS_castInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_2011, var_typeName_2067  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_or_parse (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_is COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 42)) ;
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 48)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 54)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 63)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 64)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_or_indexing (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_is COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 42)) ;
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 48)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 54)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 63)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 64)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  GALGAS_lstring var_optionComponentName_940 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  GALGAS_lstring var_optionName_1015 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  GALGAS_lstring var_getterName_1048 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (var_optionComponentName_940, var_optionName_1015, var_getterName_1048  COMMA_SOURCE_FILE ("expression-option.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  GALGAS_lstring var_optionName_1398 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  GALGAS_lstring var_getterName_1431 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-option.galgas", 38))  COMMA_SOURCE_FILE ("expression-option.galgas", 38)), var_optionName_1398, var_getterName_1431  COMMA_SOURCE_FILE ("expression-option.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  GALGAS_lstring var_lexiqueName_923 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  GALGAS_lstring var_getterName_964 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (var_lexiqueName_923, var_getterName_964  COMMA_SOURCE_FILE ("expression-lexique.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  GALGAS_lstring var_filewrapperName_1461 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (var_filewrapperName_1461  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_filePath_1682 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
      outArgument_outExpression = GALGAS_filewrapperInExpressionAST::constructor_new (var_filewrapperName_1461, var_filePath_1682  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 44)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_filewrapperTemplateName_1865 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      GALGAS_actualOutputExpressionList var_expressionList_1946 ;
      nt_output_5F_expression_5F_list_ (var_expressionList_1946, inCompiler) ;
      outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionAST::constructor_new (var_filewrapperName_1461, var_filewrapperTemplateName_1865, var_expressionList_1946  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      nt_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 20)) ;
  GALGAS_semanticExpressionAST var_receiverExpression_1010 ;
  nt_expression_ (var_receiverExpression_1010, inCompiler) ;
  GALGAS_lstring var_getterName_1075 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 24)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1177 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_1177, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 27)) ;
  outArgument_outExpression = GALGAS_getterCallExpressionAST::constructor_new (var_receiverExpression_1010, var_getterName_1075, var_expressionList_1177  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 20)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 24)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 20)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 24)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i24_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
  case 1: {
    outArgument_outTypeName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 27))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 27)) ;
  } break ;
  case 2: {
    outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1467 ;
  nt_optional_5F_type_ (var_typeName_1467, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 38)) ;
  GALGAS_lstring var_constructorName_1546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 40)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1617 ;
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    var_expressionList_1617 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 44)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 46)) ;
    nt_output_5F_expression_5F_list_ (var_expressionList_1617, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionAST::constructor_new (var_typeName_1467, var_constructorName_1546, var_expressionList_1617  COMMA_SOURCE_FILE ("expression-constructor.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 40)) ;
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 46)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 40)) ;
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 46)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_2081 ;
  nt_optional_5F_type_ (var_typeName_2081, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 61)) ;
  outArgument_outExpression = GALGAS_defaultConstructorExpressionAST::constructor_new (var_typeName_2081  COMMA_SOURCE_FILE ("expression-constructor.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_911 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1018 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_1018, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::constructor_new (var_functionName_911, var_expressionList_1018  COMMA_SOURCE_FILE ("expression-function-call.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i28_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  GALGAS_lstring var_typeName_866 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::constructor_new (var_typeName_866  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i29_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1887 ;
  nt_optional_5F_type_ (var_typeName_1887, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  GALGAS_collectionValueElementList var_elementList_1939 = GALGAS_collectionValueElementList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 46)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractCollectionValueElement var_element_2055 ;
      nt_collection_5F_value_5F_element_ (var_element_2055, inCompiler) ;
      var_elementList_1939.addAssign_operation (var_element_2055  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 51)) ;
      switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
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
  outArgument_outExpression = GALGAS_collectionValueAST::constructor_new (var_typeName_1887, var_elementList_1939, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 59))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_parse (inCompiler) ;
      switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_indexing (inCompiler) ;
      switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i30_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_actualOutputExpressionList var_expressionList_2511 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_2551 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    GALGAS_semanticExpressionAST var_expression_2609 ;
    nt_expression_ (var_expression_2609, inCompiler) ;
    var_expressionList_2511.addAssign_operation (var_selector_2551, var_expression_2609, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 71))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 71)) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outValueElement = GALGAS_expressionListCollectionValue::constructor_new (var_expressionList_2511, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 74))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_expression_3052 ;
  nt_expression_ (var_expression_3052, inCompiler) ;
  outArgument_outValueElement = GALGAS_expressionCollectionValue::constructor_new (var_expression_3052, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 81))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i32_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
  outArgument_outExpression = GALGAS_selfInExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 19))  COMMA_SOURCE_FILE ("expression-self.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i33_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      GALGAS_lstring var_structFieldName_999 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
      outArgument_outExpression = GALGAS_structPropertyAccessExpressionAST::constructor_new (var_structFieldName_999.getter_location (HERE), outArgument_outExpression, var_structFieldName_999  COMMA_SOURCE_FILE ("expression-property-access.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i34_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_878 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_notExpressionAST::constructor_new (var_operatorLocation_878, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-not.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i35_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_880 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_tildeExpressionAST::constructor_new (var_operatorLocation_880, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-tilde.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i36_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_880 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 19)) ;
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__B0_ COMMA_SOURCE_FILE ("expression-bang.galgas", 21)) ;
  outArgument_outExpression = GALGAS_bangExpressionAST::constructor_new (var_operatorLocation_880, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-bang.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__B0_ COMMA_SOURCE_FILE ("expression-bang.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__B0_ COMMA_SOURCE_FILE ("expression-bang.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i37_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_893 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionAST::constructor_new (var_operatorLocation_893, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_i38_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2178 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2227 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2284 ;
      nt_expression_5F_and_ (var_rightOperand_2284, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpressionAST::constructor_new (var_operatorLocation_2178, var_leftOperand_2227, var_rightOperand_2284  COMMA_SOURCE_FILE ("expression-or.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2411 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2461 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2518 ;
      nt_expression_5F_and_ (var_rightOperand_2518, inCompiler) ;
      outArgument_outExpression = GALGAS_orShortExpressionAST::constructor_new (var_operatorLocation_2411, var_leftOperand_2461, var_rightOperand_2518  COMMA_SOURCE_FILE ("expression-or.galgas", 65)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2650 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2699 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2756 ;
      nt_expression_5F_and_ (var_rightOperand_2756, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpressionAST::constructor_new (var_operatorLocation_2650, var_leftOperand_2699, var_rightOperand_2756  COMMA_SOURCE_FILE ("expression-or.galgas", 71)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_2884 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2935 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2992 ;
      nt_expression_5F_and_ (var_rightOperand_2992, inCompiler) ;
      outArgument_outExpression = GALGAS_closedSliceExpressionAST::constructor_new (var_operatorLocation_2884, var_leftOperand_2935, var_rightOperand_2992  COMMA_SOURCE_FILE ("expression-or.galgas", 77)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3128 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3179 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3236 ;
      nt_expression_5F_and_ (var_rightOperand_3236, inCompiler) ;
      outArgument_outExpression = GALGAS_openedSliceExpressionAST::constructor_new (var_operatorLocation_3128, var_leftOperand_3179, var_rightOperand_3236  COMMA_SOURCE_FILE ("expression-or.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_i39_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1292 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 31)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1341 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1422 ;
      nt_relation_5F_factor_ (var_rightOperand_1422, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpressionAST::constructor_new (var_operatorLocation_1292, var_leftOperand_1341, var_rightOperand_1422  COMMA_SOURCE_FILE ("expression-and.galgas", 35)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_1550 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1600 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1681 ;
      nt_relation_5F_factor_ (var_rightOperand_1681, inCompiler) ;
      outArgument_outExpression = GALGAS_andShortExpressionAST::constructor_new (var_operatorLocation_1550, var_leftOperand_1600, var_rightOperand_1681  COMMA_SOURCE_FILE ("expression-and.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i40_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2205 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2254 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2326 ;
      nt_factor_ (var_rightOperand_2326, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionAST::constructor_new (var_operatorLocation_2205, var_leftOperand_2254, var_rightOperand_2326  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2465 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2515 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2587 ;
      nt_factor_ (var_rightOperand_2587, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (var_operatorLocation_2465, var_leftOperand_2515, var_rightOperand_2587  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 65)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2736 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2785 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2834 ;
      nt_factor_ (var_rightOperand_2834, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionAST::constructor_new (var_operatorLocation_2736, var_leftOperand_2785, var_rightOperand_2834  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 71)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_2967 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3017 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3066 ;
      nt_factor_ (var_rightOperand_3066, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionNoOverflowAST::constructor_new (var_operatorLocation_2967, var_leftOperand_3017, var_rightOperand_3066  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 77)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3209 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3260 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3309 ;
      nt_factor_ (var_rightOperand_3309, inCompiler) ;
      outArgument_outExpression = GALGAS_moduloExpressionAST::constructor_new (var_operatorLocation_3209, var_leftOperand_3260, var_rightOperand_3309  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2003 ;
      GALGAS_formalArgumentPassingModeAST var_mFormalParameterPassingMode_2065 ;
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        var_selector_2003 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
        var_mFormalParameterPassingMode_2065 = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 36)) ;
      } break ;
      case 2: {
        var_selector_2003 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
        var_mFormalParameterPassingMode_2065 = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 40)) ;
      } break ;
      case 3: {
        var_selector_2003 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
        var_mFormalParameterPassingMode_2065 = GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 43)) ;
      } break ;
      case 4: {
        var_selector_2003 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
        var_mFormalParameterPassingMode_2065 = GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 46)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_2573 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      GALGAS_bool var_mIsUnused_2593 ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_mIsUnused_2593 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
        var_mIsUnused_2593 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_2733 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector_2003, var_mFormalParameterPassingMode_2065, var_mFormalParameterTypeName_2573, var_mFormalParameterName_2733, var_mIsUnused_2593  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 57)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_ (GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  outArgument_outActualParameterList = GALGAS_actualParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_3504 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
        outArgument_outActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::constructor_new (var_selector_3504  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 81))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 81)) ;
      } break ;
      case 2: {
        GALGAS_luint var_count_3636 ;
        var_count_3636 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
        GALGAS_uint var_n_3681 = var_count_3636.getter_uint (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 86)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_selector_3504.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (var_selector_3504.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 88)), GALGAS_string ("the selector should be '\?'"), fixItArray2  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 88)) ;
          }
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_n_3681.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (var_count_3636.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 91)), GALGAS_string ("the count value should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 91)) ;
          }
        }
        if (kBoolFalse == test_3) {
          if (var_n_3681.isValid ()) {
            uint32_t variant_3893 = var_n_3681.uintValue () ;
            bool loop_3893 = true ;
            while (loop_3893) {
              loop_3893 = GALGAS_bool (kIsStrictSup, var_n_3681.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
              if (loop_3893) {
                loop_3893 = GALGAS_bool (kIsStrictSup, var_n_3681.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
              }
              if (loop_3893 && (0 == variant_3893)) {
                loop_3893 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 93)) ;
              }
              if (loop_3893) {
                variant_3893 -- ;
                outArgument_outActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::constructor_new (var_selector_3504.getter_location (HERE), var_n_3681  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 95))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 95)) ;
                var_n_3681.minusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 96)) ;
              }
            }
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      GALGAS_lstring var_selector_4092 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      GALGAS_semanticExpressionAST var_e_4139 ;
      nt_expression_ (var_e_4139, inCompiler) ;
      GALGAS_location var_endOfExpressionLocation_4181 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 103)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector_4092, var_e_4139, var_endOfExpressionLocation_4181  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 104))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 104)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_4354 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      GALGAS_lstring var_outputInputActualParameterName_4398 ;
      var_outputInputActualParameterName_4398 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      GALGAS_lstringlist var_structAttributeList_4475 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 113)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          GALGAS_lstring var_structAttributeName_4567 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
          var_structAttributeList_4475.addAssign_operation (var_structAttributeName_4567  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 118)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::constructor_new (var_selector_4354, var_outputInputActualParameterName_4398, var_structAttributeList_4475  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 120))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 120)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_4812 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::constructor_new (var_selector_4812  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 128))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 128)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_4934 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      GALGAS_luint var_count_4965 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
      GALGAS_uint var_n_4983 = var_count_4965.getter_uint (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 133)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_selector_4934.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_selector_4934.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 135)), GALGAS_string ("the selector should be '!\?'"), fixItArray7  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 135)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, var_n_4983.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_count_4965.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 138)), GALGAS_string ("the count value should be > 0"), fixItArray9  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 138)) ;
        }
      }
      if (kBoolFalse == test_8) {
        if (var_n_4983.isValid ()) {
          uint32_t variant_5183 = var_n_4983.uintValue () ;
          bool loop_5183 = true ;
          while (loop_5183) {
            loop_5183 = GALGAS_bool (kIsStrictSup, var_n_4983.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
            if (loop_5183) {
              loop_5183 = GALGAS_bool (kIsStrictSup, var_n_4983.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
            }
            if (loop_5183 && (0 == variant_5183)) {
              loop_5183 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 140)) ;
            }
            if (loop_5183) {
              variant_5183 -- ;
              outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::constructor_new (var_selector_4934.getter_location (HERE), var_n_4983  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 142))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 142)) ;
              var_n_4983.minusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 143)) ;
            }
          }
        }
      }
    } break ;
    case 7: {
      GALGAS_lstring var_selector_5401 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      GALGAS_lstring var_inputActualParameterName_5448 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::constructor_new (var_selector_5401, var_inputActualParameterName_5448  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 149))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 149)) ;
    } break ;
    case 8: {
      GALGAS_lstring var_selector_5647 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 156)) ;
      GALGAS_lstring var_inputActualParameterName_5713 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 157)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualSelfPropertyParameterAST::constructor_new (var_selector_5647, var_inputActualParameterName_5713  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 158))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 158)) ;
    } break ;
    case 9: {
      GALGAS_lstring var_selector_5904 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 163)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 164)) ;
      GALGAS_lstring var_declarationTypeName_5947 ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
        var_declarationTypeName_5947 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 167)) ;
      } break ;
      case 2: {
        var_declarationTypeName_5947 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_6096 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 171)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_5904, var_declarationTypeName_5947, var_inputActualParameterName_6096  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 172))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 172)) ;
    } break ;
    case 10: {
      GALGAS_lstring var_selector_6328 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      GALGAS_lstring var_declarationTypeName_6374 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 179)) ;
      GALGAS_lstring var_inputActualParameterName_6421 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 180)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_6328, var_declarationTypeName_6374, var_inputActualParameterName_6421  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 181))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 181)) ;
    } break ;
    case 11: {
      GALGAS_lstring var_selector_6637 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 187)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 188)) ;
      GALGAS_lstring var_declarationTypeName_6680 ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
        var_declarationTypeName_6680 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 191)) ;
      } break ;
      case 2: {
        var_declarationTypeName_6680 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 193)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_markedAsUnused_6807 ;
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
        var_markedAsUnused_6807 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 199)) ;
        var_markedAsUnused_6807 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_6952 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 202)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::constructor_new (var_selector_6637, var_declarationTypeName_6680, var_inputActualParameterName_6952, var_markedAsUnused_6807  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 203))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 203)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 156)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 157)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 163)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 164)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 171)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 179)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 180)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 187)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 188)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 193)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 199)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 156)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 157)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 163)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 164)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 171)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 179)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 180)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 187)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 188)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 193)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 199)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_ (GALGAS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 219)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      GALGAS_bool var_isConstant_7759 ;
      GALGAS_lstring var_selector_7781 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 223)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
        var_isConstant_7759 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 227)) ;
        var_isConstant_7759 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_7919 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 230)) ;
      GALGAS_bool var_mIsUnused_7939 ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
        var_mIsUnused_7939 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 235)) ;
        var_mIsUnused_7939 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_8079 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 238)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector_7781, var_mFormalParameterTypeName_7919, var_mFormalParameterName_8079, var_mIsUnused_7939, var_isConstant_7759  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 239)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 223)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 227)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 230)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 235)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 238)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 223)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 227)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 230)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 235)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 238)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 42)) ;
    } break ;
    case 3: {
      GALGAS_semanticInstructionAST var_instruction_2581 ;
      nt_semantic_5F_instruction_ (var_instruction_2581, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction_2581  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 42)) ;
    } break ;
    case 3: {
      nt_semantic_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 42)) ;
    } break ;
    case 3: {
      nt_semantic_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isLocal_2830 ;
  switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
    var_isLocal_2830 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 57)) ;
    var_isLocal_2830 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_ (var_isLocal_2830, ioArgument_ioDeclarations, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 72)) ;
  GALGAS_lstring var_mActionName_3539 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_3642 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_3642, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externRoutineDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mActionName_3539, var_mFormalParameterList_3642  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 75))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 72)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 72)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument_inIsPrivate,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  GALGAS_lstring var_mRoutineName_4492 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 98)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_4595 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_4595, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 100)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_4688 ;
  nt_semantic_5F_instruction_5F_list_ (var_mRoutineInstructionList_4688, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 102)) ;
  GALGAS_location var_endOfInstructionList_4721 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 103)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsPrivate, var_mRoutineName_4492, var_mFormalParameterList_4595, var_mRoutineInstructionList_4688, var_endOfInstructionList_4721  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 104))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 104)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 98)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 100)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 98)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 100)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_ (const GALGAS_bool constinArgument_inIsPrivate,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
  GALGAS_bool var_isOnce_5681 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_5705 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_5771 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 133)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attribute_5771.getter_string (HERE).objectCompare (GALGAS_string ("once"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_isOnce_5681.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attribute_5771.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 136)), GALGAS_string ("duplicate attribute"), fixItArray3  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 136)) ;
            }
          }
          var_isOnce_5681 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attribute_5771.getter_string (HERE).objectCompare (GALGAS_string ("usefull"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_isUsefull_5705.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attribute_5771.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 141)), GALGAS_string ("duplicate attribute"), fixItArray6  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 141)) ;
              }
            }
            var_isUsefull_5705 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%once")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%usefull")) ;
          inCompiler->emitSemanticError (var_attribute_5771.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 145)), GALGAS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 145)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_6238 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_6357 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_6357, inCompiler) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_isOnce_5681.boolEnum () ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_6357.getter_length (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 150)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_functionName_6238.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 151)), GALGAS_string ("an 'once' function should has no argument"), fixItArray9  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 151)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 153)) ;
  GALGAS_lstring var_resultTypeName_6526 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 154)) ;
  GALGAS_lstring var_resultVariableName_6556 ;
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    var_resultVariableName_6556 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157)) ;
  } break ;
  case 2: {
    var_resultVariableName_6556 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 159))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 159)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 161)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_6755 ;
  nt_semantic_5F_instruction_5F_list_ (var_functionInstructionList_6755, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 163)) ;
  GALGAS_location var_endOfFunctionInstructionList_6796 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 164)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_isOnce_5681.boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_6238, var_resultTypeName_6526, var_resultVariableName_6556, var_functionInstructionList_6755, var_endOfFunctionInstructionList_6796, constinArgument_inIsPrivate, var_isUsefull_5705  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 166))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 166)) ;
    }
  }
  if (kBoolFalse == test_10) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_6238, var_formalInputParameterList_6357, var_resultTypeName_6526, var_resultVariableName_6556, var_functionInstructionList_6755, var_endOfFunctionInstructionList_6796, constinArgument_inIsPrivate, var_isUsefull_5705  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 177))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 177)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 133)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 154)) ;
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 161)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 163)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 133)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 154)) ;
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 161)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 163)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 202)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 203)) ;
  GALGAS_lstring var_mActionName_8163 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 204)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_8282 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_8282, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 206)) ;
  GALGAS_lstring var_resultTypeName_8319 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 207)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_mActionName_8163, var_formalInputParameterList_8282, var_resultTypeName_8319  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 202)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 203)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 204)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 206)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 207)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 202)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 203)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 204)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 206)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 207)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 230)) ;
  GALGAS_lstring var_typeName_9331 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 231)) ;
  GALGAS_lstring var_variableName_9364 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 232)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 233)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_9430 ;
  nt_expression_ (var_sourceExpression_9430, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_9331.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 236)), GALGAS_bool (false), var_typeName_9331, var_variableName_9364, var_sourceExpression_9430  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 235)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 230)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 231)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 232)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 233)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 230)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 231)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 232)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 233)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_9821 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 247)) ;
  GALGAS_lstring var_variableName_9854 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 249)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_9920 ;
  nt_expression_ (var_sourceExpression_9920, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_9821.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 252)), GALGAS_bool (false), var_typeName_9821, var_variableName_9854, var_sourceExpression_9920  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 251)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 249)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 249)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_11033 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 276)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_11033.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_11033.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 278)), GALGAS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 278)) ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName_11274 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
    GALGAS_lstring var_actualParameterName_11316 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 285)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (var_actualParameterTypeName_11274, var_actualParameterName_11316  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 286)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 288)) ;
    GALGAS_lstring var_actualParameterTypeName_11501 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 289)) ;
    GALGAS_lstring var_actualParameterName_11543 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 290)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (var_actualParameterTypeName_11501, var_actualParameterName_11543  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 291)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName_11721 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 293)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (var_actualParameterName_11721  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 294)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 276)) ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 285)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 288)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 289)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 290)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 293)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 276)) ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 285)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 288)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 289)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 290)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 293)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i9_ (GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 347)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_13839 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 350)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 351)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_13839, GALGAS_inputParameterAnonymousVariable::constructor_new (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 352))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 352)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_13960 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 355)) ;
      GALGAS_lstring var_actualParameterTypeName_14007 ;
      switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_14007 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 358)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_14007 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 360)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_14159 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 362)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_13960, GALGAS_inputParameterDeclaredVariable::constructor_new (var_actualParameterTypeName_14007, var_actualParameterName_14159  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 365))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 363)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_14331 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 368)) ;
      GALGAS_lstring var_actualParameterTypeName_14378 ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_14378 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 371)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_14378 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 373)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_14530 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 375)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_14331, GALGAS_inputParameterDeclaredConstant::constructor_new (var_actualParameterTypeName_14378, var_actualParameterName_14530  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 378))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 376)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_14702 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 380)) ;
      GALGAS_lstring var_actualParameterName_14744 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 381)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_14702, GALGAS_inputParameterVariable::constructor_new (var_actualParameterName_14744  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 382))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 382)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 350)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 351)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 355)) ;
      switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 360)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 362)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 368)) ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 373)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 380)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 381)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 350)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 351)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 355)) ;
      switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 360)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 362)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 368)) ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 373)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 380)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 381)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mTargetVariableName_1263 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  GALGAS_lstring var_optionalProperty_1293 ;
  switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
    var_optionalProperty_1293 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 31)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    GALGAS_lstring var_attributeName_1397 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
    var_optionalProperty_1293 = var_attributeName_1397 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_1515 ;
  nt_expression_ (var_mSourceExpression_1515, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::constructor_new (var_mTargetVariableName_1263.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 40)), var_mTargetVariableName_1263, var_optionalProperty_1293, var_mSourceExpression_1515  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  GALGAS_lstring var_mTargetVariableName_1949 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  GALGAS_lstring var_optionalProperty_1979 ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    var_optionalProperty_1979 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    GALGAS_lstring var_attributeName_2083 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
    var_optionalProperty_1979 = var_attributeName_2083 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_2201 ;
  nt_expression_ (var_mSourceExpression_2201, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPropertyAssignmentInstructionAST::constructor_new (var_mTargetVariableName_1949.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 64)), var_mTargetVariableName_1949, var_optionalProperty_1979, var_mSourceExpression_2201  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i12_ (GALGAS_castInstructionBranchListAST & ioArgument_ioCastInstructionBranchList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  GALGAS_dynamicTypeComparisonKind var_kind_1442 ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
    var_kind_1442 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("instruction-cast.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
    var_kind_1442 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("instruction-cast.galgas", 38)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
    var_kind_1442 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("instruction-cast.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_1610 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  GALGAS_lstring var_mConstantVarName_1640 ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    var_mConstantVarName_1640 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
    var_mConstantVarName_1640 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  GALGAS_semanticInstructionListAST var_mCastBranchInstructionList_1897 ;
  nt_semantic_5F_instruction_5F_list_ (var_mCastBranchInstructionList_1897, inCompiler) ;
  ioArgument_ioCastInstructionBranchList.addAssign_operation (var_mTypeName_1610, var_mConstantVarName_1640, var_mCastBranchInstructionList_1897, var_kind_1442, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 57))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i13_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
    outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_ (outArgument_outElseOrDefault, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    GALGAS_location var_instructionLocation_2415 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 70)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    GALGAS_semanticExpressionAST var_errorLocationExpression_2517 ;
    nt_expression_ (var_errorLocationExpression_2517, inCompiler) ;
    outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 73)) ;
    GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 77)) ;
    temp_0.addAssign_operation (GALGAS_string ("cast instruction run-time error")  COMMA_SOURCE_FILE ("instruction-cast.galgas", 77)) ;
    outArgument_outElseOrDefault.addAssign_operation (GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_2415, var_errorLocationExpression_2517, GALGAS_literalStringExpressionAST::constructor_new (var_instructionLocation_2415, temp_0  COMMA_SOURCE_FILE ("instruction-cast.galgas", 77)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 78)), GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 79))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 74))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 74)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 88)) ;
  GALGAS_location var_instructionLocation_3048 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 89)) ;
  GALGAS_semanticExpressionAST var_expression_3121 ;
  nt_expression_ (var_expression_3121, inCompiler) ;
  GALGAS_castInstructionBranchListAST var_mCastInstructionBranchList_3156 = GALGAS_castInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 91)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_ (var_mCastInstructionBranchList_3156, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticInstructionListAST var_mElseOrDefault_3356 ;
  nt_cast_5F_else_5F_or_5F_default_ (var_mElseOrDefault_3356, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 97)) ;
  switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3428 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_3428.getter_string (HERE).objectCompare (GALGAS_string ("cast"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%cast")) ;
        inCompiler->emitSemanticError (var_terminator_3428.getter_location (SOURCE_FILE ("instruction-cast.galgas", 102)), GALGAS_string ("the terminator attribute should be '%cast'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-cast.galgas", 102)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfInstructionLocation_3619 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 105)) ;
  outArgument_outInstruction = GALGAS_structuredCastInstructionAST::constructor_new (var_instructionLocation_3048, var_expression_3121, var_mCastInstructionBranchList_3156, var_mElseOrDefault_3356, var_endOfInstructionLocation_3619  COMMA_SOURCE_FILE ("instruction-cast.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 88)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 97)) ;
  switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 88)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 97)) ;
  switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i17_ (const GALGAS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiverName_2957 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 73)) ;
  GALGAS_location var_instructionLocation_2985 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 74)) ;
  GALGAS_lstringlist var_mStructAttributeList_3040 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
      GALGAS_lstring var_attributeName_3114 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 79)) ;
      var_mStructAttributeList_3040.addAssign_operation (var_attributeName_3114  COMMA_SOURCE_FILE ("instruction-concat.galgas", 80)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 83)) ;
    GALGAS_semanticExpressionAST var_expression_3247 ;
    nt_expression_ (var_expression_3247, inCompiler) ;
    outArgument_outInstruction = GALGAS_minusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2985, constinArgument_inHasSelfPrefix, var_receiverName_2957, var_mStructAttributeList_3040, var_expression_3247  COMMA_SOURCE_FILE ("instruction-concat.galgas", 85)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 93)) ;
    switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
    case 1: {
      GALGAS_actualOutputExpressionList var_expressionList_3568 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList_3568, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualElementsInstructionAST::constructor_new (var_instructionLocation_2985, constinArgument_inHasSelfPrefix, var_receiverName_2957, var_mStructAttributeList_3040, var_expressionList_3568  COMMA_SOURCE_FILE ("instruction-concat.galgas", 96)) ;
    } break ;
    case 2: {
      GALGAS_semanticExpressionAST var_expression_3851 ;
      nt_expression_ (var_expression_3851, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2985, constinArgument_inHasSelfPrefix, var_receiverName_2957, var_mStructAttributeList_3040, var_expression_3851  COMMA_SOURCE_FILE ("instruction-concat.galgas", 105)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 114)) ;
    GALGAS_semanticExpressionAST var_expression_4149 ;
    nt_expression_ (var_expression_4149, inCompiler) ;
    outArgument_outInstruction = GALGAS_mulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2985, constinArgument_inHasSelfPrefix, var_receiverName_2957, var_mStructAttributeList_3040, var_expression_4149  COMMA_SOURCE_FILE ("instruction-concat.galgas", 116)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 124)) ;
    GALGAS_semanticExpressionAST var_expression_4422 ;
    nt_expression_ (var_expression_4422, inCompiler) ;
    outArgument_outInstruction = GALGAS_divEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2985, constinArgument_inHasSelfPrefix, var_receiverName_2957, var_mStructAttributeList_3040, var_expression_4422  COMMA_SOURCE_FILE ("instruction-concat.galgas", 126)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 79)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 83)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 93)) ;
    switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 114)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 124)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 79)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 83)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 93)) ;
    switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 114)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 124)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i18_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_4909 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 141)) ;
    GALGAS_semanticExpressionAST var_expression_4967 ;
    nt_expression_ (var_expression_4967, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector_4909, var_expression_4967, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 143))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 143)) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 141)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 141)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  GALGAS_location var_instructionLocation_867 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  GALGAS_lstringlist var_dropList_910 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-drop.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_963 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    var_dropList_910.addAssign_operation (var_variableName_963  COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_dropInstructionAST::constructor_new (var_instructionLocation_867, var_dropList_910  COMMA_SOURCE_FILE ("instruction-drop.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i20_ (GALGAS_fixitListAST & outArgument_outFixitListAST,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 36)) ;
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    GALGAS_bool var_hasFixItRemove_1601 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_hasFixItRemove_1601.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)), GALGAS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)) ;
          }
        }
        if (kBoolFalse == test_1) {
          outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 48))  COMMA_SOURCE_FILE ("instruction-error.galgas", 48)) ;
          var_hasFixItRemove_1601 = GALGAS_bool (true) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        GALGAS_location var_errorLocation_1901 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 53)) ;
        GALGAS_semanticExpressionAST var_expression_1978 ;
        nt_expression_ (var_expression_1978, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItReplace (var_expression_1978, var_errorLocation_1901  COMMA_SOURCE_FILE ("instruction-error.galgas", 55))  COMMA_SOURCE_FILE ("instruction-error.galgas", 55)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        GALGAS_location var_errorLocation_2121 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 58)) ;
        GALGAS_semanticExpressionAST var_expression_2198 ;
        nt_expression_ (var_expression_2198, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertAfter (var_expression_2198, var_errorLocation_2121  COMMA_SOURCE_FILE ("instruction-error.galgas", 60))  COMMA_SOURCE_FILE ("instruction-error.galgas", 60)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        GALGAS_location var_errorLocation_2346 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 63)) ;
        GALGAS_semanticExpressionAST var_expression_2423 ;
        nt_expression_ (var_expression_2423, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertBefore (var_expression_2423, var_errorLocation_2346  COMMA_SOURCE_FILE ("instruction-error.galgas", 65))  COMMA_SOURCE_FILE ("instruction-error.galgas", 65)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i21_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  GALGAS_location var_instructionLocation_2784 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 75)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_2866 ;
  nt_expression_ (var_mReceiverExpression_2866, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression_2936 ;
  nt_expression_ (var_mErrorExpression_2936, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList_2963 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName_3064 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      var_mBuiltVariableList_2963.addAssign_operation (var_builtVariableName_3064  COMMA_SOURCE_FILE ("instruction-error.galgas", 85)) ;
      switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
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
  GALGAS_fixitListAST var_fixitListAST_3204 ;
  nt_issue_5F_fixit_ (var_fixitListAST_3204, inCompiler) ;
  outArgument_outInstruction = GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_2784, var_mReceiverExpression_2866, var_mErrorExpression_2936, var_mBuiltVariableList_2963, var_fixitListAST_3204  COMMA_SOURCE_FILE ("instruction-error.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
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
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
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
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 75)) ;
  ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 76)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 76))  COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 75)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_luint var_count_3497 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-for.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 83)) ;
  GALGAS_uint var_n_3515 = var_count_3497.getter_uint (SOURCE_FILE ("instruction-for.galgas", 84)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_n_3515.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_3497.getter_location (SOURCE_FILE ("instruction-for.galgas", 86)), GALGAS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 86)) ;
    }
  }
  if (var_n_3515.isValid ()) {
    uint32_t variant_3612 = var_n_3515.uintValue () ;
    bool loop_3612 = true ;
    while (loop_3612) {
      loop_3612 = GALGAS_bool (kIsStrictSup, var_n_3515.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_3612) {
        loop_3612 = GALGAS_bool (kIsStrictSup, var_n_3515.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_3612 && (0 == variant_3612)) {
        loop_3612 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas", 88)) ;
      }
      if (loop_3612) {
        variant_3612 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 89)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 89))  COMMA_SOURCE_FILE ("instruction-for.galgas", 89)) ;
        var_n_3515.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 90)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-for.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-for.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_typeName_3951 ;
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    var_typeName_3951 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 99)) ;
  } break ;
  case 2: {
    var_typeName_3951 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 101)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_constantName_4075 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 103)) ;
  ioArgument_ioElementList.addAssign_operation (var_typeName_3951, var_constantName_4075  COMMA_SOURCE_FILE ("instruction-for.galgas", 104)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 101)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 103)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 101)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 110)) ;
  GALGAS_forInstructionEnumeratedObjectElementListAST var_elementList_4378 = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 111)) ;
  GALGAS_bool var_endsWithEllipsis_4456 ;
  switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
    var_endsWithEllipsis_4456 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_ (var_elementList_4378, inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
      var_endsWithEllipsis_4456 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 125)) ;
      var_endsWithEllipsis_4456 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 131)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_4871 ;
  nt_expression_ (var_enumeratedExpression_4871, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (var_elementList_4378, var_endsWithEllipsis_4456, var_enumeratedExpression_4871, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 137))  COMMA_SOURCE_FILE ("instruction-for.galgas", 133)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 110)) ;
  switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_parse (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 125)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 131)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 110)) ;
  switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 125)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 131)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_5286 ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    var_typeName_5286 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 145)) ;
  } break ;
  case 2: {
    var_typeName_5286 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 147)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable_5417 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_5492 ;
  nt_expression_ (var_enumeratedExpression_5492, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::constructor_new (var_typeName_5286, var_enumerationVariable_5417, var_enumeratedExpression_5492, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 156))  COMMA_SOURCE_FILE ("instruction-for.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 147)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 147)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_warnsAnomynousForInstructionEnumeratedObject.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 164)), GALGAS_string ("anonymous 'for' enumerated object (due to '--warns-anonymous-for-instruction' option)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 164)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  GALGAS_lstring var_prefix_6126 ;
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
    var_prefix_6126 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 169)) ;
  } break ;
  case 2: {
    var_prefix_6126 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 171)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 173)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_6282 ;
  nt_expression_ (var_enumeratedExpression_6282, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (var_prefix_6126, var_enumeratedExpression_6282, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 178))  COMMA_SOURCE_FILE ("instruction-for.galgas", 175)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 171)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 173)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 171)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 173)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i28_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 184)) ;
  GALGAS_location var_instructionLocation_6661 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 185)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_6708 = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 186)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending_6784 ;
    switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
      var_ascending_6784 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 192)) ;
      var_ascending_6784 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject_6976 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedObject_6976, inCompiler) ;
    var_mEnumeratedObjectList_6708.addAssign_operation (var_ascending_6784, var_enumeratedObject_6976  COMMA_SOURCE_FILE ("instruction-for.galgas", 196)) ;
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 198)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression_7108 ;
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    var_mWhileExpression_7108 = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 202))  COMMA_SOURCE_FILE ("instruction-for.galgas", 202)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 204)) ;
    nt_expression_ (var_mWhileExpression_7108, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression_7283 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 207)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList_7355 ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_7355 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 210)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 212)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBeforeInstructionList_7355, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch_7552 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 215)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 216)) ;
  GALGAS_lstring var_indexVariableName_7609 ;
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    var_indexVariableName_7609 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 219))  COMMA_SOURCE_FILE ("instruction-for.galgas", 219)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 221)) ;
    var_indexVariableName_7609 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 222)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 223)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList_7806 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoInstructionList_7806, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch_7883 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 227)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList_7956 ;
  switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_7956 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 230)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 232)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBetweenInstructionList_7956, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch_8157 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 235)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList_8228 ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_8228 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 238)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 240)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mAfterInstructionList_8228, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch_8421 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 243)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_8510 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 247)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_8510.getter_string (HERE).objectCompare (GALGAS_string ("for"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%for")) ;
        inCompiler->emitSemanticError (var_terminator_8510.getter_location (SOURCE_FILE ("instruction-for.galgas", 249)), GALGAS_string ("the terminator attribute should be '%for'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for.galgas", 249)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_foreach_5F_instruction_8699 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 252)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::constructor_new (var_instructionLocation_6661, var_mEnumeratedObjectList_6708, var_indexVariableName_7609, var_mWhileExpression_7108, var_endof_5F_while_5F_expression_7283, var_mBeforeInstructionList_7355, var_endof_5F_before_5F_branch_7552, var_mBetweenInstructionList_7956, var_endof_5F_between_5F_branch_8157, var_mDoInstructionList_7806, var_endof_5F_do_5F_branch_7883, var_mAfterInstructionList_8228, var_endof_5F_after_5F_branch_8421, var_endof_5F_foreach_5F_instruction_8699  COMMA_SOURCE_FILE ("instruction-for.galgas", 253)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 184)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 192)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 198)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 204)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 212)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 216)) ;
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 221)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 222)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 223)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 232)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 240)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 247)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 184)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 192)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 198)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 204)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 212)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 216)) ;
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 221)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 222)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 223)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 232)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 240)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 247)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  GALGAS_location var_instructionLocation_3502 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 78)) ;
  GALGAS_lstring var_grammarComponentName_3571 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  GALGAS_lstring var_labelName_3629 ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_labelName_3629 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 82))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 82)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    var_labelName_3629 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_ (var_instructionLocation_3502, var_grammarComponentName_3571, var_labelName_3629, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 98)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_4248 ;
  nt_expression_ (var_mSourceExpression_4248, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_4278 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 100)) ;
  GALGAS_actualParameterListAST var_actualParameterList_4372 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_4372, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_4538 ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_4538 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 105)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 107)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_4538, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_mSourceExpression_4248, var_endOfSourceExpression_4278, var_actualParameterList_4372, var_grammarInstructionSyntaxDirectedTranslationResult_4538  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 98)) ;
  nt_expression_parse (inCompiler) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 107)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 98)) ;
  nt_expression_indexing (inCompiler) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 107)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 129)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_5438 ;
  GALGAS_location var_endOfSourceExpression_5474 ;
  GALGAS_semanticExpressionAST var_nameExpression_5516 ;
  GALGAS_location var_endOfNameExpression_5550 ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    nt_expression_ (var_sourceExpression_5438, inCompiler) ;
    var_endOfSourceExpression_5474 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 136)) ;
    GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 137)) ;
    temp_0.addAssign_operation (GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 137)) ;
    var_nameExpression_5516 = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 137)), temp_0  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 137)) ;
    var_endOfNameExpression_5550 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 138)) ;
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 139)), GALGAS_string ("obsolete syntax, use '... on (source_string, name_string) ...'").add_operation (GALGAS_string (" instead of '... on source_string ...' ; you can use empty string \"\" for name_string"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 139)), fixItArray1  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 139)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_expression_ (var_sourceExpression_5438, inCompiler) ;
    var_endOfSourceExpression_5474 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 144)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
    nt_expression_ (var_nameExpression_5516, inCompiler) ;
    var_endOfNameExpression_5550 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 147)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_actualParameterListAST var_actualParameterList_6189 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_6189, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_6355 ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_6355 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 154)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 156)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_6355, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_5438, var_endOfSourceExpression_5474, var_nameExpression_5516, var_endOfNameExpression_5550, var_actualParameterList_6189, var_grammarInstructionSyntaxDirectedTranslationResult_6355  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 129)) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 156)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 129)) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 156)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_inc_5F_dec_ (GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_semantic_5F_instruction_5F_inc_5F_dec_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i34_ (const GALGAS_bool constinArgument_inPrefixedBySelf,
                                                                                                                         GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mReceiverName_2461 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  GALGAS_lstringlist var_mStructAttributeList_2490 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      GALGAS_lstring var_attributeName_2576 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
      var_mStructAttributeList_2490.addAssign_operation (var_attributeName_2576  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_2461.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 75)), constinArgument_inPrefixedBySelf, var_mReceiverName_2461, var_mStructAttributeList_2490, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 79))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 74)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_2461.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 84)), constinArgument_inPrefixedBySelf, var_mReceiverName_2461, var_mStructAttributeList_2490, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 88))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 83)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_2461.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 93)), constinArgument_inPrefixedBySelf, var_mReceiverName_2461, var_mStructAttributeList_2490, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 97))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 92)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_2461.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 102)), constinArgument_inPrefixedBySelf, var_mReceiverName_2461, var_mStructAttributeList_2490, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 106))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  GALGAS_location var_instructionLocation_3731 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_3731, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 120))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 118)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_3731, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 126))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 124)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_3731, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 132))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 130)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_3731, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 138))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i36_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_2521 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  GALGAS_ifExpressionList var_testExpression_2578 ;
  nt_if_5F_expression_ (var_testExpression_2578, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList_2647 ;
  nt_semantic_5F_instruction_5F_list_ (var_then_5F_instructionList_2647, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation_2681 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList_2751 ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_2751 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_ (var_else_5F_instructionList_2751, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    GALGAS_semanticInstructionAST var_instruction_2972 ;
    nt_if_5F_instruction_5F_core_ (var_instruction_2972, inCompiler) ;
    GALGAS_semanticInstructionListAST temp_0 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 74)) ;
    temp_0.addAssign_operation (var_instruction_2972  COMMA_SOURCE_FILE ("instruction-if.galgas", 74)) ;
    var_else_5F_instructionList_2751 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_2521, var_testExpression_2578, var_then_5F_instructionList_2647, var_endOf_5F_then_5F_branchLocation_2681, var_else_5F_instructionList_2751, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 82))  COMMA_SOURCE_FILE ("instruction-if.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_if_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_if_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_ (outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3561 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 94)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_3561.getter_string (HERE).objectCompare (GALGAS_string ("if"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%if")) ;
        inCompiler->emitSemanticError (var_terminator_3561.getter_location (SOURCE_FILE ("instruction-if.galgas", 96)), GALGAS_string ("the terminator attribute should be '%if'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 96)) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 94)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 94)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_i38_ (GALGAS_ifExpressionList & outArgument_outExpressionList,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_ifExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 104)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 107)) ;
      GALGAS_lstring var_constantName_4006 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 108)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 109)) ;
      GALGAS_semanticExpressionAST var_expression_4058 ;
      nt_expression_5F_or_ (var_expression_4058, inCompiler) ;
      GALGAS_location var_endOfReceiverExpression_4094 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 111)) ;
      switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_4006, var_expression_4058, var_endOfReceiverExpression_4094, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 117))  COMMA_SOURCE_FILE ("instruction-if.galgas", 113))  COMMA_SOURCE_FILE ("instruction-if.galgas", 113)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 120)) ;
        GALGAS_lstring var_typeName_4396 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 121)) ;
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_4006, var_expression_4058, var_endOfReceiverExpression_4094, var_typeName_4396  COMMA_SOURCE_FILE ("instruction-if.galgas", 122))  COMMA_SOURCE_FILE ("instruction-if.galgas", 122)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 131)) ;
      GALGAS_semanticExpressionAST var_receiverExpression_4713 ;
      nt_expression_ (var_receiverExpression_4713, inCompiler) ;
      GALGAS_lstring var_optionalMethodName_4767 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 133)) ;
      GALGAS_optionalMethodActualArgumentList var_optionalMethodActualArgumentList_4842 = GALGAS_optionalMethodActualArgumentList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 134)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_4904 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
          GALGAS_semanticExpressionAST var_expression_4943 ;
          nt_expression_ (var_expression_4943, inCompiler) ;
          var_optionalMethodActualArgumentList_4842.addAssign_operation (var_selector_4904, GALGAS_optionalMethodActualArgument::constructor_actualOutput (var_expression_4943, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 139))  COMMA_SOURCE_FILE ("instruction-if.galgas", 139))  COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
        } break ;
        case 3: {
          GALGAS_lstring var_selector_5099 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 141)) ;
          switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 143)) ;
            GALGAS_lstring var_typeName_5164 ;
            switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
            case 1: {
              var_typeName_5164 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 146)) ;
            } break ;
            case 2: {
              var_typeName_5164 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 148)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_constantName_5330 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
            var_optionalMethodActualArgumentList_4842.addAssign_operation (var_selector_5099, GALGAS_optionalMethodActualArgument::constructor_actualLetInput (var_typeName_5164, var_constantName_5330  COMMA_SOURCE_FILE ("instruction-if.galgas", 151))  COMMA_SOURCE_FILE ("instruction-if.galgas", 151)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 153)) ;
            GALGAS_lstring var_typeName_5516 ;
            switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
            case 1: {
              var_typeName_5516 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 156)) ;
            } break ;
            case 2: {
              var_typeName_5516 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 158)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_variableName_5681 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 160)) ;
            var_optionalMethodActualArgumentList_4842.addAssign_operation (var_selector_5099, GALGAS_optionalMethodActualArgument::constructor_actualVarInput (var_typeName_5516, var_variableName_5681  COMMA_SOURCE_FILE ("instruction-if.galgas", 161))  COMMA_SOURCE_FILE ("instruction-if.galgas", 161)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 163)) ;
            var_optionalMethodActualArgumentList_4842.addAssign_operation (var_selector_5099, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 164)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("instruction-if.galgas", 164))  COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
          } break ;
          case 4: {
            GALGAS_luint var_repetitionCount_6015 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 167)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsNotEqual, var_selector_5099.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray3 ;
                inCompiler->emitSemanticError (var_selector_5099.getter_location (SOURCE_FILE ("instruction-if.galgas", 169)), GALGAS_string ("the selector should be '\?'"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 169)) ;
              }
            }
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, var_repetitionCount_6015.getter_uint (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (var_repetitionCount_6015.getter_location (SOURCE_FILE ("instruction-if.galgas", 172)), GALGAS_string ("the repetition count should be > 0"), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 172)) ;
              }
            }
            cEnumerator_range enumerator_6334 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_repetitionCount_6015.getter_uint (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 174))), kENUMERATION_UP) ;
            while (enumerator_6334.hasCurrentObject ()) {
              var_optionalMethodActualArgumentList_4842.addAssign_operation (var_selector_5099, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 175)), enumerator_6334.current (HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 175))  COMMA_SOURCE_FILE ("instruction-if.galgas", 175)) ;
              enumerator_6334.gotoNextObject () ;
            }
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 179)) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_optionalMethodCall (var_receiverExpression_4713, var_optionalMethodName_4767, var_optionalMethodActualArgumentList_4842  COMMA_SOURCE_FILE ("instruction-if.galgas", 180))  COMMA_SOURCE_FILE ("instruction-if.galgas", 180)) ;
    } break ;
    case 3: {
      GALGAS_semanticExpressionAST var_expression_6774 ;
      nt_expression_ (var_expression_6774, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_regularExp (var_expression_6774  COMMA_SOURCE_FILE ("instruction-if.galgas", 187))  COMMA_SOURCE_FILE ("instruction-if.galgas", 187)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 190)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 108)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 109)) ;
      nt_expression_5F_or_parse (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 120)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 121)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 131)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 133)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
          nt_expression_parse (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 141)) ;
          switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 143)) ;
            switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 148)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 153)) ;
            switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 158)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 160)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 163)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 167)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 179)) ;
    } break ;
    case 3: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 190)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 108)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 109)) ;
      nt_expression_5F_or_indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 120)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 121)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 131)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 133)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
          nt_expression_indexing (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 141)) ;
          switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 143)) ;
            switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 148)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 153)) ;
            switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 158)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 160)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 163)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 167)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 179)) ;
    } break ;
    case 3: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 190)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  GALGAS_lstring var_typeName_1519 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  GALGAS_lstring var_constantName_1554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  outArgument_outInstruction = GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (var_typeName_1519.getter_location (SOURCE_FILE ("instruction-let.galgas", 39)), var_typeName_1519, var_constantName_1554  COMMA_SOURCE_FILE ("instruction-let.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  GALGAS_lstring var_typeName_1922 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  GALGAS_lstring var_variableName_1957 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2027 ;
  nt_expression_ (var_sourceExpression_2027, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_1922.getter_location (SOURCE_FILE ("instruction-let.galgas", 54)), GALGAS_bool (true), var_typeName_1922, var_variableName_1957, var_sourceExpression_2027  COMMA_SOURCE_FILE ("instruction-let.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  GALGAS_lstring var_variableName_2465 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2535 ;
  nt_expression_ (var_sourceExpression_2535, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (var_variableName_2465.getter_location (SOURCE_FILE ("instruction-let.galgas", 69)), var_variableName_2465, var_sourceExpression_2535  COMMA_SOURCE_FILE ("instruction-let.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  GALGAS_location var_instructionLocation_1070 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 27)) ;
  GALGAS_logListAST var_logList_1111 = GALGAS_logListAST::constructor_emptyList (SOURCE_FILE ("instruction-log.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName_1185 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
      var_logList_1111.addAssign_operation (var_loggedVariableName_1185, GALGAS_varInExpressionAST::constructor_new (var_loggedVariableName_1185  COMMA_SOURCE_FILE ("instruction-log.galgas", 32))  COMMA_SOURCE_FILE ("instruction-log.galgas", 32)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      GALGAS_lstring var_propertyName_1346 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
      var_logList_1111.addAssign_operation (var_propertyName_1346, GALGAS_structPropertyAccessExpressionAST::constructor_new (var_propertyName_1346.getter_location (HERE), GALGAS_selfInExpressionAST::constructor_new (var_propertyName_1346.getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas", 39)), var_propertyName_1346  COMMA_SOURCE_FILE ("instruction-log.galgas", 39))  COMMA_SOURCE_FILE ("instruction-log.galgas", 37)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_logMessage_1571 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      GALGAS_semanticExpressionAST var_logExpression_1623 ;
      nt_expression_ (var_logExpression_1623, inCompiler) ;
      var_logList_1111.addAssign_operation (var_logMessage_1571, var_logExpression_1623  COMMA_SOURCE_FILE ("instruction-log.galgas", 44)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::constructor_new (var_instructionLocation_1070, var_logList_1111  COMMA_SOURCE_FILE ("instruction-log.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop.galgas", 27)) ;
  GALGAS_location var_instructionLocation_1206 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 30)) ;
  GALGAS_semanticExpressionAST var_mVariantExpression_1310 ;
  nt_expression_ (var_mVariantExpression_1310, inCompiler) ;
  GALGAS_location var_mEndOfVariantExpression_1342 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 33)) ;
  GALGAS_semanticInstructionListAST var_mFirstInstructions_1458 ;
  nt_semantic_5F_instruction_5F_list_ (var_mFirstInstructions_1458, inCompiler) ;
  GALGAS_location var_mEndOfFirstInstructions_1497 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop.galgas", 38)) ;
  GALGAS_semanticExpressionAST var_mLoopExpression_1587 ;
  nt_expression_ (var_mLoopExpression_1587, inCompiler) ;
  GALGAS_location var_mEndOfLoopExpression_1616 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop.galgas", 41)) ;
  GALGAS_semanticInstructionListAST var_mSecondInstructions_1727 ;
  nt_semantic_5F_instruction_5F_list_ (var_mSecondInstructions_1727, inCompiler) ;
  GALGAS_location var_mEndOfSecondInstructions_1760 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop.galgas", 44)) ;
  switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1849 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_1849.getter_string (HERE).objectCompare (GALGAS_string ("loop"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%loop")) ;
        inCompiler->emitSemanticError (var_terminator_1849.getter_location (SOURCE_FILE ("instruction-loop.galgas", 49)), GALGAS_string ("the terminator attribute should be '%loop'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-loop.galgas", 49)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_mEndOfLoopInstruction_2037 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 52)) ;
  outArgument_outInstruction = GALGAS_loopInstructionAST::constructor_new (var_instructionLocation_1206, var_mVariantExpression_1310, var_mEndOfVariantExpression_1342, var_mFirstInstructions_1458, var_mEndOfFirstInstructions_1497, var_mLoopExpression_1587, var_mEndOfLoopExpression_1616, var_mSecondInstructions_1727, var_mEndOfSecondInstructions_1760, var_mEndOfLoopInstruction_2037  COMMA_SOURCE_FILE ("instruction-loop.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 30)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 33)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop.galgas", 38)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop.galgas", 41)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop.galgas", 44)) ;
  switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 30)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop.galgas", 33)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop.galgas", 38)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop.galgas", 41)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop.galgas", 44)) ;
  switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i44_ (GALGAS_matchEntryListAST & ioArgument_ioMatchEntryList,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_enumerationConstantName_1671 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
  ioArgument_ioMatchEntryList.addAssign_operation (GALGAS_bool (false), var_enumerationConstantName_1671, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 42))  COMMA_SOURCE_FILE ("instruction-match.galgas", 42))  COMMA_SOURCE_FILE ("instruction-match.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i44_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i44_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i45_ (GALGAS_matchEntryListAST & ioArgument_ioMatchEntryList,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_className_1996 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  GALGAS_lstring var_localConstant_2023 ;
  switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
    var_localConstant_2023 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 51))  COMMA_SOURCE_FILE ("instruction-match.galgas", 51)) ;
  } break ;
  case 2: {
    var_localConstant_2023 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMatchEntryList.addAssign_operation (GALGAS_bool (true), var_className_1996, var_localConstant_2023  COMMA_SOURCE_FILE ("instruction-match.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i45_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i45_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-match.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i46_ (GALGAS_matchInstructionBranchListAST & ioArgument_ioMatchInstructionBranchList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  GALGAS_matchEntryListAST var_mMatchEntryList_2491 = GALGAS_matchEntryListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_ (var_mMatchEntryList_2491, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfMatchEntryList_2602 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-match.galgas", 72)) ;
  GALGAS_semanticInstructionListAST var_mMatchBranchInstructionList_2687 ;
  nt_semantic_5F_instruction_5F_list_ (var_mMatchBranchInstructionList_2687, inCompiler) ;
  ioArgument_ioMatchInstructionBranchList.addAssign_operation (var_mMatchEntryList_2491, var_endOfMatchEntryList_2602, var_mMatchBranchInstructionList_2687, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 79))  COMMA_SOURCE_FILE ("instruction-match.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i46_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-match.galgas", 72)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i46_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-match.galgas", 72)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_match COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  GALGAS_semanticExpressionListAST var_matchedExpressionNameList_3162 = GALGAS_semanticExpressionListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 86)) ;
  GALGAS_location var_instructionLocation_3195 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 87)) ;
  GALGAS_semanticExpressionAST var_receiverExpression_3276 ;
  nt_expression_ (var_receiverExpression_3276, inCompiler) ;
  var_matchedExpressionNameList_3162.addAssign_operation (var_receiverExpression_3276, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 89))  COMMA_SOURCE_FILE ("instruction-match.galgas", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 91)) ;
    GALGAS_semanticExpressionAST var_expression_3424 ;
    nt_expression_ (var_expression_3424, inCompiler) ;
    var_matchedExpressionNameList_3162.addAssign_operation (var_expression_3424, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 93))  COMMA_SOURCE_FILE ("instruction-match.galgas", 93)) ;
    switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_matchInstructionBranchListAST var_matchInstructionBranchList_3567 = GALGAS_matchInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 96)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_ (var_matchInstructionBranchList_3567, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GALGAS_semanticInstructionListAST var_elseInstructionList_3716 ;
  switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
    var_elseInstructionList_3716 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 103)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-match.galgas", 105)) ;
    nt_semantic_5F_instruction_5F_list_ (var_elseInstructionList_3716, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-match.galgas", 108)) ;
  GALGAS_location var_endOf_5F_match_5F_instruction_3884 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 109)) ;
  switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3963 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-match.galgas", 112)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, var_terminator_3963.getter_string (HERE).objectCompare (GALGAS_string ("match"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("%match")) ;
        inCompiler->emitSemanticError (var_terminator_3963.getter_location (SOURCE_FILE ("instruction-match.galgas", 114)), GALGAS_string ("the terminator attribute should be '%match'"), fixItArray3  COMMA_SOURCE_FILE ("instruction-match.galgas", 114)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_matchInstructionAST::constructor_new (var_instructionLocation_3195, var_matchedExpressionNameList_3162, var_matchInstructionBranchList_3567, var_elseInstructionList_3716, var_endOf_5F_match_5F_instruction_3884  COMMA_SOURCE_FILE ("instruction-match.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_match COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 91)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-match.galgas", 105)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-match.galgas", 108)) ;
  switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-match.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_match COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-match.galgas", 91)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-match.galgas", 105)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-match.galgas", 108)) ;
  switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-match.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  GALGAS_location var_instructionLocation_885 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 19)) ;
  GALGAS_semanticExpressionAST var_expression_958 ;
  nt_expression_ (var_expression_958, inCompiler) ;
  outArgument_outInstruction = GALGAS_messageInstructionAST::constructor_new (var_instructionLocation_885, var_expression_958  COMMA_SOURCE_FILE ("instruction-message.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  GALGAS_location var_instructionLocation_964 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1046 ;
  nt_expression_ (var_mReceiverExpression_1046, inCompiler) ;
  GALGAS_lstring var_mMethodName_1080 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1157 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1157, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
  outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation_964, var_mReceiverExpression_1046, var_mMethodName_1080, var_actualParameterList_1157  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mRoutineName_913 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1019 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1019, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
  outArgument_outInstruction = GALGAS_procCallInstructionAST::constructor_new (var_mRoutineName_913.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 24)), var_mRoutineName_913, var_actualParameterList_1019  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  GALGAS_location var_instructionLocation_899 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_986 ;
  nt_expression_ (var_sourceExpression_986, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::constructor_new (var_instructionLocation_899, var_sourceExpression_986  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  GALGAS_location var_instructionLocation_1857 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1970 ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList_1970, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (var_instructionLocation_1857, var_expressionList_1970  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  GALGAS_location var_instructionLocation_2331 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  GALGAS_semanticExpressionAST var_expression_2413 ;
  nt_expression_ (var_expression_2413, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2331, var_expression_2413  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  GALGAS_location var_instructionLocation_2772 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  GALGAS_semanticExpressionAST var_expression_2854 ;
  nt_expression_ (var_expression_2854, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMinusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2772, var_expression_2854  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  GALGAS_location var_instructionLocation_3214 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  GALGAS_semanticExpressionAST var_expression_3296 ;
  nt_expression_ (var_expression_3296, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3214, var_expression_3296  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  GALGAS_location var_instructionLocation_3654 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  GALGAS_semanticExpressionAST var_expression_3736 ;
  nt_expression_ (var_expression_3736, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfDivEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3654, var_expression_3736  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  GALGAS_location var_instructionLocation_1299 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 31)) ;
  GALGAS_lstring var_selector_1339 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_1339.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_1339.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 34)), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 34)) ;
    }
  }
  GALGAS_bool var_prefixedBySelf_1471 ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_1471 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
    var_prefixedBySelf_1471 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mReceiverName_1613 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  GALGAS_lstringlist var_mReceiverStructAttributes_1647 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 45)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      GALGAS_lstring var_structAttribute_1735 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
      var_mReceiverStructAttributes_1647.addAssign_operation (var_structAttribute_1735  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 50)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_lstring var_typeNameForCasting_1827 ;
  switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
    var_typeNameForCasting_1827 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-setter-call.galgas", 54)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    var_typeNameForCasting_1827 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSetterName_1972 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2049 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_2049, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
  outArgument_outInstruction = GALGAS_setterCallInstructionAST::constructor_new (var_instructionLocation_1299, var_prefixedBySelf_1471, var_mReceiverName_1613, var_mReceiverStructAttributes_1647, var_typeNameForCasting_1827, var_mSetterName_1972, var_actualParameterList_2049  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  GALGAS_location var_instructionLocation_2526 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
  GALGAS_lstring var_selector_2566 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_2566.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_2566.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 80)), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 80)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  GALGAS_lstring var_mSetterName_2718 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2795 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_2795, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
  outArgument_outInstruction = GALGAS_selfSetterCallInstructionAST::constructor_new (var_instructionLocation_2526, var_mSetterName_2718, var_actualParameterList_2795  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  GALGAS_location var_instructionLocation_1560 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
  GALGAS_semanticExpressionAST var_switchExpression_1616 ;
  nt_expression_ (var_switchExpression_1616, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_1646 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
  GALGAS_switchBranchesAST var_switchBranches_1701 = GALGAS_switchBranchesAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    GALGAS_lstringlist var_constantNameList_1793 ;
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_1863 ;
    nt_switch_5F_case_ (var_constantNameList_1793, var_associatedValuesExtraction_1863, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    GALGAS_semanticInstructionListAST var_instructions_1925 ;
    nt_semantic_5F_instruction_5F_list_ (var_instructions_1925, inCompiler) ;
    var_switchBranches_1701.addAssign_operation (var_constantNameList_1793, var_associatedValuesExtraction_1863, var_instructions_1925, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
    switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  GALGAS_location var_endOfSwitchInstruction_2084 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 54)) ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2163 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_2163.getter_string (HERE).objectCompare (GALGAS_string ("switch"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%switch")) ;
        inCompiler->emitSemanticError (var_terminator_2163.getter_location (SOURCE_FILE ("instruction-switch.galgas", 59)), GALGAS_string ("the terminator attribute should be '%switch'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-switch.galgas", 59)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_1560, var_switchExpression_1616, var_endOfSwitchExpression_1646, var_switchBranches_1701, var_endOfSwitchInstruction_2084  COMMA_SOURCE_FILE ("instruction-switch.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i60_ (GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                                                  GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 77)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_2855 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_2855  COMMA_SOURCE_FILE ("instruction-switch.galgas", 80)) ;
    switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 84)) ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
      case 1: {
        GALGAS_luint var_n_3047 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
        cEnumerator_range enumerator_3093 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_n_3047.getter_uint (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 92))), kENUMERATION_UP) ;
        while (enumerator_3093.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 93)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 93)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 93)) ;
          enumerator_3093.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 96)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 97)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 97)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 97)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_3334 ;
        switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
        case 1: {
          var_typeName_3334 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 101)) ;
        } break ;
        case 2: {
          var_typeName_3334 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 103)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_3483 ;
        switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_3483 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
          var_constantMarkedAsUnused_3483 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_3683 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_3334, var_constantName_3683, var_constantMarkedAsUnused_3483  COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i60_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 96)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 101)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i60_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 96)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 101)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  GALGAS_location var_instructionLocation_940 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 21)) ;
  GALGAS_lstring var_mTypeName_993 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  GALGAS_lstring var_mMethodName_1071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1148 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1148, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::constructor_new (var_instructionLocation_940, var_mTypeName_993, var_mMethodName_1071, var_actualParameterList_1148  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  GALGAS_lstring var_variableName_939 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_1009 ;
  nt_expression_ (var_sourceExpression_1009, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (var_variableName_939.getter_location (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 24)), var_variableName_939, var_sourceExpression_1009  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  GALGAS_location var_instructionLocation_971 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1053 ;
  nt_expression_ (var_mReceiverExpression_1053, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression_1125 ;
  nt_expression_ (var_mWarningExpression_1125, inCompiler) ;
  GALGAS_fixitListAST var_fixitListAST_1175 ;
  nt_issue_5F_fixit_ (var_fixitListAST_1175, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::constructor_new (var_instructionLocation_971, var_mReceiverExpression_1053, var_mWarningExpression_1125, var_fixitListAST_1175  COMMA_SOURCE_FILE ("instruction-warning.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_parse (inCompiler) ;
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i64_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  GALGAS_location var_instructionLocation_1877 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 45)) ;
  GALGAS_semanticExpressionAST var_keyExpression_1953 ;
  nt_expression_ (var_keyExpression_1953, inCompiler) ;
  GALGAS_location var_endOfKeyExpression_1980 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 47)) ;
  GALGAS_lstring var_withPrefix_2021 ;
  switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
  case 1: {
    var_withPrefix_2021 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 50))  COMMA_SOURCE_FILE ("instruction-with.galgas", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    var_withPrefix_2021 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_ (var_instructionLocation_1877, var_keyExpression_1953, var_endOfKeyExpression_1980, var_withPrefix_2021, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
  switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2336 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 60)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_2336.getter_string (HERE).objectCompare (GALGAS_string ("with"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%with")) ;
        inCompiler->emitSemanticError (var_terminator_2336.getter_location (SOURCE_FILE ("instruction-with.galgas", 62)), GALGAS_string ("the terminator attribute should be '%with'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 62)) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i64_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
  switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i64_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
  switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 60)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_receiverExpression_2925 ;
  nt_expression_ (var_receiverExpression_2925, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_2957 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 77)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_3021 ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_3021 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 80)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
    var_searchMethodNameForErrorSignaling_3021 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 86)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_3282 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_3282, inCompiler) ;
  GALGAS_location var_endOfDoInstructions_3310 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 88)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_3383 ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_3383 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 91)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 93)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_3021.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_3021.getter_location (SOURCE_FILE ("instruction-with.galgas", 95)), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 95)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_3383, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_receiverExpression_2925, var_endOfReceiverExpression_2957, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_3021, var_mDoBranchInstructions_3282, var_endOfDoInstructions_3310, var_mElseBranchInstructions_3383, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 110))  COMMA_SOURCE_FILE ("instruction-with.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 86)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 93)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 86)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 93)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 123)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_4444.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_4444.getter_location (SOURCE_FILE ("instruction-with.galgas", 125)), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 125)) ;
    }
  }
  GALGAS_bool var_targetIsPrefixedBySelf_4584 ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
    var_targetIsPrefixedBySelf_4584 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 131)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 132)) ;
    var_targetIsPrefixedBySelf_4584 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_targetObjectName_4745 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 135)) ;
  GALGAS_lstringlist var_structAttributeList_4773 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 136)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
      GALGAS_lstring var_mStructFieldName_4862 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 140)) ;
      var_structAttributeList_4773.addAssign_operation (var_mStructFieldName_4862  COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfReceiverExpression_4949 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_5013 ;
  switch (select_galgas_33_InstructionsSyntax_80 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_5013 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 146)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 148)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 149)) ;
    var_searchMethodNameForErrorSignaling_5013 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 152)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_5274 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_5274, inCompiler) ;
  GALGAS_location var_endOf_5F_do_5F_instructions_5304 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 154)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_5377 ;
  switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_5377 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 157)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 159)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_5013.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_5013.getter_location (SOURCE_FILE ("instruction-with.galgas", 161)), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray4  COMMA_SOURCE_FILE ("instruction-with.galgas", 161)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_5377, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_else_5F_instructions_5713 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 165)) ;
  outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_targetObjectName_4745, var_targetIsPrefixedBySelf_4584, var_structAttributeList_4773, var_endOfReceiverExpression_4949, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_5013, var_mDoBranchInstructions_5274, var_endOf_5F_do_5F_instructions_5304, var_mElseBranchInstructions_5377, var_endOf_5F_else_5F_instructions_5713  COMMA_SOURCE_FILE ("instruction-with.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 123)) ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 131)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 135)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 140)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_80 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 148)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 149)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 152)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 159)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 123)) ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 131)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 135)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 140)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_80 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 148)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 149)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 152)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 159)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
    } break ;
    case 3: {
      nt_declaration_ (ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
    } break ;
    case 3: {
      nt_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
    } break ;
    case 3: {
      nt_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isPublic_3148 ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    var_isPublic_3148 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 63)) ;
    var_isPublic_3148 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_attributeTypeName_3256 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  GALGAS_lstring var_attributeName_3290 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  GALGAS_lstringlist var_featureList_3308 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName_3386 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
      var_featureList_3308.addAssign_operation (var_featureName_3386  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 72)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_attributeTypeName_3256, var_attributeName_3290, var_isPublic_3148, var_featureList_3308  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i2_ (const GALGAS_bool constinArgument_inIsInternal,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  GALGAS_lstring var_mFilewrapperName_4315 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
  GALGAS_lstring var_mFilewrapperPath_4398 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 99)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_4463 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_4463, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_4532 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_4532, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_4587 ;
  nt_filewrapper_5F_templates_ (var_filewrapperTemplateList_4587, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsInternal, GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 106)), var_mFilewrapperName_4315, var_mFilewrapperPath_4398, var_filewrapperTextFileExtensionList_4463, var_filewrapperBinaryFileExtensionList_4532, var_filewrapperTemplateList_4587  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 103))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 99)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 99)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GALGAS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 118)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 119)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_5226 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 123)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssign_operation (var_pathExtension_5226  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 124)) ;
      switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 126)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 129)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 119)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 123)) ;
      switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 126)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 129)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 119)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 123)) ;
      switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 126)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 129)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GALGAS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 136)) ;
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_5658 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 140)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension_5658  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 141)) ;
      switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 146)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 136)) ;
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 140)) ;
      switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 146)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 136)) ;
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 140)) ;
      switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 146)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GALGAS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 152)) ;
  outArgument_outFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 153)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 156)) ;
      GALGAS_lstring var_mFilewrapperTemplateName_6091 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 157)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath_6136 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 158)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_6218 = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 159)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_6268 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 162)) ;
          GALGAS_lstring var_typeName_6306 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 163)) ;
          GALGAS_bool var_isUnused_6327 ;
          switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
            var_isUnused_6327 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 168)) ;
            var_isUnused_6327 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_6462 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 171)) ;
          var_filewrapperTemplateFormalInputParameters_6218.addAssign_operation (var_selector_6268, var_typeName_6306, var_argumentName_6462, var_isUnused_6327  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 172)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      outArgument_outFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName_6091, var_mFilewrapperTemplatePath_6136, var_filewrapperTemplateFormalInputParameters_6218  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 174)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 179)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 152)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 156)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 157)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 158)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 162)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 163)) ;
          switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 168)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 171)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 179)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 152)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 156)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 157)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 158)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 162)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 163)) ;
          switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 168)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 171)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 179)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 18)) ;
  GALGAS_lstring var_arrayTypeName_893 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 21)) ;
  GALGAS_lstring var_elementListTypeName_977 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  GALGAS_luint var_dimension_1056 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool (false), var_arrayTypeName_893, var_elementListTypeName_977, var_dimension_1056  COMMA_SOURCE_FILE ("type-array.galgas", 26))  COMMA_SOURCE_FILE ("type-array.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i7_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 17)) ;
  GALGAS_lstring var_boolsetTypeName_857 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  GALGAS_lstringlist var_slotList_917 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_slotName_966 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 22)) ;
    var_slotList_917.addAssign_operation (var_slotName_966  COMMA_SOURCE_FILE ("type-boolset.galgas", 23)) ;
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_boolsetDeclarationAST::constructor_new (GALGAS_bool (false), var_boolsetTypeName_857, var_slotList_917  COMMA_SOURCE_FILE ("type-boolset.galgas", 28))  COMMA_SOURCE_FILE ("type-boolset.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 17)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 22)) ;
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 17)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 22)) ;
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isAbstract_1136 ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    var_isAbstract_1136 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 29)) ;
    var_isAbstract_1136 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isReference_1250 ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 34)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorClassDeclaration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 36)), GALGAS_string ("'class' declaration is obsolete, use 'valueclass'"), fixItArray1  COMMA_SOURCE_FILE ("type-class.galgas", 36)) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 38)), GALGAS_string ("'class' declaration is obsolete, use 'valueclass'"), fixItArray2  COMMA_SOURCE_FILE ("type-class.galgas", 38)) ;
    }
    var_isReference_1250 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_valueclass COMMA_SOURCE_FILE ("type-class.galgas", 42)) ;
    var_isReference_1250 = GALGAS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 45)) ;
    var_isReference_1250 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_className_1687 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 48)) ;
  GALGAS_lstring var_superClassName_1740 ;
  switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
    var_superClassName_1740 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
    var_superClassName_1740 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_classFeatureList_1931 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 56)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_classFeatureName_2020 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
      var_classFeatureList_1931.addAssign_operation (var_classFeatureName_2020  COMMA_SOURCE_FILE ("type-class.galgas", 60)) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 62)) ;
  GALGAS_string var_mClassMessage_2106 = GALGAS_string::makeEmptyString () ;
  GALGAS_propertyInCollectionListAST var_propertyList_2181 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 65)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_2181, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_4 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 72)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_isAbstract_1136, var_isReference_1250, var_className_1687, var_superClassName_1740, var_classFeatureList_1931, var_propertyList_2181  COMMA_SOURCE_FILE ("type-class.galgas", 73))  COMMA_SOURCE_FILE ("type-class.galgas", 73)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isReference_1250.boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_lstring temp_6 ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_superClassName_1740.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = var_superClassName_1740 ;
      }else if (kBoolFalse == test_7) {
        temp_6 = GALGAS_lstring::constructor_new (var_superClassName_1740.getter_string (HERE).add_operation (GALGAS_string ("-weak"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 87)), var_superClassName_1740.getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 87)) ;
      }
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_weakReferenceDeclarationAST::constructor_new (GALGAS_bool (false), var_className_1687, GALGAS_lstring::constructor_new (var_className_1687.getter_string (HERE).add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 86)), var_className_1687.getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 86)), temp_6, var_classFeatureList_1931, var_propertyList_2181  COMMA_SOURCE_FILE ("type-class.galgas", 83))  COMMA_SOURCE_FILE ("type-class.galgas", 83)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_valueclass COMMA_SOURCE_FILE ("type-class.galgas", 42)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 48)) ;
  switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 62)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_valueclass COMMA_SOURCE_FILE ("type-class.galgas", 42)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 48)) ;
  switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 62)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 25)) ;
  GALGAS_lstring var_mEnumTypeName_1100 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  GALGAS_enumConstantList var_mConstantList_1168 = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 30)) ;
    GALGAS_lstring var_constantName_1234 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList_1278 = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 32)) ;
    switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 35)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType_1375 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 37)) ;
        GALGAS_lstring var_associatedValueName_1423 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 38)) ;
        var_associatedValueTypeList_1278.addAssign_operation (var_associatedValueType_1375, var_associatedValueName_1423  COMMA_SOURCE_FILE ("type-enum.galgas", 39)) ;
        switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 42)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList_1168.addAssign_operation (var_constantName_1234, var_associatedValueTypeList_1278  COMMA_SOURCE_FILE ("type-enum.galgas", 44)) ;
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_defaultConstantName_1663 ;
  switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
    var_defaultConstantName_1663 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-enum.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 51)) ;
    var_defaultConstantName_1663 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName_1100, var_mConstantList_1168, var_defaultConstantName_1663  COMMA_SOURCE_FILE ("type-enum.galgas", 55))  COMMA_SOURCE_FILE ("type-enum.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 30)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
    switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 35)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 37)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 38)) ;
        switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 42)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 51)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 30)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
    switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 35)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 37)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 38)) ;
        switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 42)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 51)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  GALGAS_lstring var_externTypeName_2466 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  GALGAS_string var_cppPredeclarationCode_2559 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_2559, inCompiler) ;
  GALGAS_string var_cppClassCode_2615 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_2615, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList_2680 = GALGAS_externTypeConstructorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 69)) ;
  GALGAS_externTypeGetterList var_externTypeGetterList_2733 = GALGAS_externTypeGetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 70)) ;
  GALGAS_externTypeSetterList var_externTypeSetterList_2785 = GALGAS_externTypeSetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 71)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList_2837 = GALGAS_externTypeMethodList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 72)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (var_externTypeConstructorList_2680, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (var_externTypeGetterList_2733, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (var_externTypeSetterList_2785, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (var_externTypeMethodList_2837, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool (false), var_externTypeName_2466, var_cppPredeclarationCode_2559, var_cppClassCode_2615, var_externTypeConstructorList_2680, var_externTypeGetterList_2733, var_externTypeSetterList_2785, var_externTypeMethodList_2837  COMMA_SOURCE_FILE ("type-extern.galgas", 84))  COMMA_SOURCE_FILE ("type-extern.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_ (GALGAS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  outArgument_outCppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_3741 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
      outArgument_outCppPredeclarationCode.plusAssign_operation(var_cppPredeclarationCodeElement_3741.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 104)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_ (GALGAS_string & outArgument_outCppClassCode,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  outArgument_outCppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_4138 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
      outArgument_outCppClassCode.plusAssign_operation(var_cppPredeclarationCodeElement_4138.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 117)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i13_ (GALGAS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  GALGAS_lstring var_constructorName_4498 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_4552 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_4602 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      GALGAS_lstring var_argumentTypeName_4647 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      GALGAS_lstring var_argumentName_4693 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
      var_argumentTypeList_4552.addAssign_operation (var_selector_4602, var_argumentTypeName_4647, var_argumentName_4693  COMMA_SOURCE_FILE ("type-extern.galgas", 133)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  GALGAS_lstring var_resultTypeName_4819 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
  ioArgument_ioExternTypeConstructorList.addAssign_operation (var_constructorName_4498, var_resultTypeName_4819, var_argumentTypeList_4552  COMMA_SOURCE_FILE ("type-extern.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i14_ (GALGAS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  GALGAS_lstring var_getterName_5163 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_5217 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_5267 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      GALGAS_lstring var_argumentTypeName_5312 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      GALGAS_lstring var_argumentName_5358 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
      var_argumentTypeList_5217.addAssign_operation (var_selector_5267, var_argumentTypeName_5312, var_argumentName_5358  COMMA_SOURCE_FILE ("type-extern.galgas", 151)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  GALGAS_lstring var_resultTypeName_5484 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
  ioArgument_ioExternTypeGetterList.addAssign_operation (var_getterName_5163, var_resultTypeName_5484, var_argumentTypeList_5217  COMMA_SOURCE_FILE ("type-extern.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i15_ (GALGAS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  GALGAS_lstring var_setterName_5818 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  GALGAS_formalParameterListAST var_formalParameterList_5895 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_5895, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssign_operation (var_setterName_5818, var_formalParameterList_5895  COMMA_SOURCE_FILE ("type-extern.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i16_ (GALGAS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  GALGAS_lstring var_methodName_6216 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  GALGAS_formalParameterListAST var_formalParameterList_6293 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_6293, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssign_operation (var_methodName_6216, var_formalParameterList_6293, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 173))  COMMA_SOURCE_FILE ("type-extern.galgas", 173)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 26)) ;
  GALGAS_lstring var_graphTypeName_1129 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  GALGAS_lstring var_associatedListTypeName_1212 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList_1260 = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 35)) ;
      GALGAS_lstring var_insertName_1370 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      GALGAS_lstring var_errorMessage_1445 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
      var_graphInsertModifierList_1260.addAssign_operation (var_insertName_1370, var_errorMessage_1445  COMMA_SOURCE_FILE ("type-graph.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName_1129, var_associatedListTypeName_1212, var_graphInsertModifierList_1260  COMMA_SOURCE_FILE ("type-graph.galgas", 43))  COMMA_SOURCE_FILE ("type-graph.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 17)) ;
  GALGAS_lstring var_listTypeName_865 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_972 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_ (var_propertyList_972, inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 29)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_listTypeName_865, var_propertyList_972  COMMA_SOURCE_FILE ("type-list.galgas", 30))  COMMA_SOURCE_FILE ("type-list.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 17)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_parse (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 17)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_indexing (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 18)) ;
  GALGAS_lstring var_mListmapTypeName_872 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  GALGAS_lstring var_mAssociatedListTypeName_958 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool (false), var_mListmapTypeName_872, var_mAssociatedListTypeName_958  COMMA_SOURCE_FILE ("type-listmap.galgas", 23))  COMMA_SOURCE_FILE ("type-listmap.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 27)) ;
  GALGAS_lstring var_mDictTypeName_1302 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  GALGAS_lstring var_keyTypeName_1417 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 32)) ;
  GALGAS_lstringlist var_mapAttributeList_1473 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1533 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 37)) ;
      var_mapAttributeList_1473.addAssign_operation (var_attribute_1533  COMMA_SOURCE_FILE ("type-dict.galgas", 38)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1629 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 42)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_1629, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 49)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_dictDeclarationAST::constructor_new (GALGAS_bool (false), var_mDictTypeName_1302, var_keyTypeName_1417, var_mapAttributeList_1473, var_propertyList_1629  COMMA_SOURCE_FILE ("type-dict.galgas", 50))  COMMA_SOURCE_FILE ("type-dict.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  GALGAS_lstring var_mMapTypeName_2427 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 63)) ;
  GALGAS_lstringlist var_mapAttributeList_2535 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_2595 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 68)) ;
      var_mapAttributeList_2535.addAssign_operation (var_attribute_2595  COMMA_SOURCE_FILE ("type-map.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 72)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2691 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 73)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_2750 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 74)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_2821 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 75)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList_2872 = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 76)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_2950 = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 77)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_2691, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_2750, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_ (var_mSearchMethodList_2821, inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_ (var_mRemoveMethodList_2872, inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_2950, inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 92)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_2427, var_mapAttributeList_2535, var_propertyList_2691, var_mInsertMethodList_2750, var_mSearchMethodList_2821, var_mRemoveMethodList_2872, var_insertOrReplaceDeclarationListAST_2950  COMMA_SOURCE_FILE ("type-map.galgas", 93))  COMMA_SOURCE_FILE ("type-map.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 68)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 72)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 68)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 72)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i22_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 108)) ;
  GALGAS_lstring var_methodName_3874 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 109)) ;
  GALGAS_bool var_locationAttribute_3902 ;
  switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
    var_locationAttribute_3902 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_attribute_3986 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 114)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_attribute_3986.getter_string (HERE).objectCompare (GALGAS_string ("location"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_locationAttribute_3902 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%location")) ;
      inCompiler->emitSemanticError (var_attribute_3986.getter_location (SOURCE_FILE ("type-map.galgas", 118)), GALGAS_string ("only the %location is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-map.galgas", 118)) ;
      var_locationAttribute_3902.drop () ; // Release error dropped variable
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  GALGAS_lstring var_errorMessage_4275 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_methodName_3874, var_errorMessage_4275, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 124))  COMMA_SOURCE_FILE ("type-map.galgas", 124)), var_locationAttribute_3902  COMMA_SOURCE_FILE ("type-map.galgas", 124)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 109)) ;
  switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 114)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 109)) ;
  switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 114)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i23_ (GALGAS_mapRemoveMethodListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  GALGAS_lstring var_mMethodName_4636 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  GALGAS_lstring var_mErrorMessage_4706 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 134)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssign_operation (var_mMethodName_4636, var_mErrorMessage_4706  COMMA_SOURCE_FILE ("type-map.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 134)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 144))  COMMA_SOURCE_FILE ("type-map.galgas", 144)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 150)) ;
  GALGAS_lstring var_mMethodName_5366 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 151)) ;
  GALGAS_lstring var_stateName_5389 ;
  switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
    var_stateName_5389 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 154))  COMMA_SOURCE_FILE ("type-map.galgas", 154)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-map.galgas", 156)) ;
    var_stateName_5389 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 157)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 160)) ;
  GALGAS_lstring var_mErrorMessage_5583 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 161)) ;
  GALGAS_lstring var_mShadowErrorMessage_5616 ;
  switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_5616 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 164))  COMMA_SOURCE_FILE ("type-map.galgas", 164)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 166)) ;
    var_mShadowErrorMessage_5616 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 167)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName_5366, var_mErrorMessage_5583, var_mShadowErrorMessage_5616, var_stateName_5389  COMMA_SOURCE_FILE ("type-map.galgas", 169)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 150)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 151)) ;
  switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-map.galgas", 156)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 157)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 161)) ;
  switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 166)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 167)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 150)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 151)) ;
  switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-map.galgas", 156)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 157)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 161)) ;
  switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 166)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 167)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-shared-map.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-shared-map.galgas", 93)) ;
  GALGAS_lstring var_mMapTypeName_4053 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapEntryDefinition, "-entry") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-shared-map.galgas", 95)) ;
  GALGAS_lstring var_mapEntryTypeName_4136 = GALGAS_lstring::constructor_new (var_mMapTypeName_4053.getter_string (HERE).add_operation (GALGAS_string ("-entry"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 96)), var_mMapTypeName_4053.getter_location (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 96)) ;
  GALGAS_lstringlist var_mapAttributeList_4264 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 98)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_4324 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 101)) ;
      var_mapAttributeList_4264.addAssign_operation (var_attribute_4324  COMMA_SOURCE_FILE ("type-shared-map.galgas", 102)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 105)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_4445 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 106)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_4493 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 107)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_4544 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 108)) ;
  GALGAS_mapStateList var_mapStateList_4580 = GALGAS_mapStateList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 109)) ;
  GALGAS_mapOverrideBlockListAST var_mapOverrideBlockListAST_4638 = GALGAS_mapOverrideBlockListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 110)) ;
  GALGAS_sharedMapAttributeListAST var_sharedMapAttributeListAST_4700 = GALGAS_sharedMapAttributeListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 111)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_list_ (var_mapStateList_4580, inCompiler) ;
    } break ;
    case 3: {
      nt_shared_5F_map_5F_attribute_ (var_sharedMapAttributeListAST_4700, inCompiler) ;
    } break ;
    case 4: {
      nt_property_5F_declaration_ (var_propertyList_4445, inCompiler) ;
    } break ;
    case 5: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_4493, inCompiler) ;
    } break ;
    case 6: {
      nt_shared_5F_map_5F_search_5F_method_5F_declaration_ (var_mSearchMethodList_4544, inCompiler) ;
    } break ;
    case 7: {
      nt_shared_5F_map_5F_override_ (var_mapOverrideBlockListAST_4638, inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 126)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 128)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_sharedMapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_4053, var_mapAttributeList_4264, var_propertyList_4445, var_mInsertMethodList_4493, var_mSearchMethodList_4544, var_mapStateList_4580, var_mapOverrideBlockListAST_4638, var_sharedMapAttributeListAST_4700  COMMA_SOURCE_FILE ("type-shared-map.galgas", 130))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 130)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapEntryDeclarationAST::constructor_new (GALGAS_bool (false), var_mapEntryTypeName_4136, var_mMapTypeName_4053  COMMA_SOURCE_FILE ("type-shared-map.galgas", 142))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 142)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-shared-map.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-shared-map.galgas", 93)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapEntryDefinition, "-entry") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-shared-map.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 101)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 105)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_list_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_shared_5F_map_5F_attribute_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_map_5F_insert_5F_setter_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_shared_5F_map_5F_search_5F_method_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_shared_5F_map_5F_override_parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 126)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 128)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_shared COMMA_SOURCE_FILE ("type-shared-map.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-shared-map.galgas", 93)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapEntryDefinition, "-entry") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-shared-map.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 101)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 105)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_list_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_shared_5F_map_5F_attribute_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_map_5F_insert_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_shared_5F_map_5F_search_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_shared_5F_map_5F_override_indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 126)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i27_ (GALGAS_mapOverrideBlockListAST & ioArgument_ioMapOverrideBlockListAST,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("type-shared-map.galgas", 152)) ;
  GALGAS_lstring var_overrideBlockName_5917 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 153)) ;
  GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_31_AST_5983 = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 155)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_sourceState_31__6064 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 159)) ;
      GALGAS_lstring var_sourceState_32__6121 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 160)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 161)) ;
      GALGAS_lstring var_targetState_6178 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 162)) ;
      GALGAS_mapAutomatonMessageKind var_messageKind_6221 ;
      GALGAS_lstring var_messageText_6248 ;
      switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
      case 1: {
        var_messageKind_6221 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 166)) ;
        var_messageText_6248 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 167))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 167)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 169)) ;
        var_messageKind_6221 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 170)) ;
        var_messageText_6248 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 171)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 173)) ;
        var_messageKind_6221 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 174)) ;
        var_messageText_6248 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 175)) ;
      } break ;
      default:
        break ;
      }
      var_mapOverrideBlockDescriptor_31_AST_5983.addAssign_operation (var_sourceState_31__6064, var_sourceState_32__6121, var_targetState_6178, var_messageKind_6221, var_messageText_6248  COMMA_SOURCE_FILE ("type-shared-map.galgas", 177)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 179)) ;
  GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_32_AST_6787 = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 180)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 181)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_sourceState_31__6898 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 184)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 185)) ;
      GALGAS_lstring var_sourceState_32__6955 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 186)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 187)) ;
      GALGAS_lstring var_targetState_7012 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 188)) ;
      GALGAS_mapAutomatonMessageKind var_messageKind_7055 ;
      GALGAS_lstring var_messageText_7082 ;
      switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
      case 1: {
        var_messageKind_7055 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 192)) ;
        var_messageText_7082 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 193))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 193)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 195)) ;
        var_messageKind_7055 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 196)) ;
        var_messageText_7082 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 197)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 199)) ;
        var_messageKind_7055 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 200)) ;
        var_messageText_7082 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 201)) ;
      } break ;
      default:
        break ;
      }
      var_mapOverrideBlockDescriptor_32_AST_6787.addAssign_operation (var_sourceState_31__6898, var_sourceState_32__6955, var_targetState_7012, var_messageKind_7055, var_messageText_7082  COMMA_SOURCE_FILE ("type-shared-map.galgas", 203)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 205)) ;
  ioArgument_ioMapOverrideBlockListAST.addAssign_operation (var_overrideBlockName_5917, var_mapOverrideBlockDescriptor_31_AST_5983, var_mapOverrideBlockDescriptor_32_AST_6787  COMMA_SOURCE_FILE ("type-shared-map.galgas", 206)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("type-shared-map.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 155)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 159)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 160)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 161)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 162)) ;
      switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 169)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 171)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 173)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 175)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 179)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 181)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 184)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 185)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 186)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 187)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 188)) ;
      switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 195)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 197)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 199)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 201)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 205)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("type-shared-map.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 155)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 159)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 160)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 161)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 162)) ;
      switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 169)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 171)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 173)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 175)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 179)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 181)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 184)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 185)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 186)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 187)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 188)) ;
      switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 195)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 197)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 199)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 201)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 205)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i28_ (GALGAS_sharedMapAttributeListAST & ioArgument_ioSharedMapAttributeListAST,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isError_7932 ;
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 214)) ;
    var_isError_7932 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 217)) ;
    var_isError_7932 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_attributeName_8067 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 220)) ;
  GALGAS_lstring var_messageText_8099 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 221)) ;
  ioArgument_ioSharedMapAttributeListAST.addAssign_operation (var_attributeName_8067, var_isError_7932, var_messageText_8099  COMMA_SOURCE_FILE ("type-shared-map.galgas", 222)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 214)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 217)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 221)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 214)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 217)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-shared-map.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 221)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i29_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-shared-map.galgas", 228)) ;
  GALGAS_lstring var_mMethodName_8453 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 229)) ;
  GALGAS_lstring var_actionName_8477 ;
  switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    var_actionName_8477 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 232))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 232)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("type-shared-map.galgas", 234)) ;
    var_actionName_8477 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 235)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 237)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-shared-map.galgas", 238)) ;
  GALGAS_lstring var_mErrorMessage_8670 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 239)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_mMethodName_8453, var_mErrorMessage_8670, var_actionName_8477, GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-shared-map.galgas", 228)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 229)) ;
  switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("type-shared-map.galgas", 234)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 235)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 237)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-shared-map.galgas", 238)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 239)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-shared-map.galgas", 228)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 229)) ;
  switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("type-shared-map.galgas", 234)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 235)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 237)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-shared-map.galgas", 238)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 239)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i30_ (GALGAS_mapStateList & ioArgument_ioMapStateList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-shared-map.galgas", 250)) ;
  GALGAS_lstring var_stateName_9019 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 251)) ;
  GALGAS_mapAutomatonMessageKind var_stateMessageKind_9065 ;
  GALGAS_lstring var_stateMessage_9091 ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    var_stateMessageKind_9065 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 255)) ;
    var_stateMessage_9091 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 256))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 256)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 258)) ;
    var_stateMessage_9091 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 259)) ;
    var_stateMessageKind_9065 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 260)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 262)) ;
    var_stateMessage_9091 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 263)) ;
    var_stateMessageKind_9065 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 264)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 266)) ;
  GALGAS_mapStateTransitionList var_transitionList_9441 = GALGAS_mapStateTransitionList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_transition_ (var_transitionList_9441, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioMapStateList.addAssign_operation (var_stateName_9019, var_stateMessageKind_9065, var_stateMessage_9091, var_transitionList_9441  COMMA_SOURCE_FILE ("type-shared-map.galgas", 272)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 277)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-shared-map.galgas", 250)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 251)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 258)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 259)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 262)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 263)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 266)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_transition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 277)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-shared-map.galgas", 250)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 251)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 258)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 259)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 262)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 263)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 266)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
    case 2: {
      nt_shared_5F_map_5F_state_5F_transition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 277)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i31_ (GALGAS_mapStateTransitionList & ioArgument_ioTransitionList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_actionName_9892 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 284)) ;
  GALGAS_lstring var_targetStateName_9948 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 285)) ;
  GALGAS_mapAutomatonMessageKind var_transitionMessageKind_9999 ;
  GALGAS_lstring var_transitionMessage_10030 ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    var_transitionMessageKind_9999 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 289)) ;
    var_transitionMessage_10030 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 290))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 290)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)) ;
    var_transitionMessage_10030 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 293)) ;
    var_transitionMessageKind_9999 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 294)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 296)) ;
    var_transitionMessage_10030 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 297)) ;
    var_transitionMessageKind_9999 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 298)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTransitionList.addAssign_operation (var_actionName_9892, var_targetStateName_9948, var_transitionMessageKind_9999, var_transitionMessage_10030  COMMA_SOURCE_FILE ("type-shared-map.galgas", 300)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 285)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 293)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 296)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 297)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-shared-map.galgas", 285)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 293)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-shared-map.galgas", 296)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-shared-map.galgas", 297)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i32_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  GALGAS_lstring var_sortedListTypeName_1279 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_1393 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_attributeList_1393, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 40)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList_1565 = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 41)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_1565, inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 47)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool (false), var_sortedListTypeName_1279, var_attributeList_1393, var_sortDescriptorList_1565  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 48))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 40)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 47)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 40)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName_2142 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 59)) ;
  GALGAS_bool var_mAscending_2163 ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 62)) ;
    var_mAscending_2163 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 65)) ;
    var_mAscending_2163 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName_2142, var_mAscending_2163  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 59)) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 59)) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i34_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 18)) ;
  GALGAS_lstring var_structTypeName_952 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1032 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_1032, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 28)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (false), var_structTypeName_952, var_propertyList_1032, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-struct.galgas", 29))  COMMA_SOURCE_FILE ("type-struct.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  GALGAS_lstring var_className_1123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  GALGAS_lstring var_mGetterName_1203 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1340 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1340, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  GALGAS_lstring var_mReturnedTypeName_1394 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_1441 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_1441.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 31)), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1123, var_mGetterName_1203, var_mFormalInputParameterList_1340, var_mReturnedTypeName_1394  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 33))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  GALGAS_lstring var_className_1071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  GALGAS_lstring var_mMethodName_1161 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1281 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1281, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1071, var_mMethodName_1161, var_formalParameterList_1281  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 25))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i37_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  GALGAS_lstring var_className_1071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  GALGAS_lstring var_setterName_1160 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1280 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1280, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1071, var_setterName_1160, var_formalParameterList_1280  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 25))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 24)) ;
  GALGAS_lstring var_className_1229 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  GALGAS_lstring var_mMethodName_1311 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1405 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1405, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  GALGAS_lstring var_mReturnedTypeName_1521 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  GALGAS_lstring var_resultVariableName_1553 ;
  switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
    var_resultVariableName_1553 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
    var_resultVariableName_1553 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 35))  COMMA_SOURCE_FILE ("extension-getter.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1765 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1765, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1804 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1229, var_mMethodName_1311, var_mFormalInputParameterList_1405, var_mReturnedTypeName_1521, var_resultVariableName_1553, var_routineInstructionList_1765, var_endOfInstructionList_1804  COMMA_SOURCE_FILE ("extension-getter.galgas", 41))  COMMA_SOURCE_FILE ("extension-getter.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i39_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 22)) ;
  GALGAS_lstring var_className_1127 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 23)) ;
  GALGAS_lstring var_mMethodName_1209 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1321 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1321, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1417 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1417, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1445 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1127, var_mMethodName_1209, var_formalParameterList_1321, var_routineInstructionList_1417, var_endOfMethodLocation_1445  COMMA_SOURCE_FILE ("extension-method.galgas", 30))  COMMA_SOURCE_FILE ("extension-method.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 22)) ;
  GALGAS_lstring var_className_1138 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  GALGAS_lstring var_setterName_1219 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1331 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1331, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 26)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1427 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1427, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_1465 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 29)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1138, var_setterName_1219, var_formalParameterList_1331, var_routineInstructionList_1427, var_endOfSetterLocation_1465  COMMA_SOURCE_FILE ("extension-setter.galgas", 30))  COMMA_SOURCE_FILE ("extension-setter.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i41_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  GALGAS_lstring var_className_1148 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  GALGAS_lstring var_mGetterName_1236 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1381 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1381, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  GALGAS_lstring var_mReturnedTypeName_1435 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_52 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_1475 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_1475.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 31)), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 31)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1148, var_mGetterName_1236, var_mFormalInputParameterList_1381, var_mReturnedTypeName_1435  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 34))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i41_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_52 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i41_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_52 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  GALGAS_lstring var_className_1100 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  GALGAS_lstring var_mMethodName_1198 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1326 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1326, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1100, var_mMethodName_1198, var_formalParameterList_1326  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 26))  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i43_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  GALGAS_lstring var_className_1100 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  GALGAS_lstring var_setterName_1197 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1325 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1325, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1100, var_setterName_1197, var_formalParameterList_1325  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 26))  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i43_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i43_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  GALGAS_lstring var_className_1303 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  GALGAS_lstring var_mMethodName_1392 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_1499 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_1499, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 29)) ;
  GALGAS_lstring var_mReturnedTypeName_1553 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  GALGAS_lstring var_resultVariableName_1585 ;
  switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    var_resultVariableName_1585 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 33)) ;
  } break ;
  case 2: {
    var_resultVariableName_1585 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 35))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 37)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1797 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1797, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1836 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 40)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1303, var_mMethodName_1392, var_formalInputParameterList_1499, var_mReturnedTypeName_1553, var_resultVariableName_1585, var_routineInstructionList_1797, var_endOfInstructionList_1836  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i45_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  GALGAS_lstring var_className_1182 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  GALGAS_lstring var_mMethodName_1282 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1402 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1402, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1498 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1498, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1536 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1182, var_mMethodName_1282, var_formalParameterList_1402, var_routineInstructionList_1498, var_endOfMethodLocation_1536  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 31))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i45_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i45_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i46_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  GALGAS_lstring var_className_1193 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  GALGAS_lstring var_setterName_1292 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1412 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1412, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1508 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1508, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_1546 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 30)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1193, var_setterName_1292, var_formalParameterList_1412, var_routineInstructionList_1508, var_endOfSetterLocation_1546  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 31))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i46_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i46_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  GALGAS_lstring var_typeName_996 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
  GALGAS_lstring var_variableName_1031 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 22)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName_996.getter_location (SOURCE_FILE ("instruction-var-declaration.galgas", 23)), var_typeName_996, var_variableName_1031, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1364 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
  GALGAS_lstring var_variableName_1399 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 30)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName_1364.getter_location (SOURCE_FILE ("instruction-var-declaration.galgas", 31)), var_typeName_1364, var_variableName_1399, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 30)) ;
}

