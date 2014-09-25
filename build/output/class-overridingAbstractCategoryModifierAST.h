#ifndef class_2D_overridingAbstractCategoryModifierAST_DEFINED
#define class_2D_overridingAbstractCategoryModifierAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-overridingAbstractCategoryModifierAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @overridingAbstractCategoryModifierAST class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingAbstractCategoryModifierAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryModifierName ;
  public : GALGAS_formalParameterListAST mAttribute_mOverridingCategoryModifierFormalParameterList ;

//--- Constructor
  public : cPtr_overridingAbstractCategoryModifierAST (const GALGAS_bool & in_mIsPredefined,
                                                       const GALGAS_lstring & in_mTypeName,
                                                       const GALGAS_lstring & in_mOverridingCategoryModifierName,
                                                       const GALGAS_formalParameterListAST & in_mOverridingCategoryModifierFormalParameterList
                                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryModifierName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mOverridingCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

