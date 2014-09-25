#ifndef map_2D_readerMap_DEFINED
#define map_2D_readerMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-readerMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-methodKind.h"
#include "enum-methodQualifier.h"
#include "list-functionSignature.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@readerMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_readerMap : public cMapElement {
//--- Map attributes
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mReturnedType ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;

//--- Constructor
  public : cMapElement_readerMap (const GALGAS_lstring & inKey,
                                  const GALGAS_methodKind & in_mKind,
                                  const GALGAS_functionSignature & in_mArgumentTypeList,
                                  const GALGAS_location & in_mDeclarationLocation,
                                  const GALGAS_bool & in_mHasCompilerArgument,
                                  const GALGAS_unifiedTypeMapProxy & in_mReturnedType,
                                  const GALGAS_methodQualifier & in_mQualifier,
                                  const GALGAS_string & in_mErrorMessage
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

