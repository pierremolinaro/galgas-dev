//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            File 'method-lexicalExpressionAST-checkLexicalExpression.h'                              *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef method_2D_lexicalExpressionAST_2D_checkLexicalExpression_1_DEFINED
#define method_2D_lexicalExpressionAST_2D_checkLexicalExpression_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category method '@lexicalExpressionAST checkLexicalExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_lexicalExpressionAST_checkLexicalExpression) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                     class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalExpression (const int32_t inClassIndex,
                                                 categoryMethodSignature_lexicalExpressionAST_checkLexicalExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalExpression (const class cPtr_lexicalExpressionAST * inObject,
                                                GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

