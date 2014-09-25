#ifndef getter_2D_semanticExpressionForGeneration_2D_isTrueExpression_1_DEFINED
#define getter_2D_semanticExpressionForGeneration_2D_isTrueExpression_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

#endif

