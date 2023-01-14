#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_grammarNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildRuleList (const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument0,
                            const class GALGAS_lstring constinArgument1,
                            const class GALGAS_syntaxRuleListAST constinArgument2,
                            class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument3,
                            class GALGAS_syntaxComponentListForGrammarAnalysis & ioArgument4,
                            class GALGAS_uint & ioArgument5,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkLabelMap (const class GALGAS_location constinArgument0,
                            const class GALGAS_nonTerminalLabelListAST constinArgument1,
                            const class GALGAS_location constinArgument2,
                            const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument3,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitProductionRulesInTexFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitProductionRulesInTexFile (const class GALGAS_string constinArgument0,
                                           const class GALGAS_string constinArgument1,
                                           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument2,
                                           const class GALGAS_syntaxComponentListForGrammarAnalysis constinArgument3,
                                           const class GALGAS_lstring constinArgument4,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'grammarAnalysisAndGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_grammarAnalysisAndGeneration (const class GALGAS_lstring constinArgument0,
                                           const class GALGAS_lstring constinArgument1,
                                           const class GALGAS_uint constinArgument2,
                                           const class GALGAS_string constinArgument3,
                                           const class GALGAS_terminalSymbolsMapForGrammarAnalysis constinArgument4,
                                           const class GALGAS_syntaxComponentListForGrammarAnalysis constinArgument5,
                                           const class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis constinArgument6,
                                           const class GALGAS_string constinArgument7,
                                           const class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis constinArgument8,
                                           const class GALGAS_bool constinArgument9,
                                           const class GALGAS_string constinArgument10,
                                           class GALGAS_string & outArgument11,
                                           class GALGAS_string & outArgument12,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations (class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument0,
                                            const class GALGAS_nonterminalDeclarationListAST constinArgument1,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList (class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument0,
                                                        const class GALGAS_syntaxRuleListAST constinArgument1,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_predefinedTypes function_buildPredefinedTypes (const class GALGAS_semanticContext & constinArgument0,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'syntaxFileGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (class C_Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                               const class GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                               const class GALGAS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                               const class GALGAS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                               const class GALGAS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                               const class GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                               const class GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_nonterminalLabelMap constinArgument1,
                                                       class GALGAS_nonterminalMap & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap (const class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                              const class GALGAS_semanticContext constinArgument1,
                                              class GALGAS_nonterminalMap & outArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList (const class GALGAS_lstring constinArgument0,
                                           class GALGAS_usefulEntitiesGraph & ioArgument1,
                                           const class GALGAS_analysisContext constinArgument2,
                                           const class GALGAS_bool constinArgument3,
                                           const class GALGAS_terminalMap constinArgument4,
                                           const class GALGAS_string constinArgument5,
                                           const class GALGAS_nonterminalMap constinArgument6,
                                           const class GALGAS_string constinArgument7,
                                           const class GALGAS_syntaxInstructionList constinArgument8,
                                           const class GALGAS_location constinArgument9,
                                           const class GALGAS_stringset constinArgument10,
                                           class GALGAS_localVarManager & ioArgument11,
                                           class GALGAS_uint & ioArgument12,
                                           class GALGAS_semanticInstructionListForGeneration & outArgument13,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel (const class GALGAS_lstring constinArgument0,
                                          class GALGAS_usefulEntitiesGraph & ioArgument1,
                                          const class GALGAS_formalParameterListAST constinArgument2,
                                          const class GALGAS_syntaxInstructionList constinArgument3,
                                          const class GALGAS_analysisContext constinArgument4,
                                          const class GALGAS_terminalMap constinArgument5,
                                          const class GALGAS_bool constinArgument6,
                                          const class GALGAS_string constinArgument7,
                                          const class GALGAS_nonterminalMap constinArgument8,
                                          const class GALGAS_string constinArgument9,
                                          const class GALGAS_location constinArgument10,
                                          const class GALGAS_stringset constinArgument11,
                                          class GALGAS_uint & ioArgument12,
                                          class GALGAS_formalParameterListForGeneration & outArgument13,
                                          class GALGAS_formalParameterSignature & outArgument14,
                                          class GALGAS_semanticInstructionListForGeneration & outArgument15,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'grammarGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_grammarGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'grammarGenerationTemplate grammarZone3HeaderGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                             const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                             const class GALGAS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                             const class GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                             const class GALGAS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                             const class GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                             const class GALGAS_string & in_GRAMMAR_5F_NAME,
                                                                                             const class GALGAS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const class GALGAS_string & constinArgument0,
                                                                                             const class GALGAS_semanticInstructionListForGeneration & constinArgument1,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

