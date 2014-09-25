#ifndef map_2D_mapAutomatonActionMap_DEFINED
#define map_2D_mapAutomatonActionMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-mapAutomatonActionMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@mapAutomatonActionMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_mapAutomatonActionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mActionIndex ;

//--- Constructor
  public : cMapElement_mapAutomatonActionMap (const GALGAS_lstring & inKey,
                                              const GALGAS_uint & in_mActionIndex
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

