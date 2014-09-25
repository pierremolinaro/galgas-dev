#ifndef map_2D_parsedLexiqueComponentMap_DEFINED
#define map_2D_parsedLexiqueComponentMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-parsedLexiqueComponentMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "struct-galgas3LexiqueComponentListAST-element.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@parsedLexiqueComponentMap' map                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_parsedLexiqueComponentMap : public cMapElement {
//--- Map attributes
  public : GALGAS_galgas_33_LexiqueComponentListAST_2D_element mAttribute_mLexiqueComponentAST ;

//--- Constructor
  public : cMapElement_parsedLexiqueComponentMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_galgas_33_LexiqueComponentListAST_2D_element & in_mLexiqueComponentAST
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

