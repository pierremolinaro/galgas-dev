#ifndef class_2D_categoryModifierAST_DEFINED
#define class_2D_categoryModifierAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-categoryModifierAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterListAST.h"
#include "list-semanticInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @categoryModifierAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_categoryModifierAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mCategoryModifierName ;
  public : GALGAS_formalParameterListAST mAttribute_mCategoryModifierFormalParameterList ;
  public : GALGAS_semanticInstructionListAST mAttribute_mCategoryModifierInstructionList ;
  public : GALGAS_location mAttribute_mEndOfModifierLocation ;

//--- Constructor
  public : cPtr_categoryModifierAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mTypeName,
                                     const GALGAS_lstring & in_mCategoryModifierName,
                                     const GALGAS_formalParameterListAST & in_mCategoryModifierFormalParameterList,
                                     const GALGAS_semanticInstructionListAST & in_mCategoryModifierInstructionList,
                                     const GALGAS_location & in_mEndOfModifierLocation
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mCategoryModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mCategoryModifierFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mCategoryModifierInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfModifierLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

