#ifndef getter_2D_lexicalExpressionAST_2D_generateCocoaConditionCode_1_DEFINED
#define getter_2D_lexicalExpressionAST_2D_generateCocoaConditionCode_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category reader '@lexicalExpressionAST generateCocoaConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalExpressionAST_generateCocoaConditionCode) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                                        class GALGAS_lexiqueAnalysisContext inArgument0,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaConditionCode (const int32_t inClassIndex,
                                                     categoryReaderSignature_lexicalExpressionAST_generateCocoaConditionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateCocoaConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                                   GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

