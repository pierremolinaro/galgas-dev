#ifndef uniquemap_2D_variableMap_DEFINED
#define uniquemap_2D_variableMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "uniquemap-variableMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@variableMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_variableMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mTypeProxy ;
  public : GALGAS_string mAttribute_mCppName ;
  public : GALGAS_string mAttribute_mNameForCheckingFormalParameterUsing ;

//--- Constructor
  public : cMapElement_variableMap (const GALGAS_lstring & inKey,
                                    const GALGAS_unifiedTypeMapProxy & in_mTypeProxy,
                                    const GALGAS_string & in_mCppName,
                                    const GALGAS_string & in_mNameForCheckingFormalParameterUsing
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

