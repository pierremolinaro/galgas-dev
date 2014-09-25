#ifndef map_2D_commandLineOptionMap_DEFINED
#define map_2D_commandLineOptionMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-commandLineOptionMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@commandLineOptionMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_commandLineOptionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_char mAttribute_mOptionChar ;
  public : GALGAS_string mAttribute_mOptionString ;
  public : GALGAS_string mAttribute_mComment ;
  public : GALGAS_string mAttribute_mDefaultValue ;

//--- Constructor
  public : cMapElement_commandLineOptionMap (const GALGAS_lstring & inKey,
                                             const GALGAS_char & in_mOptionChar,
                                             const GALGAS_string & in_mOptionString,
                                             const GALGAS_string & in_mComment,
                                             const GALGAS_string & in_mDefaultValue
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

