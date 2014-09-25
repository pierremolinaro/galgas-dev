#ifndef method_2D_semanticInstructionForGeneration_2D_appendSyntaxSignature_1_DEFINED
#define method_2D_semanticInstructionForGeneration_2D_appendSyntaxSignature_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@semanticInstructionForGeneration appendSyntaxSignature'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticInstructionForGeneration_appendSyntaxSignature) (const class cPtr_semanticInstructionForGeneration * inObject,
                                                                                                const class GALGAS_string constinArgument0,
                                                                                                class GALGAS_semanticInstructionListForGeneration & ioArgument1,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendSyntaxSignature (const int32_t inClassIndex,
                                                categoryMethodSignature_semanticInstructionForGeneration_appendSyntaxSignature inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendSyntaxSignature (const class cPtr_semanticInstructionForGeneration * inObject,
                                               const GALGAS_string constin_inPosfix,
                                               GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

