#ifndef map_2D_lexicalTypeMap_DEFINED
#define map_2D_lexicalTypeMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-lexicalTypeMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-lexicalTypeEnum.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@lexicalTypeMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;

//--- Constructor
  public : cMapElement_lexicalTypeMap (const GALGAS_lstring & inKey,
                                       const GALGAS_lexicalTypeEnum & in_mLexicalType
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

