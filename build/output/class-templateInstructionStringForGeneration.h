#ifndef class_2D_templateInstructionStringForGeneration_DEFINED
#define class_2D_templateInstructionStringForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateInstructionStringForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @templateInstructionStringForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionStringForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mTemplateString ;

//--- Constructor
  public : cPtr_templateInstructionStringForGeneration (const GALGAS_string & in_mTemplateString
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mTemplateString (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

