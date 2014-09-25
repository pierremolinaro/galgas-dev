#ifndef map_2D_headerRepartitionMap_DEFINED
#define map_2D_headerRepartitionMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-headerRepartitionMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@headerRepartitionMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_headerRepartitionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_string mAttribute_mHeaderFileName ;

//--- Constructor
  public : cMapElement_headerRepartitionMap (const GALGAS_lstring & inKey,
                                             const GALGAS_string & in_mHeaderFileName
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

