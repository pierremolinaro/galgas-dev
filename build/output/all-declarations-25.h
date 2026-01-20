#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

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
//Extension method '@productionRuleListForGrammarAnalysis.element displayRule'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRule (const class GGS_productionRuleListForGrammarAnalysis_2E_element inObject,
                                  const class GGS_string constin_inSyntaxComponentName,
                                  class GGS_string & io_ioGeneratedCode,
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
//Routine 'enterClassFunctionWithoutArgument&&?name?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (class GGS_classFunctionMap & ioArgument0,
                                                                                                   class GGS_unifiedTypeMap & ioArgument1,
                                                                                                   const class GGS_string constinArgument2,
                                                                                                   const class GGS_string constinArgument3,
                                                                                                   const class GGS_bool constinArgument4,
                                                                                                   class Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'commonGetterMapForAllTypes&!'
//
//--------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes_26__21_ (class GGS_unifiedTypeMap & ioArgument0,
                                                 class GGS_getterMap & outArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                   class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                   const class GGS_string constinArgument2,
                                                                                                                                   const class GGS_string constinArgument3,
                                                                                                                                   const class GGS_string constinArgument4,
                                                                                                                                   const class GGS_bool constinArgument5,
                                                                                                                                   class Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (class Compiler * inCompiler
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
//Function 'methodNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_methodNameForUsefulEntitiesGraph (const class GGS_string & constinArgument0,
                                                             const class GGS_lstring & constinArgument1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'typeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_typeNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody?&?&??nonMutablePropertyList?mutablePropertyList??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (const class GGS_lstring constinArgument0,
                                                                                                                      class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                                      const class GGS_analysisContext constinArgument2,
                                                                                                                      class GGS_unifiedTypeMap & ioArgument3,
                                                                                                                      const class GGS_formalParameterListAST constinArgument4,
                                                                                                                      const class GGS_typedPropertyList constinArgument5,
                                                                                                                      const class GGS_typedPropertyList constinArgument6,
                                                                                                                      const class GGS_semanticInstructionListAST constinArgument7,
                                                                                                                      const class GGS_location constinArgument8,
                                                                                                                      class GGS_semanticInstructionListForGeneration & outArgument9,
                                                                                                                      class GGS_formalParameterListForGeneration & outArgument10,
                                                                                                                      class Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticComponentGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_semanticComponentGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate initializerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (class Compiler * inCompiler,
                                                                                              const class GGS_string & in_CLASS_5F_NAME,
                                                                                              const class GGS_string & in_INITIALIZER_5F_NAME,
                                                                                              const class GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                              const class GGS_string & in_INITIALIZER_5F_IMPLEMENTATION
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (class Compiler * inCompiler,
                                                                                                       const class GGS_string & in_CLASS_5F_NAME,
                                                                                                       const class GGS_string & in_GETTER_5F_NAME,
                                                                                                       const class GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                       const class GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (class Compiler * inCompiler,
                                                                                                          const class GGS_string & in_CLASS_5F_NAME,
                                                                                                          const class GGS_string & in_GETTER_5F_NAME,
                                                                                                          const class GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const class GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (class Compiler * inCompiler,
                                                                                               const class GGS_string & in_CLASS_5F_NAME,
                                                                                               const class GGS_string & in_GETTER_5F_NAME,
                                                                                               const class GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                               const class GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (class Compiler * inCompiler,
                                                                                                  const class GGS_string & in_CLASS_5F_NAME,
                                                                                                  const class GGS_string & in_GETTER_5F_NAME,
                                                                                                  const class GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const class GGS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                  const class GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (class Compiler * inCompiler,
                                                                                                            const class GGS_string & in_CLASS_5F_NAME,
                                                                                                            const class GGS_string & in_GETTER_5F_NAME,
                                                                                                            const class GGS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                            const class GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (class Compiler * inCompiler,
                                                                                                       const class GGS_string & in_CLASS_5F_NAME,
                                                                                                       const class GGS_string & in_MODIFIER_5F_NAME,
                                                                                                       const class GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (class Compiler * inCompiler,
                                                                                                          const class GGS_string & in_CLASS_5F_NAME,
                                                                                                          const class GGS_string & in_MODIFIER_5F_NAME,
                                                                                                          const class GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (class Compiler * inCompiler,
                                                                                               const class GGS_string & in_CLASS_5F_NAME,
                                                                                               const class GGS_string & in_MODIFIER_5F_NAME,
                                                                                               const class GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionsetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (class Compiler * inCompiler,
                                                                                                  const class GGS_string & in_CLASS_5F_NAME,
                                                                                                  const class GGS_string & in_MODIFIER_5F_NAME,
                                                                                                  const class GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const class GGS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (class Compiler * inCompiler,
                                                                                                            const class GGS_string & in_CLASS_5F_NAME,
                                                                                                            const class GGS_string & in_MODIFIER_5F_NAME,
                                                                                                            const class GGS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (class Compiler * inCompiler,
                                                                                                       const class GGS_string & in_CLASS_5F_NAME,
                                                                                                       const class GGS_string & in_METHOD_5F_NAME,
                                                                                                       const class GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (class Compiler * inCompiler,
                                                                                                          const class GGS_unifiedTypeMapEntry & in_RECEIVER_5F_TYPE,
                                                                                                          const class GGS_string & in_METHOD_5F_NAME,
                                                                                                          const class GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (class Compiler * inCompiler,
                                                                                               const class GGS_string & in_CLASS_5F_NAME,
                                                                                               const class GGS_string & in_METHOD_5F_NAME,
                                                                                               const class GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (class Compiler * inCompiler,
                                                                                                  const class GGS_string & in_CLASS_5F_NAME,
                                                                                                  const class GGS_string & in_METHOD_5F_NAME,
                                                                                                  const class GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const class GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (class Compiler * inCompiler,
                                                                                                            const class GGS_string & in_CLASS_5F_NAME,
                                                                                                            const class GGS_string & in_METHOD_5F_NAME,
                                                                                                            const class GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (class Compiler * inCompiler,
                                                                                           const class GGS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const class GGS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const class GGS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const class GGS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const class GGS_string & in_FILEWRAPPER_5F_NAME
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (class Compiler * inCompiler,
                                                                                              const class GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                              const class GGS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (class Compiler * inCompiler,
                                                                                                         const class GGS_string & in_TYPE_5F_NAME,
                                                                                                         const class GGS_string & in_GETTER_5F_NAME,
                                                                                                         const class GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const class GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (class Compiler * inCompiler,
                                                                                                            const class GGS_string & in_TYPE_5F_NAME,
                                                                                                            const class GGS_string & in_GETTER_5F_NAME,
                                                                                                            const class GGS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (class Compiler * inCompiler,
                                                                                                         const class GGS_string & in_TYPE_5F_NAME,
                                                                                                         const class GGS_string & in_METHOD_5F_NAME,
                                                                                                         const class GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (class Compiler * inCompiler,
                                                                                                            const class GGS_string & in_TYPE_5F_NAME,
                                                                                                            const class GGS_string & in_METHOD_5F_NAME,
                                                                                                            const class GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (class Compiler * inCompiler,
                                                                                                         const class GGS_string & in_TYPE_5F_NAME,
                                                                                                         const class GGS_string & in_MODIFIER_5F_NAME,
                                                                                                         const class GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (class Compiler * inCompiler,
                                                                                        const class GGS_string & in_FUNCTION_5F_NAME,
                                                                                        const class GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                        const class GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (class Compiler * inCompiler,
                                                                                           const class GGS_string & in_FUNCTION_5F_NAME,
                                                                                           const class GGS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                           const class GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const class GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (class Compiler * inCompiler,
                                                                                       const class GGS_string & in_ROUTINE_5F_NAME,
                                                                                       const class GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (class Compiler * inCompiler,
                                                                                          const class GGS_string & in_ROUTINE_5F_NAME,
                                                                                          const class GGS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (class Compiler * inCompiler,
                                                                                               const class GGS_string & in_FUNCTION_5F_NAME,
                                                                                               const class GGS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                               const class GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                               const class GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (class Compiler * inCompiler,
                                                                                                   const class GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                   const class GGS_string & in_TEMPLATE_5F_NAME,
                                                                                                   const class GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (class Compiler * inCompiler,
                                                                                                      const class GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const class GGS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const class GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                      const class GGS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                      const class GGS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                      const class GGS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethodNew?&???!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (const class GGS_unifiedTypeMapEntry constinArgument0,
                                                                 class GGS_stringset & ioArgument1,
                                                                 const class GGS_string constinArgument2,
                                                                 const class GGS_formalParameterListForGeneration constinArgument3,
                                                                 const class GGS_semanticInstructionListForGeneration constinArgument4,
                                                                 class GGS_string & outArgument5,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure?static?&???????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (const class GGS_bool constinArgument0,
                                                                                  const class GGS_string constinArgument1,
                                                                                  class GGS_stringset & ioArgument2,
                                                                                  const class GGS_formalParameterListForGeneration constinArgument3,
                                                                                  const class GGS_semanticInstructionListForGeneration constinArgument4,
                                                                                  const class GGS_bool constinArgument5,
                                                                                  const class GGS_string constinArgument6,
                                                                                  const class GGS_bool constinArgument7,
                                                                                  const class GGS_bool constinArgument8,
                                                                                  const class GGS_bool constinArgument9,
                                                                                  class GGS_string & outArgument10,
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
//Function 'makeEmbeddedElementTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeEmbeddedElementTypeLName (const class GGS_lstring & constinArgument0,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'addExtensions????&&??isClass&&&&?acceptSetters'
//
//--------------------------------------------------------------------------------------------------

void routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (const class GGS_extensionInitializerForBuildingContext constinArgument0,
                                                                                                    const class GGS_extensionMethodMapForBuildingContext constinArgument1,
                                                                                                    const class GGS_extensionGetterMapForBuildingContext constinArgument2,
                                                                                                    const class GGS_extensionSetterMapForBuildingContext constinArgument3,
                                                                                                    class GGS_semanticContext & ioArgument4,
                                                                                                    class GGS_unifiedTypeMap & ioArgument5,
                                                                                                    const class GGS_lstring constinArgument6,
                                                                                                    const class GGS_bool constinArgument7,
                                                                                                    class GGS_initializerMap & ioArgument8,
                                                                                                    class GGS_getterMap & ioArgument9,
                                                                                                    class GGS_setterMap & ioArgument10,
                                                                                                    class GGS_instanceMethodMap & ioArgument11,
                                                                                                    const class GGS_bool constinArgument12,
                                                                                                    class Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                               class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                               const class GGS_string constinArgument2,
                                                                                                                                               const class GGS_string constinArgument3,
                                                                                                                                               const class GGS_string constinArgument4,
                                                                                                                                               const class GGS_string constinArgument5,
                                                                                                                                               const class GGS_bool constinArgument6,
                                                                                                                                               class Compiler * inCompiler
                                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&??????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                      class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                      const class GGS_string constinArgument2,
                                                                                                                      const class GGS_string constinArgument3,
                                                                                                                      const class GGS_string constinArgument4,
                                                                                                                      const class GGS_string constinArgument5,
                                                                                                                      const class GGS_string constinArgument6,
                                                                                                                      const class GGS_string constinArgument7,
                                                                                                                      const class GGS_bool constinArgument8,
                                                                                                                      class Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                              class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                              const class GGS_string constinArgument2,
                                                                                                                              const class GGS_string constinArgument3,
                                                                                                                              const class GGS_string constinArgument4,
                                                                                                                              const class GGS_bool constinArgument5,
                                                                                                                              class Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithArgument&&?name?argTypeName?argName?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (class GGS_classFunctionMap & ioArgument0,
                                                                                                                          class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                          const class GGS_string constinArgument2,
                                                                                                                          const class GGS_string constinArgument3,
                                                                                                                          const class GGS_string constinArgument4,
                                                                                                                          const class GGS_string constinArgument5,
                                                                                                                          const class GGS_bool constinArgument6,
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
//Function 'forbiddenKeysForMapAndDict'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_forbiddenKeysForMapAndDict (class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (const class GGS_lstring constinArgument0,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const class GGS_lstring constinArgument0,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'mapGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_mapGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapGenerationTemplate mapTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_mapGenerationTemplate_mapTypeHeader_31_ (class Compiler * inCompiler,
                                                                        const class GGS_string & in_TYPE_5F_NAME,
                                                                        const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                        const class GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                        const class GGS_mapAccessorListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                        const class GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                        const class GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                        const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                        const class GGS_bool & in_GENERATE_5F_COMPARISON
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapGenerationTemplate mapTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_mapGenerationTemplate_mapTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                    const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const class GGS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                    const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                    const class GGS_insertSetterListAST & in_INSERT_5F_SETTER_5F_LIST,
                                                                                    const class GGS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                    const class GGS_mapAccessorListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                    const class GGS_mapAccessorListAST & in_SEARCH_5F_SUBSCRIPT_5F_LIST,
                                                                                    const class GGS_mapAccessorListAST & in_REMOVE_5F_SETTER_5F_LIST,
                                                                                    const class GGS_mapAccessorListAST & in_REPLACE_5F_SETTER_5F_LIST,
                                                                                    const class GGS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE,
                                                                                    const class GGS_bool & in_GENERATE_5F_COMPARISON
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
//Routine 'enterClassFunctionWith2Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (class GGS_classFunctionMap & ioArgument0,
                                                                                                                                                                         class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                         const class GGS_string constinArgument2,
                                                                                                                                                                         const class GGS_string constinArgument3,
                                                                                                                                                                         const class GGS_string constinArgument4,
                                                                                                                                                                         const class GGS_string constinArgument5,
                                                                                                                                                                         const class GGS_string constinArgument6,
                                                                                                                                                                         const class GGS_string constinArgument7,
                                                                                                                                                                         const class GGS_bool constinArgument8,
                                                                                                                                                                         class Compiler * inCompiler
                                                                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith3Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?argTypeName3?argName3?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (class GGS_classFunctionMap & ioArgument0,
                                                                                                                                                                                                           class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                                                           const class GGS_string constinArgument2,
                                                                                                                                                                                                           const class GGS_string constinArgument3,
                                                                                                                                                                                                           const class GGS_string constinArgument4,
                                                                                                                                                                                                           const class GGS_string constinArgument5,
                                                                                                                                                                                                           const class GGS_string constinArgument6,
                                                                                                                                                                                                           const class GGS_string constinArgument7,
                                                                                                                                                                                                           const class GGS_string constinArgument8,
                                                                                                                                                                                                           const class GGS_string constinArgument9,
                                                                                                                                                                                                           const class GGS_bool constinArgument10,
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
//Routine 'enterInstanceMethodWithInputArgument&&?inputArgTypeName?inputArgName?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (class GGS_instanceMethodMap & ioArgument0,
                                                                                                                 class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                 const class GGS_string constinArgument2,
                                                                                                                 const class GGS_string constinArgument3,
                                                                                                                 const class GGS_string constinArgument4,
                                                                                                                 const class GGS_bool constinArgument5,
                                                                                                                 class Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument&&?argTypeName?argName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (class GGS_setterMap & ioArgument0,
                                                                                                            class GGS_unifiedTypeMap & ioArgument1,
                                                                                                            const class GGS_string constinArgument2,
                                                                                                            const class GGS_string constinArgument3,
                                                                                                            const class GGS_string constinArgument4,
                                                                                                            const class GGS_bool constinArgument5,
                                                                                                            class Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argSelector?argType?argName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                                class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                const class GGS_string constinArgument2,
                                                                                                                                                const class GGS_string constinArgument3,
                                                                                                                                                const class GGS_string constinArgument4,
                                                                                                                                                const class GGS_string constinArgument5,
                                                                                                                                                const class GGS_string constinArgument6,
                                                                                                                                                const class GGS_bool constinArgument7,
                                                                                                                                                class Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'listGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_listGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (class Compiler * inCompiler,
                                                                          const class GGS_string & in_TYPE_5F_NAME,
                                                                          const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                          const class GGS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                          const class GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                          const class GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                          const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                          const class GGS_bool & in_GENERATE_5F_COMPARISON
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                      const class GGS_string & in_TYPE_5F_NAME,
                                                                                      const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GGS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                      const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                      const class GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument&??compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (class GGS_setterMap & ioArgument0,
                                                                  const class GGS_string constinArgument1,
                                                                  const class GGS_bool constinArgument2,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument&?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (class GGS_instanceMethodMap & ioArgument0,
                                                                       const class GGS_string constinArgument1,
                                                                       const class GGS_bool constinArgument2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument&&?getterName???returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                        class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                        const class GGS_string constinArgument2,
                                                                                                                        const class GGS_string constinArgument3,
                                                                                                                        const class GGS_string constinArgument4,
                                                                                                                        const class GGS_string constinArgument5,
                                                                                                                        const class GGS_bool constinArgument6,
                                                                                                                        class Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith2Arguments&&?getterName?????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                     class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                     const class GGS_string constinArgument2,
                                                                                                                                     const class GGS_string constinArgument3,
                                                                                                                                     const class GGS_string constinArgument4,
                                                                                                                                     const class GGS_string constinArgument5,
                                                                                                                                     const class GGS_string constinArgument6,
                                                                                                                                     const class GGS_string constinArgument7,
                                                                                                                                     const class GGS_bool constinArgument8,
                                                                                                                                     class Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments&&?outputArgTypeName?outputArgName?inputArgTypeName?inputArgName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (class GGS_setterMap & ioArgument0,
                                                                                                                                                                      class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                      const class GGS_string constinArgument2,
                                                                                                                                                                      const class GGS_string constinArgument3,
                                                                                                                                                                      const class GGS_string constinArgument4,
                                                                                                                                                                      const class GGS_string constinArgument5,
                                                                                                                                                                      const class GGS_string constinArgument6,
                                                                                                                                                                      const class GGS_bool constinArgument7,
                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments&&?arg1TypeName?arg1Name?arg2TypeName?arg2Name?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (class GGS_setterMap & ioArgument0,
                                                                                                                                                           class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                           const class GGS_string constinArgument2,
                                                                                                                                                           const class GGS_string constinArgument3,
                                                                                                                                                           const class GGS_string constinArgument4,
                                                                                                                                                           const class GGS_string constinArgument5,
                                                                                                                                                           const class GGS_string constinArgument6,
                                                                                                                                                           const class GGS_bool constinArgument7,
                                                                                                                                                           class Compiler * inCompiler
                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'dictGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_dictGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictGenerationTemplate dictTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_dictGenerationTemplate_dictTypeHeader_31_ (class Compiler * inCompiler,
                                                                          const class GGS_string & in_TYPE_5F_NAME,
                                                                          const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                          const class GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                          const class GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                          const class GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                          const class GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                          const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictGenerationTemplate dictTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_dictGenerationTemplate_dictTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                      const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                      const class GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                      const class GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                                      const class GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                                      const class GGS_bool & in_GENERATE_5F_COMPARISON,
                                                                                      const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                      const class GGS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER
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
//Function 'equatableNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_equatableNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature?&?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (const class GGS_semanticContext constinArgument0,
                                                                    class GGS_unifiedTypeMap & ioArgument1,
                                                                    const class GGS_formalParameterListAST constinArgument2,
                                                                    class GGS_localVarManager & ioArgument3,
                                                                    class GGS_formalParameterListForGeneration & outArgument4,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures_3F__3F__3F__3F_ (const class GGS_formalParameterListForGeneration constinArgument0,
                                                    const class GGS_location constinArgument1,
                                                    const class GGS_formalParameterSignature constinArgument2,
                                                    const class GGS_location constinArgument3,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

