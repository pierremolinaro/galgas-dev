//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             File 'getter-lexicalExpressionAST-generateConditionCode.h'                              *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef getter_2D_lexicalExpressionAST_2D_generateConditionCode_1_DEFINED
#define getter_2D_lexicalExpressionAST_2D_generateConditionCode_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category reader '@lexicalExpressionAST generateConditionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalExpressionAST_generateConditionCode) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                                   class GALGAS_lexiqueAnalysisContext inArgument0,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateConditionCode (const int32_t inClassIndex,
                                                categoryReaderSignature_lexicalExpressionAST_generateConditionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                              GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

