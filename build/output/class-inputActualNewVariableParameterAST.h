//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 File 'class-inputActualNewVariableParameterAST.h'                                   *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_inputActualNewVariableParameterAST_DEFINED
#define class_2D_inputActualNewVariableParameterAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-inputActualNewVariableParameterAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @inputActualNewVariableParameterAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputActualNewVariableParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualSelector ;
  public : GALGAS_lstring mAttribute_mInputActualTypeName ;
  public : GALGAS_lstring mAttribute_mInputActualParameterName ;

//--- Constructor
  public : cPtr_inputActualNewVariableParameterAST (const GALGAS_location & in_mQualifierLocation,
                                                    const GALGAS_lstring & in_mActualSelector,
                                                    const GALGAS_lstring & in_mInputActualTypeName,
                                                    const GALGAS_lstring & in_mInputActualParameterName
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualSelector (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mInputActualTypeName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mInputActualParameterName (UNUSED_LOCATION_ARGS) const ;
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

