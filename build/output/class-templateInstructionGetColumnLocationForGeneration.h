#ifndef class_2D_templateInstructionGetColumnLocationForGeneration_DEFINED
#define class_2D_templateInstructionGetColumnLocationForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateInstructionGetColumnLocationForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Pointer class for @templateInstructionGetColumnLocationForGeneration class                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionGetColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_templateInstructionGetColumnLocationForGeneration (LOCATION_ARGS) ;

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

