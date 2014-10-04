#ifndef class_2D_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_DEFINED
#define class_2D_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-localVariableOrConstantDeclarationWithSourceExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Pointer class for @localVariableOrConstantDeclarationWithSourceExpressionForGeneration class             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mTargetType ;
  public : GALGAS_bool mAttribute_mIsConstant ;
  public : GALGAS_string mAttribute_mCppVariableName ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mTargetType,
                                                                                     const GALGAS_bool & in_mIsConstant,
                                                                                     const GALGAS_string & in_mCppVariableName,
                                                                                     const GALGAS_semanticExpressionForGeneration & in_mSourceExpression
                                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsConstant (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

