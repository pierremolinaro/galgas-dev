#ifndef class_2D_localVariableDeclarationForGeneration_DEFINED
#define class_2D_localVariableDeclarationForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-localVariableDeclarationForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @localVariableDeclarationForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_localVariableDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mVariableType ;
  public : GALGAS_string mAttribute_mCppVariableName ;

//--- Constructor
  public : cPtr_localVariableDeclarationForGeneration (const GALGAS_unifiedTypeMapProxy & in_mVariableType,
                                                       const GALGAS_string & in_mCppVariableName
                                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mVariableType (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppVariableName (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

