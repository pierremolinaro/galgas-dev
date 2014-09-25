#ifndef class_2D_inputJokerActualParameterAST_DEFINED
#define class_2D_inputJokerActualParameterAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-inputJokerActualParameterAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @inputJokerActualParameterAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputJokerActualParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_uint mAttribute_mJokerIndex ;

//--- Constructor
  public : cPtr_inputJokerActualParameterAST (const GALGAS_location & in_mQualifierLocation,
                                              const GALGAS_uint & in_mJokerIndex
                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mJokerIndex (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

