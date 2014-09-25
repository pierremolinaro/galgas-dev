#ifndef map_2D_routineMap_DEFINED
#define map_2D_routineMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-routineMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterSignature.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@routineMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_routineMap : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterSignature mAttribute_mRoutineSignature ;
  public : GALGAS_bool mAttribute_mIsInternal ;

//--- Constructor
  public : cMapElement_routineMap (const GALGAS_lstring & inKey,
                                   const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                   const GALGAS_bool & in_mIsInternal
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

