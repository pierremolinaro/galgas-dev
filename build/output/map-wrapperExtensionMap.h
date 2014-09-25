#ifndef map_2D_wrapperExtensionMap_DEFINED
#define map_2D_wrapperExtensionMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-wrapperExtensionMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@wrapperExtensionMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperExtensionMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_wrapperExtensionMap (const GALGAS_lstring & inKey
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

