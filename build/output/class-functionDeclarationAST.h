#ifndef class_2D_functionDeclarationAST_DEFINED
#define class_2D_functionDeclarationAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-functionDeclarationAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-semanticInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @functionDeclarationAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionDeclarationAST : public cPtr_externFunctionDeclarationAST {
//--- Attributes
  public : GALGAS_semanticInstructionListAST mAttribute_mFunctionInstructionList ;
  public : GALGAS_location mAttribute_mEndOfFunctionInstructionList ;
  public : GALGAS_bool mAttribute_mIsInternal ;

//--- Constructor
  public : cPtr_functionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_lstring & in_mFunctionName,
                                        const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                        const GALGAS_lstring & in_mResultTypeName,
                                        const GALGAS_lstring & in_mResultVariableName,
                                        const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                        const GALGAS_location & in_mEndOfFunctionInstructionList,
                                        const GALGAS_bool & in_mIsInternal
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

