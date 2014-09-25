#ifndef map_2D_mapAutomatonStateMap_DEFINED
#define map_2D_mapAutomatonStateMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-mapAutomatonStateMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@mapAutomatonStateMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_mapAutomatonStateMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mStateIndex ;

//--- Constructor
  public : cMapElement_mapAutomatonStateMap (const GALGAS_lstring & inKey,
                                             const GALGAS_uint & in_mStateIndex
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

