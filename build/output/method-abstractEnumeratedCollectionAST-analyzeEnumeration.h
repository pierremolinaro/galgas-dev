#ifndef method_2D_abstractEnumeratedCollectionAST_2D_analyzeEnumeration_1_DEFINED
#define method_2D_abstractEnumeratedCollectionAST_2D_analyzeEnumeration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@abstractEnumeratedCollectionAST analyzeEnumeration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration) (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                            const class GALGAS_analysisContext constinArgument0,
                                                                                            class GALGAS_variableMap & ioArgument1,
                                                                                            class GALGAS_localInitializedVariableList & ioArgument2,
                                                                                            class GALGAS_string & outArgument3,
                                                                                            class GALGAS_semanticExpressionForGeneration & outArgument4,
                                                                                            class C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeEnumeration (const int32_t inClassIndex,
                                             categoryMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeEnumeration (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                            const GALGAS_analysisContext constin_inAnalysisContext,
                                            GALGAS_variableMap & io_ioVariableMap,
                                            GALGAS_localInitializedVariableList & io_ioLocalConstantListForDoBranch,
                                            GALGAS_string & out_outEnumeratorCppName,
                                            GALGAS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

