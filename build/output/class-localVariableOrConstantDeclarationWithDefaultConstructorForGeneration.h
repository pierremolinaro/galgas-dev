#ifndef class_2D_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_DEFINED
#define class_2D_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-localVariableOrConstantDeclarationWithDefaultConstructorForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Pointer class for @localVariableOrConstantDeclarationWithDefaultConstructorForGeneration class            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mTargetType ;
  public : GALGAS_bool mAttribute_mIsConstant ;
  public : GALGAS_string mAttribute_mTargetVariableCppName ;

//--- Constructor
  public : cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                       const GALGAS_unifiedTypeMapProxy & in_mTargetType,
                                                                                       const GALGAS_bool & in_mIsConstant,
                                                                                       const GALGAS_string & in_mTargetVariableCppName
                                                                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mTargetType (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsConstant (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mTargetVariableCppName (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

