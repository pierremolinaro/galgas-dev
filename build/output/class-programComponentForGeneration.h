#ifndef class_2D_programComponentForGeneration_DEFINED
#define class_2D_programComponentForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-programComponentForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @programComponentForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_programComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_stringset mAttribute_mInclusionSet ;
  public : GALGAS_string mAttribute_mImplementationString ;

//--- Constructor
  public : cPtr_programComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                               const GALGAS_string & in_mImplementationCppFileName,
                                               const GALGAS_stringset & in_mInclusionSet,
                                               const GALGAS_string & in_mImplementationString
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_stringset reader_mInclusionSet (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mImplementationString (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

