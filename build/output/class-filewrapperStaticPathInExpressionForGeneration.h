//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           File 'class-filewrapperStaticPathInExpressionForGeneration.h'                             *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_filewrapperStaticPathInExpressionForGeneration_DEFINED
#define class_2D_filewrapperStaticPathInExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-filewrapperStaticPathInExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @filewrapperStaticPathInExpressionForGeneration class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperStaticPathInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFilewrapperName ;
  public : GALGAS_uint mAttribute_mFilewrapperFileIndex ;
  public : GALGAS_bool mAttribute_mIsTextFile ;

//--- Constructor
  public : cPtr_filewrapperStaticPathInExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mType,
                                                                const GALGAS_location & in_mLocation,
                                                                const GALGAS_string & in_mFilewrapperName,
                                                                const GALGAS_uint & in_mFilewrapperFileIndex,
                                                                const GALGAS_bool & in_mIsTextFile
                                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mFilewrapperFileIndex (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsTextFile (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

