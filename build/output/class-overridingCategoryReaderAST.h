#ifndef class_2D_overridingCategoryReaderAST_DEFINED
#define class_2D_overridingCategoryReaderAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-overridingCategoryReaderAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalInputParameterListAST.h"
#include "list-semanticInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @overridingCategoryReaderAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingCategoryReaderAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryReaderName ;
  public : GALGAS_formalInputParameterListAST mAttribute_mOverridingCategoryReaderFormalInputParameterList ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryReaderReturnedTypeName ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryReaderReturnedVariableName ;
  public : GALGAS_semanticInstructionListAST mAttribute_mOverridingCategoryReaderInstructionList ;
  public : GALGAS_location mAttribute_mEndOfReaderLocation ;

//--- Constructor
  public : cPtr_overridingCategoryReaderAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingCategoryReaderName,
                                             const GALGAS_formalInputParameterListAST & in_mOverridingCategoryReaderFormalInputParameterList,
                                             const GALGAS_lstring & in_mOverridingCategoryReaderReturnedTypeName,
                                             const GALGAS_lstring & in_mOverridingCategoryReaderReturnedVariableName,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingCategoryReaderInstructionList,
                                             const GALGAS_location & in_mEndOfReaderLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST reader_mOverridingCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryReaderReturnedVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mOverridingCategoryReaderInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfReaderLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

