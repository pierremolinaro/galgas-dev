#ifndef method_2D_predefinedTypeAST_2D_getInstanceMethodMap_1_DEFINED
#define method_2D_predefinedTypeAST_2D_getInstanceMethodMap_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@predefinedTypeAST getInstanceMethodMap'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_predefinedTypeAST_getInstanceMethodMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                                class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                class GALGAS_instanceMethodMap & outArgument1,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getInstanceMethodMap (const int32_t inClassIndex,
                                               categoryMethodSignature_predefinedTypeAST_getInstanceMethodMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getInstanceMethodMap (const class cPtr_predefinedTypeAST * inObject,
                                              GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                              GALGAS_instanceMethodMap & out_outInstanceMethodMap,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

