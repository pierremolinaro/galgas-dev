#ifndef map_2D_lexicalFunctionMap_DEFINED
#define map_2D_lexicalFunctionMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-lexicalFunctionMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-lexicalTypeEnum.h"
#include "list-lexicalFunctionFormalArgumentList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@lexicalFunctionMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalFunctionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalFunctionFormalArgumentList mAttribute_mLexicalTypeList ;
  public : GALGAS_lexicalTypeEnum mAttribute_mReturnedLexicalType ;
  public : GALGAS_string mAttribute_mReplacementFunctionName ;
  public : GALGAS_bool mAttribute_mIsExtern ;

//--- Constructor
  public : cMapElement_lexicalFunctionMap (const GALGAS_lstring & inKey,
                                           const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                           const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                           const GALGAS_string & in_mReplacementFunctionName,
                                           const GALGAS_bool & in_mIsExtern
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

