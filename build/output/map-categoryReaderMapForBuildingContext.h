#ifndef map_2D_categoryReaderMapForBuildingContext_DEFINED
#define map_2D_categoryReaderMapForBuildingContext_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-categoryReaderMapForBuildingContext-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "map-categoryReaderMapForType-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@categoryReaderMapForBuildingContext' map                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_categoryReaderMapForBuildingContext : public cMapElement {
//--- Map attributes
  public : GALGAS_categoryReaderMapForType mAttribute_mCategoryReaderMapForType ;

//--- Constructor
  public : cMapElement_categoryReaderMapForBuildingContext (const GALGAS_lstring & inKey,
                                                            const GALGAS_categoryReaderMapForType & in_mCategoryReaderMapForType
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

