#ifndef class_2D_functionImplementationForGeneration_DEFINED
#define class_2D_functionImplementationForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-functionImplementationForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-semanticInstructionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @functionImplementationForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionImplementationForGeneration : public cPtr_functionPrototypeDeclarationForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mResultVariableCppName ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mFunctionInstructionList ;

//--- Constructor
  public : cPtr_functionImplementationForGeneration (const GALGAS_bool & in_mhasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_string & in_mFunctionName,
                                                     const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                     const GALGAS_unifiedTypeMapProxy & in_mReturnType,
                                                     const GALGAS_string & in_mResultVariableCppName,
                                                     const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mResultVariableCppName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

