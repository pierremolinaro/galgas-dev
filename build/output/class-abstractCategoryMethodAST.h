#ifndef class_2D_abstractCategoryMethodAST_DEFINED
#define class_2D_abstractCategoryMethodAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractCategoryMethodAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @abstractCategoryMethodAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCategoryMethodAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mAbstractCategoryMethodName ;
  public : GALGAS_formalParameterListAST mAttribute_mAbstractCategoryMethodFormalParameterList ;

//--- Constructor
  public : cPtr_abstractCategoryMethodAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractCategoryMethodName,
                                           const GALGAS_formalParameterListAST & in_mAbstractCategoryMethodFormalParameterList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAbstractCategoryMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mAbstractCategoryMethodFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

