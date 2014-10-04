#ifndef class_2D_routineImplementationForGeneration_DEFINED
#define class_2D_routineImplementationForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-routineImplementationForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-semanticInstructionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @routineImplementationForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_routineImplementationForGeneration : public cPtr_routinePrototypeDeclarationForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mGenerateStatic ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mRoutineInstructionList ;

//--- Constructor
  public : cPtr_routineImplementationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                    const GALGAS_string & in_mRoutineName,
                                                    const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                    const GALGAS_bool & in_mGenerateStatic,
                                                    const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mGenerateStatic (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mRoutineInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

