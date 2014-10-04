#ifndef class_2D_listDeclarationAST_DEFINED
#define class_2D_listDeclarationAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-listDeclarationAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-attributeInCollectionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @listDeclarationAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_listDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mListTypeName ;
  public : GALGAS_attributeInCollectionListAST mAttribute_mAttributeList ;

//--- Constructor
  public : cPtr_listDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mListTypeName,
                                    const GALGAS_attributeInCollectionListAST & in_mAttributeList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

