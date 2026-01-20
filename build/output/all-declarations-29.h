#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-28.h"

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
//Routine 'checkextensionSetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                                             const class GGS_string constinArgument1,
                                                                             const class GGS_lstring constinArgument2,
                                                                             const class GGS_descendantClassListMap constinArgument3,
                                                                             const class GGS_genericExtensionMethodListMap constinArgument4,
                                                                             const class GGS_unifiedTypeMap constinArgument5,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionMethodDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                                             const class GGS_string constinArgument1,
                                                                             const class GGS_lstring constinArgument2,
                                                                             const class GGS_descendantClassListMap constinArgument3,
                                                                             const class GGS_genericExtensionMethodListMap constinArgument4,
                                                                             const class GGS_unifiedTypeMap constinArgument5,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionGetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                                             const class GGS_string constinArgument1,
                                                                             const class GGS_lstring constinArgument2,
                                                                             const class GGS_descendantClassListMap constinArgument3,
                                                                             const class GGS_genericExtensionMethodListMap constinArgument4,
                                                                             const class GGS_unifiedTypeMap constinArgument5,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

