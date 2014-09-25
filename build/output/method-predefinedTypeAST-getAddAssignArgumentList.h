#ifndef method_2D_predefinedTypeAST_2D_getAddAssignArgumentList_1_DEFINED
#define method_2D_predefinedTypeAST_2D_getAddAssignArgumentList_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@predefinedTypeAST getAddAssignArgumentList'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_predefinedTypeAST_getAddAssignArgumentList) (const class cPtr_predefinedTypeAST * inObject,
                                                                                    class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                    class GALGAS_functionSignature & outArgument1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getAddAssignArgumentList (const int32_t inClassIndex,
                                                   categoryMethodSignature_predefinedTypeAST_getAddAssignArgumentList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getAddAssignArgumentList (const class cPtr_predefinedTypeAST * inObject,
                                                  GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                                  GALGAS_functionSignature & out_outAddAssignArgumentList,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

