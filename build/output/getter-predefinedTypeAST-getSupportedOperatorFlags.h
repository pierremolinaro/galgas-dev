#ifndef getter_2D_predefinedTypeAST_2D_getSupportedOperatorFlags_1_DEFINED
#define getter_2D_predefinedTypeAST_2D_getSupportedOperatorFlags_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category reader '@predefinedTypeAST getSupportedOperatorFlags'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*categoryReaderSignature_predefinedTypeAST_getSupportedOperatorFlags) (const class cPtr_predefinedTypeAST * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_getSupportedOperatorFlags (const int32_t inClassIndex,
                                                    categoryReaderSignature_predefinedTypeAST_getSupportedOperatorFlags inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callCategoryReader_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

