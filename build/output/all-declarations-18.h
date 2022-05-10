#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticExpressionForGeneration isTrueExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_semanticExpressionForGeneration_isTrueExpression) (const class cPtr_semanticExpressionForGeneration * inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_isTrueExpression (const int32_t inClassIndex,
                                            enterExtensionGetter_semanticExpressionForGeneration_isTrueExpression inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

