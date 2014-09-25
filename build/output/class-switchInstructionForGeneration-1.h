#ifndef class_2D_switchInstructionForGeneration_1_DEFINED
#define class_2D_switchInstructionForGeneration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticInstructionForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @switchInstructionForGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_switchInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_switchInstructionForGeneration * ptr (void) const { return (const cPtr_switchInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_switchInstructionForGeneration (const cPtr_switchInstructionForGeneration * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_switchInstructionForGeneration constructor_new (const class GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                         const class GALGAS_switchBranchesForGeneration & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_switchBranchesForGeneration reader_mBranches (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxy reader_mEnumType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mSwitchExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

