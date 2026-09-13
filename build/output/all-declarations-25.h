#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'setterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_setterNameForUsefulEntitiesGraph (const class GGS_string & constinArgument0,
                                                             const class GGS_lstring & constinArgument1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (const class GGS_lstring constinArgument0,
                                                                     class GGS_usefulEntitiesGraph & ioArgument1,
                                                                     const class GGS_analysisContext constinArgument2,
                                                                     class GGS_unifiedTypeMap & ioArgument3,
                                                                     const class GGS_formalParameterListAST constinArgument4,
                                                                     const class GGS_semanticInstructionListAST constinArgument5,
                                                                     const class GGS_location constinArgument6,
                                                                     class GGS_semanticInstructionListForGeneration & outArgument7,
                                                                     class GGS_formalParameterListForGeneration & outArgument8,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'initializerNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_initializerNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                                  const class GGS_string & constinArgument1,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (const class GGS_lstring constinArgument0,
                                                                         class GGS_usefulEntitiesGraph & ioArgument1,
                                                                         const class GGS_analysisContext constinArgument2,
                                                                         class GGS_unifiedTypeMap & ioArgument3,
                                                                         const class GGS_formalInputParameterListAST constinArgument4,
                                                                         const class GGS_semanticInstructionListAST constinArgument5,
                                                                         const class GGS_location constinArgument6,
                                                                         class GGS_semanticInstructionListForGeneration & outArgument7,
                                                                         class GGS_formalInputParameterListForGeneration & outArgument8,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInitializer??&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInitializer_3F__3F__26__3F__3F__21_ (const class GGS_unifiedTypeMapEntry constinArgument0,
                                                          const class GGS_string constinArgument1,
                                                          class GGS_stringset & ioArgument2,
                                                          const class GGS_formalInputParameterListForGeneration constinArgument3,
                                                          const class GGS_semanticInstructionListForGeneration constinArgument4,
                                                          class GGS_string & outArgument5,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'methodNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_methodNameForUsefulEntitiesGraph (const class GGS_string & constinArgument0,
                                                             const class GGS_lstring & constinArgument1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleEquatableComparableExtension&?&?acceptEquatable?acceptComparable'
//
//--------------------------------------------------------------------------------------------------

void routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (class GGS_equatableExtensionMap & ioArgument0,
                                                                                                    const class GGS_lstring constinArgument1,
                                                                                                    class GGS_typeFeatures & ioArgument2,
                                                                                                    const class GGS_bool constinArgument3,
                                                                                                    const class GGS_bool constinArgument4,
                                                                                                    class Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'equatableNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_equatableNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
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
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

class GGS_predefinedTypes function_buildPredefinedTypes (const class GGS_unifiedTypeMap & constinArgument0,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'optionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_optionNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26__26_ (class GGS_semanticDeclarationListAST & ioArgument0,
                                                class GGS_lstringlist & ioArgument1,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildGalgasSemanticContext???galgas4!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildGalgasSemanticContext_3F__3F__3F_galgas_34__21__21__21_ (const class GGS_galgasDeclarationAST constinArgument0,
                                                                           const class GGS_location constinArgument1,
                                                                           const class GGS_bool constinArgument2,
                                                                           class GGS_semanticContext & outArgument3,
                                                                           class GGS_unifiedTypeMap & outArgument4,
                                                                           class GGS_semanticDeclarationListAST & outArgument5,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSemanticDeclarationsGalgas3???&swift&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSemanticDeclarationsGalgas_33__3F__3F__3F__26_swift_26__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                                      const class GGS_string constinArgument1,
                                                                                      const class GGS_semanticDeclarationListForGeneration constinArgument2,
                                                                                      class GGS_stringlist & ioArgument3,
                                                                                      class GGS_stringlist & ioArgument4,
                                                                                      class GGS_stringlist & ioArgument5,
                                                                                      class GGS_stringset & ioArgument6,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool function_generateFewHeaderFiles (class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitClassGraph ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputGrammarSwiftDescriptionFile ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ;

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ;

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFilesWithFewHeaders???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                                   const class GGS_string constinArgument1,
                                                                                   const class GGS_semanticDeclarationListForGeneration constinArgument2,
                                                                                   class GGS_stringlist & ioArgument3,
                                                                                   class GGS_stringset & ioArgument4,
                                                                                   class GGS_stringlist & ioArgument5,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                 const class GGS_string constinArgument1,
                                                                 const class GGS_semanticDeclarationListForGeneration constinArgument2,
                                                                 class GGS_stringlist & ioArgument3,
                                                                 class GGS_stringset & ioArgument4,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyHeaders??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyHeaders_3F__3F__26__26_ (const class GGS_string constinArgument0,
                                                  const class GGS_semanticDeclarationListForGeneration constinArgument1,
                                                  class GGS_stringset & ioArgument2,
                                                  class GGS_stringlist & ioArgument3,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                  const class GGS_string constinArgument1,
                                                                  const class GGS_semanticDeclarationListForGeneration constinArgument2,
                                                                  class GGS_stringlist & ioArgument3,
                                                                  class GGS_stringset & ioArgument4,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateOneBigHeader??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateOneBigHeader_3F__3F__26__26_ (const class GGS_string constinArgument0,
                                                   const class GGS_semanticDeclarationListForGeneration constinArgument1,
                                                   class GGS_stringset & ioArgument2,
                                                   class GGS_stringlist & ioArgument3,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildHeader???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildHeader_3F__3F__3F__26__26_ (const class GGS_headerCompositionMap constinArgument0,
                                              const class GGS_string constinArgument1,
                                              const class GGS_string constinArgument2,
                                              class GGS_headerRepartitionMap & ioArgument3,
                                              class GGS_string & ioArgument4,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'definitionGroupAmount'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint function_definitionGroupAmount (class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities_3F__3F__3F_ (const class GGS_usefulEntitiesGraph constinArgument0,
                                              const class GGS_lstringlist constinArgument1,
                                              const class GGS_string constinArgument2,
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
//Function 'functionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_functionNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'afterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_afterNameForUsefulEntitiesGraph (const class GGS_location & constinArgument0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'beforeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_beforeNameForUsefulEntitiesGraph (const class GGS_location & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'rootRuleNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_rootRuleNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
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
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const class GGS_galgasGUIComponentListAST constinArgument0,
                                                                  const class GGS_semanticContext constinArgument1,
                                                                  class GGS_optionComponentMapForGeneration & outArgument2,
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
//Routine 'performGalgas3ProjectGlobalCheckings&?'
//
//--------------------------------------------------------------------------------------------------

void routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (class GGS_unifiedTypeMap & ioArgument0,
                                                              const class GGS_semanticDeclarationListAST constinArgument1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'projectGeneration??absoluteBuildDir?buildDirName??????????'
//
//--------------------------------------------------------------------------------------------------

void routine_projectGeneration_3F__3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                                                                const class GGS_string constinArgument1,
                                                                                                                const class GGS_string constinArgument2,
                                                                                                                const class GGS_optionComponentMapForGeneration constinArgument3,
                                                                                                                const class GGS_stringlist constinArgument4,
                                                                                                                const class GGS_semanticDeclarationListForGeneration constinArgument5,
                                                                                                                const class GGS_programRuleList constinArgument6,
                                                                                                                const class GGS_galgas_33_ProjectComponentAST constinArgument7,
                                                                                                                const class GGS_string constinArgument8,
                                                                                                                const class GGS_string constinArgument9,
                                                                                                                const class GGS_stringlist constinArgument10,
                                                                                                                const class GGS_stringlist constinArgument11,
                                                                                                                const class GGS_stringlist constinArgument12,
                                                                                                                class Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3???&swift'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__3F__26_swift (const class GGS_optionComponentMapForGeneration constinArgument0,
                                                                      const class GGS_string constinArgument1,
                                                                      const class GGS_bool constinArgument2,
                                                                      class GGS_stringlist & ioArgument3,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

