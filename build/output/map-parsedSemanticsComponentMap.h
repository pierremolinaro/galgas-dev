#ifndef map_2D_parsedSemanticsComponentMap_DEFINED
#define map_2D_parsedSemanticsComponentMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-parsedSemanticsComponentMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticsComponentAST-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@parsedSemanticsComponentMap' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_parsedSemanticsComponentMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mSourceFullFilePath ;
  public : GALGAS_semanticsComponentAST mAttribute_mSemanticComponentRoot ;

//--- Constructor
  public : cMapElement_parsedSemanticsComponentMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_lstring & in_mSourceFullFilePath,
                                                    const GALGAS_semanticsComponentAST & in_mSemanticComponentRoot
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

