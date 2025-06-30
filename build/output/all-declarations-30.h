#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-29.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction?&?&?????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                                   class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                   const class GGS_analysisContext constinArgument2,
                                                                                                   class GGS_unifiedTypeMap & ioArgument3,
                                                                                                   const class GGS_semanticExpressionAST constinArgument4,
                                                                                                   const class GGS_semanticExpressionAST constinArgument5,
                                                                                                   const class GGS_fixitListAST constinArgument6,
                                                                                                   const class GGS_location constinArgument7,
                                                                                                   const class GGS_string constinArgument8,
                                                                                                   class GGS_localVarManager & ioArgument9,
                                                                                                   class GGS_semanticExpressionForGeneration & outArgument10,
                                                                                                   class GGS_semanticExpressionForGeneration & outArgument11,
                                                                                                   class GGS_fixitListForGeneration & outArgument12,
                                                                                                   class Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'transformInstructionListForGrammarAnalysis?&usedTerminalMap?nonTerminalSymbolMap&addedTerminalIndex&'
//
//--------------------------------------------------------------------------------------------------

void routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (const class GGS_syntaxInstructionList constinArgument0,
                                                                                                                                  class GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument1,
                                                                                                                                  const class GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument2,
                                                                                                                                  class GGS_uint & ioArgument3,
                                                                                                                                  class GGS_syntaxInstructionListForGrammarAnalysis & ioArgument4,
                                                                                                                                  class Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool function_compareSyntaxSignature (const class GGS_semanticInstructionListForGeneration & constinArgument0,
                                                const class GGS_semanticInstructionListForGeneration & constinArgument1,
                                                const class GGS_location & constinArgument2,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'groupSyntaxComponentsGalgas3??&'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (const class GGS_galgas_33_SyntaxComponentListAST constinArgument0,
                                                          const class GGS_syntaxExtensions constinArgument1,
                                                          class GGS_semanticDeclarationListAST & ioArgument2,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'transformLabelMap'
//
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const class GGS_nonTerminalLabelListAST & constinArgument0,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'grammarRulesInTexDocumentTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_grammarRulesInTexDocumentTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'grammarRulesInTexDocumentTemplate document'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (class Compiler * inCompiler,
                                                                           const class GGS_string & in_DOCUMENT_5F_NAME,
                                                                           const class GGS_string & in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME
                                                                           COMMA_LOCATION_ARGS) ;

