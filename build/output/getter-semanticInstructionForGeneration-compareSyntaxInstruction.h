#ifndef getter_2D_semanticInstructionForGeneration_2D_compareSyntaxInstruction_1_DEFINED
#define getter_2D_semanticInstructionForGeneration_2D_compareSyntaxInstruction_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category reader '@semanticInstructionForGeneration compareSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_semanticInstructionForGeneration_compareSyntaxInstruction) (const class cPtr_semanticInstructionForGeneration * inObject,
                                                                                                                const class GALGAS_semanticInstructionForGeneration & constinArgument0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_compareSyntaxInstruction (const int32_t inClassIndex,
                                                   categoryReaderSignature_semanticInstructionForGeneration_compareSyntaxInstruction inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                               const GALGAS_semanticInstructionForGeneration & constin_inTestedInstruction,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

