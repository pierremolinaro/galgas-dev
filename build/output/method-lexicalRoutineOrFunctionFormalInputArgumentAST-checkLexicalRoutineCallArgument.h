#ifndef method_2D_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_checkLexicalRoutineCallArgument_1_DEFINED
#define method_2D_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_checkLexicalRoutineCallArgument_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Abstract category method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                        class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                        class GALGAS_lexicalTypeEnum inArgument1,
                                                                                                                        class C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                          categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalRoutineCallArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                         GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                         GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

