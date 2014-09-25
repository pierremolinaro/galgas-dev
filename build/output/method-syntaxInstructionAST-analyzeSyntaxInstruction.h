#ifndef method_2D_syntaxInstructionAST_2D_analyzeSyntaxInstruction_1_DEFINED
#define method_2D_syntaxInstructionAST_2D_analyzeSyntaxInstruction_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@syntaxInstructionAST analyzeSyntaxInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction) (const class cPtr_syntaxInstructionAST * inObject,
                                                                                       const class GALGAS_analysisContext constinArgument0,
                                                                                       const class GALGAS_bool constinArgument1,
                                                                                       const class GALGAS_terminalMap constinArgument2,
                                                                                       const class GALGAS_string constinArgument3,
                                                                                       const class GALGAS_nonterminalMap constinArgument4,
                                                                                       const class GALGAS_string constinArgument5,
                                                                                       const class GALGAS_stringset constinArgument6,
                                                                                       class GALGAS_semanticInstructionListForGeneration & ioArgument7,
                                                                                       class GALGAS_variableMap & ioArgument8,
                                                                                       class GALGAS_uint & ioArgument9,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSyntaxInstruction (const int32_t inClassIndex,
                                                   categoryMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSyntaxInstruction (const class cPtr_syntaxInstructionAST * inObject,
                                                  const GALGAS_analysisContext constin_inAnalysisContext,
                                                  const GALGAS_bool constin_inHasTranslateFeature,
                                                  const GALGAS_terminalMap constin_inTerminalMap,
                                                  const GALGAS_string constin_inLexiqueName,
                                                  const GALGAS_nonterminalMap constin_inNonterminalMap,
                                                  const GALGAS_string constin_inComponentName,
                                                  const GALGAS_stringset constin_inIndexNameSet,
                                                  GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                  GALGAS_variableMap & io_ioVariableMap,
                                                  GALGAS_uint & io_ioSelectMethodCount,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

