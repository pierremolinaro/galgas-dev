//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    File 'class-varInExpressionForGeneration.h'                                      *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_varInExpressionForGeneration_DEFINED
#define class_2D_varInExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-varInExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @varInExpressionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mCppVarName ;
  public : GALGAS_string mAttribute_mNameForCheckingFormalParameterUsing ;

//--- Constructor
  public : cPtr_varInExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mType,
                                              const GALGAS_location & in_mLocation,
                                              const GALGAS_string & in_mCppVarName,
                                              const GALGAS_string & in_mNameForCheckingFormalParameterUsing
                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppVarName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const ;
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

