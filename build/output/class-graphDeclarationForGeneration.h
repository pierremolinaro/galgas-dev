#ifndef class_2D_graphDeclarationForGeneration_DEFINED
#define class_2D_graphDeclarationForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-graphDeclarationForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-graphInsertModifierList.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @graphDeclarationForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_graphDeclarationForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mAssociatedListTypeProxy ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mAssociatedListElementTypeProxy ;
  public : GALGAS_graphInsertModifierList mAttribute_mInsertModifierList ;

//--- Constructor
  public : cPtr_graphDeclarationForGeneration (const GALGAS_unifiedTypeMapProxy & in_mTypeProxy,
                                               const GALGAS_unifiedTypeMapProxy & in_mAssociatedListTypeProxy,
                                               const GALGAS_unifiedTypeMapProxy & in_mAssociatedListElementTypeProxy,
                                               const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mAssociatedListTypeProxy (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mAssociatedListElementTypeProxy (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_graphInsertModifierList reader_mInsertModifierList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

