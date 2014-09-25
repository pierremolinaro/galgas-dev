#ifndef method_2D_predefinedTypeAST_2D_getModifierMap_1_DEFINED
#define method_2D_predefinedTypeAST_2D_getModifierMap_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@predefinedTypeAST getModifierMap'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_predefinedTypeAST_getModifierMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                          class GALGAS_unifiedTypeMap & ioArgument0,
                                                                          class GALGAS_modifierMap & outArgument1,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getModifierMap (const int32_t inClassIndex,
                                         categoryMethodSignature_predefinedTypeAST_getModifierMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getModifierMap (const class cPtr_predefinedTypeAST * inObject,
                                        GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                        GALGAS_modifierMap & out_outModifierMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

