//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       File 'map-categoryReaderMapForType.h'                                         *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'35"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef map_2D_categoryReaderMapForType_DEFINED
#define map_2D_categoryReaderMapForType_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-categoryReaderMapForType-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalInputParameterListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@categoryReaderMapForType' map                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_categoryReaderMapForType : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mResultTypeName ;
  public : GALGAS_formalInputParameterListAST mAttribute_mInputFormalParameterList ;

//--- Constructor
  public : cMapElement_categoryReaderMapForType (const GALGAS_lstring & inKey,
                                                 const GALGAS_lstring & in_mResultTypeName,
                                                 const GALGAS_formalInputParameterListAST & in_mInputFormalParameterList
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

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

