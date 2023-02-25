#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction (const class GALGAS_lstring constinArgument0,
                                               class GALGAS_usefulEntitiesGraph & ioArgument1,
                                               const class GALGAS_analysisContext constinArgument2,
                                               class GALGAS_unifiedTypeMap & ioArgument3,
                                               const class GALGAS_semanticExpressionAST constinArgument4,
                                               const class GALGAS_semanticExpressionAST constinArgument5,
                                               const class GALGAS_fixitListAST constinArgument6,
                                               const class GALGAS_location constinArgument7,
                                               const class GALGAS_string constinArgument8,
                                               class GALGAS_localVarManager & ioArgument9,
                                               class GALGAS_semanticExpressionForGeneration & outArgument10,
                                               class GALGAS_semanticExpressionForGeneration & outArgument11,
                                               class GALGAS_fixitListForGeneration & outArgument12,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOptionalMethodCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOptionalMethodCall (const class GALGAS_lstring constinArgument0,
                                        class GALGAS_usefulEntitiesGraph & ioArgument1,
                                        const class GALGAS_analysisContext constinArgument2,
                                        class GALGAS_unifiedTypeMap & ioArgument3,
                                        class GALGAS_localVarManager & ioArgument4,
                                        const class GALGAS_semanticExpressionAST constinArgument5,
                                        const class GALGAS_lstring constinArgument6,
                                        const class GALGAS_optionalMethodActualArgumentList constinArgument7,
                                        class GALGAS_ifTestListForGeneration & ioArgument8,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'transformInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_transformInstructionList (const class GALGAS_syntaxInstructionList constinArgument0,
                                       class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument1,
                                       const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument2,
                                       class GALGAS_uint & ioArgument3,
                                       class GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument4,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool function_compareSyntaxSignature (const class GALGAS_semanticInstructionListForGeneration & constinArgument0,
                                                   const class GALGAS_semanticInstructionListForGeneration & constinArgument1,
                                                   const class GALGAS_location & constinArgument2,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

