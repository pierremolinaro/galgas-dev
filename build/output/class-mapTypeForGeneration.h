//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        File 'class-mapTypeForGeneration.h'                                          *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_mapTypeForGeneration_DEFINED
#define class_2D_mapTypeForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-mapTypeForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-insertMethodListAST.h"
#include "list-mapRemoveMethodListAST.h"
#include "list-mapSearchMethodListAST.h"
#include "list-typedAttributeList.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @mapTypeForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_mapTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mElementTypeProxy ;
  public : GALGAS_lstring mAttribute_mMapTypeName ;
  public : GALGAS_typedAttributeList mAttribute_mTypedAttributeList ;
  public : GALGAS_insertMethodListAST mAttribute_mInsertMethodList ;
  public : GALGAS_mapSearchMethodListAST mAttribute_mSearchMethodList ;
  public : GALGAS_mapRemoveMethodListAST mAttribute_mRemoveMethodList ;
  public : GALGAS_bool mAttribute_mHasInsertOrReplaceModifier ;

//--- Constructor
  public : cPtr_mapTypeForGeneration (const GALGAS_unifiedTypeMapProxy & in_mTypeProxy,
                                      const GALGAS_unifiedTypeMapProxy & in_mElementTypeProxy,
                                      const GALGAS_lstring & in_mMapTypeName,
                                      const GALGAS_typedAttributeList & in_mTypedAttributeList,
                                      const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                      const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                      const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                      const GALGAS_bool & in_mHasInsertOrReplaceModifier
                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mElementTypeProxy (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMapTypeName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedAttributeList reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST reader_mInsertMethodList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST reader_mSearchMethodList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapRemoveMethodListAST reader_mRemoveMethodList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasInsertOrReplaceModifier (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

