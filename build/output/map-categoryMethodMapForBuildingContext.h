#ifndef map_2D_categoryMethodMapForBuildingContext_DEFINED
#define map_2D_categoryMethodMapForBuildingContext_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-categoryMethodMapForBuildingContext-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "map-categoryMethodMapForType-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@categoryMethodMapForBuildingContext' map                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_categoryMethodMapForBuildingContext : public cMapElement {
//--- Map attributes
  public : GALGAS_categoryMethodMapForType mAttribute_mCategoryMethodMapForType ;

//--- Constructor
  public : cMapElement_categoryMethodMapForBuildingContext (const GALGAS_lstring & inKey,
                                                            const GALGAS_categoryMethodMapForType & in_mCategoryMethodMapForType
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

