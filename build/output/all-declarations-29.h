#ifndef all_2D_declarations_2D__32__39__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__39__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-28.h"

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
//                                                                                                                     *
//                         Category reader '@semanticExpressionForGeneration isTrueExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_semanticExpressionForGeneration_isTrueExpression) (const class cPtr_semanticExpressionForGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isTrueExpression (const int32_t inClassIndex,
                                           categoryReaderSignature_semanticExpressionForGeneration_isTrueExpression inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

#endif
