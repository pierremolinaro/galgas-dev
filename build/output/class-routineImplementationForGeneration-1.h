#ifndef class_2D_routineImplementationForGeneration_1_DEFINED
#define class_2D_routineImplementationForGeneration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-routinePrototypeDeclarationForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @routineImplementationForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineImplementationForGeneration : public GALGAS_routinePrototypeDeclarationForGeneration {
//--- Constructor
  public : GALGAS_routineImplementationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineImplementationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_routineImplementationForGeneration * ptr (void) const { return (const cPtr_routineImplementationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_routineImplementationForGeneration (const cPtr_routineImplementationForGeneration * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineImplementationForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_routineImplementationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_string & inOperand2,
                                                                             const class GALGAS_formalParameterListForGeneration & inOperand3,
                                                                             const class GALGAS_bool & inOperand4,
                                                                             const class GALGAS_semanticInstructionListForGeneration & inOperand5
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineImplementationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mGenerateStatic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mRoutineInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineImplementationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

