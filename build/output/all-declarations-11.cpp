#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@galgas_33_QualifiedFeatureList' list
//
//--------------------------------------------------------------------------------------------------

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
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_lstring & in_mFeatureName,
                                                                                                      const GALGAS_lstring & in_mFeatureValue
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFeatureName, in_mFeatureValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFeatureName, inElement.mProperty_mFeatureValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_galgas_33_QualifiedFeatureList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_QualifiedFeatureList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_galgas_33_QualifiedFeatureList (mObject.mProperty_mFeatureName, mObject.mProperty_mFeatureValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_galgas_33_QualifiedFeatureList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mFeatureName" ":") ;
  mObject.mProperty_mFeatureName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mFeatureValue" ":") ;
  mObject.mProperty_mFeatureValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_galgas_33_QualifiedFeatureList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_QualifiedFeatureList * operand = (cCollectionElement_galgas_33_QualifiedFeatureList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList::GALGAS_galgas_33_QualifiedFeatureList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList::GALGAS_galgas_33_QualifiedFeatureList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_QualifiedFeatureList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_lstring & in_mFeatureName,
                                                                       const GALGAS_lstring & in_mFeatureValue
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = nullptr ;
  macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (in_mFeatureName,
                                                                    in_mFeatureValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_lstring & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_append (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_popLast (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::method_first (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::method_last (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::add_operation (const GALGAS_galgas_33_QualifiedFeatureList & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::plusAssign_operation (const GALGAS_galgas_33_QualifiedFeatureList inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_setMFeatureNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFeatureName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList::getter_mFeatureNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mProperty_mFeatureName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_setMFeatureValueAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFeatureValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList::getter_mFeatureValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mProperty_mFeatureValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_galgas_33_QualifiedFeatureList::cEnumerator_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element cEnumerator_galgas_33_QualifiedFeatureList::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mProperty_mFeatureName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureValue (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mProperty_mFeatureValue ;
}




//--------------------------------------------------------------------------------------------------
//
//     @galgas3QualifiedFeatureList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ("galgas3QualifiedFeatureList",
                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_QualifiedFeatureList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_QualifiedFeatureList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_QualifiedFeatureList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  const GALGAS_galgas_33_QualifiedFeatureList * p = (const GALGAS_galgas_33_QualifiedFeatureList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgas_33_QualifiedFeatureList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3QualifiedFeatureList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GALGAS_lbigint & outArgument_majorVersion,
                                                                                          GALGAS_lbigint & outArgument_minorVersion,
                                                                                          GALGAS_lbigint & outArgument_revisionVersion,
                                                                                          GALGAS_lstring & outArgument_targetName,
                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_majorVersion.drop () ; // Release 'out' argument
  outArgument_minorVersion.drop () ; // Release 'out' argument
  outArgument_revisionVersion.drop () ; // Release 'out' argument
  outArgument_targetName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 51)) ;
  outArgument_majorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 53)) ;
  outArgument_minorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 55)) ;
  outArgument_revisionVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 58)) ;
  outArgument_targetName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 59)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (GALGAS_galgas_33_ProjectComponentAST & outArgument_outProjectComponentAST,
                                                                                                                C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outProjectComponentAST.drop () ; // Release 'out' argument
  GALGAS_lbigint var_majorVersion_2692 ;
  GALGAS_lbigint var_minorVersion_2723 ;
  GALGAS_lbigint var_revisionVersion_2754 ;
  GALGAS_lstring var_targetName_2788 ;
  nt_project_5F_header_ (var_majorVersion_2692, var_minorVersion_2723, var_revisionVersion_2754, var_targetName_2788, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  GALGAS_lstringlist var_projectSourceList_2824 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasProject.galgas", 71)) ;
  GALGAS_lstringlist var_generateFeatureList_2866 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasProject.galgas", 72)) ;
  GALGAS_galgas_33_QualifiedFeatureList var_qualifiedFeatureList_2926 = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (SOURCE_FILE ("galgasProject.galgas", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 76)) ;
      var_generateFeatureList_2866.addAssign_operation (GALGAS_string ("quietOutputByDefault").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 77))  COMMA_SOURCE_FILE ("galgasProject.galgas", 77)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_MacOS COMMA_SOURCE_FILE ("galgasProject.galgas", 79)) ;
      var_generateFeatureList_2866.addAssign_operation (GALGAS_string ("MacOS").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 80))  COMMA_SOURCE_FILE ("galgasProject.galgas", 80)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 82)) ;
      var_generateFeatureList_2866.addAssign_operation (GALGAS_string ("makefile-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 83))  COMMA_SOURCE_FILE ("galgasProject.galgas", 83)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 85)) ;
      var_generateFeatureList_2866.addAssign_operation (GALGAS_string ("makefile-unix").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 86))  COMMA_SOURCE_FILE ("galgasProject.galgas", 86)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 88)) ;
      var_generateFeatureList_2866.addAssign_operation (GALGAS_string ("makefile-x86linux32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 89))  COMMA_SOURCE_FILE ("galgasProject.galgas", 89)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 91)) ;
      var_generateFeatureList_2866.addAssign_operation (GALGAS_string ("makefile-x86linux64-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 92))  COMMA_SOURCE_FILE ("galgasProject.galgas", 92)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 94)) ;
      var_generateFeatureList_2866.addAssign_operation (GALGAS_string ("makefile-win32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 95))  COMMA_SOURCE_FILE ("galgasProject.galgas", 95)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 97)) ;
      var_generateFeatureList_2866.addAssign_operation (GALGAS_string ("codeblocks-windows").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 98))  COMMA_SOURCE_FILE ("galgasProject.galgas", 98)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 100)) ;
      var_generateFeatureList_2866.addAssign_operation (GALGAS_string ("codeblocks-linux32").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 101))  COMMA_SOURCE_FILE ("galgasProject.galgas", 101)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 103)) ;
      var_generateFeatureList_2866.addAssign_operation (GALGAS_string ("codeblocks-linux64").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 104))  COMMA_SOURCE_FILE ("galgasProject.galgas", 104)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 106)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 107)) ;
      GALGAS_lstring var_featureValue_3953 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
      var_qualifiedFeatureList_2926.addAssign_operation (GALGAS_string ("applicationBundleBase").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 109)), var_featureValue_3953  COMMA_SOURCE_FILE ("galgasProject.galgas", 109)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 112)) ;
      GALGAS_lstring var_featureValue_4104 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 113)) ;
      var_qualifiedFeatureList_2926.addAssign_operation (GALGAS_string ("libpmAtPath").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 114)), var_featureValue_4104  COMMA_SOURCE_FILE ("galgasProject.galgas", 114)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_tool_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
      GALGAS_lstring var_featureValue_4245 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 118)) ;
      var_qualifiedFeatureList_2926.addAssign_operation (GALGAS_string ("tool-source").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 119)), var_featureValue_4245  COMMA_SOURCE_FILE ("galgasProject.galgas", 119)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_MacOSDeployment COMMA_SOURCE_FILE ("galgasProject.galgas", 121)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 122)) ;
      GALGAS_lstring var_featureValue_4391 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
      var_qualifiedFeatureList_2926.addAssign_operation (GALGAS_string ("MacOSDeployment").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 124)), var_featureValue_4391  COMMA_SOURCE_FILE ("galgasProject.galgas", 124)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 127)) ;
      GALGAS_lstring var_featureValue_4537 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
      var_qualifiedFeatureList_2926.addAssign_operation (GALGAS_string ("macCodeSign").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 129)), var_featureValue_4537  COMMA_SOURCE_FILE ("galgasProject.galgas", 129)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_app_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 132)) ;
      GALGAS_lstring var_featureValue_4677 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
      var_qualifiedFeatureList_2926.addAssign_operation (GALGAS_string ("app-source").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 134)), var_featureValue_4677  COMMA_SOURCE_FILE ("galgasProject.galgas", 134)) ;
    } break ;
    case 18: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_app_2D_link COMMA_SOURCE_FILE ("galgasProject.galgas", 136)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 137)) ;
      GALGAS_lstring var_featureValue_4815 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
      var_qualifiedFeatureList_2926.addAssign_operation (GALGAS_string ("app-link").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 139)), var_featureValue_4815  COMMA_SOURCE_FILE ("galgasProject.galgas", 139)) ;
    } break ;
    case 19: {
      GALGAS_lstring var_filePath_4926 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 141)) ;
      var_projectSourceList_2824.addAssign_operation (var_filePath_4926  COMMA_SOURCE_FILE ("galgasProject.galgas", 142)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 144)) ;
  outArgument_outProjectComponentAST = GALGAS_galgas_33_ProjectComponentAST::constructor_new (var_projectSourceList_2824, var_majorVersion_2692, var_minorVersion_2723, var_revisionVersion_2754, var_generateFeatureList_2866, var_qualifiedFeatureList_2926, var_targetName_2788, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProject.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("galgasProject.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_project_5F_header_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 76)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_MacOS COMMA_SOURCE_FILE ("galgasProject.galgas", 79)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 82)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 85)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 88)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 91)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 94)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 97)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 100)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 103)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 106)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 112)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 113)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_tool_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 118)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_MacOSDeployment COMMA_SOURCE_FILE ("galgasProject.galgas", 121)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_app_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 132)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
    } break ;
    case 18: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_app_2D_link COMMA_SOURCE_FILE ("galgasProject.galgas", 136)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 137)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
    } break ;
    case 19: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 141)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 144)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_project_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 76)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_MacOS COMMA_SOURCE_FILE ("galgasProject.galgas", 79)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 82)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 85)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 88)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 91)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 94)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 97)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 100)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 103)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 106)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 112)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 113)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_tool_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 118)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_MacOSDeployment COMMA_SOURCE_FILE ("galgasProject.galgas", 121)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_app_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 132)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
    } break ;
    case 18: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_app_2D_link COMMA_SOURCE_FILE ("galgasProject.galgas", 136)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 137)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
    } break ;
    case 19: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 141)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 144)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControlAST checkCompatibilityWithLet'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompatibilityWithLet (const GALGAS_AccessControlAST inObject,
                                                const GALGAS_location constinArgument_inLocation,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_AccessControlAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_AccessControlAST::kNotBuilt:
    break ;
  case GALGAS_AccessControlAST::kEnum_publicAccess:
    {
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_protectedAccess:
    {
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_protectedSetAccess:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GALGAS_string ("'protected(set)' and 'let' are incompatible"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 148)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_privateAccess:
    {
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_privateSetAccess:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GALGAS_string ("'private(set)' and 'let' are incompatible"), fixItArray2  COMMA_SOURCE_FILE ("accessControl.galgas", 151)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_fileprivateAccess:
    {
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_fileprivateSetAccess:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GALGAS_string ("'private(set)' and 'let' are incompatible"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas", 154)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@AccessControlAST accessControl'
//
//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl extensionGetter_accessControl (const GALGAS_AccessControlAST & inObject,
                                                    const GALGAS_unifiedTypeMapEntry & constinArgument_inDeclaringType,
                                                    Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl result_result ; // Returned variable
  const GALGAS_AccessControlAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_AccessControlAST::kNotBuilt:
    break ;
  case GALGAS_AccessControlAST::kEnum_publicAccess:
    {
      result_result = GALGAS_AccessControl::constructor_publicAccess (SOURCE_FILE ("accessControl.galgas", 163)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_protectedAccess:
    {
      result_result = GALGAS_AccessControl::constructor_protectedAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 165)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_protectedSetAccess:
    {
      result_result = GALGAS_AccessControl::constructor_protectedSetAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 167)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_privateAccess:
    {
      result_result = GALGAS_AccessControl::constructor_privateAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 169)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_privateSetAccess:
    {
      result_result = GALGAS_AccessControl::constructor_privateSetAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 171)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_fileprivateAccess:
    {
      const cEnumAssociatedValues_AccessControlAST_fileprivateAccess * extractPtr_5912 = (const cEnumAssociatedValues_AccessControlAST_fileprivateAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_5813_declarationLocation = extractPtr_5912->mAssociatedValue0 ;
      result_result = GALGAS_AccessControl::constructor_fileprivateAccess (extractedValue_5813_declarationLocation  COMMA_SOURCE_FILE ("accessControl.galgas", 173)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_fileprivateSetAccess:
    {
      const cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess * extractPtr_6047 = (const cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_5945_declarationLocation = extractPtr_6047->mAssociatedValue0 ;
      result_result = GALGAS_AccessControl::constructor_fileprivateSetAccess (extractedValue_5945_declarationLocation  COMMA_SOURCE_FILE ("accessControl.galgas", 175)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkSetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSetAccess (const GALGAS_AccessControl inObject,
                                     const GALGAS_selfAvailability constinArgument_inOptionalCurrentType,
                                     const GALGAS_location constinArgument_inErrorLocation,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_AccessControl temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_AccessControl::kNotBuilt:
    break ;
  case GALGAS_AccessControl::kEnum_publicAccess:
    {
    }
    break ;
  case GALGAS_AccessControl::kEnum_protectedAccess:
    {
      const cEnumAssociatedValues_AccessControl_protectedAccess * extractPtr_7662 = (const cEnumAssociatedValues_AccessControl_protectedAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_7026_declaringType = extractPtr_7662->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 203)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_7652 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_7205_t = extractPtr_7652->mAssociatedValue0 ;
          GALGAS_unifiedTypeMapEntry var_currentType_7225 = extractedValue_7205_t ;
          GALGAS_bool var_ok_7253 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_7026_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 206)).objectCompare (extensionGetter_typeName (var_currentType_7225, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 206)))) ;
          bool loop_7317 = true ;
          while (loop_7317) {
            GALGAS_bool test_2 = var_ok_7253.operator_not (SOURCE_FILE ("accessControl.galgas", 207)) ;
            if (kBoolTrue == test_2.boolEnum ()) {
              test_2 = extensionGetter_definition (var_currentType_7225, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 207)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 207)).operator_not (SOURCE_FILE ("accessControl.galgas", 207)) ;
            }
            loop_7317 = test_2.isValid () ;
            if (loop_7317) {
              loop_7317 = test_2.boolValue () ;
            }
            if (loop_7317) {
              var_currentType_7225 = extensionGetter_definition (var_currentType_7225, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 208)).readProperty_mSuperType () ;
              var_ok_7253 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_7026_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 209)).objectCompare (extensionGetter_typeName (var_currentType_7225, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 209)))) ;
            }
          }
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_7253.operator_not (SOURCE_FILE ("accessControl.galgas", 211)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray4  COMMA_SOURCE_FILE ("accessControl.galgas", 212)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_protectedSetAccess:
    {
      const cEnumAssociatedValues_AccessControl_protectedSetAccess * extractPtr_8346 = (const cEnumAssociatedValues_AccessControl_protectedSetAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_7695_declaringType = extractPtr_8346->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'protected(set)' qualifier)"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 218)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_8336 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_7882_t = extractPtr_8336->mAssociatedValue0 ;
          GALGAS_unifiedTypeMapEntry var_currentType_7902 = extractedValue_7882_t ;
          GALGAS_bool var_ok_7930 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_7695_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 221)).objectCompare (extensionGetter_typeName (var_currentType_7902, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 221)))) ;
          bool loop_7994 = true ;
          while (loop_7994) {
            GALGAS_bool test_6 = var_ok_7930.operator_not (SOURCE_FILE ("accessControl.galgas", 222)) ;
            if (kBoolTrue == test_6.boolEnum ()) {
              test_6 = extensionGetter_definition (var_currentType_7902, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 222)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 222)).operator_not (SOURCE_FILE ("accessControl.galgas", 222)) ;
            }
            loop_7994 = test_6.isValid () ;
            if (loop_7994) {
              loop_7994 = test_6.boolValue () ;
            }
            if (loop_7994) {
              var_currentType_7902 = extensionGetter_definition (var_currentType_7902, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 223)).readProperty_mSuperType () ;
              var_ok_7930 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_7695_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 224)).objectCompare (extensionGetter_typeName (var_currentType_7902, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 224)))) ;
            }
          }
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_ok_7930.operator_not (SOURCE_FILE ("accessControl.galgas", 226)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'protected(set)' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("accessControl.galgas", 227)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_privateAccess:
    {
      const cEnumAssociatedValues_AccessControl_privateAccess * extractPtr_8741 = (const cEnumAssociatedValues_AccessControl_privateAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_8374_declaringType = extractPtr_8741->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray9  COMMA_SOURCE_FILE ("accessControl.galgas", 233)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_8731 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_8551_currentType = extractPtr_8731->mAssociatedValue0 ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, extensionGetter_typeName (extractedValue_8374_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 235)).objectCompare (extensionGetter_typeName (extractedValue_8551_currentType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 235)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray11  COMMA_SOURCE_FILE ("accessControl.galgas", 236)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_privateSetAccess:
    {
      const cEnumAssociatedValues_AccessControl_privateSetAccess * extractPtr_9152 = (const cEnumAssociatedValues_AccessControl_privateSetAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_8772_declaringType = extractPtr_9152->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private(set)' qualifier)"), fixItArray12  COMMA_SOURCE_FILE ("accessControl.galgas", 242)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_9142 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_8957_currentType = extractPtr_9142->mAssociatedValue0 ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = GALGAS_bool (kIsNotEqual, extensionGetter_typeName (extractedValue_8772_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 244)).objectCompare (extensionGetter_typeName (extractedValue_8957_currentType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 244)))).boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private(set)' qualifier)"), fixItArray14  COMMA_SOURCE_FILE ("accessControl.galgas", 245)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_fileprivateAccess:
    {
      const cEnumAssociatedValues_AccessControl_fileprivateAccess * extractPtr_9377 = (const cEnumAssociatedValues_AccessControl_fileprivateAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_9184_declaringLocation = extractPtr_9377->mAssociatedValue0 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_sourceFile (extractedValue_9184_declaringLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 249)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 249)))).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'fileprivate' qualifier)"), fixItArray16  COMMA_SOURCE_FILE ("accessControl.galgas", 250)) ;
        }
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_fileprivateSetAccess:
    {
      const cEnumAssociatedValues_AccessControl_fileprivateSetAccess * extractPtr_9610 = (const cEnumAssociatedValues_AccessControl_fileprivateSetAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_9412_declaringLocation = extractPtr_9610->mAssociatedValue0 ;
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsNotEqual, extensionGetter_sourceFile (extractedValue_9412_declaringLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 253)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 253)))).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'fileprivate(set)' qualifier)"), fixItArray18  COMMA_SOURCE_FILE ("accessControl.galgas", 254)) ;
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkGetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkGetAccess (const GALGAS_AccessControl inObject,
                                     const GALGAS_selfAvailability constinArgument_inOptionalCurrentType,
                                     const GALGAS_location constinArgument_inErrorLocation,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_AccessControl temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_AccessControl::kNotBuilt:
    break ;
  case GALGAS_AccessControl::kEnum_publicAccess:
    {
    }
    break ;
  case GALGAS_AccessControl::kEnum_protectedSetAccess:
    {
    }
    break ;
  case GALGAS_AccessControl::kEnum_privateSetAccess:
    {
    }
    break ;
  case GALGAS_AccessControl::kEnum_protectedAccess:
    {
      const cEnumAssociatedValues_AccessControl_protectedAccess * extractPtr_10641 = (const cEnumAssociatedValues_AccessControl_protectedAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_10007_declaringType = extractPtr_10641->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 270)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_10631 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_10184_t = extractPtr_10631->mAssociatedValue0 ;
          GALGAS_unifiedTypeMapEntry var_currentType_10204 = extractedValue_10184_t ;
          GALGAS_bool var_ok_10232 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_10007_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 273)).objectCompare (extensionGetter_typeName (var_currentType_10204, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 273)))) ;
          bool loop_10296 = true ;
          while (loop_10296) {
            GALGAS_bool test_2 = var_ok_10232.operator_not (SOURCE_FILE ("accessControl.galgas", 274)) ;
            if (kBoolTrue == test_2.boolEnum ()) {
              test_2 = extensionGetter_definition (var_currentType_10204, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 274)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 274)).operator_not (SOURCE_FILE ("accessControl.galgas", 274)) ;
            }
            loop_10296 = test_2.isValid () ;
            if (loop_10296) {
              loop_10296 = test_2.boolValue () ;
            }
            if (loop_10296) {
              var_currentType_10204 = extensionGetter_definition (var_currentType_10204, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 275)).readProperty_mSuperType () ;
              var_ok_10232 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_10007_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 276)).objectCompare (extensionGetter_typeName (var_currentType_10204, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 276)))) ;
            }
          }
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_10232.operator_not (SOURCE_FILE ("accessControl.galgas", 278)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray4  COMMA_SOURCE_FILE ("accessControl.galgas", 279)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_privateAccess:
    {
      const cEnumAssociatedValues_AccessControl_privateAccess * extractPtr_11036 = (const cEnumAssociatedValues_AccessControl_privateAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_10669_declaringType = extractPtr_11036->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 285)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_11026 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_10846_currentType = extractPtr_11026->mAssociatedValue0 ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_typeName (extractedValue_10669_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 287)).objectCompare (extensionGetter_typeName (extractedValue_10846_currentType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 287)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray7  COMMA_SOURCE_FILE ("accessControl.galgas", 288)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_fileprivateAccess:
    {
      const cEnumAssociatedValues_AccessControl_fileprivateAccess * extractPtr_11261 = (const cEnumAssociatedValues_AccessControl_fileprivateAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_11068_declaringLocation = extractPtr_11261->mAssociatedValue0 ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, extensionGetter_sourceFile (extractedValue_11068_declaringLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 292)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 292)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'fileprivate' qualifier)"), fixItArray9  COMMA_SOURCE_FILE ("accessControl.galgas", 293)) ;
        }
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_fileprivateSetAccess:
    {
    }
    break ;
  }
}




//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 23)) ;
  nt_expression_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 23)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 23)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i1_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_ifExpression_1020 ;
  nt_expression_5F_ggs_33__ (var_ifExpression_1020, inCompiler) ;
  GALGAS_location var_operatorLocation_1041 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_thenExpression_1113 ;
  nt_expression_5F_ggs_33__ (var_thenExpression_1113, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  GALGAS_semanticExpressionAST var_elseExpression_1166 ;
  nt_expression_5F_ggs_33__ (var_elseExpression_1166, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_operatorLocation_1041, var_ifExpression_1020, var_thenExpression_1113, var_elseExpression_1166  COMMA_SOURCE_FILE ("expression-if.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i1_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i2_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_894 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryPlusExpressionAST::constructor_new (var_operatorLocation_894, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i2_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i3_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_895 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusExpressionAST::constructor_new (var_operatorLocation_895, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i3_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i4_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_847 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
  outArgument_outExpression = GALGAS_varInExpressionAST::constructor_new (var_identifier_847  COMMA_SOURCE_FILE ("expression-var.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i4_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i5_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-output-expression-list.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_0 (inCompiler) == 2) {
      GALGAS_lstring var_selector_994 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      GALGAS_semanticExpressionAST var_expression_1055 ;
      nt_expression_5F_ggs_33__ (var_expression_1055, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_994, var_expression_1055, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 25))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i5_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i5_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
  outArgument_outExpression = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 25))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
  outArgument_outExpression = GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 32))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_898 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-literal-string.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_954 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    var_literalStringList_898.addAssign_operation (var_literalString_954.readProperty_string ()  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 22)) ;
    if (select_galgas_33_ExpressionSyntax_1 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 25)), var_literalStringList_898  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    if (select_galgas_33_ExpressionSyntax_1 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    if (select_galgas_33_ExpressionSyntax_1 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_857 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalCharExpressionAST::constructor_new (var_literalChar_857  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i10_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_863 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionAST::constructor_new (var_literalDouble_863  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i10_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i10_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i11_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt_1735 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionAST::constructor_new (var_literalInt_1735  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i11_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i11_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i12_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1389 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 38)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1444 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1508 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_1508, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1389, var_leftOperand_1444, GALGAS_comparison::constructor_equal (SOURCE_FILE ("expression-comparison.galgas", 41)), var_rightOperand_1508  COMMA_SOURCE_FILE ("expression-comparison.galgas", 41)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_1647 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 44)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1702 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1766 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_1766, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1647, var_leftOperand_1702, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("expression-comparison.galgas", 47)), var_rightOperand_1766  COMMA_SOURCE_FILE ("expression-comparison.galgas", 47)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_1908 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 49)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 50)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1963 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2027 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_2027, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1908, var_leftOperand_1963, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas", 53)), var_rightOperand_2027  COMMA_SOURCE_FILE ("expression-comparison.galgas", 53)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_2173 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2228 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2292 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_2292, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2173, var_leftOperand_2228, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas", 59)), var_rightOperand_2292  COMMA_SOURCE_FILE ("expression-comparison.galgas", 59)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_2440 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2494 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2558 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_2558, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2440, var_leftOperand_2494, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("expression-comparison.galgas", 65)), var_rightOperand_2558  COMMA_SOURCE_FILE ("expression-comparison.galgas", 65)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_2703 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2757 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2821 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_2821, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2703, var_leftOperand_2757, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("expression-comparison.galgas", 71)), var_rightOperand_2821  COMMA_SOURCE_FILE ("expression-comparison.galgas", 71)) ;
    } break ;
    case 8: {
      GALGAS_location var_operatorLocation_2964 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3020 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3084 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_3084, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2964, var_leftOperand_3020, GALGAS_comparison::constructor_sameInstance (SOURCE_FILE ("expression-comparison.galgas", 77)), var_rightOperand_3084  COMMA_SOURCE_FILE ("expression-comparison.galgas", 77)) ;
    } break ;
    case 9: {
      GALGAS_location var_operatorLocation_3230 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3286 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3350 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_3350, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_3230, var_leftOperand_3286, GALGAS_comparison::constructor_differentInstances (SOURCE_FILE ("expression-comparison.galgas", 83)), var_rightOperand_3350  COMMA_SOURCE_FILE ("expression-comparison.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i12_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 38)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 44)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 50)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i12_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 38)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 44)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 50)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i13_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                               C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2687 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2742 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2793 ;
      nt_term_5F_ggs_33__ (var_rightOperand_2793, inCompiler) ;
      outArgument_outExpression = GALGAS_leftShiftExpressionAST::constructor_new (var_operatorLocation_2687, var_leftOperand_2742, var_rightOperand_2793  COMMA_SOURCE_FILE ("expression-additive.galgas", 67)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2923 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 69)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2978 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3029 ;
      nt_term_5F_ggs_33__ (var_rightOperand_3029, inCompiler) ;
      outArgument_outExpression = GALGAS_rightShiftExpressionAST::constructor_new (var_operatorLocation_2923, var_leftOperand_2978, var_rightOperand_3029  COMMA_SOURCE_FILE ("expression-additive.galgas", 73)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_3160 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3214 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3265 ;
      nt_term_5F_ggs_33__ (var_rightOperand_3265, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionAST::constructor_new (var_operatorLocation_3160, var_leftOperand_3214, var_rightOperand_3265  COMMA_SOURCE_FILE ("expression-additive.galgas", 79)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_3389 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3444 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3495 ;
      nt_term_5F_ggs_33__ (var_rightOperand_3495, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionNoOverflowAST::constructor_new (var_operatorLocation_3389, var_leftOperand_3444, var_rightOperand_3495  COMMA_SOURCE_FILE ("expression-additive.galgas", 85)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3629 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 87)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3683 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3734 ;
      nt_term_5F_ggs_33__ (var_rightOperand_3734, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionAST::constructor_new (var_operatorLocation_3629, var_leftOperand_3683, var_rightOperand_3734  COMMA_SOURCE_FILE ("expression-additive.galgas", 91)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_3858 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3913 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3964 ;
      nt_term_5F_ggs_33__ (var_rightOperand_3964, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionNoOverflowAST::constructor_new (var_operatorLocation_3858, var_leftOperand_3913, var_rightOperand_3964  COMMA_SOURCE_FILE ("expression-additive.galgas", 97)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i13_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_term_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i13_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_term_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i14_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                               C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2355 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2409 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2485 ;
      nt_factor_5F_ggs_33__ (var_rightOperand_2485, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionAST::constructor_new (var_operatorLocation_2355, var_leftOperand_2409, var_rightOperand_2485  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2620 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2675 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2751 ;
      nt_factor_5F_ggs_33__ (var_rightOperand_2751, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (var_operatorLocation_2620, var_leftOperand_2675, var_rightOperand_2751  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 65)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2896 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2950 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3003 ;
      nt_factor_5F_ggs_33__ (var_rightOperand_3003, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionAST::constructor_new (var_operatorLocation_2896, var_leftOperand_2950, var_rightOperand_3003  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 71)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_3132 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3187 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3240 ;
      nt_factor_5F_ggs_33__ (var_rightOperand_3240, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionNoOverflowAST::constructor_new (var_operatorLocation_3132, var_leftOperand_3187, var_rightOperand_3240  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 77)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3379 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3435 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3488 ;
      nt_factor_5F_ggs_33__ (var_rightOperand_3488, inCompiler) ;
      outArgument_outExpression = GALGAS_moduloExpressionAST::constructor_new (var_operatorLocation_3379, var_leftOperand_3435, var_rightOperand_3488  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i14_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i14_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i15_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                     C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_endOfReceiverExpression_1626 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 41)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 42)) ;
    GALGAS_dynamicTypeComparisonKind var_kind_1715 ;
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 45)) ;
      var_kind_1715 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("expression-is-as.galgas", 46)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 48)) ;
      var_kind_1715 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-is-as.galgas", 49)) ;
    } break ;
    case 3: {
      var_kind_1715 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-is-as.galgas", 51)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 53)) ;
      var_kind_1715 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("expression-is-as.galgas", 54)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_typeName_1935 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 56)) ;
    outArgument_outExpression = GALGAS_testDynamicClassInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_1626, var_kind_1715, var_typeName_1935  COMMA_SOURCE_FILE ("expression-is-as.galgas", 57)) ;
  } break ;
  case 3: {
    GALGAS_location var_endOfReceiverExpression_2118 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 64)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 65)) ;
    GALGAS_lstring var_typeName_2189 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
    outArgument_outExpression = GALGAS_castInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_2118, var_typeName_2189  COMMA_SOURCE_FILE ("expression-is-as.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i15_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_or_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 42)) ;
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 48)) ;
    } break ;
    case 3: {
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 53)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 56)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 65)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i15_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_or_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 42)) ;
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 48)) ;
    } break ;
    case 3: {
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 53)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 56)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 65)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  GALGAS_lstring var_optionComponentName_961 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  GALGAS_lstring var_optionName_1045 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  GALGAS_lstring var_getterName_1078 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (var_optionComponentName_961, var_optionName_1045, var_getterName_1078  COMMA_SOURCE_FILE ("expression-option.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  GALGAS_lstring var_optionName_1433 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  GALGAS_lstring var_getterName_1466 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-option.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("expression-option.galgas", 38)), var_optionName_1433, var_getterName_1466  COMMA_SOURCE_FILE ("expression-option.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  GALGAS_lstring var_lexiqueName_940 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  GALGAS_lstring var_getterName_982 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (var_lexiqueName_940, var_getterName_982  COMMA_SOURCE_FILE ("expression-lexique.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  GALGAS_lstring var_filewrapperName_1512 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (var_filewrapperName_1512  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_filePath_1740 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
      outArgument_outExpression = GALGAS_filewrapperInExpressionAST::constructor_new (var_filewrapperName_1512, var_filePath_1740  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 44)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_filewrapperTemplateName_1908 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      GALGAS_actualOutputExpressionList var_expressionList_2003 ;
      nt_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_2003, inCompiler) ;
      outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionAST::constructor_new (var_filewrapperName_1512, var_filewrapperTemplateName_1908, var_expressionList_2003  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 10)) ;
  GALGAS_location var_startLocation_542 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 12)) ;
  GALGAS_semanticExpressionAST var_receiverExpression_623 ;
  nt_expression_5F_ggs_33__ (var_receiverExpression_623, inCompiler) ;
  GALGAS_lstring var_getterName_696 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 15)) ;
  GALGAS_actualOutputExpressionList var_expressionList_799 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_799, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 18)) ;
  GALGAS_location var_endLocation_830 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 19)) ;
  outArgument_outExpression = GALGAS_getterCallExpressionAST::constructor_new (GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()), var_receiverExpression_623, var_getterName_696, var_expressionList_799, var_startLocation_542.getter_union (var_endLocation_830, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 25))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 10)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 15)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 10)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 15)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i21_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    outArgument_outTypeName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 28)) ;
  } break ;
  case 2: {
    outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i21_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i21_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1582 ;
  nt_optional_5F_type_ (var_typeName_1582, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 39)) ;
  GALGAS_location var_startOfExpression_1607 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 40)) ;
  GALGAS_lstring var_constructorName_1697 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 42)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1773 ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    var_expressionList_1773 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 46)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_1773, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 50)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfExpression_1920 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 52)) ;
  outArgument_outExpression = GALGAS_constructorExpressionAST::constructor_new (var_typeName_1582, var_constructorName_1697, var_expressionList_1773, var_startOfExpression_1607.getter_union (var_endOfExpression_1920, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 57))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 42)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 50)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 42)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 50)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_927 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1037 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_1037, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::constructor_new (var_functionName_927, var_expressionList_1037  COMMA_SOURCE_FILE ("expression-function-call.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  GALGAS_lstring var_typeName_874 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::constructor_new (var_typeName_874  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1965 ;
  nt_optional_5F_type_ (var_typeName_1965, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  GALGAS_collectionValueElementList var_elementList_2018 = GALGAS_collectionValueElementList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 46)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractCollectionValueElement var_element_2138 ;
      nt_collection_5F_value_5F_element_ (var_element_2138, inCompiler) ;
      var_elementList_2018.addAssign_operation (var_element_2138  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 51)) ;
      if (select_galgas_33_ExpressionSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_collectionValueAST::constructor_new (var_typeName_1965, var_elementList_2018, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 59))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_parse (inCompiler) ;
      if (select_galgas_33_ExpressionSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_indexing (inCompiler) ;
      if (select_galgas_33_ExpressionSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i26_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_actualOutputExpressionList var_expressionList_2582 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_2628 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    GALGAS_semanticExpressionAST var_expression_2689 ;
    nt_expression_5F_ggs_33__ (var_expression_2689, inCompiler) ;
    var_expressionList_2582.addAssign_operation (var_selector_2628, var_expression_2689, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 71))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 71)) ;
    if (select_galgas_33_ExpressionSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outValueElement = GALGAS_expressionListCollectionValue::constructor_new (var_expressionList_2582, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 74))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i26_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_ExpressionSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i26_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_ExpressionSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i27_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_expression_3137 ;
  nt_expression_5F_ggs_33__ (var_expression_3137, inCompiler) ;
  outArgument_outValueElement = GALGAS_expressionCollectionValue::constructor_new (var_expression_3137, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 81))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i27_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i27_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
  outArgument_outExpression = GALGAS_selfInExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 19))  COMMA_SOURCE_FILE ("expression-self.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i29_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      GALGAS_lstring var_structFieldName_1023 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
      outArgument_outExpression = GALGAS_structPropertyAccessExpressionAST::constructor_new (var_structFieldName_1023.readProperty_location (), outArgument_outExpression, var_structFieldName_1023  COMMA_SOURCE_FILE ("expression-property-access.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i29_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_primary_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i29_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_primary_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i30_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_890 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_notExpressionAST::constructor_new (var_operatorLocation_890, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-not.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i30_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i30_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_892 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_tildeExpressionAST::constructor_new (var_operatorLocation_892, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-tilde.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i32_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_890 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 19)) ;
  nt_primary_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 23)) ;
  outArgument_outExpression = GALGAS_bangExpressionAST::constructor_new (var_operatorLocation_890, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-bang.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i32_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_primary_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 23)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i32_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_primary_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i33_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_905 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionAST::constructor_new (var_operatorLocation_905, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i33_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i33_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i34_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                           C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2343 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2397 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2458 ;
      nt_expression_5F_and_5F_ggs_33__ (var_rightOperand_2458, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpressionAST::constructor_new (var_operatorLocation_2343, var_leftOperand_2397, var_rightOperand_2458  COMMA_SOURCE_FILE ("expression-or.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2581 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2636 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2697 ;
      nt_expression_5F_and_5F_ggs_33__ (var_rightOperand_2697, inCompiler) ;
      outArgument_outExpression = GALGAS_orShortExpressionAST::constructor_new (var_operatorLocation_2581, var_leftOperand_2636, var_rightOperand_2697  COMMA_SOURCE_FILE ("expression-or.galgas", 65)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2825 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2879 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2940 ;
      nt_expression_5F_and_5F_ggs_33__ (var_rightOperand_2940, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpressionAST::constructor_new (var_operatorLocation_2825, var_leftOperand_2879, var_rightOperand_2940  COMMA_SOURCE_FILE ("expression-or.galgas", 71)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_3064 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3120 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3181 ;
      nt_expression_5F_and_5F_ggs_33__ (var_rightOperand_3181, inCompiler) ;
      outArgument_outExpression = GALGAS_closedSliceExpressionAST::constructor_new (var_operatorLocation_3064, var_leftOperand_3120, var_rightOperand_3181  COMMA_SOURCE_FILE ("expression-or.galgas", 77)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3313 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3369 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3430 ;
      nt_expression_5F_and_5F_ggs_33__ (var_rightOperand_3430, inCompiler) ;
      outArgument_outExpression = GALGAS_openedSliceExpressionAST::constructor_new (var_operatorLocation_3313, var_leftOperand_3369, var_rightOperand_3430  COMMA_SOURCE_FILE ("expression-or.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i34_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i34_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i35_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                            C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1349 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 31)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1403 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1488 ;
      nt_relation_5F_factor_5F_ggs_33__ (var_rightOperand_1488, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpressionAST::constructor_new (var_operatorLocation_1349, var_leftOperand_1403, var_rightOperand_1488  COMMA_SOURCE_FILE ("expression-and.galgas", 35)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_1612 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1667 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1752 ;
      nt_relation_5F_factor_5F_ggs_33__ (var_rightOperand_1752, inCompiler) ;
      outArgument_outExpression = GALGAS_andShortExpressionAST::constructor_new (var_operatorLocation_1612, var_leftOperand_1667, var_rightOperand_1752  COMMA_SOURCE_FILE ("expression-and.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i35_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_relation_5F_factor_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      nt_relation_5F_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      nt_relation_5F_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i35_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__i0_ (GALGAS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                                   C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler) == 2) {
      GALGAS_lstring var_selector_1712 ;
      GALGAS_formalArgumentPassingModeAST var_mFormalParameterPassingMode_1761 ;
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        var_selector_1712 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 33)) ;
        var_mFormalParameterPassingMode_1761 = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 34)) ;
      } break ;
      case 2: {
        var_selector_1712 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 36)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 37)) ;
        var_mFormalParameterPassingMode_1761 = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 38)) ;
      } break ;
      case 3: {
        var_selector_1712 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 40)) ;
        var_mFormalParameterPassingMode_1761 = GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 41)) ;
      } break ;
      case 4: {
        var_selector_1712 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 43)) ;
        var_mFormalParameterPassingMode_1761 = GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 44)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalParameterTypeName_2302 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 46)) ;
      GALGAS_bool var_mIsUnused_2342 ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_mIsUnused_2342 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 51)) ;
        var_mIsUnused_2342 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_2485 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 54)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector_1712, var_mFormalParameterPassingMode_1761, var_formalParameterTypeName_2302, var_mFormalParameterName_2485, var_mIsUnused_2342  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 55)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__i0_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler) == 2) {
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 33)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 36)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 37)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 40)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 43)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 46)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 51)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 54)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler) == 2) {
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 33)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 36)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 37)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 40)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 43)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 46)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 51)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 54)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_ (GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                                   C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  outArgument_outActualParameterList = GALGAS_actualParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_3134 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 72)) ;
      GALGAS_semanticExpressionAST var_e_3195 ;
      nt_expression_5F_ggs_33__ (var_e_3195, inCompiler) ;
      GALGAS_location var_endOfExpressionLocation_3217 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 74)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector_3134, var_e_3195, var_endOfExpressionLocation_3217  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 75))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 75)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_3418 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 81)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 83)) ;
        GALGAS_lstringlist var_poisonedVarNameList_3490 ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_3490, inCompiler) ;
        outArgument_outActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::constructor_new (var_selector_3418, var_poisonedVarNameList_3490  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 85))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 85)) ;
      } break ;
      case 2: {
        GALGAS_lbigint var_count_3653 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 87)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 88)) ;
        GALGAS_uint var_n_3683 = var_count_3653.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 89)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_selector_3418.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("\?")) ;
            inCompiler->emitSemanticError (var_selector_3418.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray2  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 91)) ;
          }
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_n_3683.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (var_count_3653.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 94)) ;
          }
        }
        if (kBoolFalse == test_3) {
          if (var_n_3683.isValid ()) {
            uint32_t variant_3935 = var_n_3683.uintValue () ;
            bool loop_3935 = true ;
            while (loop_3935) {
              loop_3935 = GALGAS_bool (kIsStrictSup, var_n_3683.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
              if (loop_3935) {
                loop_3935 = GALGAS_bool (kIsStrictSup, var_n_3683.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
              }
              if (loop_3935 && (0 == variant_3935)) {
                loop_3935 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 96)) ;
              }
              if (loop_3935) {
                variant_3935 -- ;
                outArgument_outActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::constructor_new (var_selector_3418.readProperty_location (), var_n_3683  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 98))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 98)) ;
                var_n_3683.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 99)) ;
              }
            }
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      GALGAS_lstring var_selector_4147 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 104)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 105)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSelfParameterAST::constructor_new (var_selector_4147  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 106))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 106)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_4273 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 108)) ;
      GALGAS_lstring var_outputInputActualParameterName_4306 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 109)) ;
      GALGAS_lstringlist var_structAttributeList_4347 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 110)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        if (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 113)) ;
          GALGAS_lstring var_structAttributeName_4448 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 114)) ;
          var_structAttributeList_4347.addAssign_operation (var_structAttributeName_4448  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 115)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::constructor_new (var_selector_4273, var_outputInputActualParameterName_4306, var_structAttributeList_4347  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 117))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 117)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_4722 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 123)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 124)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::constructor_new (var_selector_4722  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 125))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 125)) ;
    } break ;
    case 7: {
      GALGAS_lstring var_selector_4852 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 127)) ;
      GALGAS_lbigint var_count_4885 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 128)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 129)) ;
      GALGAS_uint var_n_4911 = var_count_4885.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 130)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_selector_4852.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("!\?")) ;
          inCompiler->emitSemanticError (var_selector_4852.readProperty_location (), GALGAS_string ("the selector should be '!\?'"), fixItArray7  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 132)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, var_n_4911.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_count_4885.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray9  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 135)) ;
        }
      }
      if (kBoolFalse == test_8) {
        if (var_n_4911.isValid ()) {
          uint32_t variant_5152 = var_n_4911.uintValue () ;
          bool loop_5152 = true ;
          while (loop_5152) {
            loop_5152 = GALGAS_bool (kIsStrictSup, var_n_4911.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
            if (loop_5152) {
              loop_5152 = GALGAS_bool (kIsStrictSup, var_n_4911.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
            }
            if (loop_5152 && (0 == variant_5152)) {
              loop_5152 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 137)) ;
            }
            if (loop_5152) {
              variant_5152 -- ;
              outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::constructor_new (var_selector_4852.readProperty_location (), var_n_4911  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 139))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 139)) ;
              var_n_4911.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 140)) ;
            }
          }
        }
      }
    } break ;
    case 8: {
      GALGAS_lstring var_selector_5380 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 144)) ;
      GALGAS_lstring var_inputActualParameterName_5413 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 145)) ;
      GALGAS_lstringlist var_poisonedVarNameList_5474 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_5474, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::constructor_new (var_selector_5380, var_inputActualParameterName_5413, var_poisonedVarNameList_5474  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 147))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 147)) ;
    } break ;
    case 9: {
      GALGAS_lstring var_selector_5721 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 153)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 155)) ;
      GALGAS_lstring var_inputActualParameterName_5777 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 156)) ;
      GALGAS_lstringlist var_poisonedVarNameList_5838 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_5838, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualSelfPropertyParameterAST::constructor_new (var_selector_5721, var_inputActualParameterName_5777, var_poisonedVarNameList_5838  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 158))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 158)) ;
    } break ;
    case 10: {
      GALGAS_lstring var_selector_6072 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 164)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 165)) ;
      GALGAS_lstringlist var_poisonedVarNameList_6130 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_6130, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualSelfParameterAST::constructor_new (var_selector_6072, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 169)), var_poisonedVarNameList_6130  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 167))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 167)) ;
    } break ;
    case 11: {
      GALGAS_lstring var_selector_6346 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 173)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 174)) ;
      GALGAS_lstring var_declarationTypeName_6386 ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
        var_declarationTypeName_6386 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 177)) ;
      } break ;
      case 2: {
        var_declarationTypeName_6386 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 179)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_6542 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 181)) ;
      GALGAS_lstringlist var_poisonedVarNameList_6603 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_6603, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_6346, var_declarationTypeName_6386, var_inputActualParameterName_6542, var_poisonedVarNameList_6603  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 183))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 183)) ;
    } break ;
    case 12: {
      GALGAS_lstring var_selector_6889 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 190)) ;
      GALGAS_lstring var_declarationTypeName_6926 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 191)) ;
      GALGAS_lstring var_inputActualParameterName_6970 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 192)) ;
      GALGAS_lstringlist var_poisonedVarNameList_7031 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_7031, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_6889, var_declarationTypeName_6926, var_inputActualParameterName_6970, var_poisonedVarNameList_7031  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 194))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 194)) ;
    } break ;
    case 13: {
      GALGAS_lstring var_selector_7301 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 201)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 202)) ;
      GALGAS_lstring var_declarationTypeName_7341 ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
        var_declarationTypeName_7341 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 205)) ;
      } break ;
      case 2: {
        var_declarationTypeName_7341 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 207)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_markedAsUnused_7489 ;
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
        var_markedAsUnused_7489 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 213)) ;
        var_markedAsUnused_7489 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_7638 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 216)) ;
      GALGAS_lstringlist var_poisonedVarNameList_7699 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_7699, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::constructor_new (var_selector_7301, var_declarationTypeName_7341, var_inputActualParameterName_7638, var_markedAsUnused_7489, var_poisonedVarNameList_7699  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 218))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 218)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 72)) ;
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 81)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 83)) ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 87)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 88)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 104)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 105)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 108)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 109)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 113)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 114)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 123)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 124)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 128)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 129)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 144)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 145)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 153)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 156)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 164)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 165)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 173)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 174)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 179)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 181)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 190)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 191)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 192)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 201)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 202)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 207)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 213)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 216)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 72)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 81)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 83)) ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 87)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 88)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 104)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 105)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 108)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 109)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 113)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 114)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 123)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 124)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 128)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 129)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 144)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 145)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 153)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 156)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 164)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 165)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 173)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 174)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 179)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 181)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 190)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 191)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 192)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 201)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 202)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 207)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 213)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 216)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_ (GALGAS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                            C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 233)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler) == 2) {
      GALGAS_bool var_isConstant_8422 ;
      GALGAS_lstring var_selector_8448 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 237)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
        var_isConstant_8422 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 241)) ;
        var_isConstant_8422 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_8584 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 244)) ;
      GALGAS_bool var_mIsUnused_8625 ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
        var_mIsUnused_8625 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 249)) ;
        var_mIsUnused_8625 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_8768 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 252)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector_8448, var_mFormalParameterTypeName_8584, var_mFormalParameterName_8768, var_mIsUnused_8625, var_isConstant_8422  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 253)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 237)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 241)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 244)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 249)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 252)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 237)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 241)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 244)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 249)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 252)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i3_ (GALGAS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                               C_Lexique_galgasScanner_33_ * /* inCompiler */) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 265)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i3_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner_33_ * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_ (GALGAS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                               C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 271)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 272)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_varName_9465 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 274)) ;
    outArgument_outPoisonedVarNameList.addAssign_operation (var_varName_9465  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 275)) ;
    if (select_galgas_33_ParameterArgumentSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 277)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 272)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 274)) ;
    if (select_galgas_33_ParameterArgumentSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 277)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 272)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 274)) ;
    if (select_galgas_33_ParameterArgumentSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 277)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_ (GALGAS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                             C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 35)) ;
  switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_semanticInstructionAST var_instruction_2218 ;
      nt_semantic_5F_instruction_5F_ggs_33__ (var_instruction_2218, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction_2218  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 40)) ;
      if (select_galgas_33_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 43)) ;
        } break ;
        case 2: {
          GALGAS_string var_separator_2340 = GALGAS_string::constructor_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 45)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_separator_2340.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 46)).operator_not (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 46)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GALGAS_location::constructor_separator (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 47)), GALGAS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 47)) ;
            }
          }
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_semantic_5F_instruction_5F_ggs_33__parse (inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 43)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_semantic_5F_instruction_5F_ggs_33__indexing (inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 43)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 60)) ;
  GALGAS_bool var_isUsefull_2972 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 64)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_2972.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 66)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 66)) ;
        }
      }
      var_isUsefull_2972 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mActionName_3185 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 70)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_3286 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalParameterList_3286, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externProcedureDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mActionName_3185, var_mFormalParameterList_3286, var_isUsefull_2972  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 72))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 64)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 70)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 64)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 70)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 86)) ;
  GALGAS_bool var_isUsefull_3917 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 90)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_3917.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 92)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 92)) ;
        }
      }
      var_isUsefull_3917 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mRoutineName_4121 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 96)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_4223 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalParameterList_4223, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 98)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_4322 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mRoutineInstructionList_4322, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 100)) ;
  GALGAS_location var_endOfInstructionList_4362 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 101)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mRoutineName_4121, var_mFormalParameterList_4223, var_isUsefull_3917, var_mRoutineInstructionList_4322, var_endOfInstructionList_4362  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 102))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i2_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 90)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 96)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 98)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 100)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 90)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 96)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 98)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 100)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 116)) ;
  GALGAS_bool var_isUsefull_4896 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 120)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_4896.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 122)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 122)) ;
        }
      }
      var_isUsefull_4896 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mRoutineName_5100 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 126)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_5202 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalParameterList_5202, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 128)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_5301 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mRoutineInstructionList_5301, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 130)) ;
  GALGAS_location var_endOfInstructionList_5341 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 131)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_mRoutineName_5100, var_mFormalParameterList_5202, var_isUsefull_4896, var_mRoutineInstructionList_5301, var_endOfInstructionList_5341  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 132))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i3_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 120)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 126)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 128)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 130)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 120)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 126)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 128)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 148)) ;
  GALGAS_bool var_isOnce_6034 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_6057 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 153)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isOnce_6034.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 155)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 155)) ;
        }
      }
      var_isOnce_6034 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 159)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_isUsefull_6057.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 161)), GALGAS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 161)) ;
        }
      }
      var_isUsefull_6057 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_6397 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 165)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_6511 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_formalInputParameterList_6511, inCompiler) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isOnce_6034.boolEnum () ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_6511.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 167)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_6397.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 168)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 170)) ;
  GALGAS_lstring var_resultTypeName_6699 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 171)) ;
  GALGAS_lstring var_resultVariableName_6731 ;
  switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    var_resultVariableName_6731 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 174)) ;
  } break ;
  case 2: {
    var_resultVariableName_6731 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 176)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 178)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_6944 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_functionInstructionList_6944, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 180)) ;
  GALGAS_location var_endOfFunctionInstructionList_6984 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 181)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_isOnce_6034.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_6397, var_resultTypeName_6699, var_resultVariableName_6731, var_functionInstructionList_6944, var_endOfFunctionInstructionList_6984, GALGAS_bool (false), var_isUsefull_6057  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 183))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 183)) ;
    }
  }
  if (kBoolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_6397, var_formalInputParameterList_6511, var_resultTypeName_6699, var_isUsefull_6057, var_resultVariableName_6731, var_functionInstructionList_6944, var_endOfFunctionInstructionList_6984, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 194))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 194)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 148)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 153)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 159)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 165)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 171)) ;
  switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 174)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 178)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 180)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 148)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 153)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 159)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 165)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 171)) ;
  switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 174)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 178)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 180)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 211)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 212)) ;
  GALGAS_bool var_isOnce_7952 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_7975 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 217)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isOnce_7952.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 219)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 219)) ;
        }
      }
      var_isOnce_7952 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 223)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_isUsefull_7975.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 225)), GALGAS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 225)) ;
        }
      }
      var_isUsefull_7975 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_8315 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 229)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_8429 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_formalInputParameterList_8429, inCompiler) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isOnce_7952.boolEnum () ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_8429.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 231)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_8315.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 232)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 234)) ;
  GALGAS_lstring var_resultTypeName_8617 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 235)) ;
  GALGAS_lstring var_resultVariableName_8649 ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    var_resultVariableName_8649 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 238)) ;
  } break ;
  case 2: {
    var_resultVariableName_8649 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 240)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 242)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_8862 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_functionInstructionList_8862, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 244)) ;
  GALGAS_location var_endOfFunctionInstructionList_8902 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 245)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_isOnce_7952.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_8315, var_resultTypeName_8617, var_resultVariableName_8649, var_functionInstructionList_8862, var_endOfFunctionInstructionList_8902, GALGAS_bool (true), var_isUsefull_7975  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 247))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 247)) ;
    }
  }
  if (kBoolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_8315, var_formalInputParameterList_8429, var_resultTypeName_8617, var_isUsefull_7975, var_resultVariableName_8649, var_functionInstructionList_8862, var_endOfFunctionInstructionList_8902, GALGAS_bool (true)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 258))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 258)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 211)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 212)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 217)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 223)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 229)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 234)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 235)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 238)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 242)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 244)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 211)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 212)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 217)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 223)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 229)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 234)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 235)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 238)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 242)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 244)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 277)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 278)) ;
  GALGAS_bool var_isUsefull_10102 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 282)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_10102.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 284)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 284)) ;
        }
      }
      var_isUsefull_10102 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mActionName_10306 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 288)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_10419 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_formalInputParameterList_10419, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 290)) ;
  GALGAS_lstring var_resultTypeName_10470 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 291)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_mActionName_10306, var_formalInputParameterList_10419, var_resultTypeName_10470, var_isUsefull_10102  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 292))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 292)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i6_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 277)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 278)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 282)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 288)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 290)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 291)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i6_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 277)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 278)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 282)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 288)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 290)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 291)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_11339 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 310)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_11339.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?")) ;
      inCompiler->emitSemanticError (var_selector_11339.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 312)) ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 315)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 316))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 316)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName_11603 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
    GALGAS_lstring var_actualParameterName_11651 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 319)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (var_actualParameterTypeName_11603, var_actualParameterName_11651  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 320)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 322)) ;
    GALGAS_lstring var_actualParameterTypeName_11840 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 323)) ;
    GALGAS_lstring var_actualParameterName_11888 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 324)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (var_actualParameterTypeName_11840, var_actualParameterName_11888  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 325)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName_12072 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 327)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (var_actualParameterName_12072  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 328)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 310)) ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 315)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 319)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 322)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 323)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 324)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 327)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 310)) ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 315)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 319)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 322)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 323)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 324)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 327)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i8_ (GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 335)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_12529 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 338)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 339)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_12529, GALGAS_inputParameterAnonymousVariable::constructor_new (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 340))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 340)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_12658 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 342)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 343)) ;
      GALGAS_lstring var_actualParameterTypeName_12698 ;
      switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_12698 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 346)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_12698 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 348)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_12866 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 350)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_12658, GALGAS_inputParameterDeclaredVariable::constructor_new (var_actualParameterTypeName_12698, var_actualParameterName_12866  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 353))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 351)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_13059 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 355)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 356)) ;
      GALGAS_lstring var_actualParameterTypeName_13099 ;
      switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_13099 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 359)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_13099 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 361)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_13267 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 363)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_13059, GALGAS_inputParameterDeclaredConstant::constructor_new (var_actualParameterTypeName_13099, var_actualParameterName_13267  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 366))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 364)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_13460 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 368)) ;
      GALGAS_lstring var_actualParameterName_13493 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 369)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_13460, GALGAS_inputParameterVariable::constructor_new (var_actualParameterName_13493  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 370))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 370)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i8_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 338)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 339)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 342)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 343)) ;
      switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 348)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 350)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 355)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 356)) ;
      switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 361)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 363)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 368)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 369)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i8_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 338)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 339)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 342)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 343)) ;
      switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 348)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 350)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 355)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 356)) ;
      switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 361)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 363)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 368)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 369)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                     C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mTargetVariableName_1318 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  GALGAS_lstring var_optionalProperty_1355 ;
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
    var_optionalProperty_1355 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 31)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    GALGAS_lstring var_attributeName_1462 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
    var_optionalProperty_1355 = var_attributeName_1462 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_1581 ;
  nt_expression_5F_ggs_33__ (var_mSourceExpression_1581, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::constructor_new (var_mTargetVariableName_1318.readProperty_location (), var_mTargetVariableName_1318, var_optionalProperty_1355, var_mSourceExpression_1581  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i10_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  GALGAS_lstring var_mTargetVariableName_2016 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  GALGAS_lstring var_optionalProperty_2053 ;
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
    var_optionalProperty_2053 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    GALGAS_lstring var_attributeName_2160 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
    var_optionalProperty_2053 = var_attributeName_2160 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_2279 ;
  nt_expression_5F_ggs_33__ (var_mSourceExpression_2279, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPropertyAssignmentInstructionAST::constructor_new (var_mTargetVariableName_2016.readProperty_location (), var_mTargetVariableName_2016, var_optionalProperty_2053, var_mSourceExpression_2279  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i10_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i10_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_ (GALGAS_castInstructionBranchListAST & ioArgument_ioCastInstructionBranchList,
                                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  GALGAS_dynamicTypeComparisonKind var_kind_1543 ;
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
    var_kind_1543 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("instruction-cast.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
    var_kind_1543 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("instruction-cast.galgas", 38)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
    var_kind_1543 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("instruction-cast.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_1706 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  GALGAS_lstring var_mConstantVarName_1733 ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
    var_mConstantVarName_1733 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
    var_mConstantVarName_1733 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  GALGAS_semanticInstructionListAST var_mCastBranchInstructionList_1985 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mCastBranchInstructionList_1985, inCompiler) ;
  ioArgument_ioCastInstructionBranchList.addAssign_operation (var_mTypeName_1706, var_mConstantVarName_1733, var_mCastBranchInstructionList_1985, var_kind_1543, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 57))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
    outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (outArgument_outElseOrDefault, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    GALGAS_location var_instructionLocation_2515 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 70)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    GALGAS_semanticExpressionAST var_errorLocationExpression_2618 ;
    nt_expression_5F_ggs_33__ (var_errorLocationExpression_2618, inCompiler) ;
    outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 73)) ;
    GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 77)) ;
    temp_0.addAssign_operation (GALGAS_string ("cast instruction run-time error")  COMMA_SOURCE_FILE ("instruction-cast.galgas", 77)) ;
    outArgument_outElseOrDefault.addAssign_operation (GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_2515, var_errorLocationExpression_2618, GALGAS_literalStringExpressionAST::constructor_new (var_instructionLocation_2515, temp_0  COMMA_SOURCE_FILE ("instruction-cast.galgas", 77)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 78)), GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 79))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 74))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 74)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 87)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 89)), GALGAS_string ("This instruction is not handled in GALGAS 4"), fixItArray1  COMMA_SOURCE_FILE ("instruction-cast.galgas", 89)) ;
    }
  }
  GALGAS_location var_instructionLocation_3309 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 91)) ;
  GALGAS_semanticExpressionAST var_expression_3396 ;
  nt_expression_5F_ggs_33__ (var_expression_3396, inCompiler) ;
  GALGAS_castInstructionBranchListAST var_mCastInstructionBranchList_3415 = GALGAS_castInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 93)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    nt_cast_5F_instruction_5F_branch_ (var_mCastInstructionBranchList_3415, inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_2 = false ;
    }
  }
  GALGAS_semanticInstructionListAST var_mElseOrDefault_3628 ;
  nt_cast_5F_else_5F_or_5F_default_ (var_mElseOrDefault_3628, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 99)) ;
  GALGAS_location var_endOfInstructionLocation_3661 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
  outArgument_outInstruction = GALGAS_structuredCastInstructionAST::constructor_new (var_instructionLocation_3309, var_expression_3396, var_mCastInstructionBranchList_3415, var_mElseOrDefault_3628, var_endOfInstructionLocation_3661  COMMA_SOURCE_FILE ("instruction-cast.galgas", 101)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 87)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_parse (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 99)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 87)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_ (const GALGAS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiverName_3180 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 72)) ;
  GALGAS_location var_instructionLocation_3201 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 73)) ;
  GALGAS_lstringlist var_mStructAttributeList_3259 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 77)) ;
      GALGAS_lstring var_attributeName_3340 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
      var_mStructAttributeList_3259.addAssign_operation (var_attributeName_3340  COMMA_SOURCE_FILE ("instruction-concat.galgas", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 82)) ;
    GALGAS_semanticExpressionAST var_expression_3481 ;
    nt_expression_5F_ggs_33__ (var_expression_3481, inCompiler) ;
    outArgument_outInstruction = GALGAS_minusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3201, constinArgument_inHasSelfPrefix, var_receiverName_3180, var_mStructAttributeList_3259, var_expression_3481  COMMA_SOURCE_FILE ("instruction-concat.galgas", 84)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 92)) ;
    switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
    case 1: {
      GALGAS_actualOutputExpressionList var_expressionList_3803 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_3803, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualElementsInstructionAST::constructor_new (var_instructionLocation_3201, constinArgument_inHasSelfPrefix, var_receiverName_3180, var_mStructAttributeList_3259, var_expressionList_3803  COMMA_SOURCE_FILE ("instruction-concat.galgas", 95)) ;
    } break ;
    case 2: {
      GALGAS_semanticExpressionAST var_expression_4095 ;
      nt_expression_5F_ggs_33__ (var_expression_4095, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3201, constinArgument_inHasSelfPrefix, var_receiverName_3180, var_mStructAttributeList_3259, var_expression_4095  COMMA_SOURCE_FILE ("instruction-concat.galgas", 104)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 113)) ;
    GALGAS_semanticExpressionAST var_expression_4398 ;
    nt_expression_5F_ggs_33__ (var_expression_4398, inCompiler) ;
    outArgument_outInstruction = GALGAS_mulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3201, constinArgument_inHasSelfPrefix, var_receiverName_3180, var_mStructAttributeList_3259, var_expression_4398  COMMA_SOURCE_FILE ("instruction-concat.galgas", 115)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 123)) ;
    GALGAS_semanticExpressionAST var_expression_4676 ;
    nt_expression_5F_ggs_33__ (var_expression_4676, inCompiler) ;
    outArgument_outInstruction = GALGAS_divEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3201, constinArgument_inHasSelfPrefix, var_receiverName_3180, var_mStructAttributeList_3259, var_expression_4676  COMMA_SOURCE_FILE ("instruction-concat.galgas", 125)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 72)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 77)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 82)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 92)) ;
    switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 113)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 123)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 72)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 77)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 82)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 92)) ;
    switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 113)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 123)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i17_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                                                           C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 138)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_5170 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 140)) ;
    GALGAS_semanticExpressionAST var_expression_5231 ;
    nt_expression_5F_ggs_33__ (var_expression_5231, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector_5170, var_expression_5231, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 142))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 142)) ;
    if (select_galgas_33_InstructionsSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i17_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 140)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i17_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 140)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  GALGAS_location var_instructionLocation_864 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  GALGAS_lstringlist var_dropList_922 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-drop.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_971 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    var_dropList_922.addAssign_operation (var_variableName_971  COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    if (select_galgas_33_InstructionsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GALGAS_dropInstructionAST::constructor_new (var_instructionLocation_864, var_dropList_922  COMMA_SOURCE_FILE ("instruction-drop.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    if (select_galgas_33_InstructionsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    if (select_galgas_33_InstructionsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_ (GALGAS_fixitListAST & outArgument_outFixitListAST,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 36)) ;
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    GALGAS_bool var_hasFixItRemove_1645 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_hasFixItRemove_1645.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)), GALGAS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)) ;
          }
        }
        if (kBoolFalse == test_1) {
          outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 48))  COMMA_SOURCE_FILE ("instruction-error.galgas", 48)) ;
          var_hasFixItRemove_1645 = GALGAS_bool (true) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        GALGAS_location var_errorLocation_1946 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 53)) ;
        GALGAS_semanticExpressionAST var_expression_2031 ;
        nt_expression_5F_ggs_33__ (var_expression_2031, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItReplace (var_expression_2031, var_errorLocation_1946  COMMA_SOURCE_FILE ("instruction-error.galgas", 55))  COMMA_SOURCE_FILE ("instruction-error.galgas", 55)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        GALGAS_location var_errorLocation_2182 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 58)) ;
        GALGAS_semanticExpressionAST var_expression_2267 ;
        nt_expression_5F_ggs_33__ (var_expression_2267, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertAfter (var_expression_2267, var_errorLocation_2182  COMMA_SOURCE_FILE ("instruction-error.galgas", 60))  COMMA_SOURCE_FILE ("instruction-error.galgas", 60)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        GALGAS_location var_errorLocation_2423 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 63)) ;
        GALGAS_semanticExpressionAST var_expression_2508 ;
        nt_expression_5F_ggs_33__ (var_expression_2508, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertBefore (var_expression_2508, var_errorLocation_2423  COMMA_SOURCE_FILE ("instruction-error.galgas", 65))  COMMA_SOURCE_FILE ("instruction-error.galgas", 65)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  GALGAS_location var_instructionLocation_2865 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 75)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_2952 ;
  nt_expression_5F_ggs_33__ (var_mReceiverExpression_2952, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression_3030 ;
  nt_expression_5F_ggs_33__ (var_mErrorExpression_3030, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList_3055 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName_3158 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      var_mBuiltVariableList_3055.addAssign_operation (var_builtVariableName_3158  COMMA_SOURCE_FILE ("instruction-error.galgas", 85)) ;
      if (select_galgas_33_InstructionsSyntax_29 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_fixitListAST var_fixitListAST_3303 ;
  nt_issue_5F_fixit_ (var_fixitListAST_3303, inCompiler) ;
  outArgument_outInstruction = GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_2865, var_mReceiverExpression_2952, var_mErrorExpression_3030, var_mBuiltVariableList_3055, var_fixitListAST_3303  COMMA_SOURCE_FILE ("instruction-error.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      if (select_galgas_33_InstructionsSyntax_29 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      }else{
        repeatFlag_0 = false ;
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      if (select_galgas_33_InstructionsSyntax_29 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lbigint var_count_3616 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
  GALGAS_uint var_n_3638 = var_count_3616.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 78)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_n_3638.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_3616.readProperty_location (), GALGAS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 80)) ;
    }
  }
  if (var_n_3638.isValid ()) {
    uint32_t variant_3739 = var_n_3638.uintValue () ;
    bool loop_3739 = true ;
    while (loop_3739) {
      loop_3739 = GALGAS_bool (kIsStrictSup, var_n_3638.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_3739) {
        loop_3739 = GALGAS_bool (kIsStrictSup, var_n_3638.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_3739 && (0 == variant_3739)) {
        loop_3739 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas", 82)) ;
      }
      if (loop_3739) {
        variant_3739 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 83)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 83))  COMMA_SOURCE_FILE ("instruction-for.galgas", 83)) ;
        var_n_3638.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_typeName_4086 ;
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    var_typeName_4086 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 93)) ;
  } break ;
  case 2: {
    var_typeName_4086 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 95)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 98)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_4086, GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 99))  COMMA_SOURCE_FILE ("instruction-for.galgas", 99)) ;
  } break ;
  case 2: {
    GALGAS_bool var_isUnused_4269 ;
    switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
    case 1: {
      var_isUnused_4269 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 105)) ;
      var_isUnused_4269 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_constantName_4409 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 108)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_4086, var_isUnused_4269, var_constantName_4409  COMMA_SOURCE_FILE ("instruction-for.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 95)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 98)) ;
  } break ;
  case 2: {
    switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 105)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 95)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 98)) ;
  } break ;
  case 2: {
    switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 105)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 116)) ;
  GALGAS_forInstructionEnumeratedObjectElementListAST var_elementList_4733 = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 117)) ;
  GALGAS_bool var_endsWithEllipsis_4810 ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 120)) ;
    var_endsWithEllipsis_4810 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_ (var_elementList_4733, inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_34 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
      var_endsWithEllipsis_4810 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
      var_endsWithEllipsis_4810 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_location_5097 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 134)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 136)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_5190 ;
  nt_expression_5F_ggs_33__ (var_enumeratedExpression_5190, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (var_elementList_4733, var_endsWithEllipsis_4810, var_enumeratedExpression_5190, var_location_5097  COMMA_SOURCE_FILE ("instruction-for.galgas", 138)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 116)) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 120)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_parse (inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_34 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 136)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 116)) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 120)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_34 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 136)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_5639 ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
    var_typeName_5639 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 151)) ;
  } break ;
  case 2: {
    var_typeName_5639 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable_5745 ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 157)) ;
    var_enumerationVariable_5745 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 158)) ;
  } break ;
  case 2: {
    var_enumerationVariable_5745 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_5938 ;
  nt_expression_5F_ggs_33__ (var_enumeratedExpression_5938, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::constructor_new (var_typeName_5639, var_enumerationVariable_5745, var_enumeratedExpression_5938, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 168))  COMMA_SOURCE_FILE ("instruction-for.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 157)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 157)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 175)) ;
  GALGAS_location var_startLocation_6369 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 176)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 177)) ;
  GALGAS_lstring var_prefix_6425 ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_prefix_6425 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 180)) ;
  } break ;
  case 2: {
    var_prefix_6425 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 182)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endLocation_6521 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 184)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 185)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_6609 ;
  nt_expression_5F_ggs_33__ (var_enumeratedExpression_6609, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (var_prefix_6425, var_enumeratedExpression_6609, var_startLocation_6369.getter_union (var_endLocation_6521, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 190))  COMMA_SOURCE_FILE ("instruction-for.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 175)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 177)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 182)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 185)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 175)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 177)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 182)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 185)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i26_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 197)) ;
  GALGAS_location var_instructionLocation_7019 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 198)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_7064 = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 199)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending_7157 ;
    switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
    case 1: {
      var_ascending_7157 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 205)) ;
      var_ascending_7157 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject_7342 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedObject_7342, inCompiler) ;
    var_mEnumeratedObjectList_7064.addAssign_operation (var_ascending_7157, var_enumeratedObject_7342  COMMA_SOURCE_FILE ("instruction-for.galgas", 209)) ;
    if (select_galgas_33_InstructionsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 211)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression_7478 ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
    var_mWhileExpression_7478 = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 215))  COMMA_SOURCE_FILE ("instruction-for.galgas", 215)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
    nt_expression_5F_ggs_33__ (var_mWhileExpression_7478, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression_7652 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 220)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList_7728 ;
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_7728 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 223)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mBeforeInstructionList_7728, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch_7926 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 228)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  GALGAS_lstring var_indexVariableName_7989 ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    var_indexVariableName_7989 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 232)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    var_indexVariableName_7989 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 235)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 236)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList_8195 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mDoInstructionList_8195, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch_8222 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 239)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList_8291 ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_8291 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 242)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mBetweenInstructionList_8291, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch_8493 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 247)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList_8567 ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_8567 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 250)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 252)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mAfterInstructionList_8567, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch_8761 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 255)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 256)) ;
  GALGAS_location var_endof_5F_foreach_5F_instruction_8815 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 257)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::constructor_new (var_instructionLocation_7019, var_mEnumeratedObjectList_7064, var_indexVariableName_7989, var_mWhileExpression_7478, var_endof_5F_while_5F_expression_7652, var_mBeforeInstructionList_7728, var_endof_5F_before_5F_branch_7926, var_mBetweenInstructionList_8291, var_endof_5F_between_5F_branch_8493, var_mDoInstructionList_8195, var_endof_5F_do_5F_branch_8222, var_mAfterInstructionList_8567, var_endof_5F_after_5F_branch_8761, var_endof_5F_foreach_5F_instruction_8815  COMMA_SOURCE_FILE ("instruction-for.galgas", 258)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i26_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 197)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 205)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 211)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 235)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 236)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 252)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 256)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i26_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 197)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 205)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 211)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 235)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 236)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 252)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 256)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  GALGAS_location var_instructionLocation_3888 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 80)) ;
  GALGAS_lstring var_grammarComponentName_3956 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 81)) ;
  GALGAS_lstring var_labelName_4029 ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
    var_labelName_4029 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 86)) ;
    var_labelName_4029 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 89)) ;
  GALGAS_actualParameterListAST var_actualParameterList_4232 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_4232, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 91)) ;
  nt_grammar_5F_instruction_5F_core_ (var_instructionLocation_3888, var_actualParameterList_4232, var_grammarComponentName_3956, var_labelName_4029, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 81)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 86)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 89)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 91)) ;
  nt_grammar_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 81)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 86)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 89)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 91)) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 102)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_4931 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_4931, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_4956 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 104)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_5115 ;
  switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_5115 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 108)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_5115, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_4931, var_endOfSourceExpression_4956, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_5115  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 113)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 102)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 102)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 131)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_6237 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_6237, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_6272 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 134)) ;
  GALGAS_semanticExpressionAST var_nameExpression_6360 ;
  nt_expression_5F_ggs_33__ (var_nameExpression_6360, inCompiler) ;
  GALGAS_location var_endOfNameExpression_6393 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 136)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_6541 ;
  switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_6541 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 140)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_6541, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_6237, var_endOfSourceExpression_6272, var_nameExpression_6360, var_endOfNameExpression_6393, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_6541  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 131)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 134)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 131)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 134)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 163)) ;
  GALGAS_location var_instructionLocation_7587 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 164)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticWarning (var_instructionLocation_7587, GALGAS_string ("obsolete 'grammar' instruction syntax"), fixItArray1  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 166)) ;
    }
  }
  GALGAS_lstring var_grammarComponentName_7820 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 168)) ;
  GALGAS_lstring var_labelName_7893 ;
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
    var_labelName_7893 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 171)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 173)) ;
    var_labelName_7893 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 174)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_5F_obsolete_ (var_instructionLocation_7587, var_grammarComponentName_7820, var_labelName_7893, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 163)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 168)) ;
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 173)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 174)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_5F_obsolete_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 163)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 168)) ;
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 173)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 174)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                              const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                              const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                              C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_8638 ;
  nt_expression_5F_ggs_33__ (var_mSourceExpression_8638, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_8664 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 187)) ;
  GALGAS_actualParameterListAST var_actualParameterList_8765 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_8765, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_8905 ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_8905 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 192)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_8905, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_mSourceExpression_8638, var_endOfSourceExpression_8664, var_actualParameterList_8765, var_grammarInstructionSyntaxDirectedTranslationResult_8905  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 197)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                              const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                              const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                              C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 215)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_9989 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_9989, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_10024 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 217)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 218)) ;
  GALGAS_semanticExpressionAST var_nameExpression_10112 ;
  nt_expression_5F_ggs_33__ (var_nameExpression_10112, inCompiler) ;
  GALGAS_location var_endOfNameExpression_10145 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  GALGAS_actualParameterListAST var_actualParameterList_10243 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_10243, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_10383 ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_10383 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 226)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 228)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_10383, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_9989, var_endOfSourceExpression_10024, var_nameExpression_10112, var_endOfNameExpression_10145, var_actualParameterList_10243, var_grammarInstructionSyntaxDirectedTranslationResult_10383  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 215)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 218)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 228)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 215)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 218)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 228)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_inc_5F_dec_ (GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_semantic_5F_instruction_5F_inc_5F_dec_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_ (const GALGAS_bool constinArgument_inPrefixedBySelf,
                                                                                                                         GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mReceiverName_2561 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  GALGAS_lstringlist var_mStructAttributeList_2583 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      GALGAS_lstring var_attributeName_2677 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
      var_mStructAttributeList_2583.addAssign_operation (var_attributeName_2677  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 70)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_2561.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2561, var_mStructAttributeList_2583, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 79))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 74)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_2561.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2561, var_mStructAttributeList_2583, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 88))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 83)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_2561.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2561, var_mStructAttributeList_2583, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 97))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 92)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_2561.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2561, var_mStructAttributeList_2583, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 106))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  GALGAS_location var_instructionLocation_3823 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_3823, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 120))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 118)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_3823, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 126))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 124)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_3823, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 132))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 130)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_3823, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 138))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_2594 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  GALGAS_ifExpressionList var_testExpression_2661 ;
  nt_if_5F_expression_5F_ggs_33__ (var_testExpression_2661, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList_2729 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_then_5F_instructionList_2729, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation_2758 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList_2837 ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_2837 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_else_5F_instructionList_2837, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    GALGAS_semanticInstructionAST var_instruction_3065 ;
    nt_if_5F_instruction_5F_core_ (var_instruction_3065, inCompiler) ;
    GALGAS_semanticInstructionListAST temp_0 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 74)) ;
    temp_0.addAssign_operation (var_instruction_3065  COMMA_SOURCE_FILE ("instruction-if.galgas", 74)) ;
    var_else_5F_instructionList_2837 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_2594, var_testExpression_2661, var_then_5F_instructionList_2729, var_endOf_5F_then_5F_branchLocation_2758, var_else_5F_instructionList_2837, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 82))  COMMA_SOURCE_FILE ("instruction-if.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_if_5F_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_if_5F_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_ (outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i39_ (GALGAS_ifExpressionList & outArgument_outExpressionList,
                                                                                                               C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_ifExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 97)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 100)) ;
      GALGAS_lstring var_constantName_3889 ;
      switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
      case 1: {
        var_constantName_3889 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 103)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 105)) ;
        var_constantName_3889 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 106)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 108)) ;
      GALGAS_semanticExpressionAST var_expression_4072 ;
      nt_expression_5F_or_5F_ggs_33__ (var_expression_4072, inCompiler) ;
      GALGAS_location var_endOfReceiverExpression_4095 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 110)) ;
      switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_3889, var_expression_4072, var_endOfReceiverExpression_4095, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 116))  COMMA_SOURCE_FILE ("instruction-if.galgas", 112))  COMMA_SOURCE_FILE ("instruction-if.galgas", 112)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 119)) ;
        GALGAS_lstring var_typeName_4412 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 120)) ;
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_3889, var_expression_4072, var_endOfReceiverExpression_4095, var_typeName_4412  COMMA_SOURCE_FILE ("instruction-if.galgas", 121))  COMMA_SOURCE_FILE ("instruction-if.galgas", 121)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 130)) ;
      GALGAS_semanticExpressionAST var_receiverExpression_4724 ;
      nt_expression_5F_ggs_33__ (var_receiverExpression_4724, inCompiler) ;
      GALGAS_lstring var_optionalMethodName_4778 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 132)) ;
      GALGAS_optionalMethodActualArgumentList var_optionalMethodActualArgumentList_4843 = GALGAS_optionalMethodActualArgumentList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 133)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_4929 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
          GALGAS_semanticExpressionAST var_expression_4971 ;
          nt_expression_5F_ggs_33__ (var_expression_4971, inCompiler) ;
          var_optionalMethodActualArgumentList_4843.addAssign_operation (var_selector_4929, GALGAS_optionalMethodActualArgument::constructor_actualOutput (var_expression_4971, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 138))  COMMA_SOURCE_FILE ("instruction-if.galgas", 138))  COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
        } break ;
        case 3: {
          GALGAS_lstring var_selector_5129 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
          switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 142)) ;
            GALGAS_lstring var_typeName_5198 ;
            switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
            case 1: {
              var_typeName_5198 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 145)) ;
            } break ;
            case 2: {
              var_typeName_5198 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_constantName_5360 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
            var_optionalMethodActualArgumentList_4843.addAssign_operation (var_selector_5129, GALGAS_optionalMethodActualArgument::constructor_actualLetInput (var_typeName_5198, var_constantName_5360  COMMA_SOURCE_FILE ("instruction-if.galgas", 150))  COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 152)) ;
            GALGAS_lstring var_typeName_5554 ;
            switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
            case 1: {
              var_typeName_5554 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 155)) ;
            } break ;
            case 2: {
              var_typeName_5554 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 157)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_variableName_5715 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
            var_optionalMethodActualArgumentList_4843.addAssign_operation (var_selector_5129, GALGAS_optionalMethodActualArgument::constructor_actualVarInput (var_typeName_5554, var_variableName_5715  COMMA_SOURCE_FILE ("instruction-if.galgas", 160))  COMMA_SOURCE_FILE ("instruction-if.galgas", 160)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 162)) ;
            var_optionalMethodActualArgumentList_4843.addAssign_operation (var_selector_5129, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 163)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("instruction-if.galgas", 163))  COMMA_SOURCE_FILE ("instruction-if.galgas", 163)) ;
          } break ;
          case 4: {
            GALGAS_lbigint var_repetitionCount_6050 = inCompiler->synthetizedAttribute_bigintValue () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 165)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsNotEqual, var_selector_5129.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray3 ;
                appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("\?")) ;
                inCompiler->emitSemanticError (var_selector_5129.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 168)) ;
              }
            }
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, var_repetitionCount_6050.readProperty_bigint ().objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 170)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (var_repetitionCount_6050.readProperty_location (), GALGAS_string ("the repetition count should be > 0"), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 171)) ;
              }
            }
            cEnumerator_range enumerator_6405 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_repetitionCount_6050.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 173)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 173))), kENUMERATION_UP) ;
            while (enumerator_6405.hasCurrentObject ()) {
              var_optionalMethodActualArgumentList_4843.addAssign_operation (var_selector_5129, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 174)), enumerator_6405.current (HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 174))  COMMA_SOURCE_FILE ("instruction-if.galgas", 174)) ;
              enumerator_6405.gotoNextObject () ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_optionalMethodCall (var_receiverExpression_4724, var_optionalMethodName_4778, var_optionalMethodActualArgumentList_4843  COMMA_SOURCE_FILE ("instruction-if.galgas", 179))  COMMA_SOURCE_FILE ("instruction-if.galgas", 179)) ;
    } break ;
    case 3: {
      GALGAS_semanticExpressionAST var_expression_6846 ;
      nt_expression_5F_ggs_33__ (var_expression_6846, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_regularExp (var_expression_6846  COMMA_SOURCE_FILE ("instruction-if.galgas", 186))  COMMA_SOURCE_FILE ("instruction-if.galgas", 186)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_56 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i39_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 100)) ;
      switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 103)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 105)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 108)) ;
      nt_expression_5F_or_5F_ggs_33__parse (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 119)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 120)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 130)) ;
      nt_expression_5F_ggs_33__parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 132)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
          nt_expression_5F_ggs_33__parse (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
          switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 142)) ;
            switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 152)) ;
            switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 157)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 162)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 165)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
    } break ;
    case 3: {
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_56 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i39_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 100)) ;
      switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 103)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 105)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 108)) ;
      nt_expression_5F_or_5F_ggs_33__indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 119)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 120)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 130)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 132)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
          nt_expression_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
          switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 142)) ;
            switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 152)) ;
            switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 157)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 162)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 165)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
    } break ;
    case 3: {
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_56 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  GALGAS_lstring var_typeName_1607 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  GALGAS_lstring var_constantName_1638 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  outArgument_outInstruction = GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (var_typeName_1607.readProperty_location (), var_typeName_1607, var_constantName_1638  COMMA_SOURCE_FILE ("instruction-let.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  GALGAS_lstring var_typeName_2013 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  GALGAS_lstring var_variableName_2044 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2115 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_2115, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_2013.readProperty_location (), GALGAS_bool (true), var_typeName_2013, var_variableName_2044, var_sourceExpression_2115  COMMA_SOURCE_FILE ("instruction-let.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  GALGAS_lstring var_variableName_2560 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2631 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_2631, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (var_variableName_2560.readProperty_location (), var_variableName_2560, var_sourceExpression_2631  COMMA_SOURCE_FILE ("instruction-let.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  GALGAS_location var_instructionLocation_1088 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 27)) ;
  GALGAS_logListAST var_logList_1145 = GALGAS_logListAST::constructor_emptyList (SOURCE_FILE ("instruction-log.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName_1208 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
      var_logList_1145.addAssign_operation (var_loggedVariableName_1208, GALGAS_varInExpressionAST::constructor_new (var_loggedVariableName_1208  COMMA_SOURCE_FILE ("instruction-log.galgas", 32))  COMMA_SOURCE_FILE ("instruction-log.galgas", 32)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      GALGAS_lstring var_propertyName_1375 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
      var_logList_1145.addAssign_operation (var_propertyName_1375, GALGAS_structPropertyAccessExpressionAST::constructor_new (var_propertyName_1375.readProperty_location (), GALGAS_selfInExpressionAST::constructor_new (var_propertyName_1375.readProperty_location ()  COMMA_SOURCE_FILE ("instruction-log.galgas", 39)), var_propertyName_1375  COMMA_SOURCE_FILE ("instruction-log.galgas", 39))  COMMA_SOURCE_FILE ("instruction-log.galgas", 37)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_logMessage_1602 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      GALGAS_semanticExpressionAST var_logExpression_1656 ;
      nt_expression_5F_ggs_33__ (var_logExpression_1656, inCompiler) ;
      var_logList_1145.addAssign_operation (var_logMessage_1602, var_logExpression_1656  COMMA_SOURCE_FILE ("instruction-log.galgas", 44)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::constructor_new (var_instructionLocation_1088, var_logList_1145  COMMA_SOURCE_FILE ("instruction-log.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 26)) ;
  GALGAS_location var_instructionLocation_1297 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 29)) ;
  GALGAS_semanticExpressionAST var_variantExpression_1407 ;
  nt_expression_5F_ggs_33__ (var_variantExpression_1407, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_1433 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 32)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_1558 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_firstInstructions_1558, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_1591 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 37)) ;
  GALGAS_semanticExpressionAST var_loopExpression_1693 ;
  nt_expression_5F_ggs_33__ (var_loopExpression_1693, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_1716 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 40)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_1832 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_secondInstructions_1832, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_1859 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 43)) ;
  GALGAS_location var_endOfLoopInstruction_1918 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 44)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithVariantAST::constructor_new (var_instructionLocation_1297, var_variantExpression_1407, var_endOfVariantExpression_1433, var_firstInstructions_1558, var_endOfFirstInstructions_1591, var_loopExpression_1693, var_endOfLoopExpression_1716, var_secondInstructions_1832, var_endOfSecondInstructions_1859, var_endOfLoopInstruction_1918  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 29)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 37)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 40)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 29)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 37)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 40)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 24)) ;
  GALGAS_location var_instructionLocation_1198 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 25)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_1305 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_firstInstructions_1305, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_1338 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 29)) ;
  GALGAS_semanticExpressionAST var_loopExpression_1440 ;
  nt_expression_5F_ggs_33__ (var_loopExpression_1440, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_1463 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 32)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_1579 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_secondInstructions_1579, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_1606 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 35)) ;
  GALGAS_location var_endOfLoopInstruction_1665 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 36)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithoutVariantAST::constructor_new (var_instructionLocation_1198, var_firstInstructions_1305, var_endOfFirstInstructions_1338, var_loopExpression_1440, var_endOfLoopExpression_1463, var_secondInstructions_1579, var_endOfSecondInstructions_1606, var_endOfLoopInstruction_1665  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 24)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 29)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 24)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 29)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  GALGAS_location var_instructionLocation_882 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 19)) ;
  GALGAS_semanticExpressionAST var_expression_969 ;
  nt_expression_5F_ggs_33__ (var_expression_969, inCompiler) ;
  outArgument_outInstruction = GALGAS_messageInstructionAST::constructor_new (var_instructionLocation_882, var_expression_969  COMMA_SOURCE_FILE ("instruction-message.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 20)) ;
  GALGAS_location var_instructionLocation_981 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1068 ;
  nt_expression_5F_ggs_33__ (var_mReceiverExpression_1068, inCompiler) ;
  GALGAS_lstring var_mMethodName_1110 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 23)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1184 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_1184, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 25)) ;
  outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation_981, var_mReceiverExpression_1068, var_mMethodName_1110, var_actualParameterList_1184  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 20)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 20)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mRoutineName_520 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 11)) ;
  GALGAS_actualParameterListAST var_actualParameterList_624 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_624, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 13)) ;
  outArgument_outInstruction = GALGAS_procCallInstructionAST::constructor_new (var_mRoutineName_520.readProperty_location (), var_mRoutineName_520, var_actualParameterList_624  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 14)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 11)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 13)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 11)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 13)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  GALGAS_location var_instructionLocation_896 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_991 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_991, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::constructor_new (var_instructionLocation_896, var_sourceExpression_991  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  GALGAS_location var_instructionLocation_1894 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  GALGAS_actualOutputExpressionList var_expressionList_2017 ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_2017, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (var_instructionLocation_1894, var_expressionList_2017  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  GALGAS_location var_instructionLocation_2378 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  GALGAS_semanticExpressionAST var_expression_2474 ;
  nt_expression_5F_ggs_33__ (var_expression_2474, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2378, var_expression_2474  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  GALGAS_location var_instructionLocation_2829 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  GALGAS_semanticExpressionAST var_expression_2925 ;
  nt_expression_5F_ggs_33__ (var_expression_2925, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMinusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2829, var_expression_2925  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  GALGAS_location var_instructionLocation_3281 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  GALGAS_semanticExpressionAST var_expression_3377 ;
  nt_expression_5F_ggs_33__ (var_expression_3377, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3281, var_expression_3377  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  GALGAS_location var_instructionLocation_3731 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  GALGAS_semanticExpressionAST var_expression_3827 ;
  nt_expression_5F_ggs_33__ (var_expression_3827, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfDivEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3731, var_expression_3827  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  GALGAS_location var_instructionLocation_1378 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 31)) ;
  GALGAS_lstring var_selector_1429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_1429.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_1429.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 34)) ;
    }
  }
  GALGAS_bool var_prefixedBySelf_1559 ;
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_1559 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
    var_prefixedBySelf_1559 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mReceiverName_1702 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  GALGAS_lstringlist var_mReceiverStructAttributes_1724 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 45)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_InstructionsSyntax_67 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      GALGAS_lstring var_structAttribute_1823 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
      var_mReceiverStructAttributes_1724.addAssign_operation (var_structAttribute_1823  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 50)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  GALGAS_lstring var_typeNameForCasting_1916 ;
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
    var_typeNameForCasting_1916 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-setter-call.galgas", 54)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    var_typeNameForCasting_1916 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSetterName_2068 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2142 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_2142, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
  outArgument_outInstruction = GALGAS_setterCallInstructionAST::constructor_new (var_instructionLocation_1378, var_prefixedBySelf_1559, var_mReceiverName_1702, var_mReceiverStructAttributes_1724, var_typeNameForCasting_1916, var_mSetterName_2068, var_actualParameterList_2142  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_67 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_67 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  GALGAS_location var_instructionLocation_2624 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
  GALGAS_lstring var_selector_2675 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_2675.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_2675.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 80)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  GALGAS_lstring var_mSetterName_2824 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2898 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_2898, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
  outArgument_outInstruction = GALGAS_selfSetterCallInstructionAST::constructor_new (var_instructionLocation_2624, var_mSetterName_2824, var_actualParameterList_2898  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  GALGAS_location var_instructionLocation_1670 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
  GALGAS_semanticExpressionAST var_switchExpression_1734 ;
  nt_expression_5F_ggs_33__ (var_switchExpression_1734, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_1759 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
  GALGAS_switchBranchesAST var_switchBranches_1825 = GALGAS_switchBranchesAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    GALGAS_lstringlist var_constantNameList_1915 ;
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_1975 ;
    nt_switch_5F_case_ (var_constantNameList_1915, var_associatedValuesExtraction_1975, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    GALGAS_semanticInstructionListAST var_instructions_2056 ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_instructions_2056, inCompiler) ;
    var_switchBranches_1825.addAssign_operation (var_constantNameList_1915, var_associatedValuesExtraction_1975, var_instructions_2056, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
    if (select_galgas_33_InstructionsSyntax_69 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  GALGAS_location var_endOfSwitchInstruction_2205 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 54)) ;
  outArgument_outInstruction = GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_1670, var_switchExpression_1734, var_endOfSwitchExpression_1759, var_switchBranches_1825, var_endOfSwitchInstruction_2205  COMMA_SOURCE_FILE ("instruction-switch.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_69 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_69 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i58_ (GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                                                  GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 70)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_2760 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 72)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_2760  COMMA_SOURCE_FILE ("instruction-switch.galgas", 73)) ;
    if (select_galgas_33_InstructionsSyntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 77)) ;
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
      case 1: {
        GALGAS_lbigint var_n_2967 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 83)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 84)) ;
        cEnumerator_range enumerator_3010 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_n_2967.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 85)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 85))), kENUMERATION_UP) ;
        while (enumerator_3010.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 86)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 86)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 86)) ;
          enumerator_3010.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 89)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 90)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 90)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_3253 ;
        switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
        case 1: {
          var_typeName_3253 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)) ;
        } break ;
        case 2: {
          var_typeName_3253 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 96)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_3392 ;
        switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_3392 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 102)) ;
          var_constantMarkedAsUnused_3392 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_3602 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 105)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_3253, var_constantName_3602, var_constantMarkedAsUnused_3392  COMMA_SOURCE_FILE ("instruction-switch.galgas", 106)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_72 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i58_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 72)) ;
    if (select_galgas_33_InstructionsSyntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 83)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 84)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 89)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 102)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 105)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_72 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i58_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 72)) ;
    if (select_galgas_33_InstructionsSyntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 83)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 84)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 89)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 102)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 105)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_72 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  GALGAS_location var_instructionLocation_961 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 21)) ;
  GALGAS_lstring var_mTypeName_1024 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  GALGAS_lstring var_mMethodName_1100 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1174 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_1174, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::constructor_new (var_instructionLocation_961, var_mTypeName_1024, var_mMethodName_1100, var_actualParameterList_1174  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 26)) ;
  GALGAS_lstring var_typeName_1223 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 27)) ;
  GALGAS_lstring var_variableName_1254 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 28)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationNoAssignmentAST::constructor_new (var_typeName_1223.readProperty_location (), var_typeName_1223, var_variableName_1254  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1599 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 35)) ;
  GALGAS_lstring var_variableName_1630 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 36)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationNoAssignmentAST::constructor_new (var_typeName_1599.readProperty_location (), var_typeName_1599, var_variableName_1630  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 37)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("var @").add_operation (var_typeName_1599.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 40))) ;
      inCompiler->emitSemanticError (var_typeName_1599.readProperty_location (), GALGAS_string ("old style local variable declaration (due to '--error-old-style-local-var-declaration' option)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 39)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 47)) ;
  GALGAS_lstring var_variableName_2240 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2311 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_2311, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (var_variableName_2240.readProperty_location (), var_variableName_2240, var_sourceExpression_2311  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
  GALGAS_lstring var_typeName_2708 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 62)) ;
  GALGAS_lstring var_variableName_2739 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 64)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2810 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_2810, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_2708.readProperty_location (), GALGAS_bool (false), var_typeName_2708, var_variableName_2739, var_sourceExpression_2810  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 64)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 64)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3232 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 78)) ;
  GALGAS_lstring var_variableName_3263 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_3334 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_3334, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_3232.readProperty_location (), GALGAS_bool (false), var_typeName_3232, var_variableName_3263, var_sourceExpression_3334  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 82)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("var @").add_operation (var_typeName_3232.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91))) ;
      inCompiler->emitSemanticError (var_typeName_3232.readProperty_location (), GALGAS_string ("old style local variable declaration (due to '--error-old-style-local-var-declaration' option)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 90)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  GALGAS_location var_instructionLocation_989 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1076 ;
  nt_expression_5F_ggs_33__ (var_mReceiverExpression_1076, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression_1154 ;
  nt_expression_5F_ggs_33__ (var_mWarningExpression_1154, inCompiler) ;
  GALGAS_fixitListAST var_fixitListAST_1210 ;
  nt_issue_5F_fixit_ (var_fixitListAST_1210, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::constructor_new (var_instructionLocation_989, var_mReceiverExpression_1076, var_mWarningExpression_1154, var_fixitListAST_1210  COMMA_SOURCE_FILE ("instruction-warning.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  GALGAS_location var_instructionLocation_2101 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 45)) ;
  GALGAS_semanticExpressionAST var_keyExpression_2188 ;
  nt_expression_5F_ggs_33__ (var_keyExpression_2188, inCompiler) ;
  GALGAS_location var_endOfKeyExpression_2210 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 47)) ;
  GALGAS_lstring var_withPrefix_2263 ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
    var_withPrefix_2263 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    var_withPrefix_2263 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_ (var_instructionLocation_2101, var_keyExpression_2188, var_endOfKeyExpression_2210, var_withPrefix_2263, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i67_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_receiverExpression_2944 ;
  nt_expression_5F_ggs_33__ (var_receiverExpression_2944, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_2971 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 70)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_3029 ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_3029 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 75)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 76)) ;
    var_searchMethodNameForErrorSignaling_3029 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 79)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_3307 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mDoBranchInstructions_3307, inCompiler) ;
  GALGAS_location var_endOfDoInstructions_3337 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 81)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_3410 ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_3410 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 84)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 86)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_3029.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_3029.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 88)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mElseBranchInstructions_3410, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_receiverExpression_2944, var_endOfReceiverExpression_2971, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_3029, var_mDoBranchInstructions_3307, var_endOfDoInstructions_3337, var_mElseBranchInstructions_3410, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 103))  COMMA_SOURCE_FILE ("instruction-with.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i67_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 75)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 76)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 79)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 86)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i67_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 75)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 76)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 79)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 86)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i68_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4491 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 116)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_4491.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_4491.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 118)) ;
    }
  }
  GALGAS_lstringlist var_structAttributeList_4615 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 120)) ;
  GALGAS_bool var_targetIsPrefixedBySelf_4667 ;
  GALGAS_lstring var_targetObjectName_4707 ;
  switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
  case 1: {
    var_targetIsPrefixedBySelf_4667 = GALGAS_bool (false) ;
    var_targetObjectName_4707 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 125)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_galgas_33_InstructionsSyntax_80 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 128)) ;
        GALGAS_lstring var_mStructFieldName_4872 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 129)) ;
        var_structAttributeList_4615.addAssign_operation (var_mStructFieldName_4872  COMMA_SOURCE_FILE ("instruction-with.galgas", 130)) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  case 2: {
    var_targetIsPrefixedBySelf_4667 = GALGAS_bool (true) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 134)) ;
    switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
    case 1: {
      var_targetObjectName_4707 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 136)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 138)) ;
      var_targetObjectName_4707 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        if (select_galgas_33_InstructionsSyntax_82 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 142)) ;
          GALGAS_lstring var_mStructFieldName_5185 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
          var_structAttributeList_4615.addAssign_operation (var_mStructFieldName_5185  COMMA_SOURCE_FILE ("instruction-with.galgas", 144)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfReceiverExpression_5291 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 148)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_5349 ;
  switch (select_galgas_33_InstructionsSyntax_83 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_5349 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 151)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 153)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 154)) ;
    var_searchMethodNameForErrorSignaling_5349 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 155)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 157)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_5627 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mDoBranchInstructions_5627, inCompiler) ;
  GALGAS_location var_endOf_5F_do_5F_instructions_5657 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 159)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_5732 ;
  switch (select_galgas_33_InstructionsSyntax_84 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_5732 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 162)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 164)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_5349.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_5349.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 166)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mElseBranchInstructions_5732, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_else_5F_instructions_6073 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 170)) ;
  outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_targetObjectName_4707, var_targetIsPrefixedBySelf_4667, var_structAttributeList_4615, var_endOfReceiverExpression_5291, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_5349, var_mDoBranchInstructions_5627, var_endOf_5F_do_5F_instructions_5657, var_mElseBranchInstructions_5732, var_endOf_5F_else_5F_instructions_6073  COMMA_SOURCE_FILE ("instruction-with.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i68_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 116)) ;
  switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 125)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_InstructionsSyntax_80 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 128)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 129)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 134)) ;
    switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 138)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_33_InstructionsSyntax_82 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 142)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_83 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 153)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 154)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 155)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 157)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 164)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i68_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 116)) ;
  switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 125)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_InstructionsSyntax_80 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 128)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 129)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 134)) ;
    switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 138)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_33_InstructionsSyntax_82 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 142)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_83 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 153)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 154)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 155)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 157)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 164)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_ (GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                                     C_Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_AccessControlAST var_accessControl_2542 ;
  nt_acces_5F_control_ (var_accessControl_2542, inCompiler) ;
  GALGAS_bool var_isConstant_2570 ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 49)) ;
    var_isConstant_2570 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 52)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_2542, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 53)) ;
    var_isConstant_2570 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyTypeName_2752 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 56)) ;
  GALGAS_lstring var_propertyName_2791 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 57)) ;
  GALGAS_bool var_selectorAttribute_2812 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 61)) ;
      var_selectorAttribute_2812 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_propertyInCollectionInitializationAST var_initialization_2963 ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
    var_initialization_2963 = GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 66)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 68)) ;
    GALGAS_semanticExpressionAST var_expression_3064 ;
    nt_expression_5F_ggs_33__ (var_expression_3064, inCompiler) ;
    var_initialization_2963 = GALGAS_propertyInCollectionInitializationAST::constructor_some (var_expression_3064  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_isConstant_2570, var_propertyTypeName_2752, var_propertyName_2791, var_accessControl_2542, var_selectorAttribute_2812, var_initialization_2963  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 61)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 68)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 61)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 68)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_ (GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                                     C_Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_propertyTypeName_3565 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 84)) ;
  GALGAS_lstring var_propertyName_3604 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 85)) ;
  GALGAS_bool var_selectorAttribute_3631 ;
  switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
    var_selectorAttribute_3631 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 90)) ;
    var_selectorAttribute_3631 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_propertyInCollectionInitializationAST var_initialization_3803 ;
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
    var_initialization_3803 = GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 95)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 97)) ;
    GALGAS_semanticExpressionAST var_expression_3904 ;
    nt_expression_5F_ggs_33__ (var_expression_3904, inCompiler) ;
    var_initialization_3803 = GALGAS_propertyInCollectionInitializationAST::constructor_some (var_expression_3904  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 99)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (GALGAS_bool (false), var_propertyTypeName_3565, var_propertyName_3604, GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 105)), var_selectorAttribute_3631, var_initialization_3803  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 101)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location var_errorLocation_4249 = var_propertyTypeName_3565.readProperty_location ().getter_union (var_propertyName_3604.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 109)) ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_errorLocation_4249, GALGAS_string ("old style property declaration (due to '--error-old-style-property-declaration' option)"), fixItArray1  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 110)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 85)) ;
  switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 97)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 85)) ;
  switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_selector COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 97)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 122)) ;
  GALGAS_lstring var_mFilewrapperName_4928 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 123)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 124)) ;
  GALGAS_lstring var_mFilewrapperPath_5014 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 125)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_5065 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_5065, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_5134 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_5134, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_5202 ;
  nt_filewrapper_5F_templates_ (var_filewrapperTemplateList_5202, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 132)), var_mFilewrapperName_4928, var_mFilewrapperPath_5014, var_filewrapperTextFileExtensionList_5065, var_filewrapperBinaryFileExtensionList_5134, var_filewrapperTemplateList_5202  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 129))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 129)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 122)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 123)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 125)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 122)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 123)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 125)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
  GALGAS_lstring var_mFilewrapperName_5818 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 146)) ;
  GALGAS_lstring var_mFilewrapperPath_5904 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 147)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_5955 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_5955, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_6024 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_6024, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_6092 ;
  nt_filewrapper_5F_templates_ (var_filewrapperTemplateList_6092, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 154)), var_mFilewrapperName_5818, var_mFilewrapperPath_5904, var_filewrapperTextFileExtensionList_5955, var_filewrapperBinaryFileExtensionList_6024, var_filewrapperTemplateList_6092  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 151))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 146)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 147)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 146)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 147)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_ (GALGAS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 166)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 167)) ;
  switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_6779 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 171)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssign_operation (var_pathExtension_6779  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 172)) ;
      if (select_galgas_33_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 174)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 177)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 167)) ;
  switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 171)) ;
      if (select_galgas_33_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 174)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 177)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 167)) ;
  switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 171)) ;
      if (select_galgas_33_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 174)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 177)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_ (GALGAS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 183)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 184)) ;
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_7239 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 188)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension_7239  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 189)) ;
      if (select_galgas_33_DeclarationsSyntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 191)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 194)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 184)) ;
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 188)) ;
      if (select_galgas_33_DeclarationsSyntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 191)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 194)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 184)) ;
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 188)) ;
      if (select_galgas_33_DeclarationsSyntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 191)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 194)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_ (GALGAS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 200)) ;
  outArgument_outFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 201)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 204)) ;
      GALGAS_lstring var_mFilewrapperTemplateName_7689 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 205)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath_7736 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 206)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_7808 = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 207)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_33_DeclarationsSyntax_11 (inCompiler) == 2) {
          GALGAS_lstring var_selector_7896 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 210)) ;
          GALGAS_lstring var_typeName_7935 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 211)) ;
          GALGAS_bool var_isUnused_7962 ;
          switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
            var_isUnused_7962 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 216)) ;
            var_isUnused_7962 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_8107 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 219)) ;
          var_filewrapperTemplateFormalInputParameters_7808.addAssign_operation (var_selector_7896, var_typeName_7935, var_argumentName_8107, var_isUnused_7962  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 220)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      outArgument_outFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName_7689, var_mFilewrapperTemplatePath_7736, var_filewrapperTemplateFormalInputParameters_7808  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 222)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 200)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 204)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 205)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 206)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_33_DeclarationsSyntax_11 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 210)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 211)) ;
          switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 216)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 219)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 200)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 204)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 205)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 206)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_33_DeclarationsSyntax_11 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 210)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 211)) ;
          switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 216)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 219)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  GALGAS_lstring var_arrayTypeName_1043 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  GALGAS_lstring var_elementListTypeName_1120 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  GALGAS_lbigint var_dimension_1205 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("type-array.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 27)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool (false), var_arrayTypeName_1043, var_elementListTypeName_1120, var_dimension_1205  COMMA_SOURCE_FILE ("type-array.galgas", 28))  COMMA_SOURCE_FILE ("type-array.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("type-array.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("type-array.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  GALGAS_lstring var_boolsetTypeName_991 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 21)) ;
  GALGAS_lstringlist var_slotList_1062 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_slotName_1111 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 24)) ;
    var_slotList_1062.addAssign_operation (var_slotName_1111  COMMA_SOURCE_FILE ("type-boolset.galgas", 25)) ;
    if (select_galgas_33_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 29)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_boolsetDeclarationAST::constructor_new (GALGAS_bool (false), var_boolsetTypeName_991, var_slotList_1062  COMMA_SOURCE_FILE ("type-boolset.galgas", 30))  COMMA_SOURCE_FILE ("type-boolset.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 24)) ;
    if (select_galgas_33_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 24)) ;
    if (select_galgas_33_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_bool var_isAbstract_708 ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
    var_isAbstract_708 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 18)) ;
    var_isAbstract_708 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isReference_825 ;
  switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 23)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorClassDeclaration.readProperty_value ()).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 25)), GALGAS_string ("'class' declaration is obsolete, use 'valueclass'"), fixItArray1  COMMA_SOURCE_FILE ("type-class.galgas", 25)) ;
      }
    }
    var_isReference_825 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 29)) ;
    var_isReference_825 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = var_isReference_825.operator_not (SOURCE_FILE ("type-class.galgas", 32)) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorValueClassDeclaration.readProperty_value ()) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 33)), GALGAS_string ("'value class' is obsolete, use 'refclass'"), fixItArray4  COMMA_SOURCE_FILE ("type-class.galgas", 33)) ;
    }
  }
  GALGAS_lstring var_className_1289 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 35)) ;
  GALGAS_lstring var_superClassName_1341 ;
  switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
    var_superClassName_1341 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 38)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 40)) ;
    var_superClassName_1341 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_generateInSeparateFile_1536 ;
  switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
    var_generateInSeparateFile_1536 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
    var_generateInSeparateFile_1536 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 50)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1760 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 52)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (var_propertyList_1760, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_className_1289, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_isAbstract_708, var_isReference_825, var_className_1289, var_superClassName_1341, var_generateInSeparateFile_1536, var_propertyList_1760  COMMA_SOURCE_FILE ("type-class.galgas", 60))  COMMA_SOURCE_FILE ("type-class.galgas", 60)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isReference_825.boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_lstring temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_superClassName_1341.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = var_superClassName_1341 ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_lstring::constructor_new (var_superClassName_1341.readProperty_string ().add_operation (GALGAS_string ("-weak"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 76)), var_superClassName_1341.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 76)) ;
      }
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_weakReferenceDeclarationAST::constructor_new (GALGAS_bool (false), var_className_1289, GALGAS_lstring::constructor_new (var_className_1289.readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 73)), var_className_1289.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 73)), temp_7, var_generateInSeparateFile_1536, var_propertyList_1760  COMMA_SOURCE_FILE ("type-class.galgas", 70))  COMMA_SOURCE_FILE ("type-class.galgas", 70)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 18)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 23)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 35)) ;
  switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 40)) ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 18)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 23)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 35)) ;
  switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 40)) ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 26)) ;
  GALGAS_lstring var_mEnumTypeName_1226 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 28)) ;
  GALGAS_enumConstantList var_mConstantList_1298 = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
    GALGAS_lstring var_constantName_1365 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 32)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList_1402 = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 33)) ;
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 36)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType_1503 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 38)) ;
        GALGAS_lstring var_associatedValueName_1551 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 39)) ;
        var_associatedValueTypeList_1402.addAssign_operation (var_associatedValueType_1503, var_associatedValueName_1551  COMMA_SOURCE_FILE ("type-enum.galgas", 40)) ;
        if (select_galgas_33_DeclarationsSyntax_21 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 43)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList_1298.addAssign_operation (var_constantName_1365, var_associatedValueTypeList_1402  COMMA_SOURCE_FILE ("type-enum.galgas", 45)) ;
    if (select_galgas_33_DeclarationsSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_DeclarationsSyntax_22 (inCompiler) == 2) {
      nt_method_5F_declaration_5F_ggs_33__ (var_mEnumTypeName_1226, ioArgument_ioDeclarations, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 52)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName_1226, var_mConstantList_1298  COMMA_SOURCE_FILE ("type-enum.galgas", 53))  COMMA_SOURCE_FILE ("type-enum.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 32)) ;
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 36)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 38)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 39)) ;
        if (select_galgas_33_DeclarationsSyntax_21 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 43)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_DeclarationsSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_DeclarationsSyntax_22 (inCompiler) == 2) {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 32)) ;
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 36)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 38)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 39)) ;
        if (select_galgas_33_DeclarationsSyntax_21 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 43)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_DeclarationsSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_DeclarationsSyntax_22 (inCompiler) == 2) {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  GALGAS_lstring var_externTypeName_2692 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  GALGAS_string var_cppPredeclarationCode_2778 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_2778, inCompiler) ;
  GALGAS_string var_cppClassCode_2843 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_2843, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList_2899 = GALGAS_externTypeConstructorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 69)) ;
  GALGAS_externTypeGetterList var_externTypeGetterList_2961 = GALGAS_externTypeGetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 70)) ;
  GALGAS_externTypeSetterList var_externTypeSetterList_3017 = GALGAS_externTypeSetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 71)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList_3073 = GALGAS_externTypeMethodList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 72)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (var_externTypeConstructorList_2899, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (var_externTypeGetterList_2961, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (var_externTypeSetterList_3017, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (var_externTypeMethodList_3073, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool (false), var_externTypeName_2692, var_cppPredeclarationCode_2778, var_cppClassCode_2843, var_externTypeConstructorList_2899, var_externTypeGetterList_2961, var_externTypeSetterList_3017, var_externTypeMethodList_3073  COMMA_SOURCE_FILE ("type-extern.galgas", 84))  COMMA_SOURCE_FILE ("type-extern.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_ (GALGAS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  outArgument_outCppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_24 (inCompiler) == 2) {
      GALGAS_lstring var_cppPredeclarationCodeElement_3968 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
      outArgument_outCppPredeclarationCode.plusAssign_operation(var_cppPredeclarationCodeElement_3968.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 104)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_ (GALGAS_string & outArgument_outCppClassCode,
                                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  outArgument_outCppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_25 (inCompiler) == 2) {
      GALGAS_lstring var_cppPredeclarationCodeElement_4364 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
      outArgument_outCppClassCode.plusAssign_operation(var_cppPredeclarationCodeElement_4364.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i15_ (GALGAS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  GALGAS_lstring var_constructorName_4737 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_4794 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_26 (inCompiler) == 2) {
      GALGAS_lstring var_selector_4852 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      GALGAS_lstring var_argumentTypeName_4889 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      GALGAS_lstring var_argumentName_4939 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
      var_argumentTypeList_4794.addAssign_operation (var_selector_4852, var_argumentTypeName_4889, var_argumentName_4939  COMMA_SOURCE_FILE ("type-extern.galgas", 133)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  GALGAS_lstring var_resultTypeName_5063 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
  ioArgument_ioExternTypeConstructorList.addAssign_operation (var_constructorName_4737, var_resultTypeName_5063, var_argumentTypeList_4794  COMMA_SOURCE_FILE ("type-extern.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i15_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i15_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i16_ (GALGAS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  GALGAS_lstring var_getterName_5411 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_5463 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_27 (inCompiler) == 2) {
      GALGAS_lstring var_selector_5521 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      GALGAS_lstring var_argumentTypeName_5558 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      GALGAS_lstring var_argumentName_5608 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
      var_argumentTypeList_5463.addAssign_operation (var_selector_5521, var_argumentTypeName_5558, var_argumentName_5608  COMMA_SOURCE_FILE ("type-extern.galgas", 151)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  GALGAS_lstring var_resultTypeName_5732 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
  ioArgument_ioExternTypeGetterList.addAssign_operation (var_getterName_5411, var_resultTypeName_5732, var_argumentTypeList_5463  COMMA_SOURCE_FILE ("type-extern.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i16_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i16_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i17_ (GALGAS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  GALGAS_lstring var_setterName_6070 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  GALGAS_formalParameterListAST var_formalParameterList_6143 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_6143, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssign_operation (var_setterName_6070, var_formalParameterList_6143  COMMA_SOURCE_FILE ("type-extern.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i17_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i17_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i18_ (GALGAS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  GALGAS_lstring var_methodName_6473 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  GALGAS_formalParameterListAST var_formalParameterList_6546 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_6546, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssign_operation (var_methodName_6473, var_formalParameterList_6546, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 173))  COMMA_SOURCE_FILE ("type-extern.galgas", 173)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i18_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i18_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  GALGAS_lstring var_graphTypeName_1292 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  GALGAS_lstring var_associatedListTypeName_1365 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 32)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList_1412 = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      GALGAS_lstring var_insertName_1535 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      GALGAS_lstring var_errorMessage_1603 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
      var_graphInsertModifierList_1412.addAssign_operation (var_insertName_1535, var_errorMessage_1603  COMMA_SOURCE_FILE ("type-graph.galgas", 40)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName_1292, var_associatedListTypeName_1365, var_graphInsertModifierList_1412  COMMA_SOURCE_FILE ("type-graph.galgas", 43))  COMMA_SOURCE_FILE ("type-graph.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 20)) ;
  GALGAS_lstring var_listTypeName_1044 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 21)) ;
  GALGAS_bool var_isUsefull_1118 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_1118.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 27)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 27)) ;
        }
      }
      var_isUsefull_1118 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 31)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1345 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 32)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    nt_property_5F_declaration_5F_ggs_33__ (var_propertyList_1345, inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 37)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_DeclarationsSyntax_30 (inCompiler) == 2) {
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 41)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_listTypeName_1044, var_propertyList_1345, var_isUsefull_1118  COMMA_SOURCE_FILE ("type-list.galgas", 42))  COMMA_SOURCE_FILE ("type-list.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 31)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 37)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_DeclarationsSyntax_30 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 31)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 37)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_DeclarationsSyntax_30 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  GALGAS_lstring var_mListmapTypeName_1001 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  GALGAS_lstring var_mAssociatedListTypeName_1079 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 23)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool (false), var_mListmapTypeName_1001, var_mAssociatedListTypeName_1079  COMMA_SOURCE_FILE ("type-listmap.galgas", 24))  COMMA_SOURCE_FILE ("type-listmap.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 23)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 26)) ;
  GALGAS_lstring var_mDictTypeName_1285 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 30)) ;
  GALGAS_lstring var_keyTypeName_1402 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 33)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1452 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (var_propertyList_1452, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_mDictTypeName_1285, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_dictDeclarationAST::constructor_new (GALGAS_bool (false), var_mDictTypeName_1285, var_keyTypeName_1402, var_propertyList_1452  COMMA_SOURCE_FILE ("type-dict.galgas", 42))  COMMA_SOURCE_FILE ("type-dict.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 57)) ;
  GALGAS_lstring var_mMapTypeName_2462 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2565 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 62)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_2620 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 63)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_2696 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 64)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList_2751 = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 65)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_2817 = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (var_propertyList_2565, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_2620, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_ (var_mSearchMethodList_2696, inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_ (var_mRemoveMethodList_2751, inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_2817, inCompiler) ;
    } break ;
    case 7: {
      nt_method_5F_declaration_5F_ggs_33__ (var_mMapTypeName_2462, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_2462, var_propertyList_2565, var_mInsertMethodList_2620, var_mSearchMethodList_2696, var_mRemoveMethodList_2751, var_insertOrReplaceDeclarationListAST_2817  COMMA_SOURCE_FILE ("type-map.galgas", 82))  COMMA_SOURCE_FILE ("type-map.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 57)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
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
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 57)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
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
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i24_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 96)) ;
  GALGAS_lstring var_methodName_3797 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 98)) ;
  GALGAS_lstring var_errorMessage_3861 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 99)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_methodName_3797, var_errorMessage_3861  COMMA_SOURCE_FILE ("type-map.galgas", 100)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i24_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 99)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i24_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i25_ (GALGAS_mapRemoveMethodListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                         C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 106)) ;
  GALGAS_lstring var_mMethodName_4205 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 109)) ;
  GALGAS_lstring var_mErrorMessage_4272 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 110)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssign_operation (var_mMethodName_4205, var_mErrorMessage_4272  COMMA_SOURCE_FILE ("type-map.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i25_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 106)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 110)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i25_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 106)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 110)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i26_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 117)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 118)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 119)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 120))  COMMA_SOURCE_FILE ("type-map.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i26_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 117)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 118)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 119)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i26_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 117)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 118)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i27_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 126)) ;
  GALGAS_lstring var_mMethodName_4933 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 127)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 129)) ;
  GALGAS_lstring var_mErrorMessage_5000 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  GALGAS_lstring var_mShadowErrorMessage_5031 ;
  switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_5031 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 135)) ;
    var_mShadowErrorMessage_5031 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName_4933, var_mErrorMessage_5000, var_mShadowErrorMessage_5031  COMMA_SOURCE_FILE ("type-map.galgas", 138)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i27_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 126)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 127)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 135)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i27_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 126)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 127)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 135)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  GALGAS_lstring var_sortedListTypeName_1322 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_1445 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_35 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__ (var_attributeList_1445, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 38)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList_1601 = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 39)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_1601, inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 43)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool (false), var_sortedListTypeName_1322, var_attributeList_1445, var_sortDescriptorList_1601  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 46))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_35 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 38)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 43)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_35 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 38)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 43)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i29_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName_2175 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 57)) ;
  GALGAS_bool var_mAscending_2210 ;
  switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 60)) ;
    var_mAscending_2210 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 63)) ;
    var_mAscending_2210 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName_2175, var_mAscending_2210  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i29_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 57)) ;
  switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 60)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i29_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 57)) ;
  switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 60)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  GALGAS_lstring var_structTypeName_1099 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 22)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1185 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 23)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (var_propertyList_1185, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_structTypeName_1099, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 30)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (false), var_structTypeName_1099, var_propertyList_1185, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-struct.galgas", 31))  COMMA_SOURCE_FILE ("type-struct.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i31_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 10)) ;
  GALGAS_lstring var_aliasTypeName_558 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 11)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 12)) ;
  GALGAS_lstring var_definedTypeName_668 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_definedTypeName_668, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_typealiasDeclarationAST::constructor_new (GALGAS_bool (false), var_aliasTypeName_558, var_definedTypeName_668  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 14))  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 14)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i31_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 10)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 11)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 12)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i31_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 10)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 11)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 12)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                 GALGAS_lstring & outArgument_outTypeName,
                                                                                                                 C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i33_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  GALGAS_lstring var_className_1165 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  GALGAS_lstring var_mGetterName_1243 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1371 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalInputParameterList_1371, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  GALGAS_lstring var_mReturnedTypeName_1432 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_1493 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_1493.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1165, var_mGetterName_1243, var_mFormalInputParameterList_1371, var_mReturnedTypeName_1432  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 33))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i33_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i33_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i34_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 46)) ;
  GALGAS_lstring var_mGetterName_2069 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 47)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2197 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalInputParameterList_2197, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 49)) ;
  GALGAS_lstring var_mReturnedTypeName_2258 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 50)) ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_2319 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_2319.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mGetterName_2069, var_mFormalInputParameterList_2197, var_mReturnedTypeName_2258  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i34_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 47)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 50)) ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i34_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 47)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 50)) ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  GALGAS_lstring var_className_1097 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  GALGAS_lstring var_mMethodName_1184 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1301 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1301, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1097, var_mMethodName_1184, var_formalParameterList_1301  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 25))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i36_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 37)) ;
  GALGAS_lstring var_mMethodName_1783 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 38)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1900 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1900, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mMethodName_1783, var_formalParameterList_1900  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 40))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i36_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 37)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 38)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i36_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 37)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 38)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  GALGAS_lstring var_className_1100 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  GALGAS_lstring var_setterName_1187 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1303 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1303, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1100, var_setterName_1187, var_formalParameterList_1303  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 25))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 37)) ;
  GALGAS_lstring var_setterName_1784 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 38)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1900 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1900, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionSetterAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_setterName_1784, var_formalParameterList_1900  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 40))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 37)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 38)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 37)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 38)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  GALGAS_lstring var_className_1369 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  GALGAS_lstring var_mMethodName_1448 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1539 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalInputParameterList_1539, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  GALGAS_lstring var_mReturnedTypeName_1600 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  GALGAS_lstring var_resultVariableName_1635 ;
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    var_resultVariableName_1635 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
    var_resultVariableName_1635 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1848 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_1848, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1889 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1369, var_mMethodName_1448, var_mFormalInputParameterList_1539, var_mReturnedTypeName_1600, var_resultVariableName_1635, var_routineInstructionList_1848, var_endOfInstructionList_1889  COMMA_SOURCE_FILE ("extension-getter.galgas", 41))  COMMA_SOURCE_FILE ("extension-getter.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 57)) ;
  GALGAS_lstring var_mMethodName_2591 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 58)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2682 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalInputParameterList_2682, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 60)) ;
  GALGAS_lstring var_mReturnedTypeName_2743 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 61)) ;
  GALGAS_lstring var_resultVariableName_2778 ;
  switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    var_resultVariableName_2778 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 64)) ;
  } break ;
  case 2: {
    var_resultVariableName_2778 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 68)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2991 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_2991, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3032 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_2591, var_mFormalInputParameterList_2682, var_mReturnedTypeName_2743, var_resultVariableName_2778, var_routineInstructionList_2991, var_endOfInstructionList_3032  COMMA_SOURCE_FILE ("extension-getter.galgas", 72))  COMMA_SOURCE_FILE ("extension-getter.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 57)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 58)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 61)) ;
  switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 64)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 68)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 57)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 58)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 61)) ;
  switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 64)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 68)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  GALGAS_lstring var_className_1244 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  GALGAS_lstring var_mMethodName_1323 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1432 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1432, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 28)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1530 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_1530, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1561 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 31)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1244, var_mMethodName_1323, var_formalParameterList_1432, var_routineInstructionList_1530, var_endOfMethodLocation_1561  COMMA_SOURCE_FILE ("extension-method.galgas", 32))  COMMA_SOURCE_FILE ("extension-method.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 28)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 28)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 47)) ;
  GALGAS_lstring var_mMethodName_2237 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 48)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2346 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_2346, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 50)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2444 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_2444, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_2475 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 53)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_2237, var_formalParameterList_2346, var_routineInstructionList_2444, var_endOfMethodLocation_2475  COMMA_SOURCE_FILE ("extension-method.galgas", 54))  COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 48)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 48)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  GALGAS_lstring var_className_1254 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  GALGAS_lstring var_setterName_1333 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 25)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1441 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1441, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 27)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1539 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_1539, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_1580 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 30)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1254, var_setterName_1333, var_formalParameterList_1441, var_routineInstructionList_1539, var_endOfSetterLocation_1580  COMMA_SOURCE_FILE ("extension-setter.galgas", 31))  COMMA_SOURCE_FILE ("extension-setter.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 45)) ;
  GALGAS_lstring var_setterName_2222 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 46)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2330 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_2330, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 48)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2428 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_2428, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_2469 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 51)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_setterName_2222, var_formalParameterList_2330, var_routineInstructionList_2428, var_endOfSetterLocation_2469  COMMA_SOURCE_FILE ("extension-setter.galgas", 52))  COMMA_SOURCE_FILE ("extension-setter.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 45)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 46)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 48)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 45)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 46)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 48)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  GALGAS_lstring var_className_1190 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  GALGAS_lstring var_mGetterName_1276 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1412 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalInputParameterList_1412, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  GALGAS_lstring var_mReturnedTypeName_1473 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_1527 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_1527.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 31)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1190, var_mGetterName_1276, var_mFormalInputParameterList_1412, var_mReturnedTypeName_1473  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 34))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 48)) ;
  GALGAS_lstring var_mGetterName_2135 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 49)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2271 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalInputParameterList_2271, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 51)) ;
  GALGAS_lstring var_mReturnedTypeName_2332 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 52)) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_2386 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_2386.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 55)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mGetterName_2135, var_mFormalInputParameterList_2271, var_mReturnedTypeName_2332  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 58))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 49)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 52)) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 49)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 52)) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  GALGAS_lstring var_className_1126 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  GALGAS_lstring var_mMethodName_1221 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1346 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1346, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1126, var_mMethodName_1221, var_formalParameterList_1346  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 26))  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  GALGAS_lstring var_mMethodName_1853 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1978 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1978, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mMethodName_1853, var_formalParameterList_1978  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 42))  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  GALGAS_lstring var_className_1129 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  GALGAS_lstring var_setterName_1224 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1348 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1348, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1129, var_setterName_1224, var_formalParameterList_1348  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 26))  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 38)) ;
  GALGAS_lstring var_setterName_1849 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 39)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1973 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1973, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionSetterAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_setterName_1849, var_formalParameterList_1973  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 41))  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 38)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 39)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 38)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 39)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  GALGAS_lstring var_className_1444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  GALGAS_lstring var_mMethodName_1531 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 28)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_1630 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_formalInputParameterList_1630, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  GALGAS_lstring var_mReturnedTypeName_1690 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 31)) ;
  GALGAS_lstring var_resultVariableName_1725 ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    var_resultVariableName_1725 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 34)) ;
  } break ;
  case 2: {
    var_resultVariableName_1725 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 36)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 38)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1938 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_1938, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1979 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1444, var_mMethodName_1531, var_formalInputParameterList_1630, var_mReturnedTypeName_1690, var_resultVariableName_1725, var_routineInstructionList_1938, var_endOfInstructionList_1979  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 42))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 28)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 31)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 34)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 38)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 28)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 31)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 34)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 38)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 59)) ;
  GALGAS_lstring var_mMethodName_2705 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 60)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_2804 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_formalInputParameterList_2804, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 62)) ;
  GALGAS_lstring var_mReturnedTypeName_2864 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 63)) ;
  GALGAS_lstring var_resultVariableName_2899 ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    var_resultVariableName_2899 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  } break ;
  case 2: {
    var_resultVariableName_2899 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 70)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3112 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_3112, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3153 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 73)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_2705, var_formalInputParameterList_2804, var_mReturnedTypeName_2864, var_resultVariableName_2899, var_routineInstructionList_3112, var_endOfInstructionList_3153  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 74))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 59)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 60)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 63)) ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 73)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 59)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 60)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 63)) ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 11)) ;
  GALGAS_lstring var_className_577 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 12)) ;
  GALGAS_lstring var_mMethodName_674 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 13)) ;
  GALGAS_formalParameterListAST var_formalParameterList_791 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_791, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 15)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_889 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_889, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_930 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 17)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 18)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_577, var_mMethodName_674, var_formalParameterList_791, var_routineInstructionList_889, var_endOfMethodLocation_930  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 19))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 11)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 12)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 13)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 15)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 11)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 12)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 13)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 15)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 34)) ;
  GALGAS_lstring var_mMethodName_1598 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 35)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1715 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1715, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 37)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1813 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_1813, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1854 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 40)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_1598, var_formalParameterList_1715, var_routineInstructionList_1813, var_endOfMethodLocation_1854  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 41))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 35)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 35)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  GALGAS_lstring var_className_1309 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  GALGAS_lstring var_setterName_1406 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 26)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1522 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_1522, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 28)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1620 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_1620, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_1661 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 31)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1309, var_setterName_1406, var_formalParameterList_1522, var_routineInstructionList_1620, var_endOfSetterLocation_1661  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 32))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 26)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 28)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 26)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 28)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 48)) ;
  GALGAS_lstring var_setterName_2356 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 49)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2472 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_formalParameterList_2472, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 51)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2570 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_routineInstructionList_2570, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_2611 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_setterName_2356, var_formalParameterList_2472, var_routineInstructionList_2570, var_endOfSetterLocation_2611  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 55))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 49)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 51)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 49)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 51)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i57_ (GALGAS_AccessControlAST & outArgument_outAccessControl,
                                                                                                    C_Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outAccessControl.drop () ; // Release 'out' argument
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("accessControl.galgas", 22)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 24)) ;
    outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("accessControl.galgas", 25)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 27)) ;
    switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_protectedAccess (SOURCE_FILE ("accessControl.galgas", 29)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 31)) ;
      GALGAS_lstring var_value_1476 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 32)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsNotEqual, var_value_1476.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_value_1476.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 34)) ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 36)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_protectedSetAccess (SOURCE_FILE ("accessControl.galgas", 37)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 40)) ;
    switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_privateAccess (SOURCE_FILE ("accessControl.galgas", 42)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 44)) ;
      GALGAS_lstring var_value_1788 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 45)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, var_value_1788.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_value_1788.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas", 47)) ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 49)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_privateSetAccess (SOURCE_FILE ("accessControl.galgas", 50)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 53)) ;
    switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_fileprivateAccess (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 55))  COMMA_SOURCE_FILE ("accessControl.galgas", 55)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 57)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::constructor_fileprivateSetAccess (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 58))  COMMA_SOURCE_FILE ("accessControl.galgas", 58)) ;
      GALGAS_lstring var_value_2215 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 59)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsNotEqual, var_value_2215.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_value_2215.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 61)) ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 63)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i57_parse (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 24)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 27)) ;
    switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 31)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 32)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 36)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 40)) ;
    switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 44)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 45)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 49)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 53)) ;
    switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 57)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 63)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i57_indexing (C_Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 24)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 27)) ;
    switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 31)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 32)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 36)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 40)) ;
    switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 44)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 45)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 49)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 53)) ;
    switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 57)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 63)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

