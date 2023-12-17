#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOptionalMethodCall'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOptionalMethodCall (const class GALGAS_lstring constinArgument0,
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
//Routine 'transformInstructionList'
//
//--------------------------------------------------------------------------------------------------

void routine_transformInstructionList (const class GALGAS_syntaxInstructionList constinArgument0,
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
//Routine 'groupSyntaxComponentsGalgas3'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33_ (const class GALGAS_galgas_33_SyntaxComponentListAST constinArgument0,
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

GALGAS_string filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (class Compiler * inCompiler,
                                                                              const class GALGAS_string & in_DOCUMENT_5F_NAME,
                                                                              const class GALGAS_string & in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'programFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_programFileGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'programFileGenerationTemplate programFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (class Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                           const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                           const class GALGAS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                           const class GALGAS_programRuleList & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                           const class GALGAS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileBeforeClauseGalgas3'
//
//--------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33_ (class GALGAS_lstringlist & ioArgument0,
                                            class GALGAS_usefulEntitiesGraph & ioArgument1,
                                            const class GALGAS_analysisContext constinArgument2,
                                            class GALGAS_unifiedTypeMap & ioArgument3,
                                            const class GALGAS_prologueEpilogueList constinArgument4,
                                            class GALGAS_programListForGeneration & ioArgument5,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33_ (class GALGAS_lstringlist & ioArgument0,
                                            class GALGAS_usefulEntitiesGraph & ioArgument1,
                                            const class GALGAS_analysisContext constinArgument2,
                                            class GALGAS_unifiedTypeMap & ioArgument3,
                                            const class GALGAS_programRuleList constinArgument4,
                                            class GALGAS_programListForGeneration & ioArgument5,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAfterClauseGalgas3'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAfterClauseGalgas_33_ (class GALGAS_lstringlist & ioArgument0,
                                           class GALGAS_usefulEntitiesGraph & ioArgument1,
                                           const class GALGAS_analysisContext constinArgument2,
                                           class GALGAS_unifiedTypeMap & ioArgument3,
                                           const class GALGAS_prologueEpilogueList constinArgument4,
                                           class GALGAS_programListForGeneration & ioArgument5,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramComponentGalgas3'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramComponentGalgas_33_ (class GALGAS_lstringlist & ioArgument0,
                                                class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                const class GALGAS_prologueEpilogueList constinArgument2,
                                                const class GALGAS_programRuleList constinArgument3,
                                                const class GALGAS_prologueEpilogueList constinArgument4,
                                                const class GALGAS_semanticContext constinArgument5,
                                                class GALGAS_unifiedTypeMap & ioArgument6,
                                                const class GALGAS_string constinArgument7,
                                                class GALGAS_programComponentForGeneration & outArgument8,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkBigInteger'
//
//--------------------------------------------------------------------------------------------------

void routine_checkBigInteger (class Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'displayUnicodeLexicalTestFunctions'
//
//--------------------------------------------------------------------------------------------------

void routine_displayUnicodeLexicalTestFunctions (class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'parseAndAnalyzeProject'
//
//--------------------------------------------------------------------------------------------------

void routine_parseAndAnalyzeProject (const class GALGAS_lstring constinArgument0,
                                     const class GALGAS_bool constinArgument1,
                                     const class GALGAS_string constinArgument2,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProject'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProject (const class GALGAS_lstring constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_bool constinArgument2,
                             const class GALGAS_galgas_33_ProjectComponentAST constinArgument3,
                             class Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_6_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_7_typeDumpGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeDumpGenerationTemplate typeDump'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_typeDump (class Compiler * inCompiler,
                                                                       const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const class GALGAS_unifiedTypeMap & in_UNIFIED_5F_TYPE_5F_MAP,
                                                                       const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_linkForType (const class GALGAS_string & constinArgument0,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileSemanticDeclarationsGalgas'
//
//--------------------------------------------------------------------------------------------------

void routine_compileSemanticDeclarationsGalgas (class GALGAS_lstringlist & ioArgument0,
                                                class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                const class GALGAS_bool constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_location constinArgument4,
                                                const class GALGAS_semanticDeclarationListAST constinArgument5,
                                                class GALGAS_semanticContext & outArgument6,
                                                class GALGAS_unifiedTypeMap & outArgument7,
                                                class GALGAS_semanticDeclarationListForGeneration & outArgument8,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'performGalgas3ProjectGlobalCheckings'
//
//--------------------------------------------------------------------------------------------------

void routine_performGalgas_33_ProjectGlobalCheckings (class GALGAS_unifiedTypeMap & ioArgument0,
                                                      const class GALGAS_semanticDeclarationListAST constinArgument1,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'projectGeneration'
//
//--------------------------------------------------------------------------------------------------

void routine_projectGeneration (const class GALGAS_unifiedTypeMap constinArgument0,
                                const class GALGAS_string constinArgument1,
                                const class GALGAS_string constinArgument2,
                                const class GALGAS_optionComponentMapForGeneration constinArgument3,
                                const class GALGAS_stringlist constinArgument4,
                                const class GALGAS_semanticDeclarationListForGeneration constinArgument5,
                                const class GALGAS_programRuleList constinArgument6,
                                const class GALGAS_galgas_33_ProjectComponentAST constinArgument7,
                                const class GALGAS_string constinArgument8,
                                const class GALGAS_stringset constinArgument9,
                                const class GALGAS_stringlist constinArgument10,
                                const class GALGAS_stringlist constinArgument11,
                                const class GALGAS_stringlist constinArgument12,
                                const class GALGAS_stringlist constinArgument13,
                                const class GALGAS_stringlist constinArgument14,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSemanticDeclarationsGalgas3'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSemanticDeclarationsGalgas_33_ (const class GALGAS_unifiedTypeMap constinArgument0,
                                                     const class GALGAS_string constinArgument1,
                                                     const class GALGAS_semanticDeclarationListForGeneration constinArgument2,
                                                     class GALGAS_stringlist & ioArgument3,
                                                     class GALGAS_stringlist & ioArgument4,
                                                     class GALGAS_stringlist & ioArgument5,
                                                     class GALGAS_stringset & ioArgument6,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'updateGalgasTargets'
//
//--------------------------------------------------------------------------------------------------

void routine_updateGalgasTargets (const class GALGAS_string constinArgument0,
                                  const class GALGAS_string constinArgument1,
                                  const class GALGAS_string constinArgument2,
                                  const class GALGAS_string constinArgument3,
                                  const class GALGAS_location constinArgument4,
                                  const class GALGAS_string constinArgument5,
                                  const class GALGAS_projectQualifiedFeatureMap constinArgument6,
                                  const class GALGAS_lstringlist constinArgument7,
                                  const class GALGAS_bool constinArgument8,
                                  const class GALGAS_stringlist constinArgument9,
                                  const class GALGAS_stringlist constinArgument10,
                                  const class GALGAS_stringlist constinArgument11,
                                  const class GALGAS_stringlist constinArgument12,
                                  const class GALGAS_stringlist constinArgument13,
                                  const class GALGAS_stringset constinArgument14,
                                  const class GALGAS_stringset constinArgument15,
                                  class GALGAS_stringset & ioArgument16,
                                  const class GALGAS_stringlist constinArgument17,
                                  const class GALGAS_stringlist constinArgument18,
                                  const class GALGAS_stringlist constinArgument19,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

