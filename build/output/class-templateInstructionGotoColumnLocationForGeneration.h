#ifndef class_2D_templateInstructionGotoColumnLocationForGeneration_DEFINED
#define class_2D_templateInstructionGotoColumnLocationForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateInstructionGotoColumnLocationForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Pointer class for @templateInstructionGotoColumnLocationForGeneration class                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionGotoColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_templateInstructionGotoColumnLocationForGeneration (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

