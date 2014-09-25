#ifndef method_2D_semanticExpressionForGeneration_2D_generateExpression_1_DEFINED
#define method_2D_semanticExpressionForGeneration_2D_generateExpression_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@semanticExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticExpressionForGeneration_generateExpression) (const class cPtr_semanticExpressionForGeneration * inObject,
                                                                                            class GALGAS_string & ioArgument0,
                                                                                            class GALGAS_stringset & ioArgument1,
                                                                                            class GALGAS_uint & ioArgument2,
                                                                                            class GALGAS_stringset & ioArgument3,
                                                                                            class GALGAS_string & outArgument4,
                                                                                            class C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateExpression (const int32_t inClassIndex,
                                             categoryMethodSignature_semanticExpressionForGeneration_generateExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateExpression (const class cPtr_semanticExpressionForGeneration * inObject,
                                            GALGAS_string & io_ioGeneratedCode,
                                            GALGAS_stringset & io_ioInclusionSet,
                                            GALGAS_uint & io_ioTemporaryVariableIndex,
                                            GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                            GALGAS_string & out_outCppExpression,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

