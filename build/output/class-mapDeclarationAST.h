#ifndef class_2D_mapDeclarationAST_DEFINED
#define class_2D_mapDeclarationAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-mapDeclarationAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-attributeInCollectionListAST.h"
#include "list-insertMethodListAST.h"
#include "list-insertOrReplaceDeclarationListAST.h"
#include "list-mapRemoveMethodListAST.h"
#include "list-mapSearchMethodListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @mapDeclarationAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_mapDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mMapTypeName ;
  public : GALGAS_attributeInCollectionListAST mAttribute_mAttributeList ;
  public : GALGAS_insertMethodListAST mAttribute_mInsertMethodList ;
  public : GALGAS_mapSearchMethodListAST mAttribute_mSearchMethodList ;
  public : GALGAS_mapRemoveMethodListAST mAttribute_mRemoveMethodList ;
  public : GALGAS_insertOrReplaceDeclarationListAST mAttribute_mInsertOrReplaceDeclarationListAST ;

//--- Constructor
  public : cPtr_mapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mMapTypeName,
                                   const GALGAS_attributeInCollectionListAST & in_mAttributeList,
                                   const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                   const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                   const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                   const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST
                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMapTypeName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_attributeInCollectionListAST reader_mAttributeList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST reader_mInsertMethodList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST reader_mSearchMethodList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapRemoveMethodListAST reader_mRemoveMethodList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_insertOrReplaceDeclarationListAST reader_mInsertOrReplaceDeclarationListAST (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

