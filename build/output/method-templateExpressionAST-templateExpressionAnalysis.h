#ifndef method_2D_templateExpressionAST_2D_templateExpressionAnalysis_1_DEFINED
#define method_2D_templateExpressionAST_2D_templateExpressionAnalysis_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category method '@templateExpressionAST templateExpressionAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_templateExpressionAST_templateExpressionAnalysis) (const class cPtr_templateExpressionAST * inObject,
                                                                                          const class GALGAS_templateAnalysisContext constinArgument0,
                                                                                          class GALGAS_semanticExpressionForGeneration & outArgument1,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_templateExpressionAnalysis (const int32_t inClassIndex,
                                                     categoryMethodSignature_templateExpressionAST_templateExpressionAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_templateExpressionAnalysis (const class cPtr_templateExpressionAST * inObject,
                                                    const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                    GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

