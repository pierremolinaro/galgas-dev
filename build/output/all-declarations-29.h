#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-28.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories????!!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (const class GGS_string constinArgument0,
                                                                              const class GGS_string constinArgument1,
                                                                              const class GGS_wrapperExtensionMap constinArgument2,
                                                                              const class GGS_wrapperExtensionMap constinArgument3,
                                                                              class GGS_wrapperFileMap & outArgument4,
                                                                              class GGS_wrapperDirectoryMap & outArgument5,
                                                                              class GGS_uint & ioArgument6,
                                                                              class GGS_uint & ioArgument7,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList&?&&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInstructionList_26__3F__26__26__3F__26_ (class GGS_stringset & ioArgument0,
                                                              const class GGS_semanticInstructionListForGeneration constinArgument1,
                                                              class GGS_uint & ioArgument2,
                                                              class GGS_stringset & ioArgument3,
                                                              const class GGS_bool constinArgument4,
                                                              class GGS_string & ioArgument5,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (const class GGS_lstring constinArgument0,
                                                                                                                                                                                                      class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                                                                                                                      const class GGS_analysisContext constinArgument2,
                                                                                                                                                                                                      class GGS_unifiedTypeMap & ioArgument3,
                                                                                                                                                                                                      const class GGS_localConstantList constinArgument4,
                                                                                                                                                                                                      const class GGS_localInitializedVariableList constinArgument5,
                                                                                                                                                                                                      const class GGS_localInitializedVariableList constinArgument6,
                                                                                                                                                                                                      const class GGS_semanticInstructionListAST constinArgument7,
                                                                                                                                                                                                      const class GGS_location constinArgument8,
                                                                                                                                                                                                      class GGS_localVarManager & ioArgument9,
                                                                                                                                                                                                      class GGS_semanticInstructionListForGeneration & outArgument10,
                                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (const class GGS_lstring constinArgument0,
                                                                                                                                                                                                               class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                                                                                                                               const class GGS_analysisContext constinArgument2,
                                                                                                                                                                                                               class GGS_unifiedTypeMap & ioArgument3,
                                                                                                                                                                                                               const class GGS_localConstantList constinArgument4,
                                                                                                                                                                                                               const class GGS_localInitializedVariableList constinArgument5,
                                                                                                                                                                                                               const class GGS_localInitializedVariableList constinArgument6,
                                                                                                                                                                                                               const class GGS_semanticInstructionListAST constinArgument7,
                                                                                                                                                                                                               class GGS_localVarManager & ioArgument8,
                                                                                                                                                                                                               class GGS_semanticInstructionListForGeneration & outArgument9,
                                                                                                                                                                                                               class Compiler * inCompiler
                                                                                                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_filewrapperNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperTemplateNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                                          const class GGS_lstring & constinArgument1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_syntaxNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent?&?????&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (const class GGS_lstring constinArgument0,
                                                                                                        class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                        const class GGS_nonterminalDeclarationListAST constinArgument2,
                                                                                                        const class GGS_syntaxRuleListAST constinArgument3,
                                                                                                        const class GGS_string constinArgument4,
                                                                                                        const class GGS_string constinArgument5,
                                                                                                        const class GGS_semanticContext constinArgument6,
                                                                                                        class GGS_unifiedTypeMap & ioArgument7,
                                                                                                        const class GGS_predefinedTypes constinArgument8,
                                                                                                        const class GGS_terminalMap constinArgument9,
                                                                                                        const class GGS_stringset constinArgument10,
                                                                                                        const class GGS_bool constinArgument11,
                                                                                                        const class GGS_bool constinArgument12,
                                                                                                        class GGS_syntaxDeclarationForGeneration & outArgument13,
                                                                                                        class Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_grammarNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList_3F__3F__3F__26__26__26_ (const class GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument0,
                                                    const class GGS_lstring constinArgument1,
                                                    const class GGS_syntaxRuleListAST constinArgument2,
                                                    class GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument3,
                                                    class GGS_syntaxComponentListForGrammarAnalysis & ioArgument4,
                                                    class GGS_uint & ioArgument5,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap_3F__3F__3F__3F_ (const class GGS_location constinArgument0,
                                            const class GGS_nonTerminalLabelListAST constinArgument1,
                                            const class GGS_location constinArgument2,
                                            const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument3,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitClassGraphFile??'
//
//--------------------------------------------------------------------------------------------------

void routine_emitClassGraphFile_3F__3F_ (const class GGS_string constinArgument0,
                                         const class GGS_unifiedTypeMap constinArgument1,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitProductionRulesInTexFile?????'
//
//--------------------------------------------------------------------------------------------------

void routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                               const class GGS_string constinArgument1,
                                                               const class GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument2,
                                                               const class GGS_syntaxComponentListForGrammarAnalysis constinArgument3,
                                                               const class GGS_lstring constinArgument4,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'grammarAnalysisAndGeneration??????????!!'
//
//--------------------------------------------------------------------------------------------------

void routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21_ (const class GGS_lstring constinArgument0,
                                                                                           const class GGS_lstring constinArgument1,
                                                                                           const class GGS_uint constinArgument2,
                                                                                           const class GGS_string constinArgument3,
                                                                                           const class GGS_terminalSymbolsMapForGrammarAnalysis constinArgument4,
                                                                                           const class GGS_syntaxComponentListForGrammarAnalysis constinArgument5,
                                                                                           const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis constinArgument6,
                                                                                           const class GGS_string constinArgument7,
                                                                                           const class GGS_nonTerminalSymbolSortedListForGrammarAnalysis constinArgument8,
                                                                                           const class GGS_string constinArgument9,
                                                                                           class GGS_string & outArgument10,
                                                                                           class GGS_string & outArgument11,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (class GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument0,
                                                                const class GGS_syntaxRuleListAST constinArgument1,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations_26__3F_ (class GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument0,
                                                    const class GGS_nonterminalDeclarationListAST constinArgument1,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

class GGS_predefinedTypes function_buildPredefinedTypes (const class GGS_unifiedTypeMap & constinArgument0,
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

GGS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (class Compiler * inCompiler,
                                                                                                const class GGS_stringset & in_INCLUSION_5F_SET
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (class Compiler * inCompiler,
                                                                                            const class GGS_string & in_COMPONENT_5F_NAME,
                                                                                            const class GGS_string & in_LEXIQUE_5F_NAME,
                                                                                            const class GGS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                            const class GGS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                            const class GGS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                            const class GGS_bool & in_HAS_5F_INDEXING,
                                                                                            const class GGS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (const class GGS_lstring constinArgument0,
                                                                   const class GGS_nonterminalLabelMap constinArgument1,
                                                                   class GGS_nonterminalMap & ioArgument2,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (const class GGS_nonterminalDeclarationListAST constinArgument0,
                                                              const class GGS_semanticContext constinArgument1,
                                                              class GGS_unifiedTypeMap & ioArgument2,
                                                              class GGS_nonterminalMap & outArgument3,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList?&?&????????&&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (const class GGS_lstring constinArgument0,
                                                                                                       class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                       const class GGS_analysisContext constinArgument2,
                                                                                                       class GGS_unifiedTypeMap & ioArgument3,
                                                                                                       const class GGS_bool constinArgument4,
                                                                                                       const class GGS_terminalMap constinArgument5,
                                                                                                       const class GGS_string constinArgument6,
                                                                                                       const class GGS_nonterminalMap constinArgument7,
                                                                                                       const class GGS_string constinArgument8,
                                                                                                       const class GGS_syntaxInstructionList constinArgument9,
                                                                                                       const class GGS_location constinArgument10,
                                                                                                       const class GGS_stringset constinArgument11,
                                                                                                       class GGS_localVarManager & ioArgument12,
                                                                                                       class GGS_uint & ioArgument13,
                                                                                                       class GGS_semanticInstructionListForGeneration & outArgument14,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel?&???&???????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                                              class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                              const class GGS_formalParameterListAST constinArgument2,
                                                                                                              const class GGS_syntaxInstructionList constinArgument3,
                                                                                                              const class GGS_analysisContext constinArgument4,
                                                                                                              class GGS_unifiedTypeMap & ioArgument5,
                                                                                                              const class GGS_terminalMap constinArgument6,
                                                                                                              const class GGS_bool constinArgument7,
                                                                                                              const class GGS_string constinArgument8,
                                                                                                              const class GGS_nonterminalMap constinArgument9,
                                                                                                              const class GGS_string constinArgument10,
                                                                                                              const class GGS_location constinArgument11,
                                                                                                              const class GGS_stringset constinArgument12,
                                                                                                              class GGS_uint & ioArgument13,
                                                                                                              class GGS_formalParameterListForGeneration & outArgument14,
                                                                                                              class GGS_formalParameterSignature & outArgument15,
                                                                                                              class GGS_semanticInstructionListForGeneration & outArgument16,
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

GGS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (class Compiler * inCompiler,
                                                                                          const class GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                          const class GGS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                          const class GGS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                          const class GGS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                          const class GGS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                          const class GGS_string & in_GRAMMAR_5F_NAME,
                                                                                          const class GGS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const class GGS_string & constinArgument0,
                                                                                          const class GGS_semanticInstructionListForGeneration & constinArgument1,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const class GGS_wrapperFileMap constinArgument0,
                                                                     const class GGS_wrapperDirectoryMap constinArgument1,
                                                                     class GGS_stringlist & ioArgument2,
                                                                     class GGS_stringlist & ioArgument3,
                                                                     class GGS_stringlist & ioArgument4,
                                                                     class GGS_stringlist & ioArgument5,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const class GGS_string constinArgument0,
                                                              const class GGS_string constinArgument1,
                                                              const class GGS_uint constinArgument2,
                                                              const class GGS_wrapperFileMap constinArgument3,
                                                              const class GGS_wrapperDirectoryMap constinArgument4,
                                                              class GGS_string & ioArgument5,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

