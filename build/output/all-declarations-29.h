#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-28.h"

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

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'groupSyntaxComponentsGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33_ (const class GALGAS_galgas_33_SyntaxComponentListAST constinArgument0,
                                              const class GALGAS_syntaxExtensions constinArgument1,
                                              class GALGAS_semanticDeclarationListAST & ioArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'transformLabelMap'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const class GALGAS_nonTerminalLabelListAST & constinArgument0,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'grammarRulesInTexDocumentTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_grammarRulesInTexDocumentTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'grammarRulesInTexDocumentTemplate document'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_DOCUMENT_5F_NAME,
                                                                              const class GALGAS_string & in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'programFileGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_programFileGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'programFileGenerationTemplate programFileImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (class C_Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                           const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                           const class GALGAS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                           const class GALGAS_programRuleList & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                           const class GALGAS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileBeforeClauseGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33_ (class GALGAS_lstringlist & ioArgument0,
                                            class GALGAS_usefulEntitiesGraph & ioArgument1,
                                            const class GALGAS_analysisContext constinArgument2,
                                            const class GALGAS_prologueEpilogueList constinArgument3,
                                            class GALGAS_programListForGeneration & ioArgument4,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33_ (class GALGAS_lstringlist & ioArgument0,
                                            class GALGAS_usefulEntitiesGraph & ioArgument1,
                                            const class GALGAS_analysisContext constinArgument2,
                                            const class GALGAS_programRuleList constinArgument3,
                                            class GALGAS_programListForGeneration & ioArgument4,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileAfterClauseGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileAfterClauseGalgas_33_ (class GALGAS_lstringlist & ioArgument0,
                                           class GALGAS_usefulEntitiesGraph & ioArgument1,
                                           const class GALGAS_analysisContext constinArgument2,
                                           const class GALGAS_prologueEpilogueList constinArgument3,
                                           class GALGAS_programListForGeneration & ioArgument4,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramComponentGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileProgramComponentGalgas_33_ (class GALGAS_lstringlist & ioArgument0,
                                                class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                const class GALGAS_prologueEpilogueList constinArgument2,
                                                const class GALGAS_programRuleList constinArgument3,
                                                const class GALGAS_prologueEpilogueList constinArgument4,
                                                const class GALGAS_semanticContext constinArgument5,
                                                const class GALGAS_string constinArgument6,
                                                class GALGAS_programComponentForGeneration & outArgument7,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkGMP'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkGMP (class C_Compiler * inCompiler
                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayUnicodeLexicalTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayUnicodeLexicalTestFunctions (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'parseAndAnalyzeProject'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_parseAndAnalyzeProject (const class GALGAS_lstring constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileProject'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileProject (const class GALGAS_lstring constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_galgas_33_ProjectComponentAST constinArgument2,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

