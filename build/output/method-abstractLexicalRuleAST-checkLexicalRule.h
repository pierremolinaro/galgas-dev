#ifndef method_2D_abstractLexicalRuleAST_2D_checkLexicalRule_1_DEFINED
#define method_2D_abstractLexicalRuleAST_2D_checkLexicalRule_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@abstractLexicalRuleAST checkLexicalRule'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractLexicalRuleAST_checkLexicalRule) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                 class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalRule (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractLexicalRuleAST_checkLexicalRule inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalRule (const class cPtr_abstractLexicalRuleAST * inObject,
                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

