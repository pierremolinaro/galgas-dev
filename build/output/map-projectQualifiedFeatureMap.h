#ifndef map_2D_projectQualifiedFeatureMap_DEFINED
#define map_2D_projectQualifiedFeatureMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-projectQualifiedFeatureMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@projectQualifiedFeatureMap' map                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_projectQualifiedFeatureMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mFeatureValue ;

//--- Constructor
  public : cMapElement_projectQualifiedFeatureMap (const GALGAS_lstring & inKey,
                                                   const GALGAS_lstring & in_mFeatureValue
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

