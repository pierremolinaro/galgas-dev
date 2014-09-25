#ifndef class_2D_sortedListDeclarationAST_DEFINED
#define class_2D_sortedListDeclarationAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-sortedListDeclarationAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-attributeInCollectionListAST.h"
#include "list-sortedListSortDescriptorListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @sortedListDeclarationAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_sortedListDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mSortedListTypeName ;
  public : GALGAS_attributeInCollectionListAST mAttribute_mAttributeList ;
  public : GALGAS_sortedListSortDescriptorListAST mAttribute_mSortDescriptorList ;

//--- Constructor
  public : cPtr_sortedListDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                          const GALGAS_lstring & in_mSortedListTypeName,
                                          const GALGAS_attributeInCollectionListAST & in_mAttributeList,
                                          const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mSortedListTypeName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_attributeInCollectionListAST reader_mAttributeList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_sortedListSortDescriptorListAST reader_mSortDescriptorList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

