#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction?&??????static?const!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (const class GGS_string constinArgument0,
                                                                                  class GGS_stringset & ioArgument1,
                                                                                  const class GGS_formalInputParameterListForGeneration constinArgument2,
                                                                                  const class GGS_semanticInstructionListForGeneration constinArgument3,
                                                                                  const class GGS_string constinArgument4,
                                                                                  const class GGS_unifiedTypeMapEntry constinArgument5,
                                                                                  const class GGS_string constinArgument6,
                                                                                  const class GGS_bool constinArgument7,
                                                                                  const class GGS_bool constinArgument8,
                                                                                  class GGS_string & outArgument9,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const class GGS_lstring constinArgument0,
                                                                      class GGS_usefulEntitiesGraph & ioArgument1,
                                                                      const class GGS_templateAnalysisContext constinArgument2,
                                                                      class GGS_unifiedTypeMap & ioArgument3,
                                                                      const class GGS_templateInstructionListAST constinArgument4,
                                                                      class GGS_templateInstructionListForGeneration & ioArgument5,
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

//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles??&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__26__26__26_ (const class GGS_string constinArgument0,
                                                              const class GGS_semanticDeclarationListForGeneration constinArgument1,
                                                              class GGS_stringlist & ioArgument2,
                                                              class GGS_stringlist & ioArgument3,
                                                              class GGS_stringset & ioArgument4,
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
//Routine 'analyzeInitializerInvocation?&??&&???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                           class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                           const class GGS_unifiedTypeMapEntry constinArgument2,
                                                                                           const class GGS_analysisContext constinArgument3,
                                                                                           class GGS_unifiedTypeMap & ioArgument4,
                                                                                           class GGS_localVarManager & ioArgument5,
                                                                                           const class GGS_lstring constinArgument6,
                                                                                           const class GGS_actualOutputArgumentList constinArgument7,
                                                                                           const class GGS_location constinArgument8,
                                                                                           class GGS_unifiedTypeMapEntry & outArgument9,
                                                                                           class GGS_lstring & outArgument10,
                                                                                           class GGS_semanticExpressionListForGeneration & outArgument11,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'classGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_classGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_31_ (class Compiler * inCompiler,
                                                                                 const class GGS_string & in_TYPE_5F_NAME,
                                                                                 const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                 const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                 const class GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_31_ (class Compiler * inCompiler,
                                                                                         const class GGS_string & in_TYPE_5F_NAME,
                                                                                         const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                         const class GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                         const class GGS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                         const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                         const class GGS_getterMap & in_GETTER_5F_MAP,
                                                                                         const class GGS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_32_ (class Compiler * inCompiler,
                                                                                         const class GGS_string & in_TYPE_5F_NAME,
                                                                                         const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                         const class GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                         const class GGS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                         const class GGS_bool & in_IS_5F_ABSTRACT
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                             const class GGS_string & in_TYPE_5F_NAME,
                                                                                             const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                             const class GGS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                             const class GGS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                             const class GGS_bool & in_IS_5F_ABSTRACT
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_31_ (class Compiler * inCompiler,
                                                                                     const class GGS_string & in_TYPE_5F_NAME,
                                                                                     const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                     const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                     const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                     const class GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_31_ (class Compiler * inCompiler,
                                                                                             const class GGS_string & in_TYPE_5F_NAME,
                                                                                             const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                             const class GGS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                             const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                             const class GGS_getterMap & in_GETTER_5F_MAP,
                                                                                             const class GGS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                             const class GGS_initializerMap & in_INITIALIZER_5F_MAP
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_32_ (class Compiler * inCompiler,
                                                                                             const class GGS_string & in_TYPE_5F_NAME,
                                                                                             const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                             const class GGS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                             const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                             const class GGS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                                 const class GGS_string & in_TYPE_5F_NAME,
                                                                                                 const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                 const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                 const class GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                 const class GGS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                                 const class GGS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                                 const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                                 const class GGS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                                 const class GGS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                                 const class GGS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                                 const class GGS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                 const class GGS_typedPropertyList & in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                 const class GGS_initializerMap & in_INITIALIZER_5F_MAP,
                                                                                                 const class GGS_bool & in_CLONABLE
                                                                                                 COMMA_LOCATION_ARGS) ;

