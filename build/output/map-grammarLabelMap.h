#ifndef map_2D_grammarLabelMap_DEFINED
#define map_2D_grammarLabelMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-grammarLabelMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterSignature.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@grammarLabelMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_grammarLabelMap : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterSignature mAttribute_mLabelSignature ;

//--- Constructor
  public : cMapElement_grammarLabelMap (const GALGAS_lstring & inKey,
                                        const GALGAS_formalParameterSignature & in_mLabelSignature
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

