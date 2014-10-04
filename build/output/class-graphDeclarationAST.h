#ifndef class_2D_graphDeclarationAST_DEFINED
#define class_2D_graphDeclarationAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-graphDeclarationAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-graphInsertModifierList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @graphDeclarationAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_graphDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mGraphTypeName ;
  public : GALGAS_lstring mAttribute_mAssociatedListTypeName ;
  public : GALGAS_graphInsertModifierList mAttribute_mInsertModifierList ;

//--- Constructor
  public : cPtr_graphDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mGraphTypeName,
                                     const GALGAS_lstring & in_mAssociatedListTypeName,
                                     const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mGraphTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAssociatedListTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_graphInsertModifierList reader_mInsertModifierList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

