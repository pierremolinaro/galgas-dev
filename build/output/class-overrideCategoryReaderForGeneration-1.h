#ifndef class_2D_overrideCategoryReaderForGeneration_1_DEFINED
#define class_2D_overrideCategoryReaderForGeneration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticDeclarationWithHeaderForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overrideCategoryReaderForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overrideCategoryReaderForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_overrideCategoryReaderForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overrideCategoryReaderForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overrideCategoryReaderForGeneration * ptr (void) const { return (const cPtr_overrideCategoryReaderForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overrideCategoryReaderForGeneration (const cPtr_overrideCategoryReaderForGeneration * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overrideCategoryReaderForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overrideCategoryReaderForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_unifiedTypeMapProxy & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_string & inOperand4,
                                                                              const class GALGAS_unifiedTypeMapProxy & inOperand5,
                                                                              const class GALGAS_string & inOperand6,
                                                                              const class GALGAS_formalInputParameterListForGeneration & inOperand7,
                                                                              const class GALGAS_typedAttributeList & inOperand8,
                                                                              const class GALGAS_semanticInstructionListForGeneration & inOperand9
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overrideCategoryReaderForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBaseTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration reader_mOverridingCategoryReaderFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOverridingCategoryReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxy reader_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxy reader_mResultType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mResultVarCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedAttributeList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overrideCategoryReaderForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideCategoryReaderForGeneration ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

