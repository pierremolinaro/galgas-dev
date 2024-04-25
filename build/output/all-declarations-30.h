#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-29.h"

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
//Routine 'compileBeforeClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (class GALGAS_lstringlist & ioArgument0,
                                                                    class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                    const class GALGAS_analysisContext constinArgument2,
                                                                    class GALGAS_unifiedTypeMap & ioArgument3,
                                                                    const class GALGAS_prologueEpilogueList constinArgument4,
                                                                    class GALGAS_programListForGeneration & ioArgument5,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (class GALGAS_lstringlist & ioArgument0,
                                                                    class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                    const class GALGAS_analysisContext constinArgument2,
                                                                    class GALGAS_unifiedTypeMap & ioArgument3,
                                                                    const class GALGAS_programRuleList constinArgument4,
                                                                    class GALGAS_programListForGeneration & ioArgument5,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

