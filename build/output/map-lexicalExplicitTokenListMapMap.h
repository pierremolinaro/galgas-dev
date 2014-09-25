#ifndef map_2D_lexicalExplicitTokenListMapMap_DEFINED
#define map_2D_lexicalExplicitTokenListMapMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-lexicalExplicitTokenListMapMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "map-lexicalExplicitTokenListMap-1.h"
#include "sortedlist-tokenSortedlist.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@lexicalExplicitTokenListMapMap' map                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalExplicitTokenListMapMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalExplicitTokenListMap mAttribute_mExplicitTokenListMap ;
  public : GALGAS_tokenSortedlist mAttribute_mTokenSortedList ;
  public : GALGAS_bool mAttribute_mShouldBeGenerated ;

//--- Constructor
  public : cMapElement_lexicalExplicitTokenListMapMap (const GALGAS_lstring & inKey,
                                                       const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                       const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                       const GALGAS_bool & in_mShouldBeGenerated
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

