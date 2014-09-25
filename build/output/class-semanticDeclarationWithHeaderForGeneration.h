#ifndef class_2D_semanticDeclarationWithHeaderForGeneration_DEFINED
#define class_2D_semanticDeclarationWithHeaderForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticDeclarationWithHeaderForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @semanticDeclarationWithHeaderForGeneration class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_semanticDeclarationWithHeaderForGeneration : public cPtr_semanticDeclarationForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mhasHeader ;
  public : GALGAS_string mAttribute_mImplementationCppFileName ;

//--- Constructor
  public : cPtr_semanticDeclarationWithHeaderForGeneration (const GALGAS_bool & in_mhasHeader,
                                                            const GALGAS_string & in_mImplementationCppFileName
                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mhasHeader (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mImplementationCppFileName (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

