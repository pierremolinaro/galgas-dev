#ifndef class_2D_overridingCategoryMethodAST_DEFINED
#define class_2D_overridingCategoryMethodAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-overridingCategoryMethodAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterListAST.h"
#include "list-semanticInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @overridingCategoryMethodAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingCategoryMethodAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryMethodName ;
  public : GALGAS_formalParameterListAST mAttribute_mOverridingCategoryMethodFormalParameterList ;
  public : GALGAS_semanticInstructionListAST mAttribute_mOverridingCategoryMethodInstructionList ;
  public : GALGAS_location mAttribute_mEndOfMethodLocation ;

//--- Constructor
  public : cPtr_overridingCategoryMethodAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingCategoryMethodName,
                                             const GALGAS_formalParameterListAST & in_mOverridingCategoryMethodFormalParameterList,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingCategoryMethodInstructionList,
                                             const GALGAS_location & in_mEndOfMethodLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mOverridingCategoryMethodFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mOverridingCategoryMethodInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfMethodLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

