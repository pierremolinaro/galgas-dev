#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"




//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i0_ (GALGAS_galgas_33_ProjectComponentAST & outArgument_outProjectComponentAST,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outProjectComponentAST.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_project) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 25)) ;
  GALGAS_luint var_majorVersion = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 27)) ;
  GALGAS_luint var_minorVersion = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 29)) ;
  GALGAS_luint var_revisionVersion = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 32)) ;
  GALGAS_lstring var_targetName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 33)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 34)) ;
  GALGAS_lstringlist var_projectSourceList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3ProjectSyntax.galgas", 35)) ;
  GALGAS_lstringlist var_generateFeatureList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3ProjectSyntax.galgas", 36)) ;
  GALGAS_galgas_33_QualifiedFeatureList var_qualifiedFeatureList = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (SOURCE_FILE ("galgas3ProjectSyntax.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 40)) ;
      switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 42)) ;
        GALGAS_lstring var_featureValue = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 43)) ;
        var_qualifiedFeatureList.addAssign_operation (var_featureName, var_featureValue  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 44)) ;
      } break ;
      case 2: {
        var_generateFeatureList.addAssign_operation (var_featureName  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 46)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      GALGAS_lstring var_filePath = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 49)) ;
      var_projectSourceList.addAssign_operation (var_filePath  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 50)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 52)) ;
  outArgument_outProjectComponentAST = GALGAS_galgas_33_ProjectComponentAST::constructor_new (var_projectSourceList, var_majorVersion, var_minorVersion, var_revisionVersion, var_generateFeatureList, var_qualifiedFeatureList, var_targetName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 61))  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_project) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 33)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 40)) ;
      switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 42)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 43)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 49)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_project) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 33)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 40)) ;
      switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 42)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 43)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 49)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@galgas_33_QualifiedFeatureList' list                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_galgas_33_QualifiedFeatureList : public cCollectionElement {
  public : GALGAS_galgas_33_QualifiedFeatureList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_lstring & in_mFeatureName,
                                                              const GALGAS_lstring & in_mFeatureValue
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

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_lstring & in_mFeatureName,
                                                                                                      const GALGAS_lstring & in_mFeatureValue
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFeatureName, in_mFeatureValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_galgas_33_QualifiedFeatureList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_galgas_33_QualifiedFeatureList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_galgas_33_QualifiedFeatureList (mObject.mAttribute_mFeatureName, mObject.mAttribute_mFeatureValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_galgas_33_QualifiedFeatureList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureName" ":" ;
  mObject.mAttribute_mFeatureName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureValue" ":" ;
  mObject.mAttribute_mFeatureValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_galgas_33_QualifiedFeatureList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_QualifiedFeatureList * operand = (cCollectionElement_galgas_33_QualifiedFeatureList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList::GALGAS_galgas_33_QualifiedFeatureList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList::GALGAS_galgas_33_QualifiedFeatureList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_QualifiedFeatureList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_lstring & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_lstring inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
      outOperand0 = p->mObject.mAttribute_mFeatureName ;
      outOperand1 = p->mObject.mAttribute_mFeatureValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mFeatureName ;
    outOperand1 = p->mObject.mAttribute_mFeatureValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mFeatureName ;
    outOperand1 = p->mObject.mAttribute_mFeatureValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mFeatureName ;
    outOperand1 = p->mObject.mAttribute_mFeatureValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mFeatureName ;
    outOperand1 = p->mObject.mAttribute_mFeatureValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::operator_concat (const GALGAS_galgas_33_QualifiedFeatureList & inOperand
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::dotAssign_operation (const GALGAS_galgas_33_QualifiedFeatureList inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList::reader_mFeatureNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mAttribute_mFeatureName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList::reader_mFeatureValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mAttribute_mFeatureValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_galgas_33_QualifiedFeatureList::cEnumerator_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element cEnumerator_galgas_33_QualifiedFeatureList::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mAttribute_mFeatureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureValue (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mAttribute_mFeatureValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas3QualifiedFeatureList type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ("galgas3QualifiedFeatureList",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_QualifiedFeatureList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_QualifiedFeatureList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_QualifiedFeatureList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i0_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 31)) ;
      GALGAS_semanticExpressionAST var_expression ;
      nt_expression_ (var_expression, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector, var_expression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 33))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 33)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 31)) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 31)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i1_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_casted_5F_expression_ (outArgument_outExpression, inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_endOfReceiverExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 47)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_is) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 48)) ;
    GALGAS_dynamicTypeComparisonKind var_kind ;
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 51)) ;
      var_kind = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 51)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 53)) ;
      var_kind = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 53)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 55)) ;
      var_kind = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 55)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 57)) ;
    outArgument_outExpression = GALGAS_testDynamicClassInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression, var_kind, var_typeName  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 58)) ;
  } break ;
  case 3: {
    GALGAS_location var_endOfReceiverExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 64)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 65)) ;
    GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 66)) ;
    outArgument_outExpression = GALGAS_castInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression, var_typeName  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_casted_5F_expression_parse (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_is) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 48)) ;
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 51)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 53)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 55)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 57)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 65)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_casted_5F_expression_indexing (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_is) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 48)) ;
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 51)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 53)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 55)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 57)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 65)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_casted_5F_expression_i2_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 84)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 85)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_relation_5F_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 89)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 91)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 92)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_relation_5F_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_orShortExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 96)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 98)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 99)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_relation_5F_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 103)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 105)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 106)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_relation_5F_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_closedSliceExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 109)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 111)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 112)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_relation_5F_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_openedSliceExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 115)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_casted_5F_expression_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 85)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 92)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 99)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 106)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 112)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_casted_5F_expression_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 85)) ;
      nt_relation_5F_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 92)) ;
      nt_relation_5F_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 99)) ;
      nt_relation_5F_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 106)) ;
      nt_relation_5F_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 112)) ;
      nt_relation_5F_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_term_i3_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 129)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 130)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_relation_5F_factor_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 134)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 136)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 137)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_relation_5F_factor_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_andShortExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 141)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_term_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 130)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 137)) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_term_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 130)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 137)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i4_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 155)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 156)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_simple_5F_expression_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_equalExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 160)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 162)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 163)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_simple_5F_expression_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_notEqualExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 167)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 169)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 170)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_simple_5F_expression_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_lowerOrEqualExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 174)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 176)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 177)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_simple_5F_expression_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_greaterOrEqualExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 181)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 183)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 184)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_simple_5F_expression_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_strictGreaterExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 188)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 190)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 191)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_simple_5F_expression_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_strictLowerExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 195)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 156)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 163)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 170)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 177)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 184)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 191)) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 156)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 163)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 170)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 177)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 184)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 191)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i5_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 209)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 210)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_leftShiftExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 214)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 216)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 217)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_rightShiftExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 221)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 223)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 224)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 228)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 230)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 231)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionNoOverflowAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 235)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 237)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 238)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 242)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 244)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 245)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionNoOverflowAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 249)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 210)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 217)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 224)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 231)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 238)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 245)) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 210)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 217)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 224)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 231)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 238)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 245)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i6_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 263)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 264)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_factor_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 267)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 269)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 270)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_factor_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 273)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 275)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 276)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_factor_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 280)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 282)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 283)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_factor_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionNoOverflowAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 287)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 289)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_mod) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 290)) ;
      GALGAS_semanticExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand ;
      nt_factor_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_moduloExpressionAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 294)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 264)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 270)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 276)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 283)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_mod) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 290)) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 264)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 270)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 276)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 283)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_mod) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 290)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i7_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 305)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 306)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryPlusExpressionAST::constructor_new (var_operatorLocation, outArgument_outExpression  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 308)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 306)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 306)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i8_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 318)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 319)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusExpressionAST::constructor_new (var_operatorLocation, outArgument_outExpression  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 321)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 319)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 319)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i9_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 331)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 332)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusNoOverflowExpressionAST::constructor_new (var_operatorLocation, outArgument_outExpression  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 334)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 332)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 332)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i10_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 344)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_not) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 345)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_notExpressionAST::constructor_new (var_operatorLocation, outArgument_outExpression  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 347)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_not) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 345)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_not) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 345)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i11_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 357)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 358)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_complementExpressionAST::constructor_new (var_operatorLocation, outArgument_outExpression  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 360)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 358)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 358)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i12_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 373)) ;
      GALGAS_lstring var_structFieldName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 374)) ;
      outArgument_outExpression = GALGAS_structFieldAccessExpressionAST::constructor_new (var_structFieldName.mAttribute_location, outArgument_outExpression, var_structFieldName  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 375)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 373)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 374)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 373)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 374)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 386)) ;
  outArgument_outExpression = GALGAS_varInExpressionAST::constructor_new (var_identifier  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 387)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 386)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 386)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 397)) ;
  outArgument_outExpression = GALGAS_selfCopyInExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 398))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 398)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 397)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 397)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 408)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 410)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 408)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 410)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 408)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 410)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i16_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_true) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 420)) ;
  outArgument_outExpression = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 421))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 421)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_true) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 420)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_true) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 420)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i17_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_false) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 431)) ;
  outArgument_outExpression = GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 432))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 432)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_false) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 431)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_false) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 431)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i18_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 442)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString ;
    var_literalString = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 445)) ;
    var_literalStringList.addAssign_operation (var_literalString.reader_string (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 446))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 446)) ;
    switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outExpression = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 449)), var_literalStringList  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 449)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 445)) ;
    switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 445)) ;
    switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint var_literalInt ;
  var_literalInt = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 460)) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionAST::constructor_new (var_literalInt  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 461)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 460)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 460)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint var_literalInt ;
  var_literalInt = inCompiler->synthetizedAttribute_sint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 472)) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionAST::constructor_new (var_literalInt  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 473)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 472)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 472)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint_36__34_ var_literalInt ;
  var_literalInt = inCompiler->synthetizedAttribute_uint_36__34_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 484)) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionAST::constructor_new (var_literalInt  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 485)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 484)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 484)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint_36__34_ var_literalInt ;
  var_literalInt = inCompiler->synthetizedAttribute_sint_36__34_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 496)) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionAST::constructor_new (var_literalInt  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 497)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 496)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 496)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt ;
  var_literalInt = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_bigint) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 508)) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionAST::constructor_new (var_literalInt  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 509)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_bigint) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 508)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_bigint) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 508)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar ;
  var_literalChar = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 520)) ;
  outArgument_outExpression = GALGAS_literalCharExpressionAST::constructor_new (var_literalChar  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 521)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 520)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 520)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble ;
  var_literalDouble = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_double) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 532)) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionAST::constructor_new (var_literalDouble  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 533)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_double) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 532)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_double) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 532)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 543)) ;
  GALGAS_semanticExpressionAST var_ifExpression ;
  nt_expression_ (var_ifExpression, inCompiler) ;
  GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 546)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 547)) ;
  GALGAS_semanticExpressionAST var_thenExpression ;
  nt_expression_ (var_thenExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 550)) ;
  GALGAS_semanticExpressionAST var_elseExpression ;
  nt_expression_ (var_elseExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 553)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_operatorLocation, var_ifExpression, var_thenExpression, var_elseExpression  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 554)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 543)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 547)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 550)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 553)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 543)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 547)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 550)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 553)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 574)) ;
  nt_primary_5F_entre_5F_crochets_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 576)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 574)) ;
  nt_primary_5F_entre_5F_crochets_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 576)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 574)) ;
  nt_primary_5F_entre_5F_crochets_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 576)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i28_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_receiverExpression ;
  nt_expression_ (var_receiverExpression, inCompiler) ;
  GALGAS_lstring var_readerName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 585)) ;
  GALGAS_actualOutputExpressionList var_expressionList ;
  nt_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
  outArgument_outExpression = GALGAS_readerCallExpressionAST::constructor_new (var_receiverExpression, var_readerName, var_expressionList  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 588)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 585)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 585)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i29_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 594)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 596)) ;
    GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 597)) ;
    GALGAS_lstring var_readerName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 598)) ;
    outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 599))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 599)), var_optionName, var_readerName  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 599)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_optionComponentName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 601)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 602)) ;
    GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 603)) ;
    GALGAS_lstring var_readerName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 604)) ;
    outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (var_optionComponentName, var_optionName, var_readerName  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 605)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 594)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 596)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 597)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 598)) ;
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 601)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 602)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 603)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 604)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 594)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 596)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 597)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 598)) ;
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 601)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 602)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 603)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 604)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i30_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 612)) ;
  GALGAS_lstring var_lexiqueName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 613)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 614)) ;
  GALGAS_lstring var_readerName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 615)) ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (var_lexiqueName, var_readerName  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 616)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 612)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 613)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 614)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 615)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 612)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 613)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 614)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 615)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i31_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 622)) ;
  GALGAS_lstring var_filewrapperName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 623)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (var_filewrapperName  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 625)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 628)) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_filePath = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 630)) ;
      outArgument_outExpression = GALGAS_filewrapperInExpressionAST::constructor_new (var_filewrapperName, var_filePath  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 631)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_filewrapperTemplateName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 635)) ;
      GALGAS_actualOutputExpressionList var_expressionList ;
      nt_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
      outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionAST::constructor_new (var_filewrapperName, var_filewrapperTemplateName, var_expressionList  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 637)) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 622)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 623)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 628)) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 630)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 635)) ;
      nt_output_5F_expression_5F_list_parse (inCompiler) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 622)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 623)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 628)) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 630)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 635)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i32_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 650))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 650)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i32_indexing (C_Lexique_galgas_33_Scanner * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i33_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 656)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 656)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 656)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i34_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName ;
  nt_optional_5F_type_ (var_typeName, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 664)) ;
  GALGAS_lstring var_constructorName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 666)) ;
  GALGAS_actualOutputExpressionList var_expressionList ;
  switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
    var_expressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 670)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 672)) ;
    nt_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 674)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionAST::constructor_new (var_typeName, var_constructorName, var_expressionList  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 676)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 664)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 666)) ;
  switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 672)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 674)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 664)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 666)) ;
  switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 672)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 674)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i35_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName ;
  nt_optional_5F_type_ (var_typeName, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 686)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 687)) ;
  outArgument_outExpression = GALGAS_defaultConstructorExpressionAST::constructor_new (var_typeName  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 688)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 686)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 687)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 686)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 687)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i36_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName ;
  nt_optional_5F_type_ (var_typeName, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 697)) ;
  GALGAS_collectionValueElementList var_elementList = GALGAS_collectionValueElementList::constructor_emptyList (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 698)) ;
  switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractCollectionValueElement var_element ;
      nt_collection_5F_value_5F_element_ (var_element, inCompiler) ;
      var_elementList.addAssign_operation (var_element  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 703)) ;
      switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 705)) ;
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
  outArgument_outExpression = GALGAS_collectionValueAST::constructor_new (var_typeName, var_elementList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 711))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 708)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 712)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 697)) ;
  switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_parse (inCompiler) ;
      switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 705)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 712)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 697)) ;
  switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_indexing (inCompiler) ;
      switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 705)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 712)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i37_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_actualOutputExpressionList var_expressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 719)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 721)) ;
    GALGAS_semanticExpressionAST var_expression ;
    nt_expression_ (var_expression, inCompiler) ;
    var_expressionList.addAssign_operation (var_selector, var_expression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 723))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 723)) ;
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outValueElement = GALGAS_expressionListCollectionValue::constructor_new (var_expressionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 726))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 726)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 721)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 721)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i38_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  outArgument_outValueElement = GALGAS_expressionCollectionValue::constructor_new (var_expression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 734))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 734)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i39_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 748)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 749)) ;
  GALGAS_actualOutputExpressionList var_expressionList ;
  nt_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 751)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::constructor_new (var_functionName, var_expressionList  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 752)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 748)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 749)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 751)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 748)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 749)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 751)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i40_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__60_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 766)) ;
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 767)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::constructor_new (var_typeName  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 768)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__60_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 766)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 767)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__60_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 766)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 767)) ;
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
      GALGAS_lstring var_selector ;
      GALGAS_formalArgumentPassingModeAST var_mFormalParameterPassingMode ;
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
        var_mFormalParameterPassingMode = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 36)) ;
      } break ;
      case 2: {
        var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
        var_mFormalParameterPassingMode = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 40)) ;
      } break ;
      case 3: {
        var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
        var_mFormalParameterPassingMode = GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 43)) ;
      } break ;
      case 4: {
        var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
        var_mFormalParameterPassingMode = GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 46)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      GALGAS_bool var_mIsUnused ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_mIsUnused = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
        var_mIsUnused = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector, var_mFormalParameterPassingMode, var_mFormalParameterTypeName, var_mFormalParameterName, var_mIsUnused  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 57)) ;
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
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
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
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
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
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
        outArgument_outActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::constructor_new (var_selector  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 81))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 81)) ;
      } break ;
      case 2: {
        GALGAS_luint var_count ;
        var_count = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
        GALGAS_uint var_n = var_count.reader_uint (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 86)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '\?'")  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 88)) ;
        }
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (var_count.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the count value should be > 0")  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 91)) ;
        }else if (kBoolFalse == test_3) {
          if (var_n.isValid ()) {
            uint32_t variant_4815 = var_n.uintValue () ;
            bool loop_4815 = true ;
            while (loop_4815) {
              loop_4815 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
              if (loop_4815) {
                loop_4815 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
              }
              if (loop_4815 && (0 == variant_4815)) {
                loop_4815 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 93)) ;
              }
              if (loop_4815) {
                variant_4815 -- ;
                outArgument_outActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::constructor_new (var_selector.mAttribute_location, var_n  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 95))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 95)) ;
                var_n.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 96)) ;
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
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      GALGAS_semanticExpressionAST var_e ;
      nt_expression_ (var_e, inCompiler) ;
      GALGAS_location var_endOfExpressionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 103)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector, var_e, var_endOfExpressionLocation  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 104))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 104)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      GALGAS_lstring var_outputInputActualParameterName ;
      var_outputInputActualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      GALGAS_lstringlist var_structAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 113)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          GALGAS_lstring var_structAttributeName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
          var_structAttributeList.addAssign_operation (var_structAttributeName  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 118)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::constructor_new (var_selector, var_outputInputActualParameterName, var_structAttributeList  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 120))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 120)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::constructor_new (var_selector  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 128))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 128)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      GALGAS_luint var_count = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
      GALGAS_uint var_n = var_count.reader_uint (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 133)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the selector should be '!\?'")  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 135)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_location location_9 (var_count.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_9, GALGAS_string ("the count value should be > 0")  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 138)) ;
      }else if (kBoolFalse == test_8) {
        if (var_n.isValid ()) {
          uint32_t variant_6130 = var_n.uintValue () ;
          bool loop_6130 = true ;
          while (loop_6130) {
            loop_6130 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
            if (loop_6130) {
              loop_6130 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
            }
            if (loop_6130 && (0 == variant_6130)) {
              loop_6130 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 140)) ;
            }
            if (loop_6130) {
              variant_6130 -- ;
              outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::constructor_new (var_selector.mAttribute_location, var_n  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 142))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 142)) ;
              var_n.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 143)) ;
            }
          }
        }
      }
    } break ;
    case 7: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      GALGAS_lstring var_inputActualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::constructor_new (var_selector, var_inputActualParameterName  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 149))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 149)) ;
    } break ;
    case 8: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      GALGAS_lstring var_declarationTypeName ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
        var_declarationTypeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 158)) ;
      } break ;
      case 2: {
        var_declarationTypeName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector, var_declarationTypeName, var_inputActualParameterName  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 163))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 163)) ;
    } break ;
    case 9: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      GALGAS_lstring var_declarationTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      GALGAS_lstring var_inputActualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector, var_declarationTypeName, var_inputActualParameterName  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 171))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 171)) ;
    } break ;
    case 10: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      GALGAS_lstring var_declarationTypeName ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
        var_declarationTypeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 181)) ;
      } break ;
      case 2: {
        var_declarationTypeName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_markedAsUnused ;
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
        var_markedAsUnused = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 189)) ;
        var_markedAsUnused = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 192)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::constructor_new (var_selector, var_declarationTypeName, var_inputActualParameterName, var_markedAsUnused  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 193))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 193)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 189)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 192)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 189)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 192)) ;
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
  outArgument_outFormalInputParameterList = GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 209)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      GALGAS_bool var_isConstant ;
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 213)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
        var_isConstant = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 217)) ;
        var_isConstant = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
      GALGAS_bool var_mIsUnused ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
        var_mIsUnused = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 225)) ;
        var_mIsUnused = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 228)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector, var_mFormalParameterTypeName, var_mFormalParameterName, var_mIsUnused, var_isConstant  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 229)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 213)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 217)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 225)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 228)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 213)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 217)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 225)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 228)) ;
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
  outArgument_outInstructionsList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 40)) ;
    } break ;
    case 3: {
      GALGAS_semanticInstructionAST var_instruction ;
      nt_semantic_5F_instruction_ (var_instruction, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 43)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 40)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 40)) ;
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
  GALGAS_bool var_isLocal ;
  switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
    var_isLocal = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_private) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 55)) ;
    var_isLocal = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_ (var_isLocal, ioArgument_ioDeclarations, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_private) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 55)) ;
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
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_private) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 69)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 70)) ;
  GALGAS_lstring var_mActionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_externRoutineDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mActionName, var_mFormalParameterList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 69)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 70)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 69)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 70)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument_inIsPrivate,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 94)) ;
  GALGAS_lstring var_mRoutineName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 95)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_mRoutineInstructionList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 99)) ;
  GALGAS_location var_endOfInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 100)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_routineDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsPrivate, var_mRoutineName, var_mFormalParameterList, var_mRoutineInstructionList, var_endOfInstructionList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 101))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 101)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 94)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 95)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 99)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 94)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 95)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 97)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_ (const GALGAS_bool constinArgument_inIsPrivate,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 124)) ;
  GALGAS_bool var_isOnce = GALGAS_bool (false) ;
  switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_onceQualifier = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_onceQualifier.mAttribute_string.objectCompare (GALGAS_string ("once"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (var_onceQualifier.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the only attribute allowed here is '%once'")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 130)) ;
    }else if (kBoolFalse == test_0) {
      var_isOnce = GALGAS_bool (true) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_functionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 135)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList, inCompiler) ;
  const enumGalgasBool test_2 = var_isOnce.operator_and (GALGAS_bool (kIsStrictSup, var_formalInputParameterList.reader_length (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 137)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (var_functionName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("an 'once' function should has no argument")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 138)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 140)) ;
  GALGAS_lstring var_resultTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 141)) ;
  GALGAS_lstring var_resultVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 142)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 143)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_functionInstructionList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 145)) ;
  GALGAS_location var_endOfFunctionInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 146)) ;
  const enumGalgasBool test_4 = var_isOnce.boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName, var_resultTypeName, var_resultVariableName, var_functionInstructionList, var_endOfFunctionInstructionList, constinArgument_inIsPrivate  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148)) ;
  }else if (kBoolFalse == test_4) {
    ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName, var_formalInputParameterList, var_resultTypeName, var_resultVariableName, var_functionInstructionList, var_endOfFunctionInstructionList, constinArgument_inIsPrivate  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 124)) ;
  switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 135)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 140)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 141)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 142)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 143)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 145)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 124)) ;
  switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 135)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 140)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 141)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 142)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 143)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 181)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 182)) ;
  GALGAS_lstring var_mActionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 183)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 186)) ;
  GALGAS_lstring var_resultTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 187)) ;
  GALGAS_lstring var_resultVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 188)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_mActionName, var_formalInputParameterList, var_resultTypeName, var_resultVariableName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 189))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 189)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 181)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 182)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 183)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 186)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 187)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 188)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 181)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 182)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 183)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 186)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 187)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 188)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208)) ;
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 209)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 210)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 211)), var_typeName, var_variableName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 211)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 209)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 210)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 209)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 210)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 217)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 218)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 219)), var_typeName, var_variableName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 219)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 217)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 218)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 217)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 218)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 225)) ;
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 226)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 227)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 228)) ;
  GALGAS_semanticExpressionAST var_sourceExpression ;
  nt_expression_ (var_sourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 231)), GALGAS_bool (false), var_typeName, var_variableName, var_sourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 230)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 225)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 226)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 227)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 228)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 225)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 226)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 227)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 228)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 242)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 243)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 244)) ;
  GALGAS_semanticExpressionAST var_sourceExpression ;
  nt_expression_ (var_sourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (var_variableName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 247)), var_variableName, var_sourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 246)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 242)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 243)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 244)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 242)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 243)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 244)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 256)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 257)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 258)) ;
  GALGAS_semanticExpressionAST var_sourceExpression ;
  nt_expression_ (var_sourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 261)), GALGAS_bool (false), var_typeName, var_variableName, var_sourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 256)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 257)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 258)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 256)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 257)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 258)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 283)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
  GALGAS_semanticExpressionAST var_sourceExpression ;
  nt_expression_ (var_sourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 287)), GALGAS_bool (true), var_typeName, var_variableName, var_sourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 286)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 283)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 281)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 283)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 303)) ;
  GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 304)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 305)) ;
  GALGAS_semanticExpressionAST var_sourceExpression ;
  nt_expression_ (var_sourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (var_variableName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 308)), var_variableName, var_sourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 307)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 303)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 304)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 305)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 303)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 304)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 305)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mTargetVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 325)) ;
  GALGAS_lstringlist var_mStructAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 326)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 329)) ;
      GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 330)) ;
      var_mStructAttributeList.addAssign_operation (var_attributeName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 331)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 333)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression ;
  nt_expression_ (var_mSourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::constructor_new (var_mTargetVariableName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 336)), var_mTargetVariableName, var_mStructAttributeList, var_mSourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 335)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 325)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 329)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 330)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 333)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 325)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 329)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 330)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 333)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 355)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 356)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression ;
  nt_expression_ (var_mSourceExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::constructor_new (var_instructionLocation, var_mSourceExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 358)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 356)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 354)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 356)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 375)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 376)) ;
  GALGAS_lstringlist var_dropList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 377)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 379)) ;
    var_dropList.addAssign_operation (var_variableName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 380)) ;
    switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 382)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_dropInstructionAST::constructor_new (var_instructionLocation, var_dropList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 384)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 375)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 379)) ;
    switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 382)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 375)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 379)) ;
    switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 382)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mReceiverName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 399)) ;
  GALGAS_lstringlist var_mStructAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 400)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 403)) ;
      GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 404)) ;
      var_mStructAttributeList.addAssign_operation (var_attributeName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 405)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 408)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 410)), var_mReceiverName, var_mStructAttributeList, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 413))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 409)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 416)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 418)), var_mReceiverName, var_mStructAttributeList, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 421))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 417)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 424)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 426)), var_mReceiverName, var_mStructAttributeList, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 429))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 425)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 432)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 434)), var_mReceiverName, var_mStructAttributeList, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 437))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 433)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 399)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 403)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 404)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 408)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 416)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 424)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 432)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 399)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 403)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 404)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 408)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 416)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 424)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 432)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 454)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 455)) ;
  switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 457)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 460))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 458)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 463)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 466))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 464)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 469)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 472))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 470)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 475)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 478))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 476)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 454)) ;
  switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 457)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 463)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 469)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 475)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 454)) ;
  switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 457)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 463)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 469)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 475)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i18_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 495)) ;
  ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 496)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 496))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 496)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 495)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 495)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_luint var_count = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 503)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 504)) ;
  GALGAS_uint var_n = var_count.reader_uint (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 505)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_count.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this value should be > 0")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 507)) ;
  }
  if (var_n.isValid ()) {
    uint32_t variant_22473 = var_n.uintValue () ;
    bool loop_22473 = true ;
    while (loop_22473) {
      loop_22473 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_22473) {
        loop_22473 = GALGAS_bool (kIsStrictSup, var_n.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_22473 && (0 == variant_22473)) {
        loop_22473 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 509)) ;
      }
      if (loop_22473) {
        variant_22473 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 510)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 510))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 510)) ;
        var_n.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 511)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 503)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 504)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 503)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 504)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_typeName ;
  switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
    var_typeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 521)) ;
  } break ;
  case 2: {
    var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 523)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 525)) ;
  ioArgument_ioElementList.addAssign_operation (var_typeName, var_constantName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 526)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 523)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 525)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 523)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 525)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 533)) ;
  GALGAS_foreachInstructionEnumeratedObjectElementListAST var_elementList = GALGAS_foreachInstructionEnumeratedObjectElementListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 534)) ;
  GALGAS_bool var_endsWithEllipsis ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 537)) ;
    var_endsWithEllipsis = GALGAS_bool (true) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_ (var_elementList, inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
    case 1: {
      var_endsWithEllipsis = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 547)) ;
      var_endsWithEllipsis = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 551)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 552)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression ;
  nt_expression_ (var_enumeratedExpression, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (var_elementList, var_endsWithEllipsis, var_enumeratedExpression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 558))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 554)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 533)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 537)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_parse (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 547)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 551)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 552)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 533)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 537)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 547)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 551)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 552)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName ;
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
    var_typeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 567)) ;
  } break ;
  case 2: {
    var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 569)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 571)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 572)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression ;
  nt_expression_ (var_enumeratedExpression, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::constructor_new (var_typeName, var_enumerationVariable, var_enumeratedExpression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 578))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 574)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 569)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 571)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 572)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 569)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 571)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 572)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 586)) ;
  GALGAS_lstring var_prefix ;
  switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
  case 1: {
    var_prefix = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 589)) ;
  } break ;
  case 2: {
    var_prefix = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 591)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 593)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression ;
  nt_expression_ (var_enumeratedExpression, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (var_prefix, var_enumeratedExpression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 598))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 595)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 586)) ;
  switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 591)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 593)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 586)) ;
  switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 591)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 593)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i24_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_for) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 605)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 606)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 607)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending ;
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 1: {
      var_ascending = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 613)) ;
      var_ascending = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedObject, inCompiler) ;
    var_mEnumeratedObjectList.addAssign_operation (var_ascending, var_enumeratedObject  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 617)) ;
    switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 619)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression ;
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
    var_mWhileExpression = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 623))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 623)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 625)) ;
    nt_expression_ (var_mWhileExpression, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 628)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList ;
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 631)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_before) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 633)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBeforeInstructionList, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 636)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 637)) ;
  GALGAS_lstring var_indexVariableName ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
    var_indexVariableName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 640))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 640)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 642)) ;
    var_indexVariableName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 643)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 644)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoInstructionList, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 648)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList ;
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 651)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_between) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 653)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBetweenInstructionList, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 656)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList ;
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 659)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_after) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 661)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mAfterInstructionList, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 664)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 665)) ;
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 668)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("for"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the terminator attribute should be '%for'")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 670)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_foreach_5F_instruction = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 673)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::constructor_new (var_instructionLocation, var_mEnumeratedObjectList, var_indexVariableName, var_mWhileExpression, var_endof_5F_while_5F_expression, var_mBeforeInstructionList, var_endof_5F_before_5F_branch, var_mBetweenInstructionList, var_endof_5F_between_5F_branch, var_mDoInstructionList, var_endof_5F_do_5F_branch, var_mAfterInstructionList, var_endof_5F_after_5F_branch, var_endof_5F_foreach_5F_instruction  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 674)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_for) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 605)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 613)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 619)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 625)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_before) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 633)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 637)) ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 642)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 643)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 644)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_between) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 653)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_after) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 661)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 665)) ;
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 668)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_for) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 605)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 613)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 619)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 625)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_before) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 633)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 637)) ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 642)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 643)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 644)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_between) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 653)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_after) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 661)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 665)) ;
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 668)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_branch_i25_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 702)) ;
  GALGAS_semanticExpressionAST var_if_5F_expression ;
  nt_expression_ (var_if_5F_expression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 705)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_then_5F_instructionList, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 708)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList ;
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 711)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 713)) ;
    nt_semantic_5F_instruction_5F_list_ (var_else_5F_instructionList, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_elsif) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 716)) ;
    GALGAS_semanticInstructionAST var_instruction ;
    nt_if_5F_branch_ (var_instruction, inCompiler) ;
    var_else_5F_instructionList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 719)) ;
    var_else_5F_instructionList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 720)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation, var_if_5F_expression, var_then_5F_instructionList, var_endOf_5F_then_5F_branchLocation, var_else_5F_instructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 728))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 722)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_branch_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 705)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 713)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_elsif) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 716)) ;
    nt_if_5F_branch_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_branch_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 705)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 713)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_elsif) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 716)) ;
    nt_if_5F_branch_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 735)) ;
  nt_if_5F_branch_ (outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 737)) ;
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 740)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("if"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the terminator attribute should be '%if'")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 742)) ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 735)) ;
  nt_if_5F_branch_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 737)) ;
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 740)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 735)) ;
  nt_if_5F_branch_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 737)) ;
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 740)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i27_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 764)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 765)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression ;
  nt_expression_ (var_mReceiverExpression, inCompiler) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 767)) ;
  GALGAS_actualParameterListAST var_actualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 769)) ;
  outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation, var_mReceiverExpression, var_mMethodName, var_actualParameterList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 770)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 764)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 767)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 769)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 764)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 767)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 769)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i28_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_outResult,
                                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outResult.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 781)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the selector should be '\?'")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 783)) ;
  }
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 786)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 787))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 787)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 789)) ;
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 790)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (var_actualParameterTypeName, var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 791)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 793)) ;
    GALGAS_lstring var_actualParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 794)) ;
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 795)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (var_actualParameterTypeName, var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 796)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 798)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 799)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 781)) ;
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 786)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 789)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 790)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 793)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 794)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 795)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 798)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 781)) ;
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 786)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 789)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 790)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 793)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 794)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 795)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 798)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 815)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 816)) ;
  GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 817)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("an empty selector '!\?' is required here")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 819)) ;
  }
  GALGAS_lstring var_mReceiverName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 821)) ;
  GALGAS_lstringlist var_mReceiverStructAttributes = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 822)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 825)) ;
      GALGAS_lstring var_structAttribute = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 826)) ;
      var_mReceiverStructAttributes.addAssign_operation (var_structAttribute  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 827)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_lstring var_typeNameForCasting ;
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
    var_typeNameForCasting = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 831)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 833)) ;
    var_typeNameForCasting = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 834)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mModifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 836)) ;
  GALGAS_actualParameterListAST var_actualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 838)) ;
  outArgument_outInstruction = GALGAS_setterCallInstructionAST::constructor_new (var_instructionLocation, var_mReceiverName, var_mReceiverStructAttributes, var_typeNameForCasting, var_mModifierName, var_actualParameterList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 839)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 815)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 817)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 821)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 825)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 826)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 833)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 834)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 836)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 838)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 815)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 817)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 821)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 825)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 826)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 833)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 834)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 836)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 838)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 860)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 861)) ;
  GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 862)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("an empty selector '!\?' is required here")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 864)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 866)) ;
  GALGAS_lstring var_mModifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 867)) ;
  GALGAS_actualParameterListAST var_actualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 869)) ;
  outArgument_outInstruction = GALGAS_selfModifierCallInstructionAST::constructor_new (var_instructionLocation, var_mModifierName, var_actualParameterList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 870)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 860)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 862)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 866)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 867)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 869)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 860)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 862)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 866)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 867)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 869)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i31_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 888)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 889)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression ;
  nt_expression_ (var_mReceiverExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 891)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression ;
  nt_expression_ (var_mErrorExpression, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 893)) ;
  switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 896)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 898)) ;
      var_mBuiltVariableList.addAssign_operation (var_builtVariableName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 899)) ;
      switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 901)) ;
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
  outArgument_outInstruction = GALGAS_errorInstructionAST::constructor_new (var_instructionLocation, var_mReceiverExpression, var_mErrorExpression, var_mBuiltVariableList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 904)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 888)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 891)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 896)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 898)) ;
      switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 901)) ;
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
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 888)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 891)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 896)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 898)) ;
      switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 901)) ;
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
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 923)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 924)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression ;
  nt_expression_ (var_mReceiverExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 926)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression ;
  nt_expression_ (var_mWarningExpression, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::constructor_new (var_instructionLocation, var_mReceiverExpression, var_mWarningExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 928)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 923)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 926)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 923)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 926)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mRoutineName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 946)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 947)) ;
  GALGAS_actualParameterListAST var_actualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 949)) ;
  outArgument_outInstruction = GALGAS_routineCallInstructionAST::constructor_new (var_mRoutineName.reader_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 951)), var_mRoutineName, var_actualParameterList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 950)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 946)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 947)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 949)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 946)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 947)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 949)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 968)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 969)) ;
  GALGAS_semanticExpressionAST var_keyExpression ;
  nt_expression_ (var_keyExpression, inCompiler) ;
  GALGAS_location var_endOfKeyExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 971)) ;
  GALGAS_lstring var_withPrefix ;
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
    var_withPrefix = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 974))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 974)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 976)) ;
    var_withPrefix = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 977)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 979)) ;
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    GALGAS_semanticExpressionAST var_receiverExpression ;
    nt_expression_ (var_receiverExpression, inCompiler) ;
    GALGAS_location var_endOfReceiverExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 982)) ;
    GALGAS_lstring var_searchMethodNameForErrorSignaling ;
    switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
      var_searchMethodNameForErrorSignaling = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 985)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 987)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 988)) ;
      var_searchMethodNameForErrorSignaling = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 989)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 991)) ;
    GALGAS_semanticInstructionListAST var_mDoBranchInstructions ;
    nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions, inCompiler) ;
    GALGAS_location var_endOfDoInstructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 993)) ;
    GALGAS_semanticInstructionListAST var_mElseBranchInstructions ;
    switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
    case 1: {
      var_mElseBranchInstructions = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 996)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 998)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_location location_1 (var_searchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("no 'else' branch if error on search is enabled")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1000)) ;
      }
      nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions, inCompiler) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::constructor_new (var_instructionLocation, var_withPrefix, var_receiverExpression, var_endOfReceiverExpression, var_keyExpression, var_endOfKeyExpression, var_searchMethodNameForErrorSignaling, var_mDoBranchInstructions, var_endOfDoInstructions, var_mElseBranchInstructions, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1015))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1004)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1017)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("an empty selector '!\?' is required here")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1019)) ;
    }
    GALGAS_lstring var_mTargetObjectName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1021)) ;
    GALGAS_lstringlist var_structAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1022)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1025)) ;
        GALGAS_lstring var_mStructFieldName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1026)) ;
        var_structAttributeList.addAssign_operation (var_mStructFieldName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1027)) ;
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    GALGAS_location var_endOfReceiverExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1029)) ;
    GALGAS_lstring var_searchMethodNameForErrorSignaling ;
    switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
    case 1: {
      var_searchMethodNameForErrorSignaling = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1032)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1034)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1035)) ;
      var_searchMethodNameForErrorSignaling = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1036)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1038)) ;
    GALGAS_semanticInstructionListAST var_mDoBranchInstructions ;
    nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions, inCompiler) ;
    GALGAS_location var_endOf_5F_do_5F_instructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1040)) ;
    GALGAS_semanticInstructionListAST var_mElseBranchInstructions ;
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
      var_mElseBranchInstructions = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1043)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1045)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (var_searchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("no 'else' branch if error on search is enabled")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1047)) ;
      }
      nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_endOf_5F_else_5F_instructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1051)) ;
    outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::constructor_new (var_instructionLocation, var_withPrefix, var_mTargetObjectName, var_structAttributeList, var_endOfReceiverExpression, var_keyExpression, var_endOfKeyExpression, var_searchMethodNameForErrorSignaling, var_mDoBranchInstructions, var_endOf_5F_do_5F_instructions, var_mElseBranchInstructions, var_endOf_5F_else_5F_instructions  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1052)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1066)) ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1069)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("with"))).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_location location_8 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_8, GALGAS_string ("the terminator attribute should be '%with'")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1071)) ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 968)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 976)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 977)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 979)) ;
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 987)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 988)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 989)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 991)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 998)) ;
      nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1017)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1021)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1025)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1026)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1034)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1035)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1036)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1038)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1045)) ;
      nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1066)) ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1069)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 968)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 976)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 977)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 979)) ;
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 987)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 988)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 989)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 991)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 998)) ;
      nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1017)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1021)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1025)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1026)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1034)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1035)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1036)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1038)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1045)) ;
      nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1066)) ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1069)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i35_ (GALGAS_castInstructionBranchListAST & ioArgument_ioCastInstructionBranchList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1087)) ;
  GALGAS_dynamicTypeComparisonKind var_kind ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1090)) ;
    var_kind = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1090)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1092)) ;
    var_kind = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1092)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1094)) ;
    var_kind = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1094)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1096)) ;
  GALGAS_lstring var_mConstantVarName ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_mConstantVarName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1099)) ;
  } break ;
  case 2: {
    var_mConstantVarName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1101))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1101)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1103)) ;
  GALGAS_semanticInstructionListAST var_mCastBranchInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_mCastBranchInstructionList, inCompiler) ;
  ioArgument_ioCastInstructionBranchList.addAssign_operation (var_mTypeName, var_mConstantVarName, var_mCastBranchInstructionList, var_kind, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1110))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1087)) ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1090)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1092)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1094)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1096)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1099)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1103)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1087)) ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1090)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1092)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1094)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1096)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1099)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1103)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i36_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgas_33_Scanner * /* inCompiler */) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1116)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i36_indexing (C_Lexique_galgas_33_Scanner * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i37_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1122)) ;
  nt_semantic_5F_instruction_5F_list_ (outArgument_outElseOrDefault, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1122)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1122)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i38_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1129)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1130)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1131)) ;
  GALGAS_semanticExpressionAST var_errorLocationExpression ;
  nt_expression_ (var_errorLocationExpression, inCompiler) ;
  outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1133)) ;
  outArgument_outElseOrDefault.addAssign_operation (GALGAS_errorInstructionAST::constructor_new (var_instructionLocation, var_errorLocationExpression, GALGAS_literalStringExpressionAST::constructor_new (var_instructionLocation, GALGAS_stringlist::constructor_listWithValue (GALGAS_string ("cast instruction run-time error")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1139))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1137)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1140))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1134))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1134)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1129)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1131)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1129)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1131)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_cast) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1147)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1148)) ;
  GALGAS_semanticExpressionAST var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  GALGAS_castInstructionBranchListAST var_mCastInstructionBranchList = GALGAS_castInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1150)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_ (var_mCastInstructionBranchList, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticInstructionListAST var_mElseOrDefault ;
  nt_cast_5F_else_5F_or_5F_default_ (var_mElseOrDefault, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1156)) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1159)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("cast"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the terminator attribute should be '%cast'")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1161)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfInstructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1164)) ;
  outArgument_outInstruction = GALGAS_structuredCastInstructionAST::constructor_new (var_instructionLocation, var_expression, var_mCastInstructionBranchList, var_mElseOrDefault, var_endOfInstructionLocation  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1165)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_cast) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1147)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1156)) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1159)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_cast) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1147)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1156)) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1159)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mReceiverName ;
  var_mReceiverName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1186)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1187)) ;
  GALGAS_lstringlist var_mStructAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1188)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1191)) ;
      GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1192)) ;
      var_mStructAttributeList.addAssign_operation (var_attributeName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1193)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1195)) ;
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    GALGAS_actualOutputExpressionList var_expressionList ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
    outArgument_outInstruction = GALGAS_plusEqualElementsInstructionAST::constructor_new (var_instructionLocation, var_mReceiverName, var_mStructAttributeList, var_expressionList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1198)) ;
  } break ;
  case 2: {
    GALGAS_semanticExpressionAST var_expression ;
    nt_expression_ (var_expression, inCompiler) ;
    outArgument_outInstruction = GALGAS_plusEqualExpressionInstructionAST::constructor_new (var_instructionLocation, var_mReceiverName, var_mStructAttributeList, var_expression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1205)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1186)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1191)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1192)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1195)) ;
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1186)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1191)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1192)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1195)) ;
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i41_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1217)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1219)) ;
    GALGAS_semanticExpressionAST var_expression ;
    nt_expression_ (var_expression, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector, var_expression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1221))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1221)) ;
    switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i41_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1219)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
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

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i41_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1219)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1238)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1239)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1240)) ;
  GALGAS_actualOutputExpressionList var_expressionList ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (var_instructionLocation, var_expressionList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1242)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1238)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1240)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1238)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1240)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1251)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1252)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1253)) ;
  GALGAS_semanticExpressionAST var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (var_instructionLocation, var_expression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1255)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1251)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1253)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1251)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1253)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_loop) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1272)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1273)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1275)) ;
  GALGAS_semanticExpressionAST var_mVariantExpression ;
  nt_expression_ (var_mVariantExpression, inCompiler) ;
  GALGAS_location var_mEndOfVariantExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1277)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1278)) ;
  GALGAS_semanticInstructionListAST var_mFirstInstructions ;
  nt_semantic_5F_instruction_5F_list_ (var_mFirstInstructions, inCompiler) ;
  GALGAS_location var_mEndOfFirstInstructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1282)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1283)) ;
  GALGAS_semanticExpressionAST var_mLoopExpression ;
  nt_expression_ (var_mLoopExpression, inCompiler) ;
  GALGAS_location var_mEndOfLoopExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1285)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1286)) ;
  GALGAS_semanticInstructionListAST var_mSecondInstructions ;
  nt_semantic_5F_instruction_5F_list_ (var_mSecondInstructions, inCompiler) ;
  GALGAS_location var_mEndOfSecondInstructions = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1288)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1289)) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1292)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the terminator attribute should be '%loop'")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1294)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_mEndOfLoopInstruction = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1297)) ;
  outArgument_outInstruction = GALGAS_loopInstructionAST::constructor_new (var_instructionLocation, var_mVariantExpression, var_mEndOfVariantExpression, var_mFirstInstructions, var_mEndOfFirstInstructions, var_mLoopExpression, var_mEndOfLoopExpression, var_mSecondInstructions, var_mEndOfSecondInstructions, var_mEndOfLoopInstruction  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1298)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_loop) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1272)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1275)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1278)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1283)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1286)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1289)) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1292)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_loop) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1272)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1275)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1278)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1283)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1286)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1289)) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1292)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1323)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1324)) ;
  GALGAS_semanticExpressionAST var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  outArgument_outInstruction = GALGAS_messageInstructionAST::constructor_new (var_instructionLocation, var_expression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1326)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1323)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1323)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1343)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1344)) ;
  GALGAS_logListAST var_logList = GALGAS_logListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1345)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1348)) ;
      var_logList.addAssign_operation (var_loggedVariableName, GALGAS_varInExpressionAST::constructor_new (var_loggedVariableName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1349))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1349)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_logMessage = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1351)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1352)) ;
      GALGAS_semanticExpressionAST var_logExpression ;
      nt_expression_ (var_logExpression, inCompiler) ;
      var_logList.addAssign_operation (var_logMessage, var_logExpression  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1354)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1357)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::constructor_new (var_instructionLocation, var_logList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1359)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1343)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1348)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1351)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1352)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1357)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1343)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1348)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1351)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1352)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1357)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_switch) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1376)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1377)) ;
  GALGAS_semanticExpressionAST var_switchExpression ;
  nt_expression_ (var_switchExpression, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1379)) ;
  GALGAS_switchBranchesAST var_switchBranches = GALGAS_switchBranchesAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1380)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1382)) ;
    GALGAS_lstringlist var_constantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1383)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1385)) ;
      var_constantNameList.addAssign_operation (var_constantName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1386)) ;
      switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1388)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1390)) ;
    switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1393)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1396)) ;
          var_associatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1397)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1397)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1397)) ;
        } break ;
        case 2: {
          GALGAS_lstring var_typeName ;
          switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
          case 1: {
            var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1401)) ;
          } break ;
          case 2: {
            var_typeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1403)) ;
          } break ;
          default:
            break ;
          }
          GALGAS_bool var_constantMarkedAsUnused ;
          switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
          case 1: {
            var_constantMarkedAsUnused = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1409)) ;
            var_constantMarkedAsUnused = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1412)) ;
          var_associatedValuesExtraction.addAssign_operation (var_typeName, var_constantName, var_constantMarkedAsUnused  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1413)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1417)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1419)) ;
    GALGAS_semanticInstructionListAST var_instructions ;
    nt_semantic_5F_instruction_5F_list_ (var_instructions, inCompiler) ;
    var_switchBranches.addAssign_operation (var_constantNameList, var_associatedValuesExtraction, var_instructions, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1421))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1421)) ;
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1424)) ;
  GALGAS_location var_endOfSwitchInstruction = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1425)) ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1428)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("switch"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the terminator attribute should be '%switch'")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1430)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_switchInstructionAST::constructor_new (var_instructionLocation, var_switchExpression, var_endOfSwitchExpression, var_switchBranches, var_endOfSwitchInstruction  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1433)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_switch) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1376)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1382)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1385)) ;
      switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1388)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1393)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1396)) ;
        } break ;
        case 2: {
          switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1401)) ;
          } break ;
          case 2: {
          } break ;
          default:
            break ;
          }
          switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1409)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1412)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1417)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1419)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1424)) ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1428)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_switch) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1376)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1382)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1385)) ;
      switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1388)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1393)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1396)) ;
        } break ;
        case 2: {
          switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1401)) ;
          } break ;
          case 2: {
          } break ;
          default:
            break ;
          }
          switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1409)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1412)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1417)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1419)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1424)) ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1428)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_i48_ (GALGAS_lstring & outArgument_outSelector,
                                                                                                                GALGAS_abstractInputParameter & outArgument_outActualInputParameter,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outSelector.drop () ; // Release 'out' argument
  outArgument_outActualInputParameter.drop () ; // Release 'out' argument
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    outArgument_outSelector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1455)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1456)) ;
    outArgument_outActualInputParameter = GALGAS_inputParameterAnonymousVariable::constructor_new (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1457)) ;
  } break ;
  case 2: {
    outArgument_outSelector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1459)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1460)) ;
    GALGAS_lstring var_actualParameterTypeName ;
    switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
    case 1: {
      var_actualParameterTypeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1463)) ;
    } break ;
    case 2: {
      var_actualParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1465)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1467)) ;
    outArgument_outActualInputParameter = GALGAS_inputParameterDeclaredVariable::constructor_new (var_actualParameterTypeName, var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1468)) ;
  } break ;
  case 3: {
    outArgument_outSelector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1470)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1471)) ;
    GALGAS_lstring var_actualParameterTypeName ;
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 1: {
      var_actualParameterTypeName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1474)) ;
    } break ;
    case 2: {
      var_actualParameterTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1476)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1478)) ;
    outArgument_outActualInputParameter = GALGAS_inputParameterDeclaredConstant::constructor_new (var_actualParameterTypeName, var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1479)) ;
  } break ;
  case 4: {
    outArgument_outSelector = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1481)) ;
    GALGAS_lstring var_actualParameterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1482)) ;
    outArgument_outActualInputParameter = GALGAS_inputParameterVariable::constructor_new (var_actualParameterName  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1483)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_i48_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1455)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1456)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1459)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1460)) ;
    switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1465)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1467)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1470)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1471)) ;
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1476)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1478)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1481)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1482)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_i48_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1455)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1456)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1459)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1460)) ;
    switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1465)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1467)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1470)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1471)) ;
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1476)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1478)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1481)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1482)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i49_ (GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1491)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_actualSelector ;
      GALGAS_abstractInputParameter var_actualInputParameter ;
      nt_actual_5F_input_5F_parameter_ (var_actualSelector, var_actualInputParameter, inCompiler) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_actualSelector, var_actualInputParameter  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1495)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i49_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
      nt_actual_5F_input_5F_parameter_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i49_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
      nt_actual_5F_input_5F_parameter_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1511)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1512)) ;
  GALGAS_lstring var_mTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1513)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1514)) ;
  GALGAS_actualParameterListAST var_actualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1516)) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::constructor_new (var_instructionLocation, var_mTypeName, var_mMethodName, var_actualParameterList  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1517)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1511)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1513)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1514)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1516)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1511)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1513)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1514)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1516)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i51_ (GALGAS_matchEntryListAST & ioArgument_ioMatchEntryList,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_enumerationConstantName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1535)) ;
  ioArgument_ioMatchEntryList.addAssign_operation (GALGAS_bool (false), var_enumerationConstantName, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1539))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1539))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1536)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i51_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1535)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i51_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1535)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i52_ (GALGAS_matchEntryListAST & ioArgument_ioMatchEntryList,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1545)) ;
  GALGAS_lstring var_localConstant ;
  switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
    var_localConstant = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1548))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1548)) ;
  } break ;
  case 2: {
    var_localConstant = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1550)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMatchEntryList.addAssign_operation (GALGAS_bool (true), var_className, var_localConstant  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1552)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i52_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1545)) ;
  switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1550)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i52_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1545)) ;
  switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1550)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i53_ (GALGAS_matchInstructionBranchListAST & ioArgument_ioMatchInstructionBranchList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1561)) ;
  GALGAS_matchEntryListAST var_mMatchEntryList = GALGAS_matchEntryListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1562)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_ (var_mMatchEntryList, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1566)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfMatchEntryList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1568)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1569)) ;
  GALGAS_semanticInstructionListAST var_mMatchBranchInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_mMatchBranchInstructionList, inCompiler) ;
  ioArgument_ioMatchInstructionBranchList.addAssign_operation (var_mMatchEntryList, var_endOfMatchEntryList, var_mMatchBranchInstructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1576))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1572)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i53_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1561)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1566)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1569)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i53_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1561)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1566)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1569)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_match) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1583)) ;
  GALGAS_semanticExpressionListAST var_matchedExpressionNameList = GALGAS_semanticExpressionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1584)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1585)) ;
  GALGAS_semanticExpressionAST var_receiverExpression ;
  nt_expression_ (var_receiverExpression, inCompiler) ;
  var_matchedExpressionNameList.addAssign_operation (var_receiverExpression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1587))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1587)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1588)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_semanticExpressionAST var_receiverExpression ;
    nt_expression_ (var_receiverExpression, inCompiler) ;
    var_matchedExpressionNameList.addAssign_operation (var_receiverExpression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1592))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1592)) ;
    switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1594)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_matchInstructionBranchListAST var_matchInstructionBranchList = GALGAS_matchInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1596)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_ (var_matchInstructionBranchList, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GALGAS_semanticInstructionListAST var_elseInstructionList ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
    var_elseInstructionList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1603)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1605)) ;
    nt_semantic_5F_instruction_5F_list_ (var_elseInstructionList, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1608)) ;
  GALGAS_location var_endOf_5F_match_5F_instruction = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1609)) ;
  switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1612)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_terminator.mAttribute_string.objectCompare (GALGAS_string ("match"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (var_terminator.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the terminator attribute should be '%match'")  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1614)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_matchInstructionAST::constructor_new (var_instructionLocation, var_matchedExpressionNameList, var_matchInstructionBranchList, var_elseInstructionList, var_endOf_5F_match_5F_instruction  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1617)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_match) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1583)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1588)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1594)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1605)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1608)) ;
  switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1612)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_match) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1583)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1588)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1594)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1605)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1608)) ;
  switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 1612)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_grammar) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 64)) ;
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 65)) ;
  GALGAS_lstring var_mGrammarComponentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 66)) ;
  GALGAS_lstring var_mLabelName ;
  switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
    var_mLabelName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 69))  COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 69)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 71)) ;
    var_mLabelName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 72)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_sourceExpressionIsFile ;
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 76)) ;
    var_sourceExpressionIsFile = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_on) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 78)) ;
    var_sourceExpressionIsFile = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticExpressionAST var_mSourceExpression ;
  nt_expression_ (var_mSourceExpression, inCompiler) ;
  GALGAS_location var_endOfSourceExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 81)) ;
  GALGAS_actualParameterListAST var_actualParameterList ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar-in-file.galgas", 86)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 88)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInstructionAST::constructor_new (var_instructionLocation, var_mGrammarComponentName, var_mLabelName, var_mSourceExpression, var_endOfSourceExpression, var_sourceExpressionIsFile, var_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_grammar) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 66)) ;
  switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 71)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 72)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_on) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 88)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_grammar) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 66)) ;
  switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 71)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 72)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_on) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar-in-file.galgas", 88)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
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

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_attribute_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mAttributeTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  GALGAS_lstring var_mAttributeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  GALGAS_lstringlist var_featureList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
      var_featureList.addAssign_operation (var_featureName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 72)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_mAttributeTypeName, var_mAttributeName, var_featureList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_attribute_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_attribute_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 66)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 71)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 93)) ;
  GALGAS_lstring var_mListmapTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  GALGAS_lstring var_mAssociatedListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool (false), var_mListmapTypeName, var_mAssociatedListTypeName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 99))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 93)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 93)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 96)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i3_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_array) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 117)) ;
  GALGAS_lstring var_arrayTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 119)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 120)) ;
  GALGAS_lstring var_elementListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 121)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 122)) ;
  GALGAS_luint var_dimension = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 123)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 124)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool (false), var_arrayTypeName, var_elementListTypeName, var_dimension  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 125))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 125)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_array) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 117)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 119)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 120)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 121)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 122)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 123)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 124)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_array) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 117)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 119)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 120)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 121)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 122)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 123)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 124)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_method_5F_declaration_i4_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
  GALGAS_lstring var_stateName ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    var_stateName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 146))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 146)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 148)) ;
    var_stateName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 152)) ;
  GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 153)) ;
  GALGAS_lstring var_mShadowErrorMessage ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 156))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 156)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 158)) ;
    var_mShadowErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 159)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage, var_mShadowErrorMessage, var_stateName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 161)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_method_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 148)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 153)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 158)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 159)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_method_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 148)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 153)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 158)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 159)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_map) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 172)) ;
  GALGAS_lstring var_mMapTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 174)) ;
  GALGAS_lstringlist var_mapAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 176)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 179)) ;
      var_mapAttributeList.addAssign_operation (var_attribute  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 180)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 183)) ;
  GALGAS_propertyInCollectionListAST var_propertyList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 184)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 185)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 186)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 187)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 188)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_ (var_propertyList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 193)) ;
      nt_insert_5F_method_5F_declaration_ (var_mInsertMethodList, inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 196)) ;
      GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 197)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 198)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 199)) ;
      GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 200)) ;
      var_mSearchMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 204))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 204))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 201)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 206)) ;
      GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 207)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 208)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 209)) ;
      GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 210)) ;
      var_mRemoveMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 211)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 215)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 216)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 217)) ;
      var_insertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 218))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 218)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 220)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 222)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName, var_mapAttributeList, var_propertyList, var_mInsertMethodList, var_mSearchMethodList, var_mRemoveMethodList, var_insertOrReplaceDeclarationListAST  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 223))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 223)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_map) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 172)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 174)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 179)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 183)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 193)) ;
      nt_insert_5F_method_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 196)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 197)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 198)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 199)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 200)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 206)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 207)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 208)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 209)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 210)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 215)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 216)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 217)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 220)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 222)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_map) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 172)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 174)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 179)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 183)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 193)) ;
      nt_insert_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 196)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 197)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 198)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 199)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 200)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 206)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 207)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 208)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 209)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 210)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 215)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 216)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 217)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 220)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 222)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_mIsAbstract ;
  switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
    var_mIsAbstract = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 251)) ;
    var_mIsAbstract = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_class) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 254)) ;
  GALGAS_lstringlist var_classNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 255)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 257)) ;
    var_classNameList.addAssign_operation (var_className  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 258)) ;
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 260)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_mSuperClassName ;
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
    var_mSuperClassName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 264)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 266)) ;
    var_mSuperClassName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 267)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_classFeatureList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 269)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_classFeatureName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 272)) ;
      var_classFeatureList.addAssign_operation (var_classFeatureName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 273)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 275)) ;
  GALGAS_string var_mClassMessage = GALGAS_string::makeEmptyString () ;
  GALGAS_propertyInCollectionListAST var_mAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 278)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_ (var_mAttributeList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 283)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 285)) ;
  cEnumerator_lstringlist enumerator_11907 (var_classNameList, kEnumeration_up) ;
  while (enumerator_11907.hasCurrentObject ()) {
    ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_mIsAbstract, enumerator_11907.current_mValue (HERE), var_mSuperClassName, var_classFeatureList, var_mAttributeList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 287))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 287)) ;
    enumerator_11907.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 251)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_class) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 254)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 257)) ;
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 260)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 266)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 267)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 272)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 275)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 283)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 285)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 251)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_class) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 254)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 257)) ;
    switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 260)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 266)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 267)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 272)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 275)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 283)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 285)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i7_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 309)) ;
  GALGAS_bool var_mAscending ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 312)) ;
    var_mAscending = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 315)) ;
    var_mAscending = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName, var_mAscending  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 318)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 309)) ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 312)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 315)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 309)) ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 312)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 315)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i8_ (const GALGAS_bool constinArgument_inIsInternal,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 334)) ;
  GALGAS_lstring var_mFilewrapperName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 335)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 336)) ;
  GALGAS_lstring var_mFilewrapperPath = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 337)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 338)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 339)) ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 343)) ;
      var_filewrapperTextFileExtensionList.addAssign_operation (var_pathExtension  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 344)) ;
      switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 346)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 349)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 350)) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 351)) ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_pathExtension = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 355)) ;
      var_filewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 356)) ;
      switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 358)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 362)) ;
  GALGAS_filewrapperTemplateListAST var_mFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 363)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 366)) ;
      GALGAS_lstring var_mFilewrapperTemplateName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 367)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 368)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 369)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 372)) ;
          GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 373)) ;
          GALGAS_bool var_isUnused ;
          switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
          case 1: {
            var_isUnused = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 378)) ;
            var_isUnused = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 381)) ;
          var_filewrapperTemplateFormalInputParameters.addAssign_operation (var_selector, var_typeName, var_argumentName, var_isUnused  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 382)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      var_mFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName, var_mFilewrapperTemplatePath, var_filewrapperTemplateFormalInputParameters  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 384)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 389)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsInternal, GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 393)), var_mFilewrapperName, var_mFilewrapperPath, var_filewrapperTextFileExtensionList, var_filewrapperBinaryFileExtensionList, var_mFilewrapperTemplateList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 390))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 390)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 334)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 335)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 336)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 337)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 338)) ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 343)) ;
      switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 346)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 349)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 350)) ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 355)) ;
      switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 358)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 362)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 366)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 368)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 372)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 373)) ;
          switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 378)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 381)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 389)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 334)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 335)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 336)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 337)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 338)) ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 343)) ;
      switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 346)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 349)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 350)) ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 355)) ;
      switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 358)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 362)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 366)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 367)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 368)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 372)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 373)) ;
          switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 378)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 381)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 389)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 413)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 414)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 415)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 416)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_abstractCategoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 418))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 418)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 413)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 414)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 415)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 416)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 413)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 414)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 415)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 416)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 438)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 439)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 440)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 441)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractCategoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 443))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 443)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 438)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 439)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 440)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 441)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 438)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 439)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 440)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 441)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i11_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 462)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 463)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 464)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 466)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfMethodLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 468)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 469)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_categoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList, var_routineInstructionList, var_endOfMethodLocation  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 470))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 470)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 462)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 463)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 464)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 466)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 469)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 462)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 463)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 464)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 466)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 469)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i12_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 491)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 492)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 493)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 494)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 496)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfMethodLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 498)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 499)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingCategoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList, var_routineInstructionList, var_endOfMethodLocation  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 500))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 500)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 491)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 492)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 493)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 494)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 496)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 499)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 491)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 492)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 493)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 494)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 496)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 499)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i13_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 521)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 522)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 523)) ;
  GALGAS_lstring var_mReaderName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 524)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 527)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 529)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_abstractCategoryReaderAST::constructor_new (GALGAS_bool (false), var_className, var_mReaderName, var_mFormalInputParameterList, var_mReturnedTypeName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 530))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 530)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 521)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 522)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 523)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 524)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 527)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 529)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 521)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 522)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 523)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 524)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 527)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 529)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i14_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 550)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 551)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 552)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 555)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 556)) ;
  GALGAS_lstring var_mReturnedVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 557)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 558)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 560)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 561)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_categoryReaderAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_mFormalInputParameterList, var_mReturnedTypeName, var_mReturnedVariableName, var_routineInstructionList, var_endOfInstructionList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 562))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 562)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 550)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 551)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 552)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 555)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 556)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 557)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 558)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 561)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 550)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 551)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 552)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 555)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 556)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 557)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 558)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 561)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i15_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 586)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 587)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 588)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 591)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 592)) ;
  GALGAS_lstring var_mReturnedVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 593)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 594)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 596)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 597)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingCategoryReaderAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_mFormalInputParameterList, var_mReturnedTypeName, var_mReturnedVariableName, var_routineInstructionList, var_endOfInstructionList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 598))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 598)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 586)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 587)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 588)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 591)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 592)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 593)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 594)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 597)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 586)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 587)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 588)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 591)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 592)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 593)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 594)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 597)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i16_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 621)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 622)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 623)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 624)) ;
  GALGAS_lstring var_mReaderName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 625)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 628)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 629)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 630)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractCategoryReaderAST::constructor_new (GALGAS_bool (false), var_className, var_mReaderName, var_mFormalInputParameterList, var_mReturnedTypeName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 631))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 631)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 621)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 622)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 623)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 624)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 625)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 628)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 629)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 630)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 621)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 622)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 623)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 624)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 625)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 628)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 629)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 630)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 651)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 652)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 653)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 654)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_abstractCategoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 656))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 656)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 651)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 652)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 653)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 654)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 651)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 652)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 653)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 654)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 675)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 676)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 677)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 678)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 679)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractCategoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 681))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 681)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 675)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 676)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 677)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 678)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 679)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 675)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 676)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 677)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 678)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 679)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 700)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 701)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 702)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 704)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfModifierLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 706)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 707)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_categoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList, var_routineInstructionList, var_endOfModifierLocation  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 708))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 708)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 700)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 701)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 702)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 704)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 707)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 700)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 701)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_categoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 702)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 704)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 707)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 729)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 730)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 731)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 732)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 734)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, inCompiler) ;
  GALGAS_location var_endOfModifierLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 736)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 737)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingCategoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList, var_routineInstructionList, var_endOfModifierLocation  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 738))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 738)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 729)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 730)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 731)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 732)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 734)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 737)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 729)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 730)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 731)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 732)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 734)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 737)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_graph) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 759)) ;
  GALGAS_lstring var_graphTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 760)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 761)) ;
  GALGAS_lstring var_associatedListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 762)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 763)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 764)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 765)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 768)) ;
      GALGAS_lstring var_insertName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 769)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 770)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 771)) ;
      GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 772)) ;
      var_graphInsertModifierList.addAssign_operation (var_insertName, var_errorMessage  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 773)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 775)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName, var_associatedListTypeName, var_graphInsertModifierList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 776))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 776)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_graph) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 759)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 760)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 761)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 762)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 763)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 764)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 768)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 769)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 770)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 771)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 772)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 775)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_graph) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 759)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 760)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 761)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 762)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 763)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 764)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 768)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 769)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 770)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 771)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 772)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 775)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i22_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 795)) ;
  GALGAS_lstring var_externTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 796)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 797)) ;
  GALGAS_string var_cppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 801)) ;
      var_cppPredeclarationCode.dotAssign_operation (var_cppPredeclarationCodeElement.mAttribute_string  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 802)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 804)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 805)) ;
  GALGAS_string var_cppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppClassCodeElement = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 809)) ;
      var_cppClassCode.dotAssign_operation (var_cppClassCodeElement.mAttribute_string  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 810)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 812)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 813)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList = GALGAS_externTypeConstructorList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 814)) ;
  GALGAS_externTypeReaderList var_externTypeReaderList = GALGAS_externTypeReaderList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 815)) ;
  GALGAS_externTypeModifierList var_externTypeModifierList = GALGAS_externTypeModifierList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 816)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList = GALGAS_externTypeMethodList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 817)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 820)) ;
      GALGAS_lstring var_constructorName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 821)) ;
      GALGAS_typeNameFormalParameterNameList var_argumentTypeList = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 822)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 825)) ;
          GALGAS_lstring var_argumentTypeName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 826)) ;
          GALGAS_lstring var_argumentName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 827)) ;
          var_argumentTypeList.addAssign_operation (var_selector, var_argumentTypeName, var_argumentName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 828)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 830)) ;
      GALGAS_lstring var_resultTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 831)) ;
      var_externTypeConstructorList.addAssign_operation (var_constructorName, var_resultTypeName, var_argumentTypeList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 832)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 837)) ;
      GALGAS_lstring var_readerName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 838)) ;
      GALGAS_typeNameFormalParameterNameList var_argumentTypeList = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 839)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 842)) ;
          GALGAS_lstring var_argumentTypeName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 843)) ;
          GALGAS_lstring var_argumentName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 844)) ;
          var_argumentTypeList.addAssign_operation (var_selector, var_argumentTypeName, var_argumentName  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 845)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 847)) ;
      GALGAS_lstring var_resultTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 848)) ;
      var_externTypeReaderList.addAssign_operation (var_readerName, var_resultTypeName, var_argumentTypeList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 849)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 854)) ;
      GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 855)) ;
      GALGAS_formalParameterListAST var_formalParameterList ;
      nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
      var_externTypeModifierList.addAssign_operation (var_modifierName, var_formalParameterList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 857)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 861)) ;
      GALGAS_lstring var_methodName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 862)) ;
      GALGAS_formalParameterListAST var_formalParameterList ;
      nt_formal_5F_parameter_5F_list_ (var_formalParameterList, inCompiler) ;
      var_externTypeMethodList.addAssign_operation (var_methodName, var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 867))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 864)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 869)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool (false), var_externTypeName, var_cppPredeclarationCode, var_cppClassCode, var_externTypeConstructorList, var_externTypeReaderList, var_externTypeModifierList, var_externTypeMethodList  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 870))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 870)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 795)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 796)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 797)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 801)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 804)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 805)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 809)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 812)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 813)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 820)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 821)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 825)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 826)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 827)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 830)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 831)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 837)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 838)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 842)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 843)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 844)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 847)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 848)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 854)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 855)) ;
      nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 861)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 862)) ;
      nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 869)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 795)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 796)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 797)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 801)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 804)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 805)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 809)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 812)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 813)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 820)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 821)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 825)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 826)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 827)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 830)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 831)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 837)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 838)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 842)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 843)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 844)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 847)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 848)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 854)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 855)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 861)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 862)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 869)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i23_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_enum) COMMA_SOURCE_FILE ("enum.galgas", 31)) ;
  GALGAS_lstring var_mEnumTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("enum.galgas", 33)) ;
  GALGAS_enumConstantList var_mConstantList = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("enum.galgas", 36)) ;
    GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 37)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("enum.galgas", 38)) ;
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("enum.galgas", 41)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 43)) ;
        GALGAS_lstring var_associatedValueName ;
        switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
        case 1: {
          var_associatedValueName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("enum.galgas", 46)) ;
        } break ;
        case 2: {
          var_associatedValueName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 48)) ;
        } break ;
        default:
          break ;
        }
        var_associatedValueTypeList.addAssign_operation (var_associatedValueType, var_associatedValueName  COMMA_SOURCE_FILE ("enum.galgas", 50)) ;
        switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("enum.galgas", 53)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList.addAssign_operation (var_constantName, var_associatedValueTypeList  COMMA_SOURCE_FILE ("enum.galgas", 55)) ;
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("enum.galgas", 58)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName, var_mConstantList  COMMA_SOURCE_FILE ("enum.galgas", 59))  COMMA_SOURCE_FILE ("enum.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_enum) COMMA_SOURCE_FILE ("enum.galgas", 31)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("enum.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("enum.galgas", 36)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 37)) ;
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("enum.galgas", 41)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 43)) ;
        switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 48)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("enum.galgas", 53)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("enum.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_enum) COMMA_SOURCE_FILE ("enum.galgas", 31)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("enum.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("enum.galgas", 36)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 37)) ;
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("enum.galgas", 41)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("enum.galgas", 43)) ;
        switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("enum.galgas", 48)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("enum.galgas", 53)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("enum.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i24_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("shared-map.galgas", 83)) ;
  GALGAS_lstring var_mMapTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("shared-map.galgas", 85)) ;
  GALGAS_lstring var_mapProxyTypeName = GALGAS_lstring::constructor_new (var_mMapTypeName.mAttribute_string.add_operation (GALGAS_string ("-proxy"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 86)), var_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("shared-map.galgas", 86)) ;
  GALGAS_lstringlist var_mapAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 88)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("shared-map.galgas", 91)) ;
      var_mapAttributeList.addAssign_operation (var_attribute  COMMA_SOURCE_FILE ("shared-map.galgas", 92)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 95)) ;
  GALGAS_propertyInCollectionListAST var_propertyList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 96)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 97)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 98)) ;
  GALGAS_mapStateList var_mapStateList = GALGAS_mapStateList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 99)) ;
  GALGAS_mapOverrideBlockListAST var_mapOverrideBlockListAST = GALGAS_mapOverrideBlockListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 100)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("shared-map.galgas", 103)) ;
      GALGAS_lstring var_stateName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 104)) ;
      GALGAS_mapAutomatonMessageKind var_stateMessageKind ;
      GALGAS_lstring var_stateMessage ;
      switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
      case 1: {
        var_stateMessageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 108)) ;
        var_stateMessage = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 109))  COMMA_SOURCE_FILE ("shared-map.galgas", 109)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 111)) ;
        var_stateMessage = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 112)) ;
        var_stateMessageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("shared-map.galgas", 113)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 115)) ;
        var_stateMessage = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 116)) ;
        var_stateMessageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("shared-map.galgas", 117)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 119)) ;
      GALGAS_mapStateTransitionList var_transitionList = GALGAS_mapStateTransitionList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 120)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_actionName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 123)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 124)) ;
          GALGAS_lstring var_targetStateName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 125)) ;
          GALGAS_mapAutomatonMessageKind var_transitionMessageKind ;
          GALGAS_lstring var_transitionMessage ;
          switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
          case 1: {
            var_transitionMessageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 129)) ;
            var_transitionMessage = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 130))  COMMA_SOURCE_FILE ("shared-map.galgas", 130)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 132)) ;
            var_transitionMessage = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 133)) ;
            var_transitionMessageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("shared-map.galgas", 134)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 136)) ;
            var_transitionMessage = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 137)) ;
            var_transitionMessageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("shared-map.galgas", 138)) ;
          } break ;
          default:
            break ;
          }
          var_transitionList.addAssign_operation (var_actionName, var_targetStateName, var_transitionMessageKind, var_transitionMessage  COMMA_SOURCE_FILE ("shared-map.galgas", 140)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      var_mapStateList.addAssign_operation (var_stateName, var_stateMessageKind, var_stateMessage, var_transitionList  COMMA_SOURCE_FILE ("shared-map.galgas", 146)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 151)) ;
    } break ;
    case 3: {
      nt_attribute_5F_declaration_ (var_propertyList, inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("shared-map.galgas", 155)) ;
      nt_insert_5F_method_5F_declaration_ (var_mInsertMethodList, inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("shared-map.galgas", 158)) ;
      GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 159)) ;
      GALGAS_lstring var_actionName ;
      switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
      case 1: {
        var_actionName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 162))  COMMA_SOURCE_FILE ("shared-map.galgas", 162)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("shared-map.galgas", 164)) ;
        var_actionName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 165)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 167)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("shared-map.galgas", 168)) ;
      GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 169)) ;
      var_mSearchMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage, var_actionName  COMMA_SOURCE_FILE ("shared-map.galgas", 170)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("shared-map.galgas", 175)) ;
      GALGAS_lstring var_overrideBlockName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 176)) ;
      GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_31_AST = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 178)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_sourceState_31_ = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 181)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 182)) ;
          GALGAS_lstring var_sourceState_32_ = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 183)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 184)) ;
          GALGAS_lstring var_targetState = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 185)) ;
          GALGAS_mapAutomatonMessageKind var_messageKind ;
          GALGAS_lstring var_messageText ;
          switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
          case 1: {
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 189)) ;
            var_messageText = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 190))  COMMA_SOURCE_FILE ("shared-map.galgas", 190)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 192)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("shared-map.galgas", 193)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 194)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 196)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("shared-map.galgas", 197)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 198)) ;
          } break ;
          default:
            break ;
          }
          var_mapOverrideBlockDescriptor_31_AST.addAssign_operation (var_sourceState_31_, var_sourceState_32_, var_targetState, var_messageKind, var_messageText  COMMA_SOURCE_FILE ("shared-map.galgas", 200)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 202)) ;
      GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_32_AST = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 203)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 204)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_sourceState_31_ = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 207)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 208)) ;
          GALGAS_lstring var_sourceState_32_ = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 209)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 210)) ;
          GALGAS_lstring var_targetState = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 211)) ;
          GALGAS_mapAutomatonMessageKind var_messageKind ;
          GALGAS_lstring var_messageText ;
          switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
          case 1: {
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 215)) ;
            var_messageText = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 216))  COMMA_SOURCE_FILE ("shared-map.galgas", 216)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 218)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("shared-map.galgas", 219)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 220)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 222)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("shared-map.galgas", 223)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 224)) ;
          } break ;
          default:
            break ;
          }
          var_mapOverrideBlockDescriptor_32_AST.addAssign_operation (var_sourceState_31_, var_sourceState_32_, var_targetState, var_messageKind, var_messageText  COMMA_SOURCE_FILE ("shared-map.galgas", 226)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 228)) ;
      var_mapOverrideBlockListAST.addAssign_operation (var_overrideBlockName, var_mapOverrideBlockDescriptor_31_AST, var_mapOverrideBlockDescriptor_32_AST  COMMA_SOURCE_FILE ("shared-map.galgas", 229)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("shared-map.galgas", 231)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 233)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_sharedMapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName, var_mapAttributeList, var_propertyList, var_mInsertMethodList, var_mSearchMethodList, var_mapStateList, var_mapOverrideBlockListAST  COMMA_SOURCE_FILE ("shared-map.galgas", 235))  COMMA_SOURCE_FILE ("shared-map.galgas", 235)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_mapProxyDeclarationAST::constructor_new (GALGAS_bool (false), var_mapProxyTypeName, var_mMapTypeName  COMMA_SOURCE_FILE ("shared-map.galgas", 246))  COMMA_SOURCE_FILE ("shared-map.galgas", 246)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("shared-map.galgas", 83)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("shared-map.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("shared-map.galgas", 91)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 95)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("shared-map.galgas", 103)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 104)) ;
      switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 111)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 112)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 115)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 116)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 119)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 123)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 124)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 125)) ;
          switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 132)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 133)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 136)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 137)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 151)) ;
    } break ;
    case 3: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("shared-map.galgas", 155)) ;
      nt_insert_5F_method_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 159)) ;
      switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("shared-map.galgas", 164)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 165)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 167)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("shared-map.galgas", 168)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 169)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("shared-map.galgas", 175)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 176)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 178)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 181)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 182)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 183)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 184)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 185)) ;
          switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 192)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 194)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 196)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 198)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 202)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 204)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 207)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 208)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 209)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 210)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 211)) ;
          switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 218)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 220)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 222)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 224)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 228)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("shared-map.galgas", 231)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 233)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("shared-map.galgas", 83)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("shared-map.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("shared-map.galgas", 91)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 95)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("shared-map.galgas", 103)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 104)) ;
      switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 111)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 112)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 115)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 116)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 119)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 123)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 124)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 125)) ;
          switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 132)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 133)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 136)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 137)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 151)) ;
    } break ;
    case 3: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("shared-map.galgas", 155)) ;
      nt_insert_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 159)) ;
      switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("shared-map.galgas", 164)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 165)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 167)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("shared-map.galgas", 168)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 169)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("shared-map.galgas", 175)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 176)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 178)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 181)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 182)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 183)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 184)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 185)) ;
          switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 192)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 194)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 196)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 198)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 202)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("shared-map.galgas", 204)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 207)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("shared-map.galgas", 208)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 209)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("shared-map.galgas", 210)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("shared-map.galgas", 211)) ;
          switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("shared-map.galgas", 218)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 220)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("shared-map.galgas", 222)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("shared-map.galgas", 224)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 228)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("shared-map.galgas", 231)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("shared-map.galgas", 233)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i25_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("list.galgas", 19)) ;
  GALGAS_lstring var_mListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("list.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("list.galgas", 21)) ;
  GALGAS_propertyInCollectionListAST var_mAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("list.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_ (var_mAttributeList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("list.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("list.galgas", 29)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_mListTypeName, var_mAttributeList  COMMA_SOURCE_FILE ("list.galgas", 30))  COMMA_SOURCE_FILE ("list.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("list.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("list.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("list.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("list.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("list.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("list.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("list.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("list.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("list.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("list.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_struct) COMMA_SOURCE_FILE ("struct.galgas", 20)) ;
  GALGAS_lstring var_structTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("struct.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("struct.galgas", 22)) ;
  GALGAS_propertyInCollectionListAST var_attributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("struct.galgas", 23)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_ (var_attributeList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("struct.galgas", 28)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("struct.galgas", 30)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (false), var_structTypeName, var_attributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("struct.galgas", 31))  COMMA_SOURCE_FILE ("struct.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_struct) COMMA_SOURCE_FILE ("struct.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("struct.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("struct.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("struct.galgas", 28)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("struct.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_struct) COMMA_SOURCE_FILE ("struct.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("struct.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("struct.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("struct.galgas", 28)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("struct.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i27_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("sorted-list.galgas", 27)) ;
  GALGAS_lstring var_sortedListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("sorted-list.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 29)) ;
  GALGAS_propertyInCollectionListAST var_attributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_ (var_attributeList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 35)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 38)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 39)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList, inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("sorted-list.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 45)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool (false), var_sortedListTypeName, var_attributeList, var_sortDescriptorList  COMMA_SOURCE_FILE ("sorted-list.galgas", 46))  COMMA_SOURCE_FILE ("sorted-list.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("sorted-list.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("sorted-list.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 35)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 38)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("sorted-list.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("sorted-list.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("sorted-list.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 35)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("sorted-list.galgas", 38)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("sorted-list.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("sorted-list.galgas", 45)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isTemplate ;
  switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_isTemplate = GALGAS_bool (true) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
    var_isTemplate = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 29)) ;
  GALGAS_lstring var_lexiqueComponentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 31)) ;
  GALGAS_lstring var_indexingDirectory ;
  switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_indexingDirectory = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 37)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 38)) ;
    var_indexingDirectory = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 41)) ;
  GALGAS_metamodelTemplateDelimitorListAST var_templateDelimitorList = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 43)) ;
  GALGAS_templateReplacementListAST var_templateReplacementList = GALGAS_templateReplacementListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 44)) ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeList = GALGAS_lexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 45)) ;
  GALGAS_lexicalStyleListAST var_lexicalStyleList = GALGAS_lexicalStyleListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 46)) ;
  GALGAS_terminalDeclarationListAST var_terminalDeclarationList = GALGAS_terminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 47)) ;
  GALGAS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 48)) ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationList = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 49)) ;
  GALGAS_lexicalRuleListAST var_lexicalRuleList = GALGAS_lexicalRuleListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 50)) ;
  GALGAS_externRoutineListAST var_externRoutineList = GALGAS_externRoutineListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 51)) ;
  GALGAS_externFunctionListAST var_externFunctionList = GALGAS_externFunctionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 52)) ;
  GALGAS_indexingListAST var_indexingListAST = GALGAS_indexingListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_extern_5F_routine_5F_declaration_ (var_externRoutineList, inCompiler) ;
    } break ;
    case 3: {
      nt_extern_5F_function_5F_declaration_ (var_externFunctionList, inCompiler) ;
    } break ;
    case 4: {
      nt_template_5F_delimitor_ (var_templateDelimitorList, inCompiler) ;
    } break ;
    case 5: {
      nt_template_5F_replacement_ (var_templateReplacementList, inCompiler) ;
    } break ;
    case 6: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList, inCompiler) ;
    } break ;
    case 7: {
      nt_style_5F_declaration_ (var_lexicalStyleList, inCompiler) ;
    } break ;
    case 8: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList, inCompiler) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 72)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
      case 1: {
        nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList, inCompiler) ;
      } break ;
      case 2: {
        nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList, inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 11: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList, inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 81)) ;
      GALGAS_lstring var_indexName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 82)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 83)) ;
      GALGAS_lstring var_indexComment = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 84)) ;
      var_indexingListAST.addAssign_operation (var_indexName, var_indexComment  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 85)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 87)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_lexiqueComponentAST::constructor_new (GALGAS_bool (false), var_lexiqueComponentName, var_isTemplate, var_templateDelimitorList, var_templateReplacementList, var_lexicalAttributeList, var_lexicalStyleList, var_terminalDeclarationList, var_lexicalMessageDeclarationList, var_lexicalListDeclarationList, var_lexicalRuleList, var_externRoutineList, var_externFunctionList, var_indexingListAST, var_indexingDirectory  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 88))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 88)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 31)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 37)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 38)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_extern_5F_routine_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_extern_5F_function_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_template_5F_delimitor_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_template_5F_replacement_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_lexical_5F_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_style_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_terminal_5F_declaration_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_list_5F_declaration_parse (inCompiler) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 72)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
      case 1: {
        nt_lexical_5F_explicit_5F_rule_parse (inCompiler) ;
      } break ;
      case 2: {
        nt_lexical_5F_implicit_5F_rule_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 11: {
      nt_lexical_5F_message_5F_declaration_parse (inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 81)) ;
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 82)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 83)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 84)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 87)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 31)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 37)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 38)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_extern_5F_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_extern_5F_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_template_5F_delimitor_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_template_5F_replacement_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_lexical_5F_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_style_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_terminal_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_list_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 72)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
      case 1: {
        nt_lexical_5F_explicit_5F_rule_indexing (inCompiler) ;
      } break ;
      case 2: {
        nt_lexical_5F_implicit_5F_rule_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 11: {
      nt_lexical_5F_message_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 81)) ;
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 82)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 83)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 84)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i1_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 109)) ;
  GALGAS_lstring var_startString = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 110)) ;
  GALGAS_lstringlist var_optionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 114)) ;
      var_optionList.addAssign_operation (var_optionName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 115)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 117)) ;
  GALGAS_lstring var_endString = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
  ioArgument_ioTemplateDelimitorList.addAssign_operation (var_startString, var_optionList, var_endString  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 109)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 110)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 117)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 109)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 110)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 117)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i2_ (GALGAS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 125)) ;
  GALGAS_lstring var_matchString = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 126)) ;
  GALGAS_lstring var_replacementString ;
  GALGAS_lstring var_replacementFunction ;
  switch (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 130)) ;
    var_replacementString = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 131)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 132)) ;
    var_replacementFunction = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 133)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 135)) ;
    var_replacementString = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 136)) ;
    var_replacementFunction = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 137))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 137)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssign_operation (var_matchString, var_replacementString, var_replacementFunction  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 139)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 125)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 126)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 130)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 131)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 132)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 133)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 135)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 125)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 126)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 130)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 131)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 132)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 133)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 135)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i3_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 146)) ;
  GALGAS_lstring var_messageName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 147)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 148)) ;
  GALGAS_lstring var_messageValue = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 149)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssign_operation (var_messageName, var_messageValue  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 146)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 147)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 148)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 149)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 146)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 147)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 148)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 149)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i4_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 156)) ;
  GALGAS_lstring var_listName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 157)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssign_operation (GALGAS_lexicalImplicitRuleAST::constructor_new (var_listName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 158))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 158)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 156)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 157)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 156)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i5_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lexicalExpressionAST var_lexicalRuleExpression ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 165)) ;
  GALGAS_lexicalInstructionListAST var_instructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 166)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_instructionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 171)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssign_operation (GALGAS_lexicalExplicitRuleAST::constructor_new (var_lexicalRuleExpression, var_instructionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 172))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 165)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 171)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 165)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 178)) ;
  GALGAS_lexicalInstructionAST var_instruction ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 180)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 178)) ;
  nt_lexical_5F_send_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 178)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i7_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_sentTerminal = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 186)) ;
  outArgument_outInstruction = GALGAS_lexicalSimpleSendInstructionAST::constructor_new (var_sentTerminal  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 186)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 186)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lexicalSendSearchListAST var_lexicalSendSearchList = GALGAS_lexicalSendSearchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 193)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 194)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 196)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 197)) ;
    GALGAS_lstring var_searchListName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 198)) ;
    var_lexicalSendSearchList.addAssign_operation (var_attributeName, var_searchListName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 199)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 200)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction ;
  switch (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_defaultSentTerminal = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
    var_lexicalSendDefaultAction = GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (var_defaultSentTerminal  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 207)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 209)) ;
    GALGAS_lstring var_defaultErrorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 210)) ;
    var_lexicalSendDefaultAction = GALGAS_lexicalErrorByDefaultAST::constructor_new (var_defaultErrorMessageName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 211)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_lexicalStructuredSendInstructionAST::constructor_new (var_lexicalSendSearchList, var_lexicalSendDefaultAction  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 213)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 194)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 196)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 197)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 198)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 200)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 209)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 210)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 194)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 196)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 197)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 198)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 200)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 209)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 210)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i9_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 221)) ;
  GALGAS_lexicalInstructionListAST var_repeatedInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 222)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lexicalWhileBranchListAST var_lexicalWhileBranchList = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 227)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList, inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 232)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_endRepeat = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 235)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_endRepeat.mAttribute_string.objectCompare (GALGAS_string ("repeat"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (var_endRepeat.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the attribute should be '%repeat'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 237)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_lexicalInstructionAST var_i = GALGAS_lexicalRepeatInstructionAST::constructor_new (var_repeatedInstructionList, var_lexicalWhileBranchList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 240)) ;
  ioArgument_ioInstructionList.addAssign_operation (var_i  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 243)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 221)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 232)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 235)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 221)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
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
    switch (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 232)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 235)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i10_ (GALGAS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 249)) ;
  GALGAS_lexicalExpressionAST var_whileExpression ;
  nt_lexical_5F_expression_ (var_whileExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 252)) ;
  GALGAS_lexicalInstructionListAST var_whileInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 253)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_whileInstructionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssign_operation (var_whileExpression, var_whileInstructionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 258)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 249)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 252)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 249)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 252)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
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

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i11_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 264)) ;
  GALGAS_lexicalSelectBranchListAST var_lexicalWhileBranchList = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 265)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 267)) ;
    GALGAS_lexicalExpressionAST var_selectExpression ;
    nt_lexical_5F_expression_ (var_selectExpression, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 269)) ;
    GALGAS_lexicalInstructionListAST var_selectInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 270)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
      case 2: {
        nt_lexical_5F_instruction_ (var_selectInstructionList, inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    var_lexicalWhileBranchList.addAssign_operation (var_selectExpression, var_selectInstructionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 275)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 278)) ;
  GALGAS_lexicalInstructionListAST var_defaultInstructionList = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 279)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_defaultInstructionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 284)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_endSelect = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 287)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_endSelect.mAttribute_string.objectCompare (GALGAS_string ("select"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (var_endSelect.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the attribute should be '%select'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 289)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_lexicalInstructionAST var_i = GALGAS_lexicalSelectInstructionAST::constructor_new (var_lexicalWhileBranchList, var_defaultInstructionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 292)) ;
  ioArgument_ioInstructionList.addAssign_operation (var_i  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 295)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 264)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 267)) ;
    nt_lexical_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 269)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
      case 2: {
        nt_lexical_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 278)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 284)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 287)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 264)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 267)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 269)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
      case 2: {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 278)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 284)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 287)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_actionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 301)) ;
  GALGAS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 302)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 303)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 306)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '!'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 308)) ;
      }
      GALGAS_location var_passingModeLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 310)) ;
      GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg, inCompiler) ;
      var_actualArgumentList.addAssign_operation (GALGAS_lexicalFormalInputArgumentAST::constructor_new (var_passingModeLocation, var_arg  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 312))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 312)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 314)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '!\?'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 316)) ;
      }
      GALGAS_location var_passingModeLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 318)) ;
      GALGAS_lstring var_attributeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 319)) ;
      GALGAS_lexicalAttributeInputOutputArgumentAST var_arg = GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (var_passingModeLocation, var_attributeName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 320)) ;
      var_actualArgumentList.addAssign_operation (var_arg  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 321)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstringlist var_errorMessageList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 323)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 326)) ;
    bool repeatFlag_5 = true ;
    while (repeatFlag_5) {
      GALGAS_lstring var_errorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 328)) ;
      var_errorMessageList.addAssign_operation (var_errorMessageName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 329)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 331)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 334)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRoutineInstructionAST::constructor_new (var_actionName, var_actualArgumentList, var_errorMessageList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 335))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 335)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 301)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 303)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 306)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 314)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 319)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 326)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 328)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 331)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 334)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 301)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 303)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 306)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 314)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 319)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 326)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 328)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 331)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 334)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i13_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lchar var_character = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 345)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCharacterInputArgumentAST::constructor_new (var_character  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 346)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 345)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 345)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_luint var_unsignedValue = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 353)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalUnsignedInputArgumentAST::constructor_new (var_unsignedValue  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 354)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 353)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 353)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_location var_currentLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_new (var_currentLocation  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 363)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lstring var_idf = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 370)) ;
  nt_function_5F_call_5F_or_5F_attribute_ (var_idf, outArgument_outEffectiveArgument, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 370)) ;
  nt_function_5F_call_5F_or_5F_attribute_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 370)) ;
  nt_function_5F_call_5F_or_5F_attribute_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i17_ (const GALGAS_lstring constinArgument_inIdf,
                                                                                                                               GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outArgument,
                                                                                                                               C_Lexique_galgas_33_Scanner * /* inCompiler */) {
  outArgument_outArgument.drop () ; // Release 'out' argument
  outArgument_outArgument = GALGAS_lexicalAttributeInputArgumentAST::constructor_new (constinArgument_inIdf  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 377)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i17_indexing (C_Lexique_galgas_33_Scanner * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i18_ (const GALGAS_lstring constinArgument_inIdf,
                                                                                                                               GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outArgument,
                                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outArgument.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 383)) ;
  GALGAS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 384)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 387)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '!'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 389)) ;
      }
      GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg, inCompiler) ;
      var_functionActualArgumentList.addAssign_operation (var_arg  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 393)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 395)) ;
  outArgument_outArgument = GALGAS_lexicalFunctionInputArgumentAST::constructor_new (constinArgument_inIdf, var_functionActualArgumentList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 396)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 383)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 387)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 395)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 383)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 387)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 395)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 402)) ;
  GALGAS_lstring var_errorMessageName ;
  var_errorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 404)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalErrorInstructionAST::constructor_new (var_errorMessageName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 405))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 405)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 402)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 404)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 402)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 404)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 411)) ;
  GALGAS_lstring var_warningMessageName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 412)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalWarningInstructionAST::constructor_new (var_warningMessageName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 413))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 413)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 411)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 412)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 411)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 412)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 419)) ;
  GALGAS_lstring var_terminalName ;
  var_terminalName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 421)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalDropInstructionAST::constructor_new (var_terminalName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 422))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 422)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 419)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 421)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 419)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 421)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_tag) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 428)) ;
  GALGAS_lstring var_tagName ;
  var_tagName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 430)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalTagInstructionAST::constructor_new (var_tagName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 431))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 431)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_tag) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 428)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 430)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_tag) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 428)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 430)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 437)) ;
  GALGAS_lstring var_tagName ;
  var_tagName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 439)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 440)) ;
  GALGAS_lstring var_terminalName ;
  var_terminalName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 442)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRewindInstructionAST::constructor_new (var_tagName, var_terminalName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 443))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 443)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 439)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 440)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 442)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 439)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 440)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 442)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 449)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalLogInstructionAST::constructor_new (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 450))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 450)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 449)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 449)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i25_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_term_ (outArgument_outExpression, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_term_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_term_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i26_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 465)) ;
      GALGAS_lexicalExpressionAST var_rightExpression ;
      nt_lexical_5F_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_lexicalOrExpressionAST::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 468)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 465)) ;
      nt_lexical_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 465)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_string = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 475)) ;
  outArgument_outExpression = GALGAS_lexicalStringMatchAST::constructor_new (var_string  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 476)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 475)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 475)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 482)) ;
  GALGAS_lstring var_string = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 483)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 484)) ;
  GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 485)) ;
  outArgument_outExpression = GALGAS_lexicalStringNotMatchAST::constructor_new (var_string, var_errorMessage  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 486)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 482)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 483)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 484)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 485)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 482)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 483)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 484)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 485)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_character = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 492)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_lexicalCharacterMatchAST::constructor_new (var_character  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 494)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 496)) ;
    GALGAS_lchar var_upperBound = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
    outArgument_outExpression = GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (var_character, var_upperBound  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 498)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 492)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 496)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 492)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 496)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i30_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_characterSet = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 505)) ;
  outArgument_outExpression = GALGAS_lexicalCharacterSetMatchAST::constructor_new (var_characterSet  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 506)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 505)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 505)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i31_ (GALGAS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 512)) ;
  GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 513)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 514)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 517)) ;
      GALGAS_lstring var_sentAttribute = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 518)) ;
      var_sentAttributeList.addAssign_operation (var_selector, var_sentAttribute  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 519)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_theStyle ;
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 523)) ;
    var_theStyle = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 524)) ;
  } break ;
  case 2: {
    var_theStyle = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 526))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 526)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 529)) ;
  GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 530)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 531)) ;
  GALGAS_lexicalListEntryListAST var_entryList = GALGAS_lexicalListEntryListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 532)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList, inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 536)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 538)) ;
  ioArgument_ioLexicalListDeclarationList.addAssign_operation (var_name, var_theStyle, var_errorMessage, var_sentAttributeList, var_entryList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 539)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 512)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 513)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 517)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 518)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 523)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 524)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 529)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 530)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 531)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_parse (inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 536)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 538)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 512)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 513)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 517)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 518)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 523)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 524)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 529)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 530)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 531)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 536)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 538)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i32_ (GALGAS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_entrySpelling = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 545)) ;
  GALGAS_lstringlist var_optionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 546)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 549)) ;
    var_optionList.addAssign_operation (var_optionName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 550)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_terminalSpelling ;
  switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 554)) ;
    var_terminalSpelling = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 555)) ;
  } break ;
  case 2: {
    var_terminalSpelling = var_entrySpelling ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssign_operation (var_entrySpelling, var_terminalSpelling, var_optionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 559)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 545)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 549)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 554)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 555)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 545)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 549)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 554)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 555)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i33_ (GALGAS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 565)) ;
  GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 566)) ;
  ioArgument_ioLexicalAttributeList.addAssign_operation (var_typeName, var_name  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 567)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 565)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 566)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 565)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 566)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i34_ (GALGAS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 573)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 574)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 577)) ;
      GALGAS_lstring var_sentAttribute = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 578)) ;
      var_sentAttributeList.addAssign_operation (var_selector, var_sentAttribute  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 579)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_theStyle = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 581)) ;
  GALGAS_lstringlist var_optionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 582)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 585)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_theStyle.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 587)), GALGAS_string ("duplicated style reference")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 587)) ;
      }
      var_theStyle = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 589)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 591)) ;
      var_optionList.addAssign_operation (var_optionName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 592)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 594)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 595)) ;
  GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 596)) ;
  ioArgument_ioTerminalDeclarationList.addAssign_operation (var_name, var_sentAttributeList, var_errorMessage, var_theStyle, var_optionList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 597)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 573)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 577)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 578)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 585)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 589)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 591)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 594)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 595)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 596)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 573)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 577)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 578)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 585)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 589)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 591)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 594)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 595)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 596)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i35_ (GALGAS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 603)) ;
  GALGAS_lstring var_styleIdentifier = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 604)) ;
  const enumGalgasBool test_0 = var_styleIdentifier.mAttribute_string.reader_containsCharacter (GALGAS_char (TO_UNICODE (95)) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 605)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_styleIdentifier.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("for compatibility with latex formatting, a style name should not contain '_' character")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 606)) ;
  }
  const enumGalgasBool test_2 = var_styleIdentifier.mAttribute_string.reader_containsCharacterInRange (GALGAS_char (TO_UNICODE (48)), GALGAS_char (TO_UNICODE (57)) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 608)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (var_styleIdentifier.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("for compatibility with latex formatting, a style name should not contain any digit")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 609)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 611)) ;
  GALGAS_lstring var_comment = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
  ioArgument_ioLexicalStyleList.addAssign_operation (var_styleIdentifier, var_comment  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 613)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 603)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 604)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 611)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 603)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 604)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 611)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i36_ (GALGAS_externRoutineListAST & ioArgument_ioExternRoutineList,
                                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 620)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 621)) ;
  GALGAS_lstring var_routineName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 622)) ;
  GALGAS_lexicalExternRoutineFormalArgumentListAST var_lexicalRoutineFormalArgumentList = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 623)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_30 (inCompiler)) {
    case 2: {
      GALGAS_lexicalArgumentModeAST var_lexicalArgumentMode ;
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 628)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '\?!'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 630)) ;
        }
        var_lexicalArgumentMode = GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 632)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 634)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '\?'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 636)) ;
        }
        var_lexicalArgumentMode = GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 638)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_lexicalTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 640)) ;
      GALGAS_lstring var_formalArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 641)) ;
      var_lexicalRoutineFormalArgumentList.addAssign_operation (var_lexicalArgumentMode, var_lexicalTypeName, var_formalArgumentName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 642)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_stringlist var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 644)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
    bool repeatFlag_5 = true ;
    while (repeatFlag_5) {
      GALGAS_lstring var_errorMessageName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 649)) ;
      var_errorMessageList.addAssign_operation (var_errorMessageName.reader_string (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 650))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 650)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 652)) ;
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
  ioArgument_ioExternRoutineList.addAssign_operation (var_routineName, var_lexicalRoutineFormalArgumentList, var_errorMessageList  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 655)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 620)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 621)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 622)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_30 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 628)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 634)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 640)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 641)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 649)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 652)) ;
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
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 620)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 621)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 622)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_30 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 628)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 634)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 640)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 641)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 649)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 652)) ;
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
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i37_ (GALGAS_externFunctionListAST & ioArgument_ioExternFunctionList,
                                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 662)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 663)) ;
  GALGAS_lstring var_functionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 664)) ;
  GALGAS_lexicalExternFunctionFormalArgumentListAST var_lexicalFunctionFormalArgumentList = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 665)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_34 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 668)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (var_selector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the selector should be '\?'")  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 670)) ;
      }
      GALGAS_lstring var_lexicalTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 672)) ;
      GALGAS_lstring var_formalArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 673)) ;
      var_lexicalFunctionFormalArgumentList.addAssign_operation (var_lexicalTypeName, var_formalArgumentName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 674)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 676)) ;
  GALGAS_lstring var_returnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 677)) ;
  ioArgument_ioExternFunctionList.addAssign_operation (var_functionName, var_lexicalFunctionFormalArgumentList, var_returnedTypeName  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 678)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 662)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 663)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 664)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 668)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 672)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 673)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 676)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 677)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 662)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 663)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 664)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 668)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 672)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 673)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 676)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 677)) ;
}

