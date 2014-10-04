#ifndef class_2D_localVariableOrConstantDeclarationWithDefaultConstructorAST_DEFINED
#define class_2D_localVariableOrConstantDeclarationWithDefaultConstructorAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-localVariableOrConstantDeclarationWithDefaultConstructorAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Pointer class for @localVariableOrConstantDeclarationWithDefaultConstructorAST class                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsConstant ;
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mVariableName ;

//--- Constructor
  public : cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST (const GALGAS_location & in_mInstructionLocation,
                                                                             const GALGAS_bool & in_mIsConstant,
                                                                             const GALGAS_lstring & in_mTypeName,
                                                                             const GALGAS_lstring & in_mVariableName
                                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsConstant (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

