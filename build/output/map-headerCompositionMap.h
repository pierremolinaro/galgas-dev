#ifndef map_2D_headerCompositionMap_DEFINED
#define map_2D_headerCompositionMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-headerCompositionMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@headerCompositionMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_headerCompositionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_stringset mAttribute_mInclusion ;
  public : GALGAS_string mAttribute_mHeaderString ;

//--- Constructor
  public : cMapElement_headerCompositionMap (const GALGAS_lstring & inKey,
                                             const GALGAS_stringset & in_mInclusion,
                                             const GALGAS_string & in_mHeaderString
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

