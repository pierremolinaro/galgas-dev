#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertDeclaredLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalVariable (class GGS_localVarManager & ioObject,
                                                  const class GGS_lstring constin_inVarName,
                                                  const class GGS_unifiedTypeMapEntry constin_inType,
                                                  const class GGS_string constin_inCppName,
                                                  const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'println?'
//
//--------------------------------------------------------------------------------------------------

void routine_println_3F_ (const class GGS_string constinArgument0,
                          class Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'print?'
//
//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const class GGS_string constinArgument0,
                        class Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxDirectedTranslationResultVarName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_syntaxDirectedTranslationResultVarName (class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

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
//Function 'procedureNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_procedureNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
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
//Routine 'checkAssignmentTypes???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes_3F__3F__3F_ (const class GGS_unifiedTypeMapEntry constinArgument0,
                                               const class GGS_unifiedTypeMapEntry constinArgument1,
                                               const class GGS_location constinArgument2,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'buildLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTypeMap function_buildLexicalTypeMap (class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap??&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap_3F__3F__26_ (const class GGS_lexicalTypeMap constinArgument0,
                                                   const class GGS_lexicalAttributeListAST constinArgument1,
                                                   class GGS_lexicalAttributeMap & ioArgument2,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'lexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates headerZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (class Compiler * inCompiler,
                                                                          const class GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                          const class GGS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                          const class GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                          const class GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                          const class GGS_indexingListAST & in_INDEXING_5F_LIST
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates implementationZone2Galgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (class Compiler * inCompiler,
                                                                                            const class GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                            const class GGS_bool & in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE,
                                                                                            const class GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                            const class GGS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                            const class GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                            const class GGS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                            const class GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                            const class GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                            const class GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                            const class GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                            const class GGS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                            const class GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                            const class GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates swiftUIImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_swiftUIImplementationZone_32_ (class Compiler * inCompiler,
                                                                                         const class GGS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                         const class GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                         const class GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                         const class GGS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                         const class GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                         const class GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                         const class GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                         const class GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                         const class GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                         const class GGS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                         const class GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                         const class GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_lexiqueNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap_21_ (class GGS_lexicalFunctionMap & outArgument0,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap_21_ (class GGS_lexicalRoutineMap & outArgument0,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (class GGS_stringset & outArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'targetGalgas3GenerationFileWrapper'
//
//--------------------------------------------------------------------------------------------------

extern const char * gWrapperFileContent_0_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper ;

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cRegularFileWrapper gWrapperFile_0_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_1_targetGalgas_33_GenerationFileWrapper ;

//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_1_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_8_targetGalgas_33_GenerationFileWrapper ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (class Compiler * inCompiler,
                                                                                      const class GGS_string & in_PROJECT_5F_NAME
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (class Compiler * inCompiler,
                                                                                      const class GGS_string & in_PROJECT_5F_NAME,
                                                                                      const class GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (class Compiler * inCompiler,
                                                                                    const class GGS_string & in_PROJECT_5F_NAME
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (class Compiler * inCompiler,
                                                                                    const class GGS_string & in_PROJECT_5F_NAME,
                                                                                    const class GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper install_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (class Compiler * inCompiler,
                                                                                                                   const class GGS_string & in_PROJECT_5F_NAME
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (class Compiler * inCompiler,
                                                                                                                   const class GGS_string & in_PROJECT_5F_NAME,
                                                                                                                   const class GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (class Compiler * inCompiler,
                                                                                                                   const class GGS_string & in_PROJECT_5F_NAME
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (class Compiler * inCompiler,
                                                                                                                   const class GGS_string & in_PROJECT_5F_NAME,
                                                                                                                   const class GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (class Compiler * inCompiler,
                                                                                                        const class GGS_string & in_PROJECT_5F_NAME
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (class Compiler * inCompiler,
                                                                                                        const class GGS_string & in_PROJECT_5F_NAME,
                                                                                                        const class GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (class Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_arm_36__34__5F_linux_5F_on_5F_mac (class Compiler * inCompiler,
                                                                                                                 const class GGS_string & in_PROJECT_5F_NAME
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_arm_36__34__5F_linux_5F_on_5F_mac (class Compiler * inCompiler,
                                                                                                                 const class GGS_string & in_PROJECT_5F_NAME,
                                                                                                                 const class GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_arm_36__34__5F_linux_5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_arm_36__34__5F_linux_5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_arm_36__34__5F_linux_5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_arm_36__34__5F_linux_5F_on_5F_mac (class Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper codeblocks_project'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (class Compiler * inCompiler,
                                                                                            const class GGS_string & in_PROJECT_5F_NAME,
                                                                                            const class GGS_stringlist & in_TOOL_5F_CPP_5F_FILE_5F_LIST,
                                                                                            const class GGS_string & in_LIBPM_5F_PATH,
                                                                                            const class GGS_stringlist & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST,
                                                                                            const class GGS_string & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY,
                                                                                            const class GGS_bool & in_GENERATE_5F_FOR_5F_WINDOWS,
                                                                                            const class GGS_string & in_PLATFORM,
                                                                                            const class GGS_bool & in_VERBOSE_5F_OPTION,
                                                                                            const class GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (class Compiler * inCompiler,
                                                                                                const class GGS_string & in_PROJECT_5F_NAME,
                                                                                                const class GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                                                const class GGS_string & in_VERSION_5F_STRING,
                                                                                                const class GGS_stringset & in_HANDLED_5F_EXTENSION_5F_SET,
                                                                                                const class GGS_string & in_MACOSX_5F_DEPLOYMENT_5F_TARGET,
                                                                                                const class GGS_string & in_DOCUMENT_5F_CLASS
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_build_xcode'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist_strings'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (class Compiler * inCompiler,
                                                                                                           const class GGS_string & in_PROJECT_5F_NAME
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper json_file_list'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (class Compiler * inCompiler,
                                                                                           const class GGS_stringset & in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET,
                                                                                           const class GGS_stringlist & in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST,
                                                                                           const class GGS_stringlist & in_MAKEFILE_5F_FILE_5F_LIST,
                                                                                           const class GGS_stringlist & in_TOOL_5F_LINK_5F_LIST,
                                                                                           const class GGS_string & in_LIBPM_5F_DIRECTORY_5F_PATH,
                                                                                           const class GGS_string & in_RELATIVE_5F_BUILD_5F_DIR
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper project_header'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (class Compiler * inCompiler,
                                                                                        const class GGS_string & in_VERSION_5F_STRING
                                                                                        COMMA_LOCATION_ARGS) ;

