#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxDirectedTranslationResultVarName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_syntaxDirectedTranslationResultVarName (class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories????!!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (const class GALGAS_string constinArgument0,
                                                                              const class GALGAS_string constinArgument1,
                                                                              const class GALGAS_wrapperExtensionMap constinArgument2,
                                                                              const class GALGAS_wrapperExtensionMap constinArgument3,
                                                                              class GALGAS_wrapperFileMap & outArgument4,
                                                                              class GALGAS_wrapperDirectoryMap & outArgument5,
                                                                              class GALGAS_uint & ioArgument6,
                                                                              class GALGAS_uint & ioArgument7,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList&?&&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInstructionList_26__3F__26__26__3F__26_ (class GALGAS_stringset & ioArgument0,
                                                              const class GALGAS_semanticInstructionListForGeneration constinArgument1,
                                                              class GALGAS_uint & ioArgument2,
                                                              class GALGAS_stringset & ioArgument3,
                                                              const class GALGAS_bool constinArgument4,
                                                              class GALGAS_string & ioArgument5,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (const class GALGAS_lstring constinArgument0,
                                                                                                                                                                                                      class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                                                                                                                                      const class GALGAS_analysisContext constinArgument2,
                                                                                                                                                                                                      class GALGAS_unifiedTypeMap & ioArgument3,
                                                                                                                                                                                                      const class GALGAS_localConstantList constinArgument4,
                                                                                                                                                                                                      const class GALGAS_localInitializedVariableList constinArgument5,
                                                                                                                                                                                                      const class GALGAS_localInitializedVariableList constinArgument6,
                                                                                                                                                                                                      const class GALGAS_semanticInstructionListAST constinArgument7,
                                                                                                                                                                                                      const class GALGAS_location constinArgument8,
                                                                                                                                                                                                      class GALGAS_localVarManager & ioArgument9,
                                                                                                                                                                                                      class GALGAS_semanticInstructionListForGeneration & outArgument10,
                                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (const class GALGAS_lstring constinArgument0,
                                                                                                                                                                                                               class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                                                                                                                                               const class GALGAS_analysisContext constinArgument2,
                                                                                                                                                                                                               class GALGAS_unifiedTypeMap & ioArgument3,
                                                                                                                                                                                                               const class GALGAS_localConstantList constinArgument4,
                                                                                                                                                                                                               const class GALGAS_localInitializedVariableList constinArgument5,
                                                                                                                                                                                                               const class GALGAS_localInitializedVariableList constinArgument6,
                                                                                                                                                                                                               const class GALGAS_semanticInstructionListAST constinArgument7,
                                                                                                                                                                                                               class GALGAS_localVarManager & ioArgument8,
                                                                                                                                                                                                               class GALGAS_semanticInstructionListForGeneration & outArgument9,
                                                                                                                                                                                                               class Compiler * inCompiler
                                                                                                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean???!'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean_3F__3F__3F__21_ (const class GALGAS_analysisContext constinArgument0,
                                                       const class GALGAS_location constinArgument1,
                                                       const class GALGAS_semanticExpressionForGeneration constinArgument2,
                                                       class GALGAS_semanticExpressionForGeneration & outArgument3,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_filewrapperNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperTemplateNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                             const class GALGAS_lstring & constinArgument1,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_syntaxNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent?&?????&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (const class GALGAS_lstring constinArgument0,
                                                                                                        class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                                        const class GALGAS_nonterminalDeclarationListAST constinArgument2,
                                                                                                        const class GALGAS_syntaxRuleListAST constinArgument3,
                                                                                                        const class GALGAS_string constinArgument4,
                                                                                                        const class GALGAS_string constinArgument5,
                                                                                                        const class GALGAS_semanticContext constinArgument6,
                                                                                                        class GALGAS_unifiedTypeMap & ioArgument7,
                                                                                                        const class GALGAS_predefinedTypes constinArgument8,
                                                                                                        const class GALGAS_terminalMap constinArgument9,
                                                                                                        const class GALGAS_stringset constinArgument10,
                                                                                                        const class GALGAS_bool constinArgument11,
                                                                                                        const class GALGAS_bool constinArgument12,
                                                                                                        class GALGAS_syntaxDeclarationForGeneration & outArgument13,
                                                                                                        class Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_grammarNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList_3F__3F__3F__26__26__26_ (const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument0,
                                                    const class GALGAS_lstring constinArgument1,
                                                    const class GALGAS_syntaxRuleListAST constinArgument2,
                                                    class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument3,
                                                    class GALGAS_syntaxComponentListForGrammarAnalysis & ioArgument4,
                                                    class GALGAS_uint & ioArgument5,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap_3F__3F__3F__3F_ (const class GALGAS_location constinArgument0,
                                            const class GALGAS_nonTerminalLabelListAST constinArgument1,
                                            const class GALGAS_location constinArgument2,
                                            const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument3,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitClassGraphFile??'
//
//--------------------------------------------------------------------------------------------------

void routine_emitClassGraphFile_3F__3F_ (const class GALGAS_string constinArgument0,
                                         const class GALGAS_unifiedTypeMap constinArgument1,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitProductionRulesInTexFile?????'
//
//--------------------------------------------------------------------------------------------------

void routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (const class GALGAS_string constinArgument0,
                                                               const class GALGAS_string constinArgument1,
                                                               const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument2,
                                                               const class GALGAS_syntaxComponentListForGrammarAnalysis constinArgument3,
                                                               const class GALGAS_lstring constinArgument4,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'grammarAnalysisAndGeneration??????????!!'
//
//--------------------------------------------------------------------------------------------------

void routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21_ (const class GALGAS_lstring constinArgument0,
                                                                                           const class GALGAS_lstring constinArgument1,
                                                                                           const class GALGAS_uint constinArgument2,
                                                                                           const class GALGAS_string constinArgument3,
                                                                                           const class GALGAS_terminalSymbolsMapForGrammarAnalysis constinArgument4,
                                                                                           const class GALGAS_syntaxComponentListForGrammarAnalysis constinArgument5,
                                                                                           const class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis constinArgument6,
                                                                                           const class GALGAS_string constinArgument7,
                                                                                           const class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis constinArgument8,
                                                                                           const class GALGAS_string constinArgument9,
                                                                                           class GALGAS_string & outArgument10,
                                                                                           class GALGAS_string & outArgument11,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument0,
                                                                const class GALGAS_syntaxRuleListAST constinArgument1,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations_26__3F_ (class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument0,
                                                    const class GALGAS_nonterminalDeclarationListAST constinArgument1,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_predefinedTypes function_buildPredefinedTypes (const class GALGAS_unifiedTypeMap & constinArgument0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'syntaxFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (class Compiler * inCompiler,
                                                                                                   const class GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (class Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                               const class GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                               const class GALGAS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                               const class GALGAS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                               const class GALGAS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                               const class GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                               const class GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (const class GALGAS_lstring constinArgument0,
                                                                   const class GALGAS_nonterminalLabelMap constinArgument1,
                                                                   class GALGAS_nonterminalMap & ioArgument2,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (const class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                              const class GALGAS_semanticContext constinArgument1,
                                                              class GALGAS_unifiedTypeMap & ioArgument2,
                                                              class GALGAS_nonterminalMap & outArgument3,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList?&?&????????&&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (const class GALGAS_lstring constinArgument0,
                                                                                                       class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                                       const class GALGAS_analysisContext constinArgument2,
                                                                                                       class GALGAS_unifiedTypeMap & ioArgument3,
                                                                                                       const class GALGAS_bool constinArgument4,
                                                                                                       const class GALGAS_terminalMap constinArgument5,
                                                                                                       const class GALGAS_string constinArgument6,
                                                                                                       const class GALGAS_nonterminalMap constinArgument7,
                                                                                                       const class GALGAS_string constinArgument8,
                                                                                                       const class GALGAS_syntaxInstructionList constinArgument9,
                                                                                                       const class GALGAS_location constinArgument10,
                                                                                                       const class GALGAS_stringset constinArgument11,
                                                                                                       class GALGAS_localVarManager & ioArgument12,
                                                                                                       class GALGAS_uint & ioArgument13,
                                                                                                       class GALGAS_semanticInstructionListForGeneration & outArgument14,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel?&???&???????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (const class GALGAS_lstring constinArgument0,
                                                                                                              class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                                              const class GALGAS_formalParameterListAST constinArgument2,
                                                                                                              const class GALGAS_syntaxInstructionList constinArgument3,
                                                                                                              const class GALGAS_analysisContext constinArgument4,
                                                                                                              class GALGAS_unifiedTypeMap & ioArgument5,
                                                                                                              const class GALGAS_terminalMap constinArgument6,
                                                                                                              const class GALGAS_bool constinArgument7,
                                                                                                              const class GALGAS_string constinArgument8,
                                                                                                              const class GALGAS_nonterminalMap constinArgument9,
                                                                                                              const class GALGAS_string constinArgument10,
                                                                                                              const class GALGAS_location constinArgument11,
                                                                                                              const class GALGAS_stringset constinArgument12,
                                                                                                              class GALGAS_uint & ioArgument13,
                                                                                                              class GALGAS_formalParameterListForGeneration & outArgument14,
                                                                                                              class GALGAS_formalParameterSignature & outArgument15,
                                                                                                              class GALGAS_semanticInstructionListForGeneration & outArgument16,
                                                                                                              class Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'grammarGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_grammarGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'grammarGenerationTemplate grammarZone3HeaderGalgas3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (class Compiler * inCompiler,
                                                                                             const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                             const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                             const class GALGAS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                             const class GALGAS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                             const class GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                             const class GALGAS_string & in_GRAMMAR_5F_NAME,
                                                                                             const class GALGAS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const class GALGAS_string & constinArgument0,
                                                                                             const class GALGAS_semanticInstructionListForGeneration & constinArgument1,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

