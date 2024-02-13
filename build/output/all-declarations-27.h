#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction?&?&?????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (const class GALGAS_lstring constinArgument0,
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
                                                                                                   class Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOptionalMethodCall?&?&&?receiverExp?optionalMethodName?parameters&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOptionalMethodCall_3F__26__3F__26__26__3F_receiverExp_3F_optionalMethodName_3F_parameters_26_ (const class GALGAS_lstring constinArgument0,
                                                                                                                   class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                                                   const class GALGAS_analysisContext constinArgument2,
                                                                                                                   class GALGAS_unifiedTypeMap & ioArgument3,
                                                                                                                   class GALGAS_localVarManager & ioArgument4,
                                                                                                                   const class GALGAS_semanticExpressionAST constinArgument5,
                                                                                                                   const class GALGAS_lstring constinArgument6,
                                                                                                                   const class GALGAS_optionalMethodActualArgumentList constinArgument7,
                                                                                                                   class GALGAS_ifTestListForGeneration & ioArgument8,
                                                                                                                   class Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'transformInstructionList?&usedTerminalMap?nonTerminalSymbolMap&addedTerminalIndex&'
//
//--------------------------------------------------------------------------------------------------

void routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (const class GALGAS_syntaxInstructionList constinArgument0,
                                                                                                                class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument1,
                                                                                                                const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument2,
                                                                                                                class GALGAS_uint & ioArgument3,
                                                                                                                class GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument4,
                                                                                                                class Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool function_compareSyntaxSignature (const class GALGAS_semanticInstructionListForGeneration & constinArgument0,
                                                   const class GALGAS_semanticInstructionListForGeneration & constinArgument1,
                                                   const class GALGAS_location & constinArgument2,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'groupSyntaxComponentsGalgas3??&'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (const class GALGAS_galgas_33_SyntaxComponentListAST constinArgument0,
                                                          const class GALGAS_syntaxExtensions constinArgument1,
                                                          class GALGAS_semanticDeclarationListAST & ioArgument2,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'transformLabelMap'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const class GALGAS_nonTerminalLabelListAST & constinArgument0,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

