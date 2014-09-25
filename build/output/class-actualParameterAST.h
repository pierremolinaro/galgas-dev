#ifndef class_2D_actualParameterAST_DEFINED
#define class_2D_actualParameterAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-actualParameterAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @actualParameterAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_actualParameterAST : public acPtr_class {
//--- Attributes
  public : GALGAS_location mAttribute_mQualifierLocation ;

//--- Constructor
  public : cPtr_actualParameterAST (const GALGAS_location & in_mQualifierLocation
                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mQualifierLocation (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

