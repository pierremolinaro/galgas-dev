#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::~ GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @syntaxInstructionListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxInstructionListForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element ("syntaxInstructionListForGrammarAnalysis-element",
                                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element result ;
  const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element * p = (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element::GALGAS_branchListForGrammarAnalysis_2D_element (void) :
mProperty_mSyntaxInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element::~ GALGAS_branchListForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element::GALGAS_branchListForGrammarAnalysis_2D_element (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0) :
mProperty_mSyntaxInstructionList (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_branchListForGrammarAnalysis_2D_element (GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_branchListForGrammarAnalysis_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_branchListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_branchListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxInstructionList.objectCompare (inOperand.mProperty_mSyntaxInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_branchListForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @branchListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis_2D_element::getter_mSyntaxInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxInstructionList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@branchListForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2D_element ("branchListForGrammarAnalysis-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_branchListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_branchListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis_2D_element result ;
  const GALGAS_branchListForGrammarAnalysis_2D_element * p = (const GALGAS_branchListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_branchListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element::GALGAS_rowList_2D_element (void) :
mProperty_columns () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element::~ GALGAS_rowList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element::GALGAS_rowList_2D_element (const GALGAS__32_stringlist & inOperand0) :
mProperty_columns (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_rowList_2D_element (GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::constructor_new (const GALGAS__32_stringlist & inOperand0 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_rowList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_rowList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_rowList_2D_element::objectCompare (const GALGAS_rowList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_columns.objectCompare (inOperand.mProperty_columns) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_rowList_2D_element::isValid (void) const {
  return mProperty_columns.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList_2D_element::drop (void) {
  mProperty_columns.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @rowList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_columns.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_rowList_2D_element::getter_columns (UNUSED_LOCATION_ARGS) const {
  return mProperty_columns ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@rowList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_rowList_2D_element ("rowList-element",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_rowList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_rowList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_rowList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_rowList_2D_element result ;
  const GALGAS_rowList_2D_element * p = (const GALGAS_rowList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_rowList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rowList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element::GALGAS_programListForGeneration_2D_element (void) :
mProperty_mDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element::~ GALGAS_programListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element::GALGAS_programListForGeneration_2D_element (const GALGAS_semanticDeclarationForGeneration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element GALGAS_programListForGeneration_2D_element::constructor_new (const GALGAS_semanticDeclarationForGeneration & inOperand0 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_programListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_programListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_programListForGeneration_2D_element::objectCompare (const GALGAS_programListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclaration.objectCompare (inOperand.mProperty_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_programListForGeneration_2D_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration_2D_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @programListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration GALGAS_programListForGeneration_2D_element::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeclaration ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@programListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programListForGeneration_2D_element ("programListForGeneration-element",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element GALGAS_programListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_programListForGeneration_2D_element result ;
  const GALGAS_programListForGeneration_2D_element * p = (const GALGAS_programListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_programListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element::GALGAS_genericExtensionMethodListMap_2D_element (void) :
mProperty_key (),
mProperty_mList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element::~ GALGAS_genericExtensionMethodListMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element::GALGAS_genericExtensionMethodListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element GALGAS_genericExtensionMethodListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_genericExtensionMethodListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element GALGAS_genericExtensionMethodListMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_genericExtensionMethodListMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_genericExtensionMethodListMap_2D_element::objectCompare (const GALGAS_genericExtensionMethodListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_key.objectCompare (inOperand.mProperty_key) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mList.objectCompare (inOperand.mProperty_mList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_genericExtensionMethodListMap_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMap_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @genericExtensionMethodListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_genericExtensionMethodListMap_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mProperty_key ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_genericExtensionMethodListMap_2D_element::getter_mList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@genericExtensionMethodListMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_genericExtensionMethodListMap_2D_element ("genericExtensionMethodListMap-element",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericExtensionMethodListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericExtensionMethodListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericExtensionMethodListMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element GALGAS_genericExtensionMethodListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMap_2D_element result ;
  const GALGAS_genericExtensionMethodListMap_2D_element * p = (const GALGAS_genericExtensionMethodListMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_genericExtensionMethodListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element::GALGAS_descendantClassListMap_2D_element (void) :
mProperty_key (),
mProperty_mList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element::~ GALGAS_descendantClassListMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element::GALGAS_descendantClassListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_unifiedTypeMapEntryList & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_descendantClassListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                   GALGAS_unifiedTypeMapEntryList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_unifiedTypeMapEntryList & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_descendantClassListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_descendantClassListMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_descendantClassListMap_2D_element::objectCompare (const GALGAS_descendantClassListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_key.objectCompare (inOperand.mProperty_key) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mList.objectCompare (inOperand.mProperty_mList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_descendantClassListMap_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMap_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @descendantClassListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_descendantClassListMap_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mProperty_key ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_descendantClassListMap_2D_element::getter_mList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@descendantClassListMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_descendantClassListMap_2D_element ("descendantClassListMap-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_descendantClassListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_descendantClassListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_descendantClassListMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_descendantClassListMap_2D_element result ;
  const GALGAS_descendantClassListMap_2D_element * p = (const GALGAS_descendantClassListMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_descendantClassListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_string & inOperand2,
                                                                                    const GALGAS_stringlist & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_XCodeGroupList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_XCodeGroupList_2D_element::objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGroupReference.objectCompare (inOperand.mProperty_mGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupName.objectCompare (inOperand.mProperty_mGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupPath.objectCompare (inOperand.mProperty_mGroupPath) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mChildrenRefs.objectCompare (inOperand.mProperty_mChildrenRefs) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @XCodeGroupList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupPath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeGroupList_2D_element::getter_mChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mChildrenRefs ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeGroupList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  const GALGAS_XCodeGroupList_2D_element * p = (const GALGAS_XCodeGroupList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeGroupList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_stringlist & inOperand4,
                                                                              const GALGAS_string & inOperand5,
                                                                              const GALGAS_string & inOperand6,
                                                                              const GALGAS_stringlist & inOperand7,
                                                                              const GALGAS_string & inOperand8,
                                                                              const GALGAS_stringlist & inOperand9,
                                                                              const GALGAS_string & inOperand10) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_string & inOperand1,
                                                                                              const GALGAS_string & inOperand2,
                                                                                              const GALGAS_string & inOperand3,
                                                                                              const GALGAS_stringlist & inOperand4,
                                                                                              const GALGAS_string & inOperand5,
                                                                                              const GALGAS_string & inOperand6,
                                                                                              const GALGAS_stringlist & inOperand7,
                                                                                              const GALGAS_string & inOperand8,
                                                                                              const GALGAS_stringlist & inOperand9,
                                                                                              const GALGAS_string & inOperand10 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_XCodeToolTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_XCodeToolTargetList_2D_element::objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetRef.objectCompare (inOperand.mProperty_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileReference.objectCompare (inOperand.mProperty_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileName.objectCompare (inOperand.mProperty_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRefList.objectCompare (inOperand.mProperty_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRef.objectCompare (inOperand.mProperty_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationListRef.objectCompare (inOperand.mProperty_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationSettingList.objectCompare (inOperand.mProperty_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationRef.objectCompare (inOperand.mProperty_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworksFileRefList.objectCompare (inOperand.mProperty_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkBuildPhaseRef.objectCompare (inOperand.mProperty_mFrameworkBuildPhaseRef) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList_2D_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @XCodeToolTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationListRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationSettingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworksFileRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkBuildPhaseRef ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeToolTargetList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  const GALGAS_XCodeToolTargetList_2D_element * p = (const GALGAS_XCodeToolTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeToolTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef (),
mProperty_mDependentTargets (),
mProperty_mResourceBuildRef (),
mProperty_mResourceFileBuildRefs () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_string & inOperand2,
                                                                            const GALGAS_string & inOperand3,
                                                                            const GALGAS_stringlist & inOperand4,
                                                                            const GALGAS_string & inOperand5,
                                                                            const GALGAS_string & inOperand6,
                                                                            const GALGAS_stringlist & inOperand7,
                                                                            const GALGAS_string & inOperand8,
                                                                            const GALGAS_stringlist & inOperand9,
                                                                            const GALGAS_string & inOperand10,
                                                                            const GALGAS__32_stringlist & inOperand11,
                                                                            const GALGAS_string & inOperand12,
                                                                            const GALGAS_stringlist & inOperand13) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10),
mProperty_mDependentTargets (inOperand11),
mProperty_mResourceBuildRef (inOperand12),
mProperty_mResourceFileBuildRefs (inOperand13) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS__32_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_string & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_stringlist & inOperand4,
                                                                                            const GALGAS_string & inOperand5,
                                                                                            const GALGAS_string & inOperand6,
                                                                                            const GALGAS_stringlist & inOperand7,
                                                                                            const GALGAS_string & inOperand8,
                                                                                            const GALGAS_stringlist & inOperand9,
                                                                                            const GALGAS_string & inOperand10,
                                                                                            const GALGAS__32_stringlist & inOperand11,
                                                                                            const GALGAS_string & inOperand12,
                                                                                            const GALGAS_stringlist & inOperand13 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result = GALGAS_XCodeAppTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_XCodeAppTargetList_2D_element::objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetRef.objectCompare (inOperand.mProperty_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileReference.objectCompare (inOperand.mProperty_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileName.objectCompare (inOperand.mProperty_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRefList.objectCompare (inOperand.mProperty_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRef.objectCompare (inOperand.mProperty_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationListRef.objectCompare (inOperand.mProperty_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationSettingList.objectCompare (inOperand.mProperty_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationRef.objectCompare (inOperand.mProperty_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworksFileRefList.objectCompare (inOperand.mProperty_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkBuildPhaseRef.objectCompare (inOperand.mProperty_mFrameworkBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDependentTargets.objectCompare (inOperand.mProperty_mDependentTargets) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResourceBuildRef.objectCompare (inOperand.mProperty_mResourceBuildRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResourceFileBuildRefs.objectCompare (inOperand.mProperty_mResourceFileBuildRefs) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList_2D_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
  mProperty_mDependentTargets.drop () ;
  mProperty_mResourceBuildRef.drop () ;
  mProperty_mResourceFileBuildRefs.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @XCodeAppTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationListRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationSettingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworksFileRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mDependentTargets (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependentTargets ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mResourceBuildRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResourceBuildRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mResourceFileBuildRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResourceFileBuildRefs ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeAppTargetList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  const GALGAS_XCodeAppTargetList_2D_element * p = (const GALGAS_XCodeAppTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeAppTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_BuildFileList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_BuildFileList_2D_element::objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFileReference.objectCompare (inOperand.mProperty_mFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFileName.objectCompare (inOperand.mProperty_mFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildReference.objectCompare (inOperand.mProperty_mBuildReference) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList_2D_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @BuildFileList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mBuildReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildReference ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@BuildFileList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  const GALGAS_BuildFileList_2D_element * p = (const GALGAS_BuildFileList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_BuildFileList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateConstructorAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateConstructorAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstructorName.objectCompare (p->mProperty_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateConstructorAST::objectCompare (const GALGAS_templateConstructorAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST::GALGAS_templateConstructorAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateConstructorAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_templateExpressionListAST::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST::GALGAS_templateConstructorAST (const cPtr_templateConstructorAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateConstructorAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                              const GALGAS_lstring & inAttribute_mConstructorName,
                                                                              const GALGAS_templateExpressionListAST & inAttribute_mExpressionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateConstructorAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mConstructorName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateConstructorAST (inAttribute_mTypeName, inAttribute_mConstructorName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateConstructorAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateConstructorAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    result = p->mProperty_mConstructorName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateConstructorAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    result = p->mProperty_mExpressionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateConstructorAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateConstructorAST::cPtr_templateConstructorAST (const GALGAS_lstring & in_mTypeName,
                                                          const GALGAS_lstring & in_mConstructorName,
                                                          const GALGAS_templateExpressionListAST & in_mExpressionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mConstructorName (in_mConstructorName),
mProperty_mExpressionList (in_mExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateConstructorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateConstructorAST ;
}

void cPtr_templateConstructorAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@templateConstructorAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateConstructorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateConstructorAST (mProperty_mTypeName, mProperty_mConstructorName, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateConstructorAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateConstructorAST ("templateConstructorAST",
                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateConstructorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateConstructorAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateConstructorAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateConstructorAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateConstructorAST result ;
  const GALGAS_templateConstructorAST * p = (const GALGAS_templateConstructorAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateConstructorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateConstructorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateConstructorAST_2D_weak::objectCompare (const GALGAS_templateConstructorAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST_2D_weak::GALGAS_templateConstructorAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST_2D_weak & GALGAS_templateConstructorAST_2D_weak::operator = (const GALGAS_templateConstructorAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST_2D_weak::GALGAS_templateConstructorAST_2D_weak (const GALGAS_templateConstructorAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST_2D_weak GALGAS_templateConstructorAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateConstructorAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST GALGAS_templateConstructorAST_2D_weak::bang_templateConstructorAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateConstructorAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateConstructorAST) ;
      result = GALGAS_templateConstructorAST ((cPtr_templateConstructorAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateConstructorAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateConstructorAST_2D_weak ("templateConstructorAST-weak",
                                                       & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateConstructorAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateConstructorAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateConstructorAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateConstructorAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST_2D_weak GALGAS_templateConstructorAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateConstructorAST_2D_weak result ;
  const GALGAS_templateConstructorAST_2D_weak * p = (const GALGAS_templateConstructorAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateConstructorAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateConstructorAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateFileWrapperTemplateCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFileWrapperName.objectCompare (p->mProperty_mFileWrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateName.objectCompare (p->mProperty_mTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutExpressionList.objectCompare (p->mProperty_mOutExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateFileWrapperTemplateCallAST::objectCompare (const GALGAS_templateFileWrapperTemplateCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST::GALGAS_templateFileWrapperTemplateCallAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateFileWrapperTemplateCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_templateExpressionListAST::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST::GALGAS_templateFileWrapperTemplateCallAST (const cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFileWrapperTemplateCallAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::constructor_new (const GALGAS_lstring & inAttribute_mFileWrapperName,
                                                                                                      const GALGAS_lstring & inAttribute_mTemplateName,
                                                                                                      const GALGAS_templateExpressionListAST & inAttribute_mOutExpressionList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  if (inAttribute_mFileWrapperName.isValid () && inAttribute_mTemplateName.isValid () && inAttribute_mOutExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateFileWrapperTemplateCallAST (inAttribute_mFileWrapperName, inAttribute_mTemplateName, inAttribute_mOutExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateFileWrapperTemplateCallAST::getter_mFileWrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    result = p->mProperty_mFileWrapperName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateFileWrapperTemplateCallAST::getter_mTemplateName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    result = p->mProperty_mTemplateName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateFileWrapperTemplateCallAST::getter_mOutExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    result = p->mProperty_mOutExpressionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateFileWrapperTemplateCallAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (const GALGAS_lstring & in_mFileWrapperName,
                                                                                  const GALGAS_lstring & in_mTemplateName,
                                                                                  const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mFileWrapperName (in_mFileWrapperName),
mProperty_mTemplateName (in_mTemplateName),
mProperty_mOutExpressionList (in_mOutExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateFileWrapperTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

void cPtr_templateFileWrapperTemplateCallAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateFileWrapperTemplateCallAST:" ;
  mProperty_mFileWrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateFileWrapperTemplateCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateFileWrapperTemplateCallAST (mProperty_mFileWrapperName, mProperty_mTemplateName, mProperty_mOutExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateFileWrapperTemplateCallAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ("templateFileWrapperTemplateCallAST",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateFileWrapperTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateFileWrapperTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFileWrapperTemplateCallAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  const GALGAS_templateFileWrapperTemplateCallAST * p = (const GALGAS_templateFileWrapperTemplateCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFileWrapperTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFileWrapperTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateFileWrapperTemplateCallAST_2D_weak::objectCompare (const GALGAS_templateFileWrapperTemplateCallAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST_2D_weak::GALGAS_templateFileWrapperTemplateCallAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST_2D_weak & GALGAS_templateFileWrapperTemplateCallAST_2D_weak::operator = (const GALGAS_templateFileWrapperTemplateCallAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST_2D_weak::GALGAS_templateFileWrapperTemplateCallAST_2D_weak (const GALGAS_templateFileWrapperTemplateCallAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST_2D_weak GALGAS_templateFileWrapperTemplateCallAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST_2D_weak::bang_templateFileWrapperTemplateCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateFileWrapperTemplateCallAST) ;
      result = GALGAS_templateFileWrapperTemplateCallAST ((cPtr_templateFileWrapperTemplateCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateFileWrapperTemplateCallAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST_2D_weak ("templateFileWrapperTemplateCallAST-weak",
                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateFileWrapperTemplateCallAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateFileWrapperTemplateCallAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFileWrapperTemplateCallAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST_2D_weak GALGAS_templateFileWrapperTemplateCallAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST_2D_weak result ;
  const GALGAS_templateFileWrapperTemplateCallAST_2D_weak * p = (const GALGAS_templateFileWrapperTemplateCallAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFileWrapperTemplateCallAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFileWrapperTemplateCallAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateExtensionTemplateCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateExtensionTemplateCallAST * p = (const cPtr_templateExtensionTemplateCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpressionValue.objectCompare (p->mProperty_mExpressionValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateName.objectCompare (p->mProperty_mTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutExpressionList.objectCompare (p->mProperty_mOutExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateExtensionTemplateCallAST::objectCompare (const GALGAS_templateExtensionTemplateCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST::GALGAS_templateExtensionTemplateCallAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST::GALGAS_templateExtensionTemplateCallAST (const cPtr_templateExtensionTemplateCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExtensionTemplateCallAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST GALGAS_templateExtensionTemplateCallAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mExpressionValue,
                                                                                                  const GALGAS_lstring & inAttribute_mTemplateName,
                                                                                                  const GALGAS_templateExpressionListAST & inAttribute_mOutExpressionList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST result ;
  if (inAttribute_mExpressionValue.isValid () && inAttribute_mTemplateName.isValid () && inAttribute_mOutExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateExtensionTemplateCallAST (inAttribute_mExpressionValue, inAttribute_mTemplateName, inAttribute_mOutExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateExtensionTemplateCallAST::getter_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateExtensionTemplateCallAST * p = (const cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    result = p->mProperty_mExpressionValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateExtensionTemplateCallAST::getter_mTemplateName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateExtensionTemplateCallAST * p = (const cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    result = p->mProperty_mTemplateName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateExtensionTemplateCallAST::getter_mOutExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateExtensionTemplateCallAST * p = (const cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    result = p->mProperty_mOutExpressionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateExtensionTemplateCallAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (const GALGAS_templateExpressionAST & in_mExpressionValue,
                                                                              const GALGAS_lstring & in_mTemplateName,
                                                                              const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mExpressionValue (in_mExpressionValue),
mProperty_mTemplateName (in_mTemplateName),
mProperty_mOutExpressionList (in_mOutExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateExtensionTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

void cPtr_templateExtensionTemplateCallAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@templateExtensionTemplateCallAST:" ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateExtensionTemplateCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateExtensionTemplateCallAST (mProperty_mExpressionValue, mProperty_mTemplateName, mProperty_mOutExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateExtensionTemplateCallAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ("templateExtensionTemplateCallAST",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateExtensionTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateExtensionTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExtensionTemplateCallAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST GALGAS_templateExtensionTemplateCallAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST result ;
  const GALGAS_templateExtensionTemplateCallAST * p = (const GALGAS_templateExtensionTemplateCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateExtensionTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExtensionTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateExtensionTemplateCallAST_2D_weak::objectCompare (const GALGAS_templateExtensionTemplateCallAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST_2D_weak::GALGAS_templateExtensionTemplateCallAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST_2D_weak & GALGAS_templateExtensionTemplateCallAST_2D_weak::operator = (const GALGAS_templateExtensionTemplateCallAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST_2D_weak::GALGAS_templateExtensionTemplateCallAST_2D_weak (const GALGAS_templateExtensionTemplateCallAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST_2D_weak GALGAS_templateExtensionTemplateCallAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST GALGAS_templateExtensionTemplateCallAST_2D_weak::bang_templateExtensionTemplateCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateExtensionTemplateCallAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateExtensionTemplateCallAST) ;
      result = GALGAS_templateExtensionTemplateCallAST ((cPtr_templateExtensionTemplateCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateExtensionTemplateCallAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST_2D_weak ("templateExtensionTemplateCallAST-weak",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateExtensionTemplateCallAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateExtensionTemplateCallAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExtensionTemplateCallAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST_2D_weak GALGAS_templateExtensionTemplateCallAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST_2D_weak result ;
  const GALGAS_templateExtensionTemplateCallAST_2D_weak * p = (const GALGAS_templateExtensionTemplateCallAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateExtensionTemplateCallAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExtensionTemplateCallAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLiteralStringExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralStringExpressionAST * p = (const cPtr_templateLiteralStringExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralStringList.objectCompare (p->mProperty_mLiteralStringList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateLiteralStringExpressionAST::objectCompare (const GALGAS_templateLiteralStringExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST::GALGAS_templateLiteralStringExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralStringExpressionAST::constructor_new (GALGAS_stringlist::constructor_emptyList (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST::GALGAS_templateLiteralStringExpressionAST (const cPtr_templateLiteralStringExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralStringExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::constructor_new (const GALGAS_stringlist & inAttribute_mLiteralStringList,
                                                                                                      const GALGAS_location & inAttribute_mLocation
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST result ;
  if (inAttribute_mLiteralStringList.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralStringExpressionAST (inAttribute_mLiteralStringList, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_templateLiteralStringExpressionAST::getter_mLiteralStringList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralStringExpressionAST * p = (const cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    result = p->mProperty_mLiteralStringList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateLiteralStringExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralStringExpressionAST * p = (const cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralStringExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateLiteralStringExpressionAST::cPtr_templateLiteralStringExpressionAST (const GALGAS_stringlist & in_mLiteralStringList,
                                                                                  const GALGAS_location & in_mLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralStringList (in_mLiteralStringList),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

void cPtr_templateLiteralStringExpressionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateLiteralStringExpressionAST:" ;
  mProperty_mLiteralStringList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralStringExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralStringExpressionAST (mProperty_mLiteralStringList, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralStringExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ("templateLiteralStringExpressionAST",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralStringExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralStringExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST result ;
  const GALGAS_templateLiteralStringExpressionAST * p = (const GALGAS_templateLiteralStringExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralStringExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralStringExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateLiteralStringExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralStringExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST_2D_weak::GALGAS_templateLiteralStringExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST_2D_weak & GALGAS_templateLiteralStringExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralStringExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST_2D_weak::GALGAS_templateLiteralStringExpressionAST_2D_weak (const GALGAS_templateLiteralStringExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST_2D_weak GALGAS_templateLiteralStringExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST_2D_weak::bang_templateLiteralStringExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralStringExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralStringExpressionAST) ;
      result = GALGAS_templateLiteralStringExpressionAST ((cPtr_templateLiteralStringExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralStringExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2D_weak ("templateLiteralStringExpressionAST-weak",
                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralStringExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralStringExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralStringExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST_2D_weak GALGAS_templateLiteralStringExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralStringExpressionAST_2D_weak * p = (const GALGAS_templateLiteralStringExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralStringExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralStringExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structFieldAccessTemplateExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructFieldName.objectCompare (p->mProperty_mStructFieldName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structFieldAccessTemplateExpressionAST::objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST::GALGAS_structFieldAccessTemplateExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST::GALGAS_structFieldAccessTemplateExpressionAST (const cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessTemplateExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                              const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                                              const GALGAS_lstring & inAttribute_mStructFieldName
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid () && inAttribute_mStructFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structFieldAccessTemplateExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression, inAttribute_mStructFieldName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_structFieldAccessTemplateExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structFieldAccessTemplateExpressionAST::getter_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    result = p->mProperty_mStructFieldName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structFieldAccessTemplateExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                                          const GALGAS_templateExpressionAST & in_mExpression,
                                                                                          const GALGAS_lstring & in_mStructFieldName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression),
mProperty_mStructFieldName (in_mStructFieldName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structFieldAccessTemplateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

void cPtr_structFieldAccessTemplateExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@structFieldAccessTemplateExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structFieldAccessTemplateExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structFieldAccessTemplateExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, mProperty_mStructFieldName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structFieldAccessTemplateExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ("structFieldAccessTemplateExpressionAST",
                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structFieldAccessTemplateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structFieldAccessTemplateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structFieldAccessTemplateExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  const GALGAS_structFieldAccessTemplateExpressionAST * p = (const GALGAS_structFieldAccessTemplateExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structFieldAccessTemplateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessTemplateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST_2D_weak & GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::operator = (const GALGAS_structFieldAccessTemplateExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (const GALGAS_structFieldAccessTemplateExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST_2D_weak GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::bang_structFieldAccessTemplateExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structFieldAccessTemplateExpressionAST) ;
      result = GALGAS_structFieldAccessTemplateExpressionAST ((cPtr_structFieldAccessTemplateExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@structFieldAccessTemplateExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST_2D_weak ("structFieldAccessTemplateExpressionAST-weak",
                                                                       & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST_2D_weak GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST_2D_weak result ;
  const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak * p = (const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessTemplateExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateOptionAccessAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionName.objectCompare (p->mProperty_mOptionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGetterName.objectCompare (p->mProperty_mGetterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateOptionAccessAST::objectCompare (const GALGAS_templateOptionAccessAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST::GALGAS_templateOptionAccessAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateOptionAccessAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST::GALGAS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOptionAccessAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::constructor_new (const GALGAS_lstring & inAttribute_mOptionComponentName,
                                                                                const GALGAS_lstring & inAttribute_mOptionName,
                                                                                const GALGAS_lstring & inAttribute_mGetterName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST result ;
  if (inAttribute_mOptionComponentName.isValid () && inAttribute_mOptionName.isValid () && inAttribute_mGetterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateOptionAccessAST (inAttribute_mOptionComponentName, inAttribute_mOptionName, inAttribute_mGetterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateOptionAccessAST::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    result = p->mProperty_mOptionComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateOptionAccessAST::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    result = p->mProperty_mOptionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateOptionAccessAST::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    result = p->mProperty_mGetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateOptionAccessAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (const GALGAS_lstring & in_mOptionComponentName,
                                                            const GALGAS_lstring & in_mOptionName,
                                                            const GALGAS_lstring & in_mGetterName
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptionName (in_mOptionName),
mProperty_mGetterName (in_mGetterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateOptionAccessAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

void cPtr_templateOptionAccessAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateOptionAccessAST:" ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateOptionAccessAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateOptionAccessAST (mProperty_mOptionComponentName, mProperty_mOptionName, mProperty_mGetterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateOptionAccessAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateOptionAccessAST ("templateOptionAccessAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateOptionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateOptionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateOptionAccessAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST result ;
  const GALGAS_templateOptionAccessAST * p = (const GALGAS_templateOptionAccessAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateOptionAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOptionAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateOptionAccessAST_2D_weak::objectCompare (const GALGAS_templateOptionAccessAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST_2D_weak::GALGAS_templateOptionAccessAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST_2D_weak & GALGAS_templateOptionAccessAST_2D_weak::operator = (const GALGAS_templateOptionAccessAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST_2D_weak::GALGAS_templateOptionAccessAST_2D_weak (const GALGAS_templateOptionAccessAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST_2D_weak GALGAS_templateOptionAccessAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST_2D_weak::bang_templateOptionAccessAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateOptionAccessAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateOptionAccessAST) ;
      result = GALGAS_templateOptionAccessAST ((cPtr_templateOptionAccessAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateOptionAccessAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateOptionAccessAST_2D_weak ("templateOptionAccessAST-weak",
                                                        & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateOptionAccessAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateOptionAccessAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateOptionAccessAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST_2D_weak GALGAS_templateOptionAccessAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST_2D_weak result ;
  const GALGAS_templateOptionAccessAST_2D_weak * p = (const GALGAS_templateOptionAccessAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateOptionAccessAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOptionAccessAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateTestDynamicClassAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateTestDynamicClassAST * p = (const cPtr_templateTestDynamicClassAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeComparisonKind.objectCompare (p->mProperty_mTypeComparisonKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateTestDynamicClassAST::objectCompare (const GALGAS_templateTestDynamicClassAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST::GALGAS_templateTestDynamicClassAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST::GALGAS_templateTestDynamicClassAST (const cPtr_templateTestDynamicClassAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateTestDynamicClassAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST GALGAS_templateTestDynamicClassAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mReceiverExpression,
                                                                                        const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                        const GALGAS_dynamicTypeComparisonKind & inAttribute_mTypeComparisonKind,
                                                                                        const GALGAS_lstring & inAttribute_mTypeName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateTestDynamicClassAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mTypeComparisonKind.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateTestDynamicClassAST (inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mTypeComparisonKind, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateTestDynamicClassAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateTestDynamicClassAST * p = (const cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateTestDynamicClassAST::getter_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateTestDynamicClassAST * p = (const cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    result = p->mProperty_mEndOfReceiverExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_templateTestDynamicClassAST::getter_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateTestDynamicClassAST * p = (const cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    result = p->mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateTestDynamicClassAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateTestDynamicClassAST * p = (const cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateTestDynamicClassAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                                    const GALGAS_location & in_mEndOfReceiverExpression,
                                                                    const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                    const GALGAS_lstring & in_mTypeName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mTypeComparisonKind (in_mTypeComparisonKind),
mProperty_mTypeName (in_mTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateTestDynamicClassAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

void cPtr_templateTestDynamicClassAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@templateTestDynamicClassAST:" ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateTestDynamicClassAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateTestDynamicClassAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateTestDynamicClassAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateTestDynamicClassAST ("templateTestDynamicClassAST",
                                                    & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateTestDynamicClassAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateTestDynamicClassAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateTestDynamicClassAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST GALGAS_templateTestDynamicClassAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateTestDynamicClassAST result ;
  const GALGAS_templateTestDynamicClassAST * p = (const GALGAS_templateTestDynamicClassAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateTestDynamicClassAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateTestDynamicClassAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateTestDynamicClassAST_2D_weak::objectCompare (const GALGAS_templateTestDynamicClassAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST_2D_weak::GALGAS_templateTestDynamicClassAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST_2D_weak & GALGAS_templateTestDynamicClassAST_2D_weak::operator = (const GALGAS_templateTestDynamicClassAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST_2D_weak::GALGAS_templateTestDynamicClassAST_2D_weak (const GALGAS_templateTestDynamicClassAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST_2D_weak GALGAS_templateTestDynamicClassAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateTestDynamicClassAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST GALGAS_templateTestDynamicClassAST_2D_weak::bang_templateTestDynamicClassAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateTestDynamicClassAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateTestDynamicClassAST) ;
      result = GALGAS_templateTestDynamicClassAST ((cPtr_templateTestDynamicClassAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateTestDynamicClassAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateTestDynamicClassAST_2D_weak ("templateTestDynamicClassAST-weak",
                                                            & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateTestDynamicClassAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateTestDynamicClassAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateTestDynamicClassAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST_2D_weak GALGAS_templateTestDynamicClassAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateTestDynamicClassAST_2D_weak result ;
  const GALGAS_templateTestDynamicClassAST_2D_weak * p = (const GALGAS_templateTestDynamicClassAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateTestDynamicClassAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateTestDynamicClassAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateFunctionCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateFunctionCallAST * p = (const cPtr_templateFunctionCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateFunctionCallAST::objectCompare (const GALGAS_templateFunctionCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST::GALGAS_templateFunctionCallAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateFunctionCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_templateExpressionListAST::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST::GALGAS_templateFunctionCallAST (const cPtr_templateFunctionCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFunctionCallAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                const GALGAS_templateExpressionListAST & inAttribute_mExpressionList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateFunctionCallAST (inAttribute_mFunctionName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateFunctionCallAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFunctionCallAST * p = (const cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateFunctionCallAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFunctionCallAST * p = (const cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    result = p->mProperty_mExpressionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateFunctionCallAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (const GALGAS_lstring & in_mFunctionName,
                                                            const GALGAS_templateExpressionListAST & in_mExpressionList
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mExpressionList (in_mExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

void cPtr_templateFunctionCallAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateFunctionCallAST:" ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateFunctionCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateFunctionCallAST (mProperty_mFunctionName, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateFunctionCallAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFunctionCallAST ("templateFunctionCallAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFunctionCallAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST result ;
  const GALGAS_templateFunctionCallAST * p = (const GALGAS_templateFunctionCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFunctionCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFunctionCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateFunctionCallAST_2D_weak::objectCompare (const GALGAS_templateFunctionCallAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST_2D_weak::GALGAS_templateFunctionCallAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST_2D_weak & GALGAS_templateFunctionCallAST_2D_weak::operator = (const GALGAS_templateFunctionCallAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST_2D_weak::GALGAS_templateFunctionCallAST_2D_weak (const GALGAS_templateFunctionCallAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST_2D_weak GALGAS_templateFunctionCallAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST_2D_weak::bang_templateFunctionCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateFunctionCallAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateFunctionCallAST) ;
      result = GALGAS_templateFunctionCallAST ((cPtr_templateFunctionCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateFunctionCallAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFunctionCallAST_2D_weak ("templateFunctionCallAST-weak",
                                                        & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateFunctionCallAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateFunctionCallAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFunctionCallAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST_2D_weak GALGAS_templateFunctionCallAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST_2D_weak result ;
  const GALGAS_templateFunctionCallAST_2D_weak * p = (const GALGAS_templateFunctionCallAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFunctionCallAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFunctionCallAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateVarInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateVarInExpressionAST * p = (const cPtr_templateVarInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateVarInExpressionAST::objectCompare (const GALGAS_templateVarInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST::GALGAS_templateVarInExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateVarInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST::GALGAS_templateVarInExpressionAST (const cPtr_templateVarInExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateVarInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateVarInExpressionAST (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateVarInExpressionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateVarInExpressionAST * p = (const cPtr_templateVarInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateVarInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (const GALGAS_lstring & in_mVarName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mVarName (in_mVarName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateVarInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

void cPtr_templateVarInExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@templateVarInExpressionAST:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateVarInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateVarInExpressionAST (mProperty_mVarName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateVarInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateVarInExpressionAST ("templateVarInExpressionAST",
                                                   & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateVarInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateVarInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVarInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST result ;
  const GALGAS_templateVarInExpressionAST * p = (const GALGAS_templateVarInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateVarInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVarInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateVarInExpressionAST_2D_weak::objectCompare (const GALGAS_templateVarInExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST_2D_weak::GALGAS_templateVarInExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST_2D_weak & GALGAS_templateVarInExpressionAST_2D_weak::operator = (const GALGAS_templateVarInExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST_2D_weak::GALGAS_templateVarInExpressionAST_2D_weak (const GALGAS_templateVarInExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST_2D_weak GALGAS_templateVarInExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST_2D_weak::bang_templateVarInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateVarInExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateVarInExpressionAST) ;
      result = GALGAS_templateVarInExpressionAST ((cPtr_templateVarInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateVarInExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateVarInExpressionAST_2D_weak ("templateVarInExpressionAST-weak",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateVarInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateVarInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVarInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST_2D_weak GALGAS_templateVarInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST_2D_weak result ;
  const GALGAS_templateVarInExpressionAST_2D_weak * p = (const GALGAS_templateVarInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateVarInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVarInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionStringAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionStringAST * p = (const cPtr_templateInstructionStringAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionStringAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTemplateString.objectCompare (p->mProperty_mTemplateString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionStringAST::objectCompare (const GALGAS_templateInstructionStringAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST::GALGAS_templateInstructionStringAST (void) :
GALGAS_templateInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionStringAST::constructor_new (GALGAS_string::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST::GALGAS_templateInstructionStringAST (const cPtr_templateInstructionStringAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionStringAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::constructor_new (const GALGAS_string & inAttribute_mTemplateString
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST result ;
  if (inAttribute_mTemplateString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionStringAST (inAttribute_mTemplateString COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionStringAST::getter_mTemplateString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionStringAST * p = (const cPtr_templateInstructionStringAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringAST) ;
    result = p->mProperty_mTemplateString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionStringAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringAST::cPtr_templateInstructionStringAST (const GALGAS_string & in_mTemplateString
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mProperty_mTemplateString (in_mTemplateString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionStringAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

void cPtr_templateInstructionStringAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@templateInstructionStringAST:" ;
  mProperty_mTemplateString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionStringAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionStringAST (mProperty_mTemplateString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionStringAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionStringAST ("templateInstructionStringAST",
                                                     & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionStringAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionStringAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST result ;
  const GALGAS_templateInstructionStringAST * p = (const GALGAS_templateInstructionStringAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionStringAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionStringAST_2D_weak::objectCompare (const GALGAS_templateInstructionStringAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST_2D_weak::GALGAS_templateInstructionStringAST_2D_weak (void) :
GALGAS_templateInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST_2D_weak & GALGAS_templateInstructionStringAST_2D_weak::operator = (const GALGAS_templateInstructionStringAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST_2D_weak::GALGAS_templateInstructionStringAST_2D_weak (const GALGAS_templateInstructionStringAST & inSource) :
GALGAS_templateInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST_2D_weak GALGAS_templateInstructionStringAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST_2D_weak::bang_templateInstructionStringAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionStringAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionStringAST) ;
      result = GALGAS_templateInstructionStringAST ((cPtr_templateInstructionStringAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionStringAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionStringAST_2D_weak ("templateInstructionStringAST-weak",
                                                             & kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionStringAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionStringAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST_2D_weak GALGAS_templateInstructionStringAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST_2D_weak result ;
  const GALGAS_templateInstructionStringAST_2D_weak * p = (const GALGAS_templateInstructionStringAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionStringAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionForeachAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsAscending.objectCompare (p->mProperty_mIsAscending) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefix.objectCompare (p->mProperty_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBeforeInstructionList.objectCompare (p->mProperty_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexIdentifier.objectCompare (p->mProperty_mIndexIdentifier) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBetweenInstructionList.objectCompare (p->mProperty_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAfterInstructionList.objectCompare (p->mProperty_mAfterInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionForeachAST::objectCompare (const GALGAS_templateInstructionForeachAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST::GALGAS_templateInstructionForeachAST (void) :
GALGAS_templateInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST::GALGAS_templateInstructionForeachAST (const cPtr_templateInstructionForeachAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST GALGAS_templateInstructionForeachAST::constructor_new (const GALGAS_bool & inAttribute_mIsAscending,
                                                                                            const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                            const GALGAS_string & inAttribute_mPrefix,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mBeforeInstructionList,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mDoInstructionList,
                                                                                            const GALGAS_lstring & inAttribute_mIndexIdentifier,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mBetweenInstructionList,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mAfterInstructionList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachAST result ;
  if (inAttribute_mIsAscending.isValid () && inAttribute_mExpression.isValid () && inAttribute_mPrefix.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mIndexIdentifier.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mAfterInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionForeachAST (inAttribute_mIsAscending, inAttribute_mExpression, inAttribute_mPrefix, inAttribute_mBeforeInstructionList, inAttribute_mDoInstructionList, inAttribute_mIndexIdentifier, inAttribute_mBetweenInstructionList, inAttribute_mAfterInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_templateInstructionForeachAST::getter_mIsAscending (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mProperty_mIsAscending ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInstructionForeachAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionForeachAST::getter_mPrefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mProperty_mPrefix ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mProperty_mBeforeInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateInstructionForeachAST::getter_mIndexIdentifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mProperty_mIndexIdentifier ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mProperty_mBetweenInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mProperty_mAfterInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (const GALGAS_bool & in_mIsAscending,
                                                                        const GALGAS_templateExpressionAST & in_mExpression,
                                                                        const GALGAS_string & in_mPrefix,
                                                                        const GALGAS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GALGAS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GALGAS_lstring & in_mIndexIdentifier,
                                                                        const GALGAS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GALGAS_templateInstructionListAST & in_mAfterInstructionList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mProperty_mIsAscending (in_mIsAscending),
mProperty_mExpression (in_mExpression),
mProperty_mPrefix (in_mPrefix),
mProperty_mBeforeInstructionList (in_mBeforeInstructionList),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mIndexIdentifier (in_mIndexIdentifier),
mProperty_mBetweenInstructionList (in_mBetweenInstructionList),
mProperty_mAfterInstructionList (in_mAfterInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionForeachAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

void cPtr_templateInstructionForeachAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@templateInstructionForeachAST:" ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexIdentifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionForeachAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionForeachAST (mProperty_mIsAscending, mProperty_mExpression, mProperty_mPrefix, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexIdentifier, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionForeachAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForeachAST ("templateInstructionForeachAST",
                                                      & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForeachAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForeachAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForeachAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST GALGAS_templateInstructionForeachAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachAST result ;
  const GALGAS_templateInstructionForeachAST * p = (const GALGAS_templateInstructionForeachAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForeachAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionForeachAST_2D_weak::objectCompare (const GALGAS_templateInstructionForeachAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST_2D_weak::GALGAS_templateInstructionForeachAST_2D_weak (void) :
GALGAS_templateInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST_2D_weak & GALGAS_templateInstructionForeachAST_2D_weak::operator = (const GALGAS_templateInstructionForeachAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST_2D_weak::GALGAS_templateInstructionForeachAST_2D_weak (const GALGAS_templateInstructionForeachAST & inSource) :
GALGAS_templateInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST_2D_weak GALGAS_templateInstructionForeachAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionForeachAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST GALGAS_templateInstructionForeachAST_2D_weak::bang_templateInstructionForeachAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionForeachAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForeachAST) ;
      result = GALGAS_templateInstructionForeachAST ((cPtr_templateInstructionForeachAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionForeachAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForeachAST_2D_weak ("templateInstructionForeachAST-weak",
                                                              & kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForeachAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForeachAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForeachAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST_2D_weak GALGAS_templateInstructionForeachAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachAST_2D_weak result ;
  const GALGAS_templateInstructionForeachAST_2D_weak * p = (const GALGAS_templateInstructionForeachAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForeachAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       N O N    T E R M I N A L    N A M E S                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const char * gNonTerminalNames_templateGrammar [47] = {
  "<expression>",// Index 0
  "<relation_term>",// Index 1
  "<relation_factor>",// Index 2
  "<simple_expression>",// Index 3
  "<term>",// Index 4
  "<factor>",// Index 5
  "<primary>",// Index 6
  "<output_expression_list>",// Index 7
  "<template_instruction>",// Index 8
  "<template_parser_start_symbol>",// Index 9
  "<switch_case>",// Index 10
  "<select_templateSyntax_0>",// Index 11
  "<select_templateSyntax_1>",// Index 12
  "<select_templateSyntax_2>",// Index 13
  "<select_templateSyntax_3>",// Index 14
  "<select_templateSyntax_4>",// Index 15
  "<select_templateSyntax_5>",// Index 16
  "<select_templateSyntax_6>",// Index 17
  "<select_templateSyntax_7>",// Index 18
  "<select_templateSyntax_8>",// Index 19
  "<select_templateSyntax_9>",// Index 20
  "<select_templateSyntax_10>",// Index 21
  "<select_templateSyntax_11>",// Index 22
  "<select_templateSyntax_12>",// Index 23
  "<select_templateSyntax_13>",// Index 24
  "<select_templateSyntax_14>",// Index 25
  "<select_templateSyntax_15>",// Index 26
  "<select_templateSyntax_16>",// Index 27
  "<select_templateSyntax_17>",// Index 28
  "<select_templateSyntax_18>",// Index 29
  "<select_templateSyntax_19>",// Index 30
  "<select_templateSyntax_20>",// Index 31
  "<select_templateSyntax_21>",// Index 32
  "<select_templateSyntax_22>",// Index 33
  "<select_templateSyntax_23>",// Index 34
  "<select_templateSyntax_24>",// Index 35
  "<select_templateSyntax_25>",// Index 36
  "<select_templateSyntax_26>",// Index 37
  "<select_templateSyntax_27>",// Index 38
  "<select_templateSyntax_28>",// Index 39
  "<select_templateSyntax_29>",// Index 40
  "<select_templateSyntax_30>",// Index 41
  "<select_templateSyntax_31>",// Index 42
  "<select_templateSyntax_32>",// Index 43
  "<select_templateSyntax_33>",// Index 44
  "<select_templateSyntax_34>",// Index 45
  "<>"// Index 46
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Action tables handle shift and reduce actions ;
//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;
//  - the accept action is (terminal_symbol, ACCEPT) ;
//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.

#define SHIFT(a) ((a) + 2)
#define REDUCE(a) (-(a) - 1)
#define ACCEPT (1)
#define END (-1)

static const int16_t gActionTable_templateGrammar [] = {
// State S0 (index = 0)
  C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (101)
, END
// State S1 (index = 17)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S2 (index = 48)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (25)
, END
// State S3 (index = 79)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (26)
, END
// State S4 (index = 110)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S5 (index = 141)
, C_Lexique_galgasTemplateScanner::kToken__3E_, SHIFT (34)
, C_Lexique_galgasTemplateScanner::kToken__3C_, SHIFT (35)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (72)
, END
// State S6 (index = 148)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S7 (index = 179)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S8 (index = 210)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (101)
, END
// State S9 (index = 227)
, C_Lexique_galgasTemplateScanner::kToken_, ACCEPT
, END
// State S10 (index = 230)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (30)
, END
// State S11 (index = 233)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S12 (index = 264)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (41)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (9)
, END
// State S13 (index = 345)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S14 (index = 376)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S15 (index = 407)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S16 (index = 438)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (11)
, END
// State S17 (index = 517)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (12)
, END
// State S18 (index = 596)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (13)
, END
// State S19 (index = 675)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (14)
, END
// State S20 (index = 754)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (15)
, END
// State S21 (index = 833)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (16)
, END
// State S22 (index = 912)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (17)
, END
// State S23 (index = 991)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (18)
, END
// State S24 (index = 1070)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (45)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (56)
, END
// State S25 (index = 1151)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, C_Lexique_galgasTemplateScanner::kToken_template, SHIFT (47)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (48)
, C_Lexique_galgasTemplateScanner::kToken_filewrapper, SHIFT (49)
, C_Lexique_galgasTemplateScanner::kToken_option, SHIFT (50)
, END
// State S26 (index = 1190)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (24)
, END
// State S27 (index = 1221)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (54)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (33)
, END
// State S28 (index = 1268)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__26_, SHIFT (56)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (36)
, END
// State S29 (index = 1317)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, SHIFT (58)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, SHIFT (59)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, SHIFT (60)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, SHIFT (61)
, C_Lexique_galgasTemplateScanner::kToken__3E_, SHIFT (62)
, C_Lexique_galgasTemplateScanner::kToken__3C_, SHIFT (63)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (38)
, END
// State S30 (index = 1378)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (45)
, END
// State S31 (index = 1447)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (50)
, END
// State S32 (index = 1522)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (74)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_is, SHIFT (75)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (54)
, END
// State S33 (index = 1601)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (77)
, END
// State S34 (index = 1604)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (74)
, END
// State S35 (index = 1607)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (73)
, END
// State S36 (index = 1610)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (78)
, END
// State S37 (index = 1613)
, C_Lexique_galgasTemplateScanner::kToken_then, SHIFT (79)
, END
// State S38 (index = 1616)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (103)
, C_Lexique_galgasTemplateScanner::kToken_case, SHIFT (80)
, END
// State S39 (index = 1621)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (102)
, END
// State S40 (index = 1624)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (6)
, END
// State S41 (index = 1699)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (82)
, END
// State S42 (index = 1706)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (7)
, END
// State S43 (index = 1781)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (8)
, END
// State S44 (index = 1856)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (85)
, END
// State S45 (index = 1859)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (45)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (56)
, END
// State S46 (index = 1940)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (19)
, END
// State S47 (index = 2019)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S48 (index = 2050)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (88)
, END
// State S49 (index = 2053)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (89)
, END
// State S50 (index = 2056)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (90)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (91)
, END
// State S51 (index = 2061)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (93)
, END
// State S52 (index = 2064)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (20)
, END
// State S53 (index = 2143)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S54 (index = 2174)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S55 (index = 2205)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (0)
, END
// State S56 (index = 2248)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S57 (index = 2279)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (1)
, END
// State S58 (index = 2326)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S59 (index = 2357)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S60 (index = 2388)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S61 (index = 2419)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S62 (index = 2450)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S63 (index = 2481)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S64 (index = 2512)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (2)
, END
// State S65 (index = 2561)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S66 (index = 2592)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S67 (index = 2623)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S68 (index = 2654)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S69 (index = 2685)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (3)
, END
// State S70 (index = 2746)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S71 (index = 2777)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S72 (index = 2808)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S73 (index = 2839)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (4)
, END
// State S74 (index = 2908)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (110)
, END
// State S75 (index = 2911)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, SHIFT (111)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, SHIFT (112)
, C_Lexique_galgasTemplateScanner::kToken__3E_, SHIFT (113)
, END
// State S76 (index = 2918)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (5)
, END
// State S77 (index = 2993)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S78 (index = 3010)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (117)
, END
// State S79 (index = 3013)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (95)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (95)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (95)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S80 (index = 3034)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (120)
, END
// State S81 (index = 3037)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (122)
, END
// State S82 (index = 3040)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S83 (index = 3071)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (124)
, END
// State S84 (index = 3074)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (23)
, END
// State S85 (index = 3079)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (10)
, END
// State S86 (index = 3158)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (57)
, END
// State S87 (index = 3237)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (125)
, END
// State S88 (index = 3240)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (82)
, END
// State S89 (index = 3247)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (127)
, END
// State S90 (index = 3250)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (128)
, END
// State S91 (index = 3253)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (129)
, END
// State S92 (index = 3256)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (130)
, END
// State S93 (index = 3259)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (82)
, END
// State S94 (index = 3266)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (54)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (33)
, END
// State S95 (index = 3313)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (54)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (33)
, END
// State S96 (index = 3360)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__26_, SHIFT (56)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (36)
, END
// State S97 (index = 3409)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (39)
, END
// State S98 (index = 3458)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (40)
, END
// State S99 (index = 3507)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (41)
, END
// State S100 (index = 3556)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (42)
, END
// State S101 (index = 3605)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (43)
, END
// State S102 (index = 3654)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (44)
, END
// State S103 (index = 3703)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (45)
, END
// State S104 (index = 3772)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (45)
, END
// State S105 (index = 3841)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (45)
, END
// State S106 (index = 3910)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (45)
, END
// State S107 (index = 3979)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (50)
, END
// State S108 (index = 4054)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (50)
, END
// State S109 (index = 4129)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (50)
, END
// State S110 (index = 4204)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (74)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (54)
, END
// State S111 (index = 4281)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (65)
, END
// State S112 (index = 4284)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (66)
, END
// State S113 (index = 4287)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (67)
, END
// State S114 (index = 4290)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (143)
, END
// State S115 (index = 4293)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S116 (index = 4310)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (145)
, END
// State S117 (index = 4313)
, C_Lexique_galgasTemplateScanner::kToken_in, SHIFT (146)
, END
// State S118 (index = 4316)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (95)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (95)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (95)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S119 (index = 4337)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (93)
, C_Lexique_galgasTemplateScanner::kToken_elsif, SHIFT (148)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (93)
, END
// State S120 (index = 4344)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (107)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (107)
, C_Lexique_galgasTemplateScanner::kToken__2C_, SHIFT (150)
, END
// State S121 (index = 4351)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (152)
, END
// State S122 (index = 4354)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (31)
, END
// State S123 (index = 4385)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (82)
, END
// State S124 (index = 4392)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (21)
, END
// State S125 (index = 4471)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (82)
, END
// State S126 (index = 4478)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (155)
, END
// State S127 (index = 4481)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (156)
, END
// State S128 (index = 4484)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (157)
, END
// State S129 (index = 4487)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (158)
, END
// State S130 (index = 4490)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (62)
, END
// State S131 (index = 4569)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (159)
, END
// State S132 (index = 4572)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (34)
, END
// State S133 (index = 4615)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (35)
, END
// State S134 (index = 4658)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (37)
, END
// State S135 (index = 4705)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (46)
, END
// State S136 (index = 4766)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (47)
, END
// State S137 (index = 4827)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (48)
, END
// State S138 (index = 4888)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (49)
, END
// State S139 (index = 4949)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (51)
, END
// State S140 (index = 5018)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (52)
, END
// State S141 (index = 5087)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (53)
, END
// State S142 (index = 5156)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (55)
, END
// State S143 (index = 5231)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (22)
, END
// State S144 (index = 5310)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (71)
, END
// State S145 (index = 5313)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (27)
, END
// State S146 (index = 5344)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S147 (index = 5375)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (96)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (96)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (96)
, END
// State S148 (index = 5382)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S149 (index = 5413)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (97)
, C_Lexique_galgasTemplateScanner::kToken_else, SHIFT (162)
, END
// State S150 (index = 5418)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (164)
, END
// State S151 (index = 5421)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (165)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (109)
, END
// State S152 (index = 5426)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (105)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (105)
, END
// State S153 (index = 5445)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (69)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (69)
, END
// State S154 (index = 5450)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (169)
, END
// State S155 (index = 5453)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (59)
, END
// State S156 (index = 5532)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (68)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (82)
, END
// State S157 (index = 5539)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (63)
, END
// State S158 (index = 5542)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (171)
, END
// State S159 (index = 5545)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (61)
, END
// State S160 (index = 5624)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (172)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (75)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (75)
, END
// State S161 (index = 5631)
, C_Lexique_galgasTemplateScanner::kToken_then, SHIFT (174)
, END
// State S162 (index = 5634)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (99)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S163 (index = 5651)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (177)
, END
// State S164 (index = 5654)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (107)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (107)
, C_Lexique_galgasTemplateScanner::kToken__2C_, SHIFT (150)
, END
// State S165 (index = 5661)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (179)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (117)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (180)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (181)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (117)
, END
// State S166 (index = 5672)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (32)
, END
// State S167 (index = 5675)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (105)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (105)
, END
// State S168 (index = 5694)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (103)
, C_Lexique_galgasTemplateScanner::kToken_case, SHIFT (80)
, END
// State S169 (index = 5699)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (58)
, END
// State S170 (index = 5778)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (186)
, END
// State S171 (index = 5781)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (64)
, END
// State S172 (index = 5784)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (187)
, END
// State S173 (index = 5787)
, C_Lexique_galgasTemplateScanner::kToken_before, SHIFT (188)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (77)
, END
// State S174 (index = 5792)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (95)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (95)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (95)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S175 (index = 5813)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (99)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S176 (index = 5830)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (98)
, END
// State S177 (index = 5833)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (29)
, END
// State S178 (index = 5864)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (108)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (108)
, END
// State S179 (index = 5869)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (114)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (114)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (114)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, REDUCE (114)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (114)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (114)
, END
// State S180 (index = 5882)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (192)
, END
// State S181 (index = 5885)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (116)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (116)
, END
// State S182 (index = 5890)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (179)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (117)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (111)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (180)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (181)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (117)
, END
// State S183 (index = 5903)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (118)
, C_Lexique_galgasTemplateScanner::kToken_unused, SHIFT (195)
, END
// State S184 (index = 5908)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (106)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (106)
, END
// State S185 (index = 5913)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (104)
, END
// State S186 (index = 5916)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (60)
, END
// State S187 (index = 5995)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (76)
, END
// State S188 (index = 6000)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S189 (index = 6017)
, C_Lexique_galgasTemplateScanner::kToken_do, SHIFT (199)
, END
// State S190 (index = 6020)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (93)
, C_Lexique_galgasTemplateScanner::kToken_elsif, SHIFT (148)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (93)
, END
// State S191 (index = 6027)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (100)
, END
// State S192 (index = 6030)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (113)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (113)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (113)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, REDUCE (113)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (113)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (113)
, END
// State S193 (index = 6043)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (201)
, END
// State S194 (index = 6046)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (179)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (117)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (111)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (180)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (181)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (117)
, END
// State S195 (index = 6059)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (119)
, END
// State S196 (index = 6062)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (203)
, END
// State S197 (index = 6065)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S198 (index = 6082)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (78)
, END
// State S199 (index = 6085)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (81)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (81)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (81)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (81)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (81)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (81)
, C_Lexique_galgasTemplateScanner::kToken_index, SHIFT (205)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (81)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (81)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (81)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (81)
, END
// State S200 (index = 6108)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (94)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (94)
, END
// State S201 (index = 6113)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (110)
, END
// State S202 (index = 6116)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (112)
, END
// State S203 (index = 6119)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (115)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (115)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (115)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, REDUCE (115)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (115)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (115)
, END
// State S204 (index = 6132)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (80)
, END
// State S205 (index = 6135)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (207)
, END
// State S206 (index = 6138)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (83)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (83)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (83)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S207 (index = 6159)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (82)
, END
// State S208 (index = 6180)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (83)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (83)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (83)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S209 (index = 6201)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (85)
, C_Lexique_galgasTemplateScanner::kToken_between, SHIFT (211)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (85)
, END
// State S210 (index = 6208)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (84)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (84)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (84)
, END
// State S211 (index = 6215)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (87)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (87)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S212 (index = 6234)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (89)
, C_Lexique_galgasTemplateScanner::kToken_after, SHIFT (215)
, END
// State S213 (index = 6239)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (87)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (87)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S214 (index = 6258)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (86)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (86)
, END
// State S215 (index = 6263)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (91)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S216 (index = 6280)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (220)
, END
// State S217 (index = 6283)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (88)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (88)
, END
// State S218 (index = 6288)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (91)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S219 (index = 6305)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (90)
, END
// State S220 (index = 6308)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (28)
, END
// State S221 (index = 6339)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (92)
, END} ;

static const uint32_t gActionTableIndex_templateGrammar [222] = {
  0  // S0
, 17  // S1
, 48  // S2
, 79  // S3
, 110  // S4
, 141  // S5
, 148  // S6
, 179  // S7
, 210  // S8
, 227  // S9
, 230  // S10
, 233  // S11
, 264  // S12
, 345  // S13
, 376  // S14
, 407  // S15
, 438  // S16
, 517  // S17
, 596  // S18
, 675  // S19
, 754  // S20
, 833  // S21
, 912  // S22
, 991  // S23
, 1070  // S24
, 1151  // S25
, 1190  // S26
, 1221  // S27
, 1268  // S28
, 1317  // S29
, 1378  // S30
, 1447  // S31
, 1522  // S32
, 1601  // S33
, 1604  // S34
, 1607  // S35
, 1610  // S36
, 1613  // S37
, 1616  // S38
, 1621  // S39
, 1624  // S40
, 1699  // S41
, 1706  // S42
, 1781  // S43
, 1856  // S44
, 1859  // S45
, 1940  // S46
, 2019  // S47
, 2050  // S48
, 2053  // S49
, 2056  // S50
, 2061  // S51
, 2064  // S52
, 2143  // S53
, 2174  // S54
, 2205  // S55
, 2248  // S56
, 2279  // S57
, 2326  // S58
, 2357  // S59
, 2388  // S60
, 2419  // S61
, 2450  // S62
, 2481  // S63
, 2512  // S64
, 2561  // S65
, 2592  // S66
, 2623  // S67
, 2654  // S68
, 2685  // S69
, 2746  // S70
, 2777  // S71
, 2808  // S72
, 2839  // S73
, 2908  // S74
, 2911  // S75
, 2918  // S76
, 2993  // S77
, 3010  // S78
, 3013  // S79
, 3034  // S80
, 3037  // S81
, 3040  // S82
, 3071  // S83
, 3074  // S84
, 3079  // S85
, 3158  // S86
, 3237  // S87
, 3240  // S88
, 3247  // S89
, 3250  // S90
, 3253  // S91
, 3256  // S92
, 3259  // S93
, 3266  // S94
, 3313  // S95
, 3360  // S96
, 3409  // S97
, 3458  // S98
, 3507  // S99
, 3556  // S100
, 3605  // S101
, 3654  // S102
, 3703  // S103
, 3772  // S104
, 3841  // S105
, 3910  // S106
, 3979  // S107
, 4054  // S108
, 4129  // S109
, 4204  // S110
, 4281  // S111
, 4284  // S112
, 4287  // S113
, 4290  // S114
, 4293  // S115
, 4310  // S116
, 4313  // S117
, 4316  // S118
, 4337  // S119
, 4344  // S120
, 4351  // S121
, 4354  // S122
, 4385  // S123
, 4392  // S124
, 4471  // S125
, 4478  // S126
, 4481  // S127
, 4484  // S128
, 4487  // S129
, 4490  // S130
, 4569  // S131
, 4572  // S132
, 4615  // S133
, 4658  // S134
, 4705  // S135
, 4766  // S136
, 4827  // S137
, 4888  // S138
, 4949  // S139
, 5018  // S140
, 5087  // S141
, 5156  // S142
, 5231  // S143
, 5310  // S144
, 5313  // S145
, 5344  // S146
, 5375  // S147
, 5382  // S148
, 5413  // S149
, 5418  // S150
, 5421  // S151
, 5426  // S152
, 5445  // S153
, 5450  // S154
, 5453  // S155
, 5532  // S156
, 5539  // S157
, 5542  // S158
, 5545  // S159
, 5624  // S160
, 5631  // S161
, 5634  // S162
, 5651  // S163
, 5654  // S164
, 5661  // S165
, 5672  // S166
, 5675  // S167
, 5694  // S168
, 5699  // S169
, 5778  // S170
, 5781  // S171
, 5784  // S172
, 5787  // S173
, 5792  // S174
, 5813  // S175
, 5830  // S176
, 5833  // S177
, 5864  // S178
, 5869  // S179
, 5882  // S180
, 5885  // S181
, 5890  // S182
, 5903  // S183
, 5908  // S184
, 5913  // S185
, 5916  // S186
, 5995  // S187
, 6000  // S188
, 6017  // S189
, 6020  // S190
, 6027  // S191
, 6030  // S192
, 6043  // S193
, 6046  // S194
, 6059  // S195
, 6062  // S196
, 6065  // S197
, 6082  // S198
, 6085  // S199
, 6108  // S200
, 6113  // S201
, 6116  // S202
, 6119  // S203
, 6132  // S204
, 6135  // S205
, 6138  // S206
, 6159  // S207
, 6180  // S208
, 6201  // S209
, 6208  // S210
, 6215  // S211
, 6234  // S212
, 6239  // S213
, 6258  // S214
, 6263  // S215
, 6280  // S216
, 6283  // S217
, 6288  // S218
, 6305  // S219
, 6308  // S220
, 6339  // S221
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_templateGrammar_0 [7] = {8, 8,
  9, 9,
  37, 10, -1} ;

static const int16_t gSuccessorTable_templateGrammar_1 [15] = {0, 26,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_4 [15] = {0, 33,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_5 [3] = {23, 36, -1} ;

static const int16_t gSuccessorTable_templateGrammar_6 [15] = {0, 37,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_7 [15] = {0, 38,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_8 [5] = {8, 8,
  37, 39, -1} ;

static const int16_t gSuccessorTable_templateGrammar_11 [5] = {5, 40,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_13 [5] = {5, 42,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_14 [5] = {5, 43,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_15 [15] = {0, 44,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_24 [3] = {17, 46, -1} ;

static const int16_t gSuccessorTable_templateGrammar_25 [17] = {0, 51,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32,
  18, 52, -1} ;

static const int16_t gSuccessorTable_templateGrammar_27 [3] = {11, 55, -1} ;

static const int16_t gSuccessorTable_templateGrammar_28 [3] = {12, 57, -1} ;

static const int16_t gSuccessorTable_templateGrammar_29 [3] = {13, 64, -1} ;

static const int16_t gSuccessorTable_templateGrammar_30 [3] = {14, 69, -1} ;

static const int16_t gSuccessorTable_templateGrammar_31 [3] = {15, 73, -1} ;

static const int16_t gSuccessorTable_templateGrammar_32 [3] = {16, 76, -1} ;

static const int16_t gSuccessorTable_templateGrammar_38 [3] = {38, 81, -1} ;

static const int16_t gSuccessorTable_templateGrammar_41 [5] = {7, 83,
  21, 84, -1} ;

static const int16_t gSuccessorTable_templateGrammar_45 [3] = {17, 86, -1} ;

static const int16_t gSuccessorTable_templateGrammar_47 [15] = {0, 87,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_50 [3] = {19, 92, -1} ;

static const int16_t gSuccessorTable_templateGrammar_53 [13] = {1, 94,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_54 [13] = {1, 95,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_56 [11] = {2, 96,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_58 [9] = {3, 97,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_59 [9] = {3, 98,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_60 [9] = {3, 99,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_61 [9] = {3, 100,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_62 [9] = {3, 101,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_63 [9] = {3, 102,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_65 [7] = {4, 103,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_66 [7] = {4, 104,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_67 [7] = {4, 105,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_68 [7] = {4, 106,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_70 [5] = {5, 107,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_71 [5] = {5, 108,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_72 [5] = {5, 109,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_75 [3] = {20, 114, -1} ;

static const int16_t gSuccessorTable_templateGrammar_77 [5] = {8, 115,
  22, 116, -1} ;

static const int16_t gSuccessorTable_templateGrammar_79 [5] = {8, 118,
  34, 119, -1} ;

static const int16_t gSuccessorTable_templateGrammar_80 [3] = {10, 121, -1} ;

static const int16_t gSuccessorTable_templateGrammar_82 [15] = {0, 123,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_88 [5] = {7, 126,
  21, 84, -1} ;

static const int16_t gSuccessorTable_templateGrammar_93 [5] = {7, 131,
  21, 84, -1} ;

static const int16_t gSuccessorTable_templateGrammar_94 [3] = {11, 132, -1} ;

static const int16_t gSuccessorTable_templateGrammar_95 [3] = {11, 133, -1} ;

static const int16_t gSuccessorTable_templateGrammar_96 [3] = {12, 134, -1} ;

static const int16_t gSuccessorTable_templateGrammar_103 [3] = {14, 135, -1} ;

static const int16_t gSuccessorTable_templateGrammar_104 [3] = {14, 136, -1} ;

static const int16_t gSuccessorTable_templateGrammar_105 [3] = {14, 137, -1} ;

static const int16_t gSuccessorTable_templateGrammar_106 [3] = {14, 138, -1} ;

static const int16_t gSuccessorTable_templateGrammar_107 [3] = {15, 139, -1} ;

static const int16_t gSuccessorTable_templateGrammar_108 [3] = {15, 140, -1} ;

static const int16_t gSuccessorTable_templateGrammar_109 [3] = {15, 141, -1} ;

static const int16_t gSuccessorTable_templateGrammar_110 [3] = {16, 142, -1} ;

static const int16_t gSuccessorTable_templateGrammar_115 [5] = {8, 115,
  22, 144, -1} ;

static const int16_t gSuccessorTable_templateGrammar_118 [5] = {8, 118,
  34, 147, -1} ;

static const int16_t gSuccessorTable_templateGrammar_119 [3] = {33, 149, -1} ;

static const int16_t gSuccessorTable_templateGrammar_120 [3] = {40, 151, -1} ;

static const int16_t gSuccessorTable_templateGrammar_123 [3] = {21, 153, -1} ;

static const int16_t gSuccessorTable_templateGrammar_125 [5] = {7, 154,
  21, 84, -1} ;

static const int16_t gSuccessorTable_templateGrammar_146 [15] = {0, 160,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_148 [15] = {0, 161,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_149 [3] = {35, 163, -1} ;

static const int16_t gSuccessorTable_templateGrammar_151 [3] = {41, 166, -1} ;

static const int16_t gSuccessorTable_templateGrammar_152 [5] = {8, 167,
  39, 168, -1} ;

static const int16_t gSuccessorTable_templateGrammar_156 [5] = {7, 170,
  21, 84, -1} ;

static const int16_t gSuccessorTable_templateGrammar_160 [3] = {24, 173, -1} ;

static const int16_t gSuccessorTable_templateGrammar_162 [5] = {8, 175,
  36, 176, -1} ;

static const int16_t gSuccessorTable_templateGrammar_164 [3] = {40, 178, -1} ;

static const int16_t gSuccessorTable_templateGrammar_165 [5] = {43, 182,
  44, 183, -1} ;

static const int16_t gSuccessorTable_templateGrammar_167 [5] = {8, 167,
  39, 184, -1} ;

static const int16_t gSuccessorTable_templateGrammar_168 [3] = {38, 185, -1} ;

static const int16_t gSuccessorTable_templateGrammar_173 [3] = {25, 189, -1} ;

static const int16_t gSuccessorTable_templateGrammar_174 [5] = {8, 118,
  34, 190, -1} ;

static const int16_t gSuccessorTable_templateGrammar_175 [5] = {8, 175,
  36, 191, -1} ;

static const int16_t gSuccessorTable_templateGrammar_182 [7] = {42, 193,
  43, 194,
  44, 183, -1} ;

static const int16_t gSuccessorTable_templateGrammar_183 [3] = {45, 196, -1} ;

static const int16_t gSuccessorTable_templateGrammar_188 [5] = {8, 197,
  26, 198, -1} ;

static const int16_t gSuccessorTable_templateGrammar_190 [3] = {33, 200, -1} ;

static const int16_t gSuccessorTable_templateGrammar_194 [7] = {42, 202,
  43, 194,
  44, 183, -1} ;

static const int16_t gSuccessorTable_templateGrammar_197 [5] = {8, 197,
  26, 204, -1} ;

static const int16_t gSuccessorTable_templateGrammar_199 [3] = {27, 206, -1} ;

static const int16_t gSuccessorTable_templateGrammar_206 [5] = {8, 208,
  28, 209, -1} ;

static const int16_t gSuccessorTable_templateGrammar_208 [5] = {8, 208,
  28, 210, -1} ;

static const int16_t gSuccessorTable_templateGrammar_209 [3] = {29, 212, -1} ;

static const int16_t gSuccessorTable_templateGrammar_211 [5] = {8, 213,
  30, 214, -1} ;

static const int16_t gSuccessorTable_templateGrammar_212 [3] = {31, 216, -1} ;

static const int16_t gSuccessorTable_templateGrammar_213 [5] = {8, 213,
  30, 217, -1} ;

static const int16_t gSuccessorTable_templateGrammar_215 [5] = {8, 218,
  32, 219, -1} ;

static const int16_t gSuccessorTable_templateGrammar_218 [5] = {8, 218,
  32, 221, -1} ;

static const int16_t * gSuccessorTable_templateGrammar [222] = {
gSuccessorTable_templateGrammar_0, gSuccessorTable_templateGrammar_1, NULL, NULL, 
  gSuccessorTable_templateGrammar_4, gSuccessorTable_templateGrammar_5, gSuccessorTable_templateGrammar_6, gSuccessorTable_templateGrammar_7, 
  gSuccessorTable_templateGrammar_8, NULL, NULL, gSuccessorTable_templateGrammar_11, 
  NULL, gSuccessorTable_templateGrammar_13, gSuccessorTable_templateGrammar_14, gSuccessorTable_templateGrammar_15, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_24, gSuccessorTable_templateGrammar_25, NULL, gSuccessorTable_templateGrammar_27, 
  gSuccessorTable_templateGrammar_28, gSuccessorTable_templateGrammar_29, gSuccessorTable_templateGrammar_30, gSuccessorTable_templateGrammar_31, 
  gSuccessorTable_templateGrammar_32, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_38, NULL, 
  NULL, gSuccessorTable_templateGrammar_41, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_45, NULL, gSuccessorTable_templateGrammar_47, 
  NULL, NULL, gSuccessorTable_templateGrammar_50, NULL, 
  NULL, gSuccessorTable_templateGrammar_53, gSuccessorTable_templateGrammar_54, NULL, 
  gSuccessorTable_templateGrammar_56, NULL, gSuccessorTable_templateGrammar_58, gSuccessorTable_templateGrammar_59, 
  gSuccessorTable_templateGrammar_60, gSuccessorTable_templateGrammar_61, gSuccessorTable_templateGrammar_62, gSuccessorTable_templateGrammar_63, 
  NULL, gSuccessorTable_templateGrammar_65, gSuccessorTable_templateGrammar_66, gSuccessorTable_templateGrammar_67, 
  gSuccessorTable_templateGrammar_68, NULL, gSuccessorTable_templateGrammar_70, gSuccessorTable_templateGrammar_71, 
  gSuccessorTable_templateGrammar_72, NULL, NULL, gSuccessorTable_templateGrammar_75, 
  NULL, gSuccessorTable_templateGrammar_77, NULL, gSuccessorTable_templateGrammar_79, 
  gSuccessorTable_templateGrammar_80, NULL, gSuccessorTable_templateGrammar_82, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_88, NULL, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_93, gSuccessorTable_templateGrammar_94, gSuccessorTable_templateGrammar_95, 
  gSuccessorTable_templateGrammar_96, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_templateGrammar_103, 
  gSuccessorTable_templateGrammar_104, gSuccessorTable_templateGrammar_105, gSuccessorTable_templateGrammar_106, gSuccessorTable_templateGrammar_107, 
  gSuccessorTable_templateGrammar_108, gSuccessorTable_templateGrammar_109, gSuccessorTable_templateGrammar_110, NULL, 
  NULL, NULL, NULL, gSuccessorTable_templateGrammar_115, 
  NULL, NULL, gSuccessorTable_templateGrammar_118, gSuccessorTable_templateGrammar_119, 
  gSuccessorTable_templateGrammar_120, NULL, NULL, gSuccessorTable_templateGrammar_123, 
  NULL, gSuccessorTable_templateGrammar_125, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_146, NULL, 
  gSuccessorTable_templateGrammar_148, gSuccessorTable_templateGrammar_149, NULL, gSuccessorTable_templateGrammar_151, 
  gSuccessorTable_templateGrammar_152, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_156, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_160, NULL, gSuccessorTable_templateGrammar_162, NULL, 
  gSuccessorTable_templateGrammar_164, gSuccessorTable_templateGrammar_165, NULL, gSuccessorTable_templateGrammar_167, 
  gSuccessorTable_templateGrammar_168, NULL, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_173, gSuccessorTable_templateGrammar_174, gSuccessorTable_templateGrammar_175, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_182, gSuccessorTable_templateGrammar_183, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_188, NULL, gSuccessorTable_templateGrammar_190, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_194, NULL, 
  NULL, gSuccessorTable_templateGrammar_197, NULL, gSuccessorTable_templateGrammar_199, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_206, NULL, 
  gSuccessorTable_templateGrammar_208, gSuccessorTable_templateGrammar_209, NULL, gSuccessorTable_templateGrammar_211, 
  gSuccessorTable_templateGrammar_212, gSuccessorTable_templateGrammar_213, NULL, gSuccessorTable_templateGrammar_215, 
  NULL, NULL, gSuccessorTable_templateGrammar_218, NULL, 
  NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_templateGrammar [121 * 2] = {
  0, 2,
  1, 2,
  2, 2,
  3, 2,
  4, 2,
  5, 2,
  5, 2,
  5, 2,
  5, 2,
  6, 1,
  6, 3,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 2,
  6, 2,
  6, 4,
  6, 4,
  7, 1,
  8, 2,
  8, 1,
  8, 1,
  8, 5,
  8, 14,
  8, 7,
  9, 1,
  8, 4,
  10, 3,
  11, 0,
  11, 3,
  11, 3,
  12, 0,
  12, 3,
  13, 0,
  13, 2,
  13, 2,
  13, 2,
  13, 2,
  13, 2,
  13, 2,
  14, 0,
  14, 3,
  14, 3,
  14, 3,
  14, 3,
  15, 0,
  15, 3,
  15, 3,
  15, 3,
  16, 0,
  16, 3,
  17, 0,
  17, 2,
  18, 5,
  18, 4,
  18, 6,
  18, 4,
  18, 3,
  19, 3,
  19, 4,
  20, 1,
  20, 1,
  20, 1,
  21, 0,
  21, 3,
  22, 0,
  22, 2,
  23, 0,
  23, 1,
  23, 1,
  24, 0,
  24, 2,
  25, 0,
  25, 2,
  26, 0,
  26, 2,
  27, 0,
  27, 2,
  28, 0,
  28, 2,
  29, 0,
  29, 2,
  30, 0,
  30, 2,
  31, 0,
  31, 2,
  32, 0,
  32, 2,
  33, 0,
  33, 5,
  34, 0,
  34, 2,
  35, 0,
  35, 2,
  36, 0,
  36, 2,
  37, 0,
  37, 2,
  38, 0,
  38, 5,
  39, 0,
  39, 2,
  40, 0,
  40, 3,
  41, 0,
  41, 4,
  42, 0,
  42, 2,
  43, 2,
  43, 1,
  43, 3,
  44, 1,
  44, 0,
  45, 0,
  45, 1,
  46, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'expression' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_expression_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_templateSyntax_expression_i0_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_expression_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_templateSyntax_expression_i0_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'relation_term' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_relation_5F_term_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_templateSyntax_relation_5F_term_i1_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_term_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_templateSyntax_relation_5F_term_i1_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'relation_factor' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_relation_5F_factor_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_templateSyntax_relation_5F_factor_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_factor_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_templateSyntax_relation_5F_factor_i2_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'simple_expression' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_simple_5F_expression_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_templateSyntax_simple_5F_expression_i3_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_simple_5F_expression_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_templateSyntax_simple_5F_expression_i3_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                         'term' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_term_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_templateSyntax_term_i4_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_term_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_templateSyntax_term_i4_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        'factor' non terminal implementation                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_factor_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_i5_parse(inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_i6_parse(inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_i7_parse(inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_factor_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_i5_(parameter_1, inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_i6_(parameter_1, inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_i7_(parameter_1, inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_i8_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'primary' non terminal implementation                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_primary_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_i9_parse(inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_i10_parse(inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_i11_parse(inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_i12_parse(inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_i13_parse(inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_i14_parse(inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_i15_parse(inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_i16_parse(inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_i17_parse(inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_i18_parse(inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_i19_parse(inLexique) ;
    break ;
  case 20 :
      rule_templateSyntax_primary_i20_parse(inLexique) ;
    break ;
  case 21 :
      rule_templateSyntax_primary_i21_parse(inLexique) ;
    break ;
  case 22 :
      rule_templateSyntax_primary_i22_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_primary_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_i9_(parameter_1, inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_i10_(parameter_1, inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_i11_(parameter_1, inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_i12_(parameter_1, inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_i13_(parameter_1, inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_i14_(parameter_1, inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_i15_(parameter_1, inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_i16_(parameter_1, inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_i17_(parameter_1, inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_i18_(parameter_1, inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_i19_(parameter_1, inLexique) ;
    break ;
  case 20 :
      rule_templateSyntax_primary_i20_(parameter_1, inLexique) ;
    break ;
  case 21 :
      rule_templateSyntax_primary_i21_(parameter_1, inLexique) ;
    break ;
  case 22 :
      rule_templateSyntax_primary_i22_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'output_expression_list' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 23 :
      rule_templateSyntax_output_5F_expression_5F_list_i23_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_ (GALGAS_templateExpressionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 23 :
      rule_templateSyntax_output_5F_expression_5F_list_i23_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'template_instruction' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_template_5F_instruction_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_parse(inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_parse(inLexique) ;
    break ;
  case 26 :
      rule_templateSyntax_template_5F_instruction_i26_parse(inLexique) ;
    break ;
  case 27 :
      rule_templateSyntax_template_5F_instruction_i27_parse(inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_template_5F_instruction_i28_parse(inLexique) ;
    break ;
  case 29 :
      rule_templateSyntax_template_5F_instruction_i29_parse(inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_template_5F_instruction_i31_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_instruction_ (GALGAS_templateInstructionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_(parameter_1, inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_(parameter_1, inLexique) ;
    break ;
  case 26 :
      rule_templateSyntax_template_5F_instruction_i26_(parameter_1, inLexique) ;
    break ;
  case 27 :
      rule_templateSyntax_template_5F_instruction_i27_(parameter_1, inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_template_5F_instruction_i28_(parameter_1, inLexique) ;
    break ;
  case 29 :
      rule_templateSyntax_template_5F_instruction_i29_(parameter_1, inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_template_5F_instruction_i31_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'template_parser_start_symbol' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i30_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_ (GALGAS_templateInstructionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i30_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_templateGrammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_galgasTemplateScanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_templateGrammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_galgasTemplateScanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                     gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                     gProductionsTable_templateGrammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_templateInstructionListAST &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_galgasTemplateScanner * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                                         gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                                         gProductionsTable_templateGrammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_templateGrammar grammar ;
          grammar.nt_template_5F_parser_5F_start_5F_symbol_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_templateInstructionListAST &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_galgasTemplateScanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                                       gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                                       gProductionsTable_templateGrammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_templateGrammar grammar ;
        grammar.nt_template_5F_parser_5F_start_5F_symbol_ (parameter_1, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'switch_case' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_switch_5F_case_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 32 :
      rule_templateSyntax_switch_5F_case_i32_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_switch_5F_case_ (GALGAS_lstringlist &  parameter_1,
                                GALGAS_switchExtractedValuesListAST &  parameter_2,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 32 :
      rule_templateSyntax_switch_5F_case_i32_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_0' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_0 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 33 34 35
  return inLexique->nextProductionIndex () - 32 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_1' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_1 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 36 37
  return inLexique->nextProductionIndex () - 35 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_2' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_2 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 38 39 40 41 42 43 44
  return inLexique->nextProductionIndex () - 37 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_3' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_3 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 45 46 47 48 49
  return inLexique->nextProductionIndex () - 44 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_4' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_4 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 50 51 52 53
  return inLexique->nextProductionIndex () - 49 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_5' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_5 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 54 55
  return inLexique->nextProductionIndex () - 53 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_6' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_6 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 56 57
  return inLexique->nextProductionIndex () - 55 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_7' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_7 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 58 59 60 61 62
  return inLexique->nextProductionIndex () - 57 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_8' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_8 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 63 64
  return inLexique->nextProductionIndex () - 62 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_9' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_9 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 65 66 67
  return inLexique->nextProductionIndex () - 64 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_10' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_10 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 68 69
  return inLexique->nextProductionIndex () - 67 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_11' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_11 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 70 71
  return inLexique->nextProductionIndex () - 69 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_12' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_12 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 72 73 74
  return inLexique->nextProductionIndex () - 71 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_13' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_13 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 75 76
  return inLexique->nextProductionIndex () - 74 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_14' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_14 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 77 78
  return inLexique->nextProductionIndex () - 76 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_15' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_15 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 79 80
  return inLexique->nextProductionIndex () - 78 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_16' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_16 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 81 82
  return inLexique->nextProductionIndex () - 80 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_17' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_17 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 83 84
  return inLexique->nextProductionIndex () - 82 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_18' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_18 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 85 86
  return inLexique->nextProductionIndex () - 84 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_19' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_19 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 87 88
  return inLexique->nextProductionIndex () - 86 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_20' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_20 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 89 90
  return inLexique->nextProductionIndex () - 88 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_21' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_21 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 91 92
  return inLexique->nextProductionIndex () - 90 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_22' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_22 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 93 94
  return inLexique->nextProductionIndex () - 92 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_23' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_23 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 95 96
  return inLexique->nextProductionIndex () - 94 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_24' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_24 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 97 98
  return inLexique->nextProductionIndex () - 96 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_25' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_25 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 99 100
  return inLexique->nextProductionIndex () - 98 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_26' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_26 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 101 102
  return inLexique->nextProductionIndex () - 100 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_27' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_27 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 103 104
  return inLexique->nextProductionIndex () - 102 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_28' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_28 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 105 106
  return inLexique->nextProductionIndex () - 104 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_29' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_29 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 107 108
  return inLexique->nextProductionIndex () - 106 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_30' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_30 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 109 110
  return inLexique->nextProductionIndex () - 108 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_31' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_31 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 111 112
  return inLexique->nextProductionIndex () - 110 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_32' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_32 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 113 114 115
  return inLexique->nextProductionIndex () - 112 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_33' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_33 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 116 117
  return inLexique->nextProductionIndex () - 115 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_34' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_34 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 118 119
  return inLexique->nextProductionIndex () - 117 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionStringForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionStringForGeneration * p = (const cPtr_templateInstructionStringForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionStringForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTemplateString.objectCompare (p->mProperty_mTemplateString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionStringForGeneration::objectCompare (const GALGAS_templateInstructionStringForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration::GALGAS_templateInstructionStringForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionStringForGeneration::constructor_new (GALGAS_string::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration::GALGAS_templateInstructionStringForGeneration (const cPtr_templateInstructionStringForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionStringForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::constructor_new (const GALGAS_string & inAttribute_mTemplateString
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration result ;
  if (inAttribute_mTemplateString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionStringForGeneration (inAttribute_mTemplateString COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionStringForGeneration::getter_mTemplateString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionStringForGeneration * p = (const cPtr_templateInstructionStringForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringForGeneration) ;
    result = p->mProperty_mTemplateString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionStringForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringForGeneration::cPtr_templateInstructionStringForGeneration (const GALGAS_string & in_mTemplateString
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mTemplateString (in_mTemplateString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionStringForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;
}

void cPtr_templateInstructionStringForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@templateInstructionStringForGeneration:" ;
  mProperty_mTemplateString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionStringForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionStringForGeneration (mProperty_mTemplateString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionStringForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ("templateInstructionStringForGeneration",
                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionStringForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionStringForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration result ;
  const GALGAS_templateInstructionStringForGeneration * p = (const GALGAS_templateInstructionStringForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionStringForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionStringForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionStringForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak::GALGAS_templateInstructionStringForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak & GALGAS_templateInstructionStringForGeneration_2D_weak::operator = (const GALGAS_templateInstructionStringForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak::GALGAS_templateInstructionStringForGeneration_2D_weak (const GALGAS_templateInstructionStringForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak GALGAS_templateInstructionStringForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration_2D_weak::bang_templateInstructionStringForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionStringForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionStringForGeneration) ;
      result = GALGAS_templateInstructionStringForGeneration ((cPtr_templateInstructionStringForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionStringForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2D_weak ("templateInstructionStringForGeneration-weak",
                                                                       & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionStringForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionStringForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak GALGAS_templateInstructionStringForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration_2D_weak result ;
  const GALGAS_templateInstructionStringForGeneration_2D_weak * p = (const GALGAS_templateInstructionStringForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionStringForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry::GALGAS_unifiedTypeMap_2D_entry (void) :
AC_GALGAS_sharedMapEntry () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_unifiedTypeMap_2D_entry::constructor_null (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry result ;
  result.makeNullEntry (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_entry::class_method_makeOptionalEntry (GALGAS_unifiedTypeMap & ioMap,
                                                                     GALGAS_lstring inKey,
                                                                     GALGAS_unifiedTypeMap_2D_entry & outEntry
                                                                     COMMA_LOCATION_ARGS) {
  outEntry.internalMakeOptionalEntry (ioMap, inKey COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (GALGAS_unifiedTypeMap & ioMap,
                                                             GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_entry & outEntry
                                                             COMMA_LOCATION_ARGS) {
  outEntry.internalMakeEntry (ioMap, inKey COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (GALGAS_unifiedTypeMap & ioMap,
                                                                       GALGAS_string inKey,
                                                                       GALGAS_unifiedTypeMap_2D_entry & outEntry
                                                                       COMMA_LOCATION_ARGS) {
  outEntry.internalMakeEntryFromString (ioMap, inKey COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMap_2D_entry::getter_mIsPredefined (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mIsPredefined" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mIsPredefined;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMap_2D_entry::getter_mIsConcrete (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mIsConcrete" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mIsConcrete;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_unifiedTypeMap_2D_entry::getter_mSuperType (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mSuperType" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mSuperType;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_unifiedTypeMap_2D_entry::getter_mTypeKindEnum (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindEnum result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mTypeKindEnum" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mTypeKindEnum;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMap_2D_entry::getter_mSupportCollectionValue (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mSupportCollectionValue" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mSupportCollectionValue;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_unifiedTypeMap_2D_entry::getter_mAllTypedPropertyList (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mAllTypedPropertyList" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mAllTypedPropertyList;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_unifiedTypeMap_2D_entry::getter_mPropertyMap (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mPropertyMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mPropertyMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_unifiedTypeMap_2D_entry::getter_mCurrentTypedPropertyList (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mCurrentTypedPropertyList" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mCurrentTypedPropertyList;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_unifiedTypeMap_2D_entry::getter_mConstructorMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mConstructorMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mConstructorMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap GALGAS_unifiedTypeMap_2D_entry::getter_mGetterMap (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_getterMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mGetterMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mGetterMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap GALGAS_unifiedTypeMap_2D_entry::getter_mSetterMap (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_setterMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mSetterMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mSetterMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap GALGAS_unifiedTypeMap_2D_entry::getter_mInstanceMethodMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_instanceMethodMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mInstanceMethodMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mInstanceMethodMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap GALGAS_unifiedTypeMap_2D_entry::getter_mClassMethodMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_classMethodMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mClassMethodMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mClassMethodMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap GALGAS_unifiedTypeMap_2D_entry::getter_mOptionalMethodMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_optionalMethodMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mOptionalMethodMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mOptionalMethodMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList GALGAS_unifiedTypeMap_2D_entry::getter_mEnumerationDescriptor (C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mEnumerationDescriptor" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mEnumerationDescriptor;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_unifiedTypeMap_2D_entry::getter_mHandledOperatorFlags (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_operators result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mHandledOperatorFlags" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mHandledOperatorFlags;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_unifiedTypeMap_2D_entry::getter_mAddAssignOperatorArguments (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mAddAssignOperatorArguments" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mAddAssignOperatorArguments;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap GALGAS_unifiedTypeMap_2D_entry::getter_mEnumConstantMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_constantIndexMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mEnumConstantMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mEnumConstantMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_unifiedTypeMap_2D_entry::getter_mEnumConstantList (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mEnumConstantList" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mEnumConstantList;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap_2D_entry::getter_mMapSearchMethodList (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mMapSearchMethodList" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mMapSearchMethodList;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap_2D_entry::getter_mMapEntrySearchConstructorList (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mMapEntrySearchConstructorList" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mMapEntrySearchConstructorList;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMap_2D_entry::getter_mGenerateHeaderInSeparateFile (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mGenerateHeaderInSeparateFile" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mGenerateHeaderInSeparateFile;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_unifiedTypeMap_2D_entry::getter_mTypeForEnumeratedElement (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mTypeForEnumeratedElement" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mTypeForEnumeratedElement;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_unifiedTypeMap_2D_entry::getter_mDefaultConstructorName (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mDefaultConstructorName" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mDefaultConstructorName;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_unifiedTypeMap_2D_entry::getter_mHeaderFileName (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mHeaderFileName" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mHeaderFileName;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind GALGAS_unifiedTypeMap_2D_entry::getter_mHeaderKind (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_headerKind result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mHeaderKind" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mHeaderKind;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (const GALGAS_unifiedTypeMap & inMap,
                                                                                      const GALGAS_lstring & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry result ;
  result.internalMakeRegularEntryBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedTypeMap_searchKey, inCompiler COMMA_THERE) ;
  return result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@unifiedTypeMap-entry type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap_2D_entry ("unifiedTypeMap-entry",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_entry::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_entry ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_entry::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_entry (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_unifiedTypeMap_2D_entry::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry result ;
  const GALGAS_unifiedTypeMap_2D_entry * p = (const GALGAS_unifiedTypeMap_2D_entry *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap_2D_entry *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap-entry", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mTypeMap (),
mProperty_mRoutineMap (),
mProperty_mFunctionMap (),
mProperty_mFilewrapperMap (),
mProperty_mGrammarMap (),
mProperty_mOptionComponentMapForSemanticAnalysis (),
mProperty_mLexiqueComponentMapForSemanticAnalysis (),
mProperty_mSyntaxComponentMapForSemanticAnalysis () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_unifiedTypeMap & inOperand0,
                                                const GALGAS_routineMap & inOperand1,
                                                const GALGAS_functionMap & inOperand2,
                                                const GALGAS_filewrapperMap & inOperand3,
                                                const GALGAS_grammarMap & inOperand4,
                                                const GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                const GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6,
                                                const GALGAS_syntaxComponentMap & inOperand7) :
mProperty_mTypeMap (inOperand0),
mProperty_mRoutineMap (inOperand1),
mProperty_mFunctionMap (inOperand2),
mProperty_mFilewrapperMap (inOperand3),
mProperty_mGrammarMap (inOperand4),
mProperty_mOptionComponentMapForSemanticAnalysis (inOperand5),
mProperty_mLexiqueComponentMapForSemanticAnalysis (inOperand6),
mProperty_mSyntaxComponentMapForSemanticAnalysis (inOperand7) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_unifiedTypeMap::constructor_emptySharedMap (HERE),
                                 GALGAS_routineMap::constructor_emptyMap (HERE),
                                 GALGAS_functionMap::constructor_emptyMap (HERE),
                                 GALGAS_filewrapperMap::constructor_emptyMap (HERE),
                                 GALGAS_grammarMap::constructor_emptyMap (HERE),
                                 GALGAS_optionComponentMapForSemanticAnalysis::constructor_emptyMap (HERE),
                                 GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_emptyMap (HERE),
                                 GALGAS_syntaxComponentMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_unifiedTypeMap & inOperand0,
                                                                const GALGAS_routineMap & inOperand1,
                                                                const GALGAS_functionMap & inOperand2,
                                                                const GALGAS_filewrapperMap & inOperand3,
                                                                const GALGAS_grammarMap & inOperand4,
                                                                const GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                                const GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6,
                                                                const GALGAS_syntaxComponentMap & inOperand7 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeMap.objectCompare (inOperand.mProperty_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMap.objectCompare (inOperand.mProperty_mRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionMap.objectCompare (inOperand.mProperty_mFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperMap.objectCompare (inOperand.mProperty_mFilewrapperMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGrammarMap.objectCompare (inOperand.mProperty_mGrammarMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mOptionComponentMapForSemanticAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mLexiqueComponentMapForSemanticAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mSyntaxComponentMapForSemanticAnalysis) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mTypeMap.isValid () && mProperty_mRoutineMap.isValid () && mProperty_mFunctionMap.isValid () && mProperty_mFilewrapperMap.isValid () && mProperty_mGrammarMap.isValid () && mProperty_mOptionComponentMapForSemanticAnalysis.isValid () && mProperty_mLexiqueComponentMapForSemanticAnalysis.isValid () && mProperty_mSyntaxComponentMapForSemanticAnalysis.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::drop (void) {
  mProperty_mTypeMap.drop () ;
  mProperty_mRoutineMap.drop () ;
  mProperty_mFunctionMap.drop () ;
  mProperty_mFilewrapperMap.drop () ;
  mProperty_mGrammarMap.drop () ;
  mProperty_mOptionComponentMapForSemanticAnalysis.drop () ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis.drop () ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGrammarMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexiqueComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSyntaxComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_semanticContext::getter_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_semanticContext::getter_mRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap GALGAS_semanticContext::getter_mFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap GALGAS_semanticContext::getter_mFilewrapperMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap GALGAS_semanticContext::getter_mGrammarMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_semanticContext::getter_mOptionComponentMapForSemanticAnalysis (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentMapForSemanticAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_semanticContext::getter_mLexiqueComponentMapForSemanticAnalysis (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueComponentMapForSemanticAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap GALGAS_semanticContext::getter_mSyntaxComponentMapForSemanticAnalysis (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxComponentMapForSemanticAnalysis ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@semanticContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes::GALGAS_predefinedTypes (void) :
mProperty_mLocationType (),
mProperty_mBoolType (),
mProperty_mCharType (),
mProperty_mStringType (),
mProperty_mUIntType (),
mProperty_mSIntType (),
mProperty_mUInt_36__34_Type (),
mProperty_mSInt_36__34_Type (),
mProperty_mDoubleType (),
mProperty_mLBoolType (),
mProperty_mLCharType (),
mProperty_mLStringType (),
mProperty_mLUIntType (),
mProperty_mLSIntType (),
mProperty_mLUInt_36__34_Type (),
mProperty_mLSInt_36__34_Type (),
mProperty_mLDoubleType (),
mProperty_mStringListType (),
mProperty_mLBigIntType (),
mProperty_mBigIntType (),
mProperty_mStringSetType (),
mProperty_mLStringListType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes::~ GALGAS_predefinedTypes (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes::GALGAS_predefinedTypes (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand4,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand6,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand7,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand8,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand9,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand10,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand11,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand12,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand13,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand14,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand15,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand16,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand17,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand18,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand19,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand20,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand21) :
mProperty_mLocationType (inOperand0),
mProperty_mBoolType (inOperand1),
mProperty_mCharType (inOperand2),
mProperty_mStringType (inOperand3),
mProperty_mUIntType (inOperand4),
mProperty_mSIntType (inOperand5),
mProperty_mUInt_36__34_Type (inOperand6),
mProperty_mSInt_36__34_Type (inOperand7),
mProperty_mDoubleType (inOperand8),
mProperty_mLBoolType (inOperand9),
mProperty_mLCharType (inOperand10),
mProperty_mLStringType (inOperand11),
mProperty_mLUIntType (inOperand12),
mProperty_mLSIntType (inOperand13),
mProperty_mLUInt_36__34_Type (inOperand14),
mProperty_mLSInt_36__34_Type (inOperand15),
mProperty_mLDoubleType (inOperand16),
mProperty_mStringListType (inOperand17),
mProperty_mLBigIntType (inOperand18),
mProperty_mBigIntType (inOperand19),
mProperty_mStringSetType (inOperand20),
mProperty_mLStringListType (inOperand21) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes GALGAS_predefinedTypes::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_predefinedTypes (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes GALGAS_predefinedTypes::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand4,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand6,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand7,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand8,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand9,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand10,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand11,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand12,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand13,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand14,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand15,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand16,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand17,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand18,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand19,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand20,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand21 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid ()) {
    result = GALGAS_predefinedTypes (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_predefinedTypes::objectCompare (const GALGAS_predefinedTypes & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLocationType.objectCompare (inOperand.mProperty_mLocationType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoolType.objectCompare (inOperand.mProperty_mBoolType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCharType.objectCompare (inOperand.mProperty_mCharType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStringType.objectCompare (inOperand.mProperty_mStringType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUIntType.objectCompare (inOperand.mProperty_mUIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSIntType.objectCompare (inOperand.mProperty_mSIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUInt_36__34_Type.objectCompare (inOperand.mProperty_mUInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSInt_36__34_Type.objectCompare (inOperand.mProperty_mSInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDoubleType.objectCompare (inOperand.mProperty_mDoubleType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLBoolType.objectCompare (inOperand.mProperty_mLBoolType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLCharType.objectCompare (inOperand.mProperty_mLCharType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLStringType.objectCompare (inOperand.mProperty_mLStringType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLUIntType.objectCompare (inOperand.mProperty_mLUIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLSIntType.objectCompare (inOperand.mProperty_mLSIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLUInt_36__34_Type.objectCompare (inOperand.mProperty_mLUInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLSInt_36__34_Type.objectCompare (inOperand.mProperty_mLSInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLDoubleType.objectCompare (inOperand.mProperty_mLDoubleType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStringListType.objectCompare (inOperand.mProperty_mStringListType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLBigIntType.objectCompare (inOperand.mProperty_mLBigIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBigIntType.objectCompare (inOperand.mProperty_mBigIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStringSetType.objectCompare (inOperand.mProperty_mStringSetType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLStringListType.objectCompare (inOperand.mProperty_mLStringListType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypes::isValid (void) const {
  return mProperty_mLocationType.isValid () && mProperty_mBoolType.isValid () && mProperty_mCharType.isValid () && mProperty_mStringType.isValid () && mProperty_mUIntType.isValid () && mProperty_mSIntType.isValid () && mProperty_mUInt_36__34_Type.isValid () && mProperty_mSInt_36__34_Type.isValid () && mProperty_mDoubleType.isValid () && mProperty_mLBoolType.isValid () && mProperty_mLCharType.isValid () && mProperty_mLStringType.isValid () && mProperty_mLUIntType.isValid () && mProperty_mLSIntType.isValid () && mProperty_mLUInt_36__34_Type.isValid () && mProperty_mLSInt_36__34_Type.isValid () && mProperty_mLDoubleType.isValid () && mProperty_mStringListType.isValid () && mProperty_mLBigIntType.isValid () && mProperty_mBigIntType.isValid () && mProperty_mStringSetType.isValid () && mProperty_mLStringListType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_predefinedTypes::drop (void) {
  mProperty_mLocationType.drop () ;
  mProperty_mBoolType.drop () ;
  mProperty_mCharType.drop () ;
  mProperty_mStringType.drop () ;
  mProperty_mUIntType.drop () ;
  mProperty_mSIntType.drop () ;
  mProperty_mUInt_36__34_Type.drop () ;
  mProperty_mSInt_36__34_Type.drop () ;
  mProperty_mDoubleType.drop () ;
  mProperty_mLBoolType.drop () ;
  mProperty_mLCharType.drop () ;
  mProperty_mLStringType.drop () ;
  mProperty_mLUIntType.drop () ;
  mProperty_mLSIntType.drop () ;
  mProperty_mLUInt_36__34_Type.drop () ;
  mProperty_mLSInt_36__34_Type.drop () ;
  mProperty_mLDoubleType.drop () ;
  mProperty_mStringListType.drop () ;
  mProperty_mLBigIntType.drop () ;
  mProperty_mBigIntType.drop () ;
  mProperty_mStringSetType.drop () ;
  mProperty_mLStringListType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_predefinedTypes::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @predefinedTypes:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLocationType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoolType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCharType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStringType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDoubleType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLBoolType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLCharType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLStringType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLUIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLSIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLDoubleType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStringListType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLBigIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBigIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStringSetType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLStringListType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLocationType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocationType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mBoolType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoolType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mCharType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCharType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mStringType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStringType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mUIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mSIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mUInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUInt_36__34_Type ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mSInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSInt_36__34_Type ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mDoubleType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoubleType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLBoolType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLBoolType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLCharType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLCharType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLStringType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLStringType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLUIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLUIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLSIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLSIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLUInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLUInt_36__34_Type ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLSInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLSInt_36__34_Type ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLDoubleType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLDoubleType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mStringListType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStringListType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLBigIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLBigIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mBigIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBigIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mStringSetType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStringSetType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLStringListType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLStringListType ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@predefinedTypes type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypes ("predefinedTypes",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_predefinedTypes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypes ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_predefinedTypes::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypes (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes GALGAS_predefinedTypes::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypes result ;
  const GALGAS_predefinedTypes * p = (const GALGAS_predefinedTypes *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_predefinedTypes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateGetterCallInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateGetterCallInExpressionAST * p = (const cPtr_templateGetterCallInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGetterName.objectCompare (p->mProperty_mGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionLocation.objectCompare (p->mProperty_mExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateGetterCallInExpressionAST::objectCompare (const GALGAS_templateGetterCallInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST::GALGAS_templateGetterCallInExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST::GALGAS_templateGetterCallInExpressionAST (const cPtr_templateGetterCallInExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateGetterCallInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST GALGAS_templateGetterCallInExpressionAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mReceiverExpression,
                                                                                                    const GALGAS_lstring & inAttribute_mGetterName,
                                                                                                    const GALGAS_templateExpressionListAST & inAttribute_mExpressionList,
                                                                                                    const GALGAS_location & inAttribute_mExpressionLocation
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateGetterCallInExpressionAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mGetterName.isValid () && inAttribute_mExpressionList.isValid () && inAttribute_mExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateGetterCallInExpressionAST (inAttribute_mReceiverExpression, inAttribute_mGetterName, inAttribute_mExpressionList, inAttribute_mExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateGetterCallInExpressionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateGetterCallInExpressionAST * p = (const cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateGetterCallInExpressionAST::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateGetterCallInExpressionAST * p = (const cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    result = p->mProperty_mGetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateGetterCallInExpressionAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateGetterCallInExpressionAST * p = (const cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    result = p->mProperty_mExpressionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateGetterCallInExpressionAST::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateGetterCallInExpressionAST * p = (const cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    result = p->mProperty_mExpressionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateGetterCallInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                                                const GALGAS_lstring & in_mGetterName,
                                                                                const GALGAS_templateExpressionListAST & in_mExpressionList,
                                                                                const GALGAS_location & in_mExpressionLocation
                                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mGetterName (in_mGetterName),
mProperty_mExpressionList (in_mExpressionList),
mProperty_mExpressionLocation (in_mExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateGetterCallInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

void cPtr_templateGetterCallInExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@templateGetterCallInExpressionAST:" ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateGetterCallInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateGetterCallInExpressionAST (mProperty_mReceiverExpression, mProperty_mGetterName, mProperty_mExpressionList, mProperty_mExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateGetterCallInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ("templateGetterCallInExpressionAST",
                                                          & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateGetterCallInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateGetterCallInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateGetterCallInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST GALGAS_templateGetterCallInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateGetterCallInExpressionAST result ;
  const GALGAS_templateGetterCallInExpressionAST * p = (const GALGAS_templateGetterCallInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateGetterCallInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateGetterCallInExpressionAST_2D_weak::objectCompare (const GALGAS_templateGetterCallInExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST_2D_weak::GALGAS_templateGetterCallInExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST_2D_weak & GALGAS_templateGetterCallInExpressionAST_2D_weak::operator = (const GALGAS_templateGetterCallInExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST_2D_weak::GALGAS_templateGetterCallInExpressionAST_2D_weak (const GALGAS_templateGetterCallInExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST_2D_weak GALGAS_templateGetterCallInExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateGetterCallInExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST GALGAS_templateGetterCallInExpressionAST_2D_weak::bang_templateGetterCallInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateGetterCallInExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateGetterCallInExpressionAST) ;
      result = GALGAS_templateGetterCallInExpressionAST ((cPtr_templateGetterCallInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateGetterCallInExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2D_weak ("templateGetterCallInExpressionAST-weak",
                                                                  & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateGetterCallInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateGetterCallInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateGetterCallInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST_2D_weak GALGAS_templateGetterCallInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateGetterCallInExpressionAST_2D_weak result ;
  const GALGAS_templateGetterCallInExpressionAST_2D_weak * p = (const GALGAS_templateGetterCallInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateGetterCallInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalImplicitRuleAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalImplicitRuleAST * p = (const cPtr_lexicalImplicitRuleAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mListName.objectCompare (p->mProperty_mListName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalImplicitRuleAST::objectCompare (const GALGAS_lexicalImplicitRuleAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST::GALGAS_lexicalImplicitRuleAST (void) :
GALGAS_abstractLexicalRuleAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalImplicitRuleAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST::GALGAS_lexicalImplicitRuleAST (const cPtr_lexicalImplicitRuleAST * inSourcePtr) :
GALGAS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalImplicitRuleAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::constructor_new (const GALGAS_lstring & inAttribute_mListName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST result ;
  if (inAttribute_mListName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalImplicitRuleAST (inAttribute_mListName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalImplicitRuleAST::getter_mListName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalImplicitRuleAST * p = (const cPtr_lexicalImplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
    result = p->mProperty_mListName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalImplicitRuleAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (const GALGAS_lstring & in_mListName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (THERE),
mProperty_mListName (in_mListName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalImplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

void cPtr_lexicalImplicitRuleAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalImplicitRuleAST:" ;
  mProperty_mListName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalImplicitRuleAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalImplicitRuleAST (mProperty_mListName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalImplicitRuleAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ("lexicalImplicitRuleAST",
                                               & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalImplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalImplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalImplicitRuleAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST result ;
  const GALGAS_lexicalImplicitRuleAST * p = (const GALGAS_lexicalImplicitRuleAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalImplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalImplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalImplicitRuleAST_2D_weak::objectCompare (const GALGAS_lexicalImplicitRuleAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak::GALGAS_lexicalImplicitRuleAST_2D_weak (void) :
GALGAS_abstractLexicalRuleAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak & GALGAS_lexicalImplicitRuleAST_2D_weak::operator = (const GALGAS_lexicalImplicitRuleAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak::GALGAS_lexicalImplicitRuleAST_2D_weak (const GALGAS_lexicalImplicitRuleAST & inSource) :
GALGAS_abstractLexicalRuleAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak GALGAS_lexicalImplicitRuleAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST_2D_weak::bang_lexicalImplicitRuleAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalImplicitRuleAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalImplicitRuleAST) ;
      result = GALGAS_lexicalImplicitRuleAST ((cPtr_lexicalImplicitRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalImplicitRuleAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2D_weak ("lexicalImplicitRuleAST-weak",
                                                       & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalImplicitRuleAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalImplicitRuleAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalImplicitRuleAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak GALGAS_lexicalImplicitRuleAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST_2D_weak result ;
  const GALGAS_lexicalImplicitRuleAST_2D_weak * p = (const GALGAS_lexicalImplicitRuleAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalImplicitRuleAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalImplicitRuleAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterSetMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterSetMatchAST * p = (const cPtr_lexicalCharacterSetMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacterSetName.objectCompare (p->mProperty_mCharacterSetName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterSetMatchAST::objectCompare (const GALGAS_lexicalCharacterSetMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST::GALGAS_lexicalCharacterSetMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterSetMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST::GALGAS_lexicalCharacterSetMatchAST (const cPtr_lexicalCharacterSetMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterSetMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mCharacterSetName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST result ;
  if (inAttribute_mCharacterSetName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterSetMatchAST (inAttribute_mCharacterSetName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalCharacterSetMatchAST::getter_mCharacterSetName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterSetMatchAST * p = (const cPtr_lexicalCharacterSetMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
    result = p->mProperty_mCharacterSetName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterSetMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (const GALGAS_lstring & in_mCharacterSetName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mCharacterSetName (in_mCharacterSetName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterSetMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

void cPtr_lexicalCharacterSetMatchAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterSetMatchAST:" ;
  mProperty_mCharacterSetName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterSetMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterSetMatchAST (mProperty_mCharacterSetName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterSetMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ("lexicalCharacterSetMatchAST",
                                                    & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterSetMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterSetMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterSetMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST result ;
  const GALGAS_lexicalCharacterSetMatchAST * p = (const GALGAS_lexicalCharacterSetMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterSetMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterSetMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalCharacterSetMatchAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterSetMatchAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak::GALGAS_lexicalCharacterSetMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak & GALGAS_lexicalCharacterSetMatchAST_2D_weak::operator = (const GALGAS_lexicalCharacterSetMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak::GALGAS_lexicalCharacterSetMatchAST_2D_weak (const GALGAS_lexicalCharacterSetMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak GALGAS_lexicalCharacterSetMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST_2D_weak::bang_lexicalCharacterSetMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterSetMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterSetMatchAST) ;
      result = GALGAS_lexicalCharacterSetMatchAST ((cPtr_lexicalCharacterSetMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterSetMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2D_weak ("lexicalCharacterSetMatchAST-weak",
                                                            & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterSetMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterSetMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterSetMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak GALGAS_lexicalCharacterSetMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST_2D_weak result ;
  const GALGAS_lexicalCharacterSetMatchAST_2D_weak * p = (const GALGAS_lexicalCharacterSetMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterSetMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterSetMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterMatchAST * p = (const cPtr_lexicalCharacterMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterMatchAST::objectCompare (const GALGAS_lexicalCharacterMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST::GALGAS_lexicalCharacterMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST::GALGAS_lexicalCharacterMatchAST (const cPtr_lexicalCharacterMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterMatchAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterMatchAST::getter_mCharacter (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterMatchAST * p = (const cPtr_lexicalCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
    result = p->mProperty_mCharacter ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterMatchAST::cPtr_lexicalCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

void cPtr_lexicalCharacterMatchAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterMatchAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterMatchAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ("lexicalCharacterMatchAST",
                                                 & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST result ;
  const GALGAS_lexicalCharacterMatchAST * p = (const GALGAS_lexicalCharacterMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalCharacterMatchAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterMatchAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak::GALGAS_lexicalCharacterMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak & GALGAS_lexicalCharacterMatchAST_2D_weak::operator = (const GALGAS_lexicalCharacterMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak::GALGAS_lexicalCharacterMatchAST_2D_weak (const GALGAS_lexicalCharacterMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak GALGAS_lexicalCharacterMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST_2D_weak::bang_lexicalCharacterMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterMatchAST) ;
      result = GALGAS_lexicalCharacterMatchAST ((cPtr_lexicalCharacterMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2D_weak ("lexicalCharacterMatchAST-weak",
                                                         & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak GALGAS_lexicalCharacterMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST_2D_weak result ;
  const GALGAS_lexicalCharacterMatchAST_2D_weak * p = (const GALGAS_lexicalCharacterMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterIntervalMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterIntervalMatchAST * p = (const cPtr_lexicalCharacterIntervalMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLowerBound.objectCompare (p->mProperty_mLowerBound) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBound.objectCompare (p->mProperty_mUpperBound) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterIntervalMatchAST::objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST::GALGAS_lexicalCharacterIntervalMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE),
                                                                   GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST::GALGAS_lexicalCharacterIntervalMatchAST (const cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterIntervalMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mLowerBound,
                                                                                                  const GALGAS_lchar & inAttribute_mUpperBound
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  if (inAttribute_mLowerBound.isValid () && inAttribute_mUpperBound.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterIntervalMatchAST (inAttribute_mLowerBound, inAttribute_mUpperBound COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST::getter_mLowerBound (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterIntervalMatchAST * p = (const cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    result = p->mProperty_mLowerBound ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST::getter_mUpperBound (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterIntervalMatchAST * p = (const cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    result = p->mProperty_mUpperBound ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterIntervalMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterIntervalMatchAST::cPtr_lexicalCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                                              const GALGAS_lchar & in_mUpperBound
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mLowerBound (in_mLowerBound),
mProperty_mUpperBound (in_mUpperBound) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterIntervalMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

void cPtr_lexicalCharacterIntervalMatchAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterIntervalMatchAST:" ;
  mProperty_mLowerBound.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBound.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterIntervalMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterIntervalMatchAST (mProperty_mLowerBound, mProperty_mUpperBound COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterIntervalMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ("lexicalCharacterIntervalMatchAST",
                                                         & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterIntervalMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterIntervalMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterIntervalMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  const GALGAS_lexicalCharacterIntervalMatchAST * p = (const GALGAS_lexicalCharacterIntervalMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterIntervalMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterIntervalMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::operator = (const GALGAS_lexicalCharacterIntervalMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (const GALGAS_lexicalCharacterIntervalMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::bang_lexicalCharacterIntervalMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterIntervalMatchAST) ;
      result = GALGAS_lexicalCharacterIntervalMatchAST ((cPtr_lexicalCharacterIntervalMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterIntervalMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2D_weak ("lexicalCharacterIntervalMatchAST-weak",
                                                                 & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST_2D_weak result ;
  const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak * p = (const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterIntervalMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalStringMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalStringMatchAST * p = (const cPtr_lexicalStringMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mString.objectCompare (p->mProperty_mString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalStringMatchAST::objectCompare (const GALGAS_lexicalStringMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST::GALGAS_lexicalStringMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalStringMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST::GALGAS_lexicalStringMatchAST (const cPtr_lexicalStringMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mString
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST result ;
  if (inAttribute_mString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalStringMatchAST (inAttribute_mString COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringMatchAST::getter_mString (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStringMatchAST * p = (const cPtr_lexicalStringMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
    result = p->mProperty_mString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (const GALGAS_lstring & in_mString
                                                        COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mString (in_mString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStringMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

void cPtr_lexicalStringMatchAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@lexicalStringMatchAST:" ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStringMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalStringMatchAST (mProperty_mString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStringMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringMatchAST ("lexicalStringMatchAST",
                                              & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST result ;
  const GALGAS_lexicalStringMatchAST * p = (const GALGAS_lexicalStringMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalStringMatchAST_2D_weak::objectCompare (const GALGAS_lexicalStringMatchAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak::GALGAS_lexicalStringMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak & GALGAS_lexicalStringMatchAST_2D_weak::operator = (const GALGAS_lexicalStringMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak::GALGAS_lexicalStringMatchAST_2D_weak (const GALGAS_lexicalStringMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak GALGAS_lexicalStringMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST_2D_weak::bang_lexicalStringMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStringMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStringMatchAST) ;
      result = GALGAS_lexicalStringMatchAST ((cPtr_lexicalStringMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStringMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringMatchAST_2D_weak ("lexicalStringMatchAST-weak",
                                                      & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak GALGAS_lexicalStringMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST_2D_weak result ;
  const GALGAS_lexicalStringMatchAST_2D_weak * p = (const GALGAS_lexicalStringMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalStringNotMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalStringNotMatchAST * p = (const cPtr_lexicalStringNotMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mString.objectCompare (p->mProperty_mString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessage.objectCompare (p->mProperty_mErrorMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalStringNotMatchAST::objectCompare (const GALGAS_lexicalStringNotMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST::GALGAS_lexicalStringNotMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalStringNotMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST::GALGAS_lexicalStringNotMatchAST (const cPtr_lexicalStringNotMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringNotMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mString,
                                                                                  const GALGAS_lstring & inAttribute_mErrorMessage
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST result ;
  if (inAttribute_mString.isValid () && inAttribute_mErrorMessage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalStringNotMatchAST (inAttribute_mString, inAttribute_mErrorMessage COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringNotMatchAST::getter_mString (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStringNotMatchAST * p = (const cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    result = p->mProperty_mString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringNotMatchAST::getter_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStringNotMatchAST * p = (const cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    result = p->mProperty_mErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringNotMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (const GALGAS_lstring & in_mString,
                                                              const GALGAS_lstring & in_mErrorMessage
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mString (in_mString),
mProperty_mErrorMessage (in_mErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStringNotMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

void cPtr_lexicalStringNotMatchAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalStringNotMatchAST:" ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStringNotMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalStringNotMatchAST (mProperty_mString, mProperty_mErrorMessage COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStringNotMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ("lexicalStringNotMatchAST",
                                                 & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringNotMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringNotMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringNotMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST result ;
  const GALGAS_lexicalStringNotMatchAST * p = (const GALGAS_lexicalStringNotMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringNotMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringNotMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalStringNotMatchAST_2D_weak::objectCompare (const GALGAS_lexicalStringNotMatchAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak::GALGAS_lexicalStringNotMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak & GALGAS_lexicalStringNotMatchAST_2D_weak::operator = (const GALGAS_lexicalStringNotMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak::GALGAS_lexicalStringNotMatchAST_2D_weak (const GALGAS_lexicalStringNotMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak GALGAS_lexicalStringNotMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST_2D_weak::bang_lexicalStringNotMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStringNotMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStringNotMatchAST) ;
      result = GALGAS_lexicalStringNotMatchAST ((cPtr_lexicalStringNotMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStringNotMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2D_weak ("lexicalStringNotMatchAST-weak",
                                                         & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringNotMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringNotMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringNotMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak GALGAS_lexicalStringNotMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST_2D_weak result ;
  const GALGAS_lexicalStringNotMatchAST_2D_weak * p = (const GALGAS_lexicalStringNotMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringNotMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringNotMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalSimpleSendInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalSimpleSendInstructionAST * p = (const cPtr_lexicalSimpleSendInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mSentTerminal.objectCompare (p->mProperty_mSentTerminal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalSimpleSendInstructionAST::objectCompare (const GALGAS_lexicalSimpleSendInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST::GALGAS_lexicalSimpleSendInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalSimpleSendInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST::GALGAS_lexicalSimpleSendInstructionAST (const cPtr_lexicalSimpleSendInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSimpleSendInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mSentTerminal
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  if (inAttribute_mSentTerminal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalSimpleSendInstructionAST (inAttribute_mSentTerminal COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSimpleSendInstructionAST::getter_mSentTerminal (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalSimpleSendInstructionAST * p = (const cPtr_lexicalSimpleSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
    result = p->mProperty_mSentTerminal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSimpleSendInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalSimpleSendInstructionAST::cPtr_lexicalSimpleSendInstructionAST (const GALGAS_lstring & in_mSentTerminal
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mSentTerminal (in_mSentTerminal) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSimpleSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

void cPtr_lexicalSimpleSendInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexicalSimpleSendInstructionAST:" ;
  mProperty_mSentTerminal.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSimpleSendInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalSimpleSendInstructionAST (mProperty_mSentTerminal COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSimpleSendInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ("lexicalSimpleSendInstructionAST",
                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSimpleSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSimpleSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSimpleSendInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  const GALGAS_lexicalSimpleSendInstructionAST * p = (const GALGAS_lexicalSimpleSendInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSimpleSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalSimpleSendInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalSimpleSendInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak::GALGAS_lexicalSimpleSendInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak & GALGAS_lexicalSimpleSendInstructionAST_2D_weak::operator = (const GALGAS_lexicalSimpleSendInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak::GALGAS_lexicalSimpleSendInstructionAST_2D_weak (const GALGAS_lexicalSimpleSendInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak GALGAS_lexicalSimpleSendInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST_2D_weak::bang_lexicalSimpleSendInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSimpleSendInstructionAST) ;
      result = GALGAS_lexicalSimpleSendInstructionAST ((cPtr_lexicalSimpleSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSimpleSendInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2D_weak ("lexicalSimpleSendInstructionAST-weak",
                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSimpleSendInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSimpleSendInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSimpleSendInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak GALGAS_lexicalSimpleSendInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST_2D_weak result ;
  const GALGAS_lexicalSimpleSendInstructionAST_2D_weak * p = (const GALGAS_lexicalSimpleSendInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSimpleSendInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalSendTerminalByDefaultAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalSendTerminalByDefaultAST * p = (const cPtr_lexicalSendTerminalByDefaultAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mDefaultSentTerminal.objectCompare (p->mProperty_mDefaultSentTerminal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalSendTerminalByDefaultAST::objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST::GALGAS_lexicalSendTerminalByDefaultAST (void) :
GALGAS_lexicalSendDefaultActionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST::GALGAS_lexicalSendTerminalByDefaultAST (const cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) :
GALGAS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendTerminalByDefaultAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (const GALGAS_lstring & inAttribute_mDefaultSentTerminal
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST result ;
  if (inAttribute_mDefaultSentTerminal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalSendTerminalByDefaultAST (inAttribute_mDefaultSentTerminal COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSendTerminalByDefaultAST::getter_mDefaultSentTerminal (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalSendTerminalByDefaultAST * p = (const cPtr_lexicalSendTerminalByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
    result = p->mProperty_mDefaultSentTerminal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSendTerminalByDefaultAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (const GALGAS_lstring & in_mDefaultSentTerminal
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (THERE),
mProperty_mDefaultSentTerminal (in_mDefaultSentTerminal) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSendTerminalByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

void cPtr_lexicalSendTerminalByDefaultAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexicalSendTerminalByDefaultAST:" ;
  mProperty_mDefaultSentTerminal.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSendTerminalByDefaultAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalSendTerminalByDefaultAST (mProperty_mDefaultSentTerminal COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSendTerminalByDefaultAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ("lexicalSendTerminalByDefaultAST",
                                                        & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendTerminalByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendTerminalByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendTerminalByDefaultAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST result ;
  const GALGAS_lexicalSendTerminalByDefaultAST * p = (const GALGAS_lexicalSendTerminalByDefaultAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSendTerminalByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendTerminalByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (void) :
GALGAS_lexicalSendDefaultActionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak & GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::operator = (const GALGAS_lexicalSendTerminalByDefaultAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (const GALGAS_lexicalSendTerminalByDefaultAST & inSource) :
GALGAS_lexicalSendDefaultActionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::bang_lexicalSendTerminalByDefaultAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendTerminalByDefaultAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSendTerminalByDefaultAST) ;
      result = GALGAS_lexicalSendTerminalByDefaultAST ((cPtr_lexicalSendTerminalByDefaultAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSendTerminalByDefaultAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2D_weak ("lexicalSendTerminalByDefaultAST-weak",
                                                                & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST_2D_weak result ;
  const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak * p = (const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendTerminalByDefaultAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalErrorByDefaultAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalErrorByDefaultAST * p = (const cPtr_lexicalErrorByDefaultAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mDefaultErrorMessageName.objectCompare (p->mProperty_mDefaultErrorMessageName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalErrorByDefaultAST::objectCompare (const GALGAS_lexicalErrorByDefaultAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST::GALGAS_lexicalErrorByDefaultAST (void) :
GALGAS_lexicalSendDefaultActionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalErrorByDefaultAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST::GALGAS_lexicalErrorByDefaultAST (const cPtr_lexicalErrorByDefaultAST * inSourcePtr) :
GALGAS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorByDefaultAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::constructor_new (const GALGAS_lstring & inAttribute_mDefaultErrorMessageName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST result ;
  if (inAttribute_mDefaultErrorMessageName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalErrorByDefaultAST (inAttribute_mDefaultErrorMessageName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalErrorByDefaultAST::getter_mDefaultErrorMessageName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalErrorByDefaultAST * p = (const cPtr_lexicalErrorByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
    result = p->mProperty_mDefaultErrorMessageName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorByDefaultAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (const GALGAS_lstring & in_mDefaultErrorMessageName
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (THERE),
mProperty_mDefaultErrorMessageName (in_mDefaultErrorMessageName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalErrorByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

void cPtr_lexicalErrorByDefaultAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalErrorByDefaultAST:" ;
  mProperty_mDefaultErrorMessageName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalErrorByDefaultAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalErrorByDefaultAST (mProperty_mDefaultErrorMessageName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalErrorByDefaultAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ("lexicalErrorByDefaultAST",
                                                 & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorByDefaultAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST result ;
  const GALGAS_lexicalErrorByDefaultAST * p = (const GALGAS_lexicalErrorByDefaultAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalErrorByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalErrorByDefaultAST_2D_weak::objectCompare (const GALGAS_lexicalErrorByDefaultAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak::GALGAS_lexicalErrorByDefaultAST_2D_weak (void) :
GALGAS_lexicalSendDefaultActionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak & GALGAS_lexicalErrorByDefaultAST_2D_weak::operator = (const GALGAS_lexicalErrorByDefaultAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak::GALGAS_lexicalErrorByDefaultAST_2D_weak (const GALGAS_lexicalErrorByDefaultAST & inSource) :
GALGAS_lexicalSendDefaultActionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak GALGAS_lexicalErrorByDefaultAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST_2D_weak::bang_lexicalErrorByDefaultAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalErrorByDefaultAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalErrorByDefaultAST) ;
      result = GALGAS_lexicalErrorByDefaultAST ((cPtr_lexicalErrorByDefaultAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalErrorByDefaultAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2D_weak ("lexicalErrorByDefaultAST-weak",
                                                         & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorByDefaultAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorByDefaultAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorByDefaultAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak GALGAS_lexicalErrorByDefaultAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST_2D_weak result ;
  const GALGAS_lexicalErrorByDefaultAST_2D_weak * p = (const GALGAS_lexicalErrorByDefaultAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalErrorByDefaultAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorByDefaultAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalRoutineInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualArgumentList.objectCompare (p->mProperty_mActualArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessageList.objectCompare (p->mProperty_mErrorMessageList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalRoutineInstructionAST::objectCompare (const GALGAS_lexicalRoutineInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST::GALGAS_lexicalRoutineInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalRoutineInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (HERE),
                                                               GALGAS_lstringlist::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST::GALGAS_lexicalRoutineInstructionAST (const cPtr_lexicalRoutineInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                          const GALGAS_lexicalRoutineCallActualArgumentListAST & inAttribute_mActualArgumentList,
                                                                                          const GALGAS_lstringlist & inAttribute_mErrorMessageList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mActualArgumentList.isValid () && inAttribute_mErrorMessageList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalRoutineInstructionAST (inAttribute_mRoutineName, inAttribute_mActualArgumentList, inAttribute_mErrorMessageList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRoutineInstructionAST::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    result = p->mProperty_mRoutineName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineInstructionAST::getter_mActualArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    result = p->mProperty_mActualArgumentList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_lexicalRoutineInstructionAST::getter_mErrorMessageList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    result = p->mProperty_mErrorMessageList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRoutineInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineInstructionAST::cPtr_lexicalRoutineInstructionAST (const GALGAS_lstring & in_mRoutineName,
                                                                      const GALGAS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                                      const GALGAS_lstringlist & in_mErrorMessageList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mActualArgumentList (in_mActualArgumentList),
mProperty_mErrorMessageList (in_mErrorMessageList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRoutineInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ;
}

void cPtr_lexicalRoutineInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@lexicalRoutineInstructionAST:" ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorMessageList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRoutineInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalRoutineInstructionAST (mProperty_mRoutineName, mProperty_mActualArgumentList, mProperty_mErrorMessageList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRoutineInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ("lexicalRoutineInstructionAST",
                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST result ;
  const GALGAS_lexicalRoutineInstructionAST * p = (const GALGAS_lexicalRoutineInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalRoutineInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalRoutineInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST_2D_weak::GALGAS_lexicalRoutineInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST_2D_weak & GALGAS_lexicalRoutineInstructionAST_2D_weak::operator = (const GALGAS_lexicalRoutineInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST_2D_weak::GALGAS_lexicalRoutineInstructionAST_2D_weak (const GALGAS_lexicalRoutineInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST_2D_weak GALGAS_lexicalRoutineInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST_2D_weak::bang_lexicalRoutineInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRoutineInstructionAST) ;
      result = GALGAS_lexicalRoutineInstructionAST ((cPtr_lexicalRoutineInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRoutineInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST_2D_weak ("lexicalRoutineInstructionAST-weak",
                                                             & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST_2D_weak GALGAS_lexicalRoutineInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST_2D_weak result ;
  const GALGAS_lexicalRoutineInstructionAST_2D_weak * p = (const GALGAS_lexicalRoutineInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalAttributeInputOutputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalAttributeInputOutputArgumentAST * p = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualPassingModeLocation.objectCompare (p->mProperty_mActualPassingModeLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalAttributeInputOutputArgumentAST::objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST::GALGAS_lexicalAttributeInputOutputArgumentAST (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                         GALGAS_lstring::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST::GALGAS_lexicalAttributeInputOutputArgumentAST (const cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) :
GALGAS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (const GALGAS_location & inAttribute_mActualPassingModeLocation,
                                                                                                              const GALGAS_lstring & inAttribute_mAttributeName
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  if (inAttribute_mActualPassingModeLocation.isValid () && inAttribute_mAttributeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalAttributeInputOutputArgumentAST (inAttribute_mActualPassingModeLocation, inAttribute_mAttributeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeInputOutputArgumentAST::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalAttributeInputOutputArgumentAST * p = (const cPtr_lexicalAttributeInputOutputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputOutputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                                                          const GALGAS_lstring & in_mAttributeName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation COMMA_THERE),
mProperty_mAttributeName (in_mAttributeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalAttributeInputOutputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

void cPtr_lexicalAttributeInputOutputArgumentAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@lexicalAttributeInputOutputArgumentAST:" ;
  mProperty_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalAttributeInputOutputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputOutputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeInputOutputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ("lexicalAttributeInputOutputArgumentAST",
                                                               & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputOutputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputOutputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputOutputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST * p = (const GALGAS_lexicalAttributeInputOutputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeInputOutputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak & GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::operator = (const GALGAS_lexicalAttributeInputOutputArgumentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak (const GALGAS_lexicalAttributeInputOutputArgumentAST & inSource) :
GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::bang_lexicalAttributeInputOutputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
      result = GALGAS_lexicalAttributeInputOutputArgumentAST ((cPtr_lexicalAttributeInputOutputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeInputOutputArgumentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak ("lexicalAttributeInputOutputArgumentAST-weak",
                                                                       & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak result ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak * p = (const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalAttributeInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalAttributeInputArgumentAST * p = (const cPtr_lexicalAttributeInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalAttributeInputArgumentAST::objectCompare (const GALGAS_lexicalAttributeInputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST::GALGAS_lexicalAttributeInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalAttributeInputArgumentAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST::GALGAS_lexicalAttributeInputArgumentAST (const cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::constructor_new (const GALGAS_lstring & inAttribute_mAttributeName
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST result ;
  if (inAttribute_mAttributeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalAttributeInputArgumentAST (inAttribute_mAttributeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeInputArgumentAST::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalAttributeInputArgumentAST * p = (const cPtr_lexicalAttributeInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (const GALGAS_lstring & in_mAttributeName
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mAttributeName (in_mAttributeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalAttributeInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

void cPtr_lexicalAttributeInputArgumentAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalAttributeInputArgumentAST:" ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalAttributeInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputArgumentAST (mProperty_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ("lexicalAttributeInputArgumentAST",
                                                         & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST result ;
  const GALGAS_lexicalAttributeInputArgumentAST * p = (const GALGAS_lexicalAttributeInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalAttributeInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalAttributeInputArgumentAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputArgumentAST_2D_weak (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak & GALGAS_lexicalAttributeInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalAttributeInputArgumentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputArgumentAST_2D_weak (const GALGAS_lexicalAttributeInputArgumentAST & inSource) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak GALGAS_lexicalAttributeInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST_2D_weak::bang_lexicalAttributeInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeInputArgumentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalAttributeInputArgumentAST) ;
      result = GALGAS_lexicalAttributeInputArgumentAST ((cPtr_lexicalAttributeInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeInputArgumentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2D_weak ("lexicalAttributeInputArgumentAST-weak",
                                                                 & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak GALGAS_lexicalAttributeInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalAttributeInputArgumentAST_2D_weak * p = (const GALGAS_lexicalAttributeInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterInputArgumentAST * p = (const cPtr_lexicalCharacterInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterInputArgumentAST::objectCompare (const GALGAS_lexicalCharacterInputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST::GALGAS_lexicalCharacterInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterInputArgumentAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST::GALGAS_lexicalCharacterInputArgumentAST (const cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterInputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterInputArgumentAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterInputArgumentAST::getter_mCharacter (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterInputArgumentAST * p = (const cPtr_lexicalCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterInputArgumentAST) ;
    result = p->mProperty_mCharacter ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterInputArgumentAST::cPtr_lexicalCharacterInputArgumentAST (const GALGAS_lchar & in_mCharacter
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;
}

void cPtr_lexicalCharacterInputArgumentAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterInputArgumentAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterInputArgumentAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ("lexicalCharacterInputArgumentAST",
                                                         & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST result ;
  const GALGAS_lexicalCharacterInputArgumentAST * p = (const GALGAS_lexicalCharacterInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalCharacterInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterInputArgumentAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak::GALGAS_lexicalCharacterInputArgumentAST_2D_weak (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak & GALGAS_lexicalCharacterInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalCharacterInputArgumentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak::GALGAS_lexicalCharacterInputArgumentAST_2D_weak (const GALGAS_lexicalCharacterInputArgumentAST & inSource) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak GALGAS_lexicalCharacterInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST_2D_weak::bang_lexicalCharacterInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterInputArgumentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterInputArgumentAST) ;
      result = GALGAS_lexicalCharacterInputArgumentAST ((cPtr_lexicalCharacterInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterInputArgumentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2D_weak ("lexicalCharacterInputArgumentAST-weak",
                                                                 & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak GALGAS_lexicalCharacterInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalCharacterInputArgumentAST_2D_weak * p = (const GALGAS_lexicalCharacterInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

