#ifndef map_2D_categoryModifierMapForType_DEFINED
#define map_2D_categoryModifierMapForType_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-categoryModifierMapForType-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@categoryModifierMapForType' map                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_categoryModifierMapForType : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterListAST mAttribute_mFormalParameterList ;

//--- Constructor
  public : cMapElement_categoryModifierMapForType (const GALGAS_lstring & inKey,
                                                   const GALGAS_formalParameterListAST & in_mFormalParameterList
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

