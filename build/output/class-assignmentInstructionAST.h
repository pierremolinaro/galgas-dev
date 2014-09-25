#ifndef class_2D_assignmentInstructionAST_DEFINED
#define class_2D_assignmentInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-assignmentInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @assignmentInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assignmentInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetVariableName ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_semanticExpressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_lstring & in_mTargetVariableName,
                                          const GALGAS_lstringlist & in_mStructAttributeList,
                                          const GALGAS_semanticExpressionAST & in_mSourceExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetVariableName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mSourceExpression (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

