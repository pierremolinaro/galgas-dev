#ifndef class_2D_selfCopyInExpressionForGeneration_DEFINED
#define class_2D_selfCopyInExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-selfCopyInExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @selfCopyInExpressionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfCopyInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mSelfCppName ;

//--- Constructor
  public : cPtr_selfCopyInExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_string & in_mSelfCppName
                                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mSelfCppName (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

