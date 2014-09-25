#ifndef map_2D_nonterminalMap_DEFINED
#define map_2D_nonterminalMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-nonterminalMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "map-nonterminalLabelMap-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@nonterminalMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_nonterminalMap : public cMapElement {
//--- Map attributes
  public : GALGAS_nonterminalLabelMap mAttribute_mLabelMap ;

//--- Constructor
  public : cMapElement_nonterminalMap (const GALGAS_lstring & inKey,
                                       const GALGAS_nonterminalLabelMap & in_mLabelMap
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

