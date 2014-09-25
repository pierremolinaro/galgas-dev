#ifndef method_2D_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_generateCode_1_DEFINED
#define method_2D_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_generateCode_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract category method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode) (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                const class GALGAS_bool constinArgument0,
                                                                                                                const class GALGAS_string constinArgument1,
                                                                                                                class GALGAS_stringset & ioArgument2,
                                                                                                                class GALGAS_string & ioArgument3,
                                                                                                                class C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateCode (const int32_t inClassIndex,
                                       categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateCode (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                      const GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                      const GALGAS_string constin_inAccessMethodName,
                                      GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                      GALGAS_string & io_ioGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

