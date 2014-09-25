#ifndef map_2D_extensionMap_DEFINED
#define map_2D_extensionMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-extensionMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@extensionMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_string mAttribute_mLexiqueName ;

//--- Constructor
  public : cMapElement_extensionMap (const GALGAS_lstring & inKey,
                                     const GALGAS_string & in_mLexiqueName
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

