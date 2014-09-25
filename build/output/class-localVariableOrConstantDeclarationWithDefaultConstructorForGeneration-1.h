#ifndef class_2D_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_1_DEFINED
#define class_2D_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticInstructionForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    @localVariableOrConstantDeclarationWithDefaultConstructorForGeneration class                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration * ptr (void) const { return (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                                                const class GALGAS_unifiedTypeMapProxy & inOperand1,
                                                                                                                const class GALGAS_bool & inOperand2,
                                                                                                                const class GALGAS_string & inOperand3
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsConstant (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxy reader_mTargetType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetVariableCppName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

