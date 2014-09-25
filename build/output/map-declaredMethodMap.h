#ifndef map_2D_declaredMethodMap_DEFINED
#define map_2D_declaredMethodMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-declaredMethodMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@declaredMethodMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_declaredMethodMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_declaredMethodMap (const GALGAS_lstring & inKey
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

