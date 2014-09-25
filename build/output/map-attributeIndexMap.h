#ifndef map_2D_attributeIndexMap_DEFINED
#define map_2D_attributeIndexMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-attributeIndexMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@attributeIndexMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_attributeIndexMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mAttributeTypeIndex ;

//--- Constructor
  public : cMapElement_attributeIndexMap (const GALGAS_lstring & inKey,
                                          const GALGAS_unifiedTypeMapProxy & in_mAttributeTypeIndex
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

