#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature (const class GALGAS_semanticContext constinArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_formalParameterListAST constinArgument2,
                                                class GALGAS_localVarManager & ioArgument3,
                                                class GALGAS_formalParameterListForGeneration & outArgument4,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures (const class GALGAS_formalParameterListForGeneration constinArgument0,
                                    const class GALGAS_location constinArgument1,
                                    const class GALGAS_formalParameterSignature constinArgument2,
                                    const class GALGAS_location constinArgument3,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'generateFewHeaderFiles'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool function_generateFewHeaderFiles (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_32_Arguments (class GALGAS_constructorMap & ioArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                const class GALGAS_string constinArgument5,
                                                const class GALGAS_string constinArgument6,
                                                const class GALGAS_string constinArgument7,
                                                const class GALGAS_bool constinArgument8,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith3Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_33_Arguments (class GALGAS_constructorMap & ioArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                const class GALGAS_string constinArgument5,
                                                const class GALGAS_string constinArgument6,
                                                const class GALGAS_string constinArgument7,
                                                const class GALGAS_string constinArgument8,
                                                const class GALGAS_string constinArgument9,
                                                const class GALGAS_bool constinArgument10,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument (class GALGAS_getterMap & ioArgument0,
                                               class GALGAS_unifiedTypeMap & ioArgument1,
                                               const class GALGAS_string constinArgument2,
                                               const class GALGAS_string constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               const class GALGAS_string constinArgument5,
                                               const class GALGAS_bool constinArgument6,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
                                                    class GALGAS_unifiedTypeMap & ioArgument1,
                                                    const class GALGAS_string constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_string constinArgument4,
                                                    const class GALGAS_string constinArgument5,
                                                    const class GALGAS_string constinArgument6,
                                                    const class GALGAS_string constinArgument7,
                                                    const class GALGAS_bool constinArgument8,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith3Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments (class GALGAS_getterMap & ioArgument0,
                                                    class GALGAS_unifiedTypeMap & ioArgument1,
                                                    const class GALGAS_string constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_string constinArgument4,
                                                    const class GALGAS_string constinArgument5,
                                                    const class GALGAS_string constinArgument6,
                                                    const class GALGAS_string constinArgument7,
                                                    const class GALGAS_string constinArgument8,
                                                    const class GALGAS_string constinArgument9,
                                                    const class GALGAS_bool constinArgument10,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument (class GALGAS_setterMap & ioArgument0,
                                             class GALGAS_unifiedTypeMap & ioArgument1,
                                             const class GALGAS_string constinArgument2,
                                             const class GALGAS_string constinArgument3,
                                             const class GALGAS_string constinArgument4,
                                             const class GALGAS_bool constinArgument5,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments (class GALGAS_setterMap & ioArgument0,
                                                       class GALGAS_unifiedTypeMap & ioArgument1,
                                                       const class GALGAS_string constinArgument2,
                                                       const class GALGAS_string constinArgument3,
                                                       const class GALGAS_string constinArgument4,
                                                       const class GALGAS_string constinArgument5,
                                                       const class GALGAS_string constinArgument6,
                                                       const class GALGAS_bool constinArgument7,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments (class GALGAS_setterMap & ioArgument0,
                                                  class GALGAS_unifiedTypeMap & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS_string constinArgument3,
                                                  const class GALGAS_string constinArgument4,
                                                  const class GALGAS_string constinArgument5,
                                                  const class GALGAS_string constinArgument6,
                                                  const class GALGAS_bool constinArgument7,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument (class GALGAS_setterMap & ioArgument0,
                                           const class GALGAS_string constinArgument1,
                                           const class GALGAS_bool constinArgument2,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument (class GALGAS_instanceMethodMap & ioArgument0,
                                                 const class GALGAS_string constinArgument1,
                                                 const class GALGAS_bool constinArgument2,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument (class GALGAS_instanceMethodMap & ioArgument0,
                                                   class GALGAS_unifiedTypeMap & ioArgument1,
                                                   const class GALGAS_string constinArgument2,
                                                   const class GALGAS_string constinArgument3,
                                                   const class GALGAS_string constinArgument4,
                                                   const class GALGAS_bool constinArgument5,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument (class GALGAS_classMethodMap & ioArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                const class GALGAS_bool constinArgument5,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments (class GALGAS_classMethodMap & ioArgument0,
                                                     class GALGAS_unifiedTypeMap & ioArgument1,
                                                     const class GALGAS_string constinArgument2,
                                                     const class GALGAS_string constinArgument3,
                                                     const class GALGAS_string constinArgument4,
                                                     const class GALGAS_string constinArgument5,
                                                     const class GALGAS_string constinArgument6,
                                                     const class GALGAS_string constinArgument7,
                                                     const class GALGAS_string constinArgument8,
                                                     const class GALGAS_bool constinArgument9,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument (class GALGAS_classMethodMap & ioArgument0,
                                                      class GALGAS_unifiedTypeMap & ioArgument1,
                                                      const class GALGAS_string constinArgument2,
                                                      const class GALGAS_string constinArgument3,
                                                      const class GALGAS_bool constinArgument4,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseOptionalMethodWithArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseOptionalMethodWithArgument (class GALGAS_optionalMethodMap & ioArgument0,
                                                  class GALGAS_unifiedTypeMap & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS_string constinArgument3,
                                                  const class GALGAS_string constinArgument4,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'syntaxDirectedTranslationResultVarName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_syntaxDirectedTranslationResultVarName (class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_recursivelyEnumerateDirectories (const class GALGAS_string constinArgument0,
                                              const class GALGAS_string constinArgument1,
                                              const class GALGAS_wrapperExtensionMap constinArgument2,
                                              const class GALGAS_wrapperExtensionMap constinArgument3,
                                              class GALGAS_wrapperFileMap & outArgument4,
                                              class GALGAS_wrapperDirectoryMap & outArgument5,
                                              class GALGAS_uint & ioArgument6,
                                              class GALGAS_uint & ioArgument7,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateInstructionList (class GALGAS_stringset & ioArgument0,
                                      const class GALGAS_semanticInstructionListForGeneration constinArgument1,
                                      class GALGAS_uint & ioArgument2,
                                      class GALGAS_stringset & ioArgument3,
                                      const class GALGAS_bool constinArgument4,
                                      class GALGAS_string & ioArgument5,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList (const class GALGAS_lstring constinArgument0,
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
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch (const class GALGAS_lstring constinArgument0,
                                                          class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                          const class GALGAS_analysisContext constinArgument2,
                                                          class GALGAS_unifiedTypeMap & ioArgument3,
                                                          const class GALGAS_localConstantList constinArgument4,
                                                          const class GALGAS_localInitializedVariableList constinArgument5,
                                                          const class GALGAS_localInitializedVariableList constinArgument6,
                                                          const class GALGAS_semanticInstructionListAST constinArgument7,
                                                          class GALGAS_localVarManager & ioArgument8,
                                                          class GALGAS_semanticInstructionListForGeneration & outArgument9,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeRoutineArguments (const class GALGAS_lstring constinArgument0,
                                      class GALGAS_usefulEntitiesGraph & ioArgument1,
                                      const class GALGAS_analysisContext constinArgument2,
                                      class GALGAS_unifiedTypeMap & ioArgument3,
                                      const class GALGAS_lstring constinArgument4,
                                      const class GALGAS_string constinArgument5,
                                      const class GALGAS_formalParameterSignature constinArgument6,
                                      const class GALGAS_actualParameterListAST constinArgument7,
                                      class GALGAS_localVarManager & ioArgument8,
                                      class GALGAS_semanticInstructionListForGeneration & ioArgument9,
                                      class GALGAS_actualParameterListForGeneration & outArgument10,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean (const class GALGAS_analysisContext constinArgument0,
                                       const class GALGAS_location constinArgument1,
                                       const class GALGAS_semanticExpressionForGeneration constinArgument2,
                                       class GALGAS_semanticExpressionForGeneration & outArgument3,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'procedureNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_procedureNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'filewrapperNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_filewrapperNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'filewrapperTemplateNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                             const class GALGAS_lstring & constinArgument1,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'syntaxNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_syntaxNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent (const class GALGAS_lstring constinArgument0,
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
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

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
//Routine 'emitClassGraphFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitClassGraphFile (const class GALGAS_string constinArgument0,
                                 const class GALGAS_unifiedTypeMap constinArgument1,
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
                                           const class GALGAS_string constinArgument9,
                                           class GALGAS_string & outArgument10,
                                           class GALGAS_string & outArgument11,
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

