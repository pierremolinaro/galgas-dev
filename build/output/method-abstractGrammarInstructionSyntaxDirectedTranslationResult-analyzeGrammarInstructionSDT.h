#ifndef method_2D_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_analyzeGrammarInstructionSDT_1_DEFINED
#define method_2D_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_analyzeGrammarInstructionSDT_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Abstract category method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT) (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                                const class GALGAS_analysisContext constinArgument0,
                                                                                                                                const class GALGAS_bool constinArgument1,
                                                                                                                                const class GALGAS_string constinArgument2,
                                                                                                                                class GALGAS_stringlist & ioArgument3,
                                                                                                                                class GALGAS_variableMap & ioArgument4,
                                                                                                                                class C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeGrammarInstructionSDT (const int32_t inClassIndex,
                                                       categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeGrammarInstructionSDT (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                      const GALGAS_analysisContext constin_inAnalysisContext,
                                                      const GALGAS_bool constin_inHasTranslateFeature,
                                                      const GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                      GALGAS_stringlist & io_ioAssignementList,
                                                      GALGAS_variableMap & io_ioVariableMap,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

