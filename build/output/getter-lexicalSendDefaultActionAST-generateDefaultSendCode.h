#ifndef getter_2D_lexicalSendDefaultActionAST_2D_generateDefaultSendCode_1_DEFINED
#define getter_2D_lexicalSendDefaultActionAST_2D_generateDefaultSendCode_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category reader '@lexicalSendDefaultActionAST generateDefaultSendCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalSendDefaultActionAST_generateDefaultSendCode) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                            class GALGAS_string inArgument0,
                                                                                                            class C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateDefaultSendCode (const int32_t inClassIndex,
                                                  categoryReaderSignature_lexicalSendDefaultActionAST_generateDefaultSendCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                GALGAS_string in_inScannerClassName,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

