#ifndef class_2D_overridingCategoryModifierAST_DEFINED
#define class_2D_overridingCategoryModifierAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-overridingCategoryModifierAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterListAST.h"
#include "list-semanticInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @overridingCategoryModifierAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingCategoryModifierAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryModifierName ;
  public : GALGAS_formalParameterListAST mAttribute_mOverridingCategoryModifierFormalParameterList ;
  public : GALGAS_semanticInstructionListAST mAttribute_mOverridingCategoryModifierInstructionList ;
  public : GALGAS_location mAttribute_mEndOfModifierLocation ;

//--- Constructor
  public : cPtr_overridingCategoryModifierAST (const GALGAS_bool & in_mIsPredefined,
                                               const GALGAS_lstring & in_mTypeName,
                                               const GALGAS_lstring & in_mOverridingCategoryModifierName,
                                               const GALGAS_formalParameterListAST & in_mOverridingCategoryModifierFormalParameterList,
                                               const GALGAS_semanticInstructionListAST & in_mOverridingCategoryModifierInstructionList,
                                               const GALGAS_location & in_mEndOfModifierLocation
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryModifierName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mOverridingCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mOverridingCategoryModifierInstructionList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfModifierLocation (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

