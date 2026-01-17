#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-30.h"

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

GGS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (class Compiler * inCompiler,
                                                                                        const class GGS_string & in_COMPONENT_5F_NAME,
                                                                                        const class GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                        const class GGS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                        const class GGS_programRuleList & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                        const class GGS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileBeforeClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (class GGS_lstringlist & ioArgument0,
                                                                    class GGS_usefulEntitiesGraph & ioArgument1,
                                                                    const class GGS_analysisContext constinArgument2,
                                                                    class GGS_unifiedTypeMap & ioArgument3,
                                                                    const class GGS_prologueEpilogueList constinArgument4,
                                                                    class GGS_programListForGeneration & ioArgument5,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (class GGS_lstringlist & ioArgument0,
                                                                    class GGS_usefulEntitiesGraph & ioArgument1,
                                                                    const class GGS_analysisContext constinArgument2,
                                                                    class GGS_unifiedTypeMap & ioArgument3,
                                                                    const class GGS_programRuleList constinArgument4,
                                                                    class GGS_programListForGeneration & ioArgument5,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAfterClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (class GGS_lstringlist & ioArgument0,
                                                                   class GGS_usefulEntitiesGraph & ioArgument1,
                                                                   const class GGS_analysisContext constinArgument2,
                                                                   class GGS_unifiedTypeMap & ioArgument3,
                                                                   const class GGS_prologueEpilogueList constinArgument4,
                                                                   class GGS_programListForGeneration & ioArgument5,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramComponentGalgas3&&????&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramComponentGalgas_33__26__26__3F__3F__3F__3F__26__3F__21_ (class GGS_lstringlist & ioArgument0,
                                                                                    class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                    const class GGS_prologueEpilogueList constinArgument2,
                                                                                    const class GGS_programRuleList constinArgument3,
                                                                                    const class GGS_prologueEpilogueList constinArgument4,
                                                                                    const class GGS_semanticContext constinArgument5,
                                                                                    class GGS_unifiedTypeMap & ioArgument6,
                                                                                    const class GGS_string constinArgument7,
                                                                                    class GGS_programComponentForGeneration & outArgument8,
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
//Routine 'parseAndAnalyzeProject??galgas4?'
//
//--------------------------------------------------------------------------------------------------

void routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (const class GGS_lstring constinArgument0,
                                                           const class GGS_bool constinArgument1,
                                                           const class GGS_string constinArgument2,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProject???galgas4?'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProject_3F__3F__3F_galgas_34__3F_ (const class GGS_lstring constinArgument0,
                                                       const class GGS_string constinArgument1,
                                                       const class GGS_bool constinArgument2,
                                                       const class GGS_galgas_33_ProjectComponentAST constinArgument3,
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
extern const cDirectoryWrapper gWrapperDirectory_8_typeDumpGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeDumpGenerationTemplate typeDump'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeDumpGenerationTemplate_typeDump (class Compiler * inCompiler,
                                                                    const class GGS_string & in_PROJECT_5F_NAME,
                                                                    const class GGS_unifiedTypeMap & in_UNIFIED_5F_TYPE_5F_MAP,
                                                                    const class GGS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                    const class GGS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_linkForType (const class GGS_string & constinArgument0,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileSemanticDeclarationsGalgas&&?galgas4???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileSemanticDeclarationsGalgas_26__26__3F_galgas_34__3F__3F__3F__21__21__21_ (class GGS_lstringlist & ioArgument0,
                                                                                              class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                              const class GGS_bool constinArgument2,
                                                                                              const class GGS_string constinArgument3,
                                                                                              const class GGS_location constinArgument4,
                                                                                              const class GGS_galgasDeclarationAST constinArgument5,
                                                                                              class GGS_semanticContext & outArgument6,
                                                                                              class GGS_unifiedTypeMap & outArgument7,
                                                                                              class GGS_semanticDeclarationListForGeneration & outArgument8,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'performGalgas3ProjectGlobalCheckings&?'
//
//--------------------------------------------------------------------------------------------------

void routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (class GGS_unifiedTypeMap & ioArgument0,
                                                              const class GGS_semanticDeclarationListAST constinArgument1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'projectGeneration??absoluteBuildDir?buildDirName????????????'
//
//--------------------------------------------------------------------------------------------------

void routine_projectGeneration_3F__3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                                                                        const class GGS_string constinArgument1,
                                                                                                                        const class GGS_string constinArgument2,
                                                                                                                        const class GGS_optionComponentMapForGeneration constinArgument3,
                                                                                                                        const class GGS_stringlist constinArgument4,
                                                                                                                        const class GGS_semanticDeclarationListForGeneration constinArgument5,
                                                                                                                        const class GGS_programRuleList constinArgument6,
                                                                                                                        const class GGS_galgas_33_ProjectComponentAST constinArgument7,
                                                                                                                        const class GGS_string constinArgument8,
                                                                                                                        const class GGS_stringset constinArgument9,
                                                                                                                        const class GGS_stringlist constinArgument10,
                                                                                                                        const class GGS_stringlist constinArgument11,
                                                                                                                        const class GGS_stringlist constinArgument12,
                                                                                                                        const class GGS_stringlist constinArgument13,
                                                                                                                        const class GGS_stringlist constinArgument14,
                                                                                                                        class Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

