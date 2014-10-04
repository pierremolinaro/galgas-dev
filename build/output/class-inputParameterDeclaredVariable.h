#ifndef class_2D_inputParameterDeclaredVariable_DEFINED
#define class_2D_inputParameterDeclaredVariable_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-inputParameterDeclaredVariable-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @inputParameterDeclaredVariable class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputParameterDeclaredVariable : public cPtr_abstractInputParameter {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualParameterTypeName ;
  public : GALGAS_lstring mAttribute_mActualParameterName ;

//--- Constructor
  public : cPtr_inputParameterDeclaredVariable (const GALGAS_lstring & in_mActualParameterTypeName,
                                                const GALGAS_lstring & in_mActualParameterName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

