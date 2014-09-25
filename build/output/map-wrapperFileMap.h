#ifndef map_2D_wrapperFileMap_DEFINED
#define map_2D_wrapperFileMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-wrapperFileMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@wrapperFileMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperFileMap : public cMapElement {
//--- Map attributes
  public : GALGAS_string mAttribute_mAbsoluteFilePath ;
  public : GALGAS_bool mAttribute_mIsTextFile ;
  public : GALGAS_uint mAttribute_mWrapperDirectoryIndex ;
  public : GALGAS_uint mAttribute_mWrapperFileIndex ;

//--- Constructor
  public : cMapElement_wrapperFileMap (const GALGAS_lstring & inKey,
                                       const GALGAS_string & in_mAbsoluteFilePath,
                                       const GALGAS_bool & in_mIsTextFile,
                                       const GALGAS_uint & in_mWrapperDirectoryIndex,
                                       const GALGAS_uint & in_mWrapperFileIndex
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

