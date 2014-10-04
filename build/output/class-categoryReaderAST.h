#ifndef class_2D_categoryReaderAST_DEFINED
#define class_2D_categoryReaderAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-categoryReaderAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalInputParameterListAST.h"
#include "list-semanticInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @categoryReaderAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_categoryReaderAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mCategoryReaderName ;
  public : GALGAS_formalInputParameterListAST mAttribute_mCategoryReaderFormalInputParameterList ;
  public : GALGAS_lstring mAttribute_mCategoryReaderReturnedTypeName ;
  public : GALGAS_lstring mAttribute_mCategoryReaderReturnedVariableName ;
  public : GALGAS_semanticInstructionListAST mAttribute_mCategoryReaderInstructionList ;
  public : GALGAS_location mAttribute_mEndOfReaderLocation ;

//--- Constructor
  public : cPtr_categoryReaderAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mCategoryReaderName,
                                   const GALGAS_formalInputParameterListAST & in_mCategoryReaderFormalInputParameterList,
                                   const GALGAS_lstring & in_mCategoryReaderReturnedTypeName,
                                   const GALGAS_lstring & in_mCategoryReaderReturnedVariableName,
                                   const GALGAS_semanticInstructionListAST & in_mCategoryReaderInstructionList,
                                   const GALGAS_location & in_mEndOfReaderLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mCategoryReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST reader_mCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mCategoryReaderReturnedVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mCategoryReaderInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfReaderLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

