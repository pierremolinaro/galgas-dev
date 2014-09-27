#ifndef class_2D_lexiqueIntrospectionForGeneration_DEFINED
#define class_2D_lexiqueIntrospectionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-lexiqueIntrospectionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @lexiqueIntrospectionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexiqueIntrospectionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mLexiqueComponentName ;
  public : GALGAS_string mAttribute_mLexiqueReaderName ;

//--- Constructor
  public : cPtr_lexiqueIntrospectionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_string & in_mLexiqueComponentName,
                                                   const GALGAS_string & in_mLexiqueReaderName
                                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLexiqueReaderName (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

