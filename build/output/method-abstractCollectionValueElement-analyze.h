#ifndef method_2D_abstractCollectionValueElement_2D_analyze_1_DEFINED
#define method_2D_abstractCollectionValueElement_2D_analyze_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@abstractCollectionValueElement analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractCollectionValueElement_analyze) (const class cPtr_abstractCollectionValueElement * inObject,
                                                                                const class GALGAS_analysisContext constinArgument0,
                                                                                const class GALGAS_unifiedTypeMapProxy constinArgument1,
                                                                                class GALGAS_variableMap & ioArgument2,
                                                                                class GALGAS_collectionValueElementListForGeneration & ioArgument3,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyze (const int32_t inClassIndex,
                                  categoryMethodSignature_abstractCollectionValueElement_analyze inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyze (const class cPtr_abstractCollectionValueElement * inObject,
                                 const GALGAS_analysisContext constin_inAnalysisContext,
                                 const GALGAS_unifiedTypeMapProxy constin_inElementType,
                                 GALGAS_variableMap & io_ioVariableMap,
                                 GALGAS_collectionValueElementListForGeneration & io_ioCollectionValueElementListForGeneration,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

