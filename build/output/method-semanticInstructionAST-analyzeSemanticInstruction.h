#ifndef method_2D_semanticInstructionAST_2D_analyzeSemanticInstruction_1_DEFINED
#define method_2D_semanticInstructionAST_2D_analyzeSemanticInstruction_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category method '@semanticInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticInstructionAST_analyzeSemanticInstruction) (const class cPtr_semanticInstructionAST * inObject,
                                                                                           const class GALGAS_analysisContext constinArgument0,
                                                                                           class GALGAS_semanticInstructionListForGeneration & ioArgument1,
                                                                                           class GALGAS_variableMap & ioArgument2,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSemanticInstruction (const int32_t inClassIndex,
                                                     categoryMethodSignature_semanticInstructionAST_analyzeSemanticInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSemanticInstruction (const class cPtr_semanticInstructionAST * inObject,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                    GALGAS_variableMap & io_ioVariableMap,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

