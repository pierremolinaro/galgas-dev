#ifndef all_2D_declarations_2D__32__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-20.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@semanticExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticExpressionForGeneration_generateExpression) (const class cPtr_semanticExpressionForGeneration * inObject,
                                                                                             class GALGAS_string & ioArgument0,
                                                                                             class GALGAS_stringset & ioArgument1,
                                                                                             class GALGAS_uint & ioArgument2,
                                                                                             class GALGAS_stringset & ioArgument3,
                                                                                             class GALGAS_string & outArgument4,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateExpression (const int32_t inClassIndex,
                                              extensionMethodSignature_semanticExpressionForGeneration_generateExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateExpression (const class cPtr_semanticExpressionForGeneration * inObject,
                                             GALGAS_string & io_ioGeneratedCode,
                                             GALGAS_stringset & io_ioInclusionSet,
                                             GALGAS_uint & io_ioTemporaryVariableIndex,
                                             GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                             GALGAS_string & out_outCppExpression,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension getter '@semanticExpressionForGeneration isTrueExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_semanticExpressionForGeneration_isTrueExpression) (const class cPtr_semanticExpressionForGeneration * inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_isTrueExpression (const int32_t inClassIndex,
                                            enterExtensionGetter_semanticExpressionForGeneration_isTrueExpression inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

#endif
