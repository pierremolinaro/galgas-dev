#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

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
//Function 'functionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_functionNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
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
//Filewrapper 'typeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

extern const char * gWrapperFileContent_0_typeGenerationTemplate ;

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cRegularFileWrapper gWrapperFile_0_typeGenerationTemplate ;

//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_typeGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (class Compiler * inCompiler,
                                                                               const class GGS_string & in_TYPE_5F_NAME,
                                                                               const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const class GGS_bool & in_IS_5F_CONCRETE,
                                                                               const class GGS_initializerMap & in_INITIALIZER_5F_MAP,
                                                                               const class GGS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                               const class GGS_getterMap & in_GETTER_5F_MAP,
                                                                               const class GGS_setterMap & in_MODIFIER_5F_MAP,
                                                                               const class GGS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                               const class GGS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                               const class GGS_subscriptMap & in_READ_5F_SUBSCRIPT_5F_MAP,
                                                                               const class GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                               const class GGS_typeFeatures & in_SUPPORTED_5F_OPERATORS,
                                                                               const class GGS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                               const class GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                               const class GGS_bool & in_SUPPORT_5F_COLLECTION_5F_VALUE
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForPackage'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (class Compiler * inCompiler,
                                                                                  const class GGS_string & in_TYPE_5F_NAME,
                                                                                  const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const class GGS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                                  const class GGS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate genericTypeImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (class Compiler * inCompiler,
                                                                                 const class GGS_string & in_TYPE_5F_NAME,
                                                                                 const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const class GGS_unifiedTypeMapEntry & in_SUPER_5F_TYPE_5F_INDEX
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate externTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (class Compiler * inCompiler,
                                                                            const class GGS_string & in_TYPE_5F_NAME,
                                                                            const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const class GGS_string & in_PRE_5F_DECLARATION,
                                                                            const class GGS_string & in_CODE
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (class Compiler * inCompiler,
                                                                           const class GGS_string & in_TYPE_5F_NAME,
                                                                           const class GGS_string & in_TYPE_5F_IDENTIFIER
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                       const class GGS_unifiedTypeMapEntry & in_TYPE,
                                                                                       const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const class GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                       const class GGS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
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
                                                                                                                        const class GGS_string constinArgument9,
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
//Routine 'checkDiadicOperator?operatorIsHandled??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (const class GGS_bool constinArgument0,
                                                                       const class GGS_string constinArgument1,
                                                                       const class GGS_location constinArgument2,
                                                                       class GGS_semanticExpressionForGeneration & ioArgument3,
                                                                       class GGS_semanticExpressionForGeneration & ioArgument4,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument&&?methodName?argType?argName?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (class GGS_classMethodMap & ioArgument0,
                                                                                                                class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                const class GGS_string constinArgument2,
                                                                                                                const class GGS_string constinArgument3,
                                                                                                                const class GGS_string constinArgument4,
                                                                                                                const class GGS_bool constinArgument5,
                                                                                                                class Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments&&?methodName?argType1?argName1?argType2?argName2?argType3?argName3?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (class GGS_classMethodMap & ioArgument0,
                                                                                                                                                                                         class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                                         const class GGS_string constinArgument2,
                                                                                                                                                                                         const class GGS_string constinArgument3,
                                                                                                                                                                                         const class GGS_string constinArgument4,
                                                                                                                                                                                         const class GGS_string constinArgument5,
                                                                                                                                                                                         const class GGS_string constinArgument6,
                                                                                                                                                                                         const class GGS_string constinArgument7,
                                                                                                                                                                                         const class GGS_string constinArgument8,
                                                                                                                                                                                         const class GGS_bool constinArgument9,
                                                                                                                                                                                         class Compiler * inCompiler
                                                                                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument&&?classMethod?argName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (class GGS_classMethodMap & ioArgument0,
                                                                                                       class GGS_unifiedTypeMap & ioArgument1,
                                                                                                       const class GGS_string constinArgument2,
                                                                                                       const class GGS_string constinArgument3,
                                                                                                       const class GGS_bool constinArgument4,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

