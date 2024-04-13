#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithArgument&&?name?argTypeName?argName?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (class GALGAS_classFunctionMap & ioArgument0,
                                                                                                                          class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                          const class GALGAS_string constinArgument2,
                                                                                                                          const class GALGAS_string constinArgument3,
                                                                                                                          const class GALGAS_string constinArgument4,
                                                                                                                          const class GALGAS_string constinArgument5,
                                                                                                                          const class GALGAS_bool constinArgument6,
                                                                                                                          class Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWith2Arguments&&??????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
                                                                                                                           class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                           const class GALGAS_string constinArgument2,
                                                                                                                           const class GALGAS_string constinArgument3,
                                                                                                                           const class GALGAS_string constinArgument4,
                                                                                                                           const class GALGAS_string constinArgument5,
                                                                                                                           const class GALGAS_string constinArgument6,
                                                                                                                           const class GALGAS_string constinArgument7,
                                                                                                                           const class GALGAS_bool constinArgument8,
                                                                                                                           class Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'sortedListGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_sortedListGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (class Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                                     const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                     const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                     const class GALGAS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST,
                                                                                                     const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'forbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringset function_forbiddenKeysForStruct (class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'structureGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_structureGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structureGenerationTemplate structTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (class Compiler * inCompiler,
                                                                                    const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const class GALGAS_typedPropertyList & in_PROPERTY_5F_LIST
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structureGenerationTemplate structTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                                const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                const class GALGAS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                                const class GALGAS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                const class GALGAS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                                const class GALGAS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                                const class GALGAS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER
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

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (class Compiler * inCompiler,
                                                                                                 const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                 const class GALGAS_string & in_INITIALIZER_5F_NAME,
                                                                                                 const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                 const class GALGAS_string & in_INITIALIZER_5F_IMPLEMENTATION
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (class Compiler * inCompiler,
                                                                                                          const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                          const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const class GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (class Compiler * inCompiler,
                                                                                                             const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                             const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                             const class GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (class Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                  const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const class GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (class Compiler * inCompiler,
                                                                                                     const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                     const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const class GALGAS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                     const class GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (class Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const class GALGAS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                               const class GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (class Compiler * inCompiler,
                                                                                                          const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                          const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (class Compiler * inCompiler,
                                                                                                             const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                             const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (class Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                  const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionsetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (class Compiler * inCompiler,
                                                                                                     const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                     const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const class GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (class Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                               const class GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (class Compiler * inCompiler,
                                                                                                          const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                          const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (class Compiler * inCompiler,
                                                                                                             const class GALGAS_unifiedTypeMapEntry & in_RECEIVER_5F_TYPE,
                                                                                                             const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                             const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (class Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                  const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (class Compiler * inCompiler,
                                                                                                     const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                     const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (class Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (class Compiler * inCompiler,
                                                                                              const class GALGAS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_string & in_FILEWRAPPER_5F_NAME
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (class Compiler * inCompiler,
                                                                                                 const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                 const class GALGAS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (class Compiler * inCompiler,
                                                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                            const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                            const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (class Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (class Compiler * inCompiler,
                                                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                            const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (class Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (class Compiler * inCompiler,
                                                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                            const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (class Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                           const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (class Compiler * inCompiler,
                                                                                              const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                              const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                              const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                              const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (class Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                          const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (class Compiler * inCompiler,
                                                                                             const class GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                             const class GALGAS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (class Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                                  const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                                  const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (class Compiler * inCompiler,
                                                                                                      const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const class GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (class Compiler * inCompiler,
                                                                                                         const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                         const class GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                         const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const class GALGAS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                         const class GALGAS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                         const class GALGAS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'getterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_getterNameForUsefulEntitiesGraph (const class GALGAS_string & constinArgument0,
                                                                const class GALGAS_lstring & constinArgument1,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody?&?&???????!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (const class GALGAS_lstring constinArgument0,
                                                                                              class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                              const class GALGAS_analysisContext constinArgument2,
                                                                                              class GALGAS_unifiedTypeMap & ioArgument3,
                                                                                              const class GALGAS_formalInputParameterListAST constinArgument4,
                                                                                              const class GALGAS_typedPropertyList constinArgument5,
                                                                                              const class GALGAS_string constinArgument6,
                                                                                              const class GALGAS_semanticInstructionListAST constinArgument7,
                                                                                              const class GALGAS_lstring constinArgument8,
                                                                                              const class GALGAS_lstring constinArgument9,
                                                                                              const class GALGAS_location constinArgument10,
                                                                                              class GALGAS_formalInputParameterListForGeneration & outArgument11,
                                                                                              class GALGAS_unifiedTypeMapEntry & outArgument12,
                                                                                              class GALGAS_string & outArgument13,
                                                                                              class GALGAS_semanticInstructionListForGeneration & outArgument14,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetter?&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (const class GALGAS_string constinArgument0,
                                                                      class GALGAS_stringset & ioArgument1,
                                                                      const class GALGAS_formalInputParameterListForGeneration constinArgument2,
                                                                      const class GALGAS_semanticInstructionListForGeneration constinArgument3,
                                                                      const class GALGAS_string constinArgument4,
                                                                      const class GALGAS_unifiedTypeMapEntry constinArgument5,
                                                                      const class GALGAS_string constinArgument6,
                                                                      class GALGAS_string & outArgument7,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction?&??????static?const!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (const class GALGAS_string constinArgument0,
                                                                                  class GALGAS_stringset & ioArgument1,
                                                                                  const class GALGAS_formalInputParameterListForGeneration constinArgument2,
                                                                                  const class GALGAS_semanticInstructionListForGeneration constinArgument3,
                                                                                  const class GALGAS_string constinArgument4,
                                                                                  const class GALGAS_unifiedTypeMapEntry constinArgument5,
                                                                                  const class GALGAS_string constinArgument6,
                                                                                  const class GALGAS_bool constinArgument7,
                                                                                  const class GALGAS_bool constinArgument8,
                                                                                  class GALGAS_string & outArgument9,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'methodNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_methodNameForUsefulEntitiesGraph (const class GALGAS_string & constinArgument0,
                                                                const class GALGAS_lstring & constinArgument1,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody?&?&??nonMutablePropertyList?mutablePropertyList??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (const class GALGAS_lstring constinArgument0,
                                                                                                                      class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                                                      const class GALGAS_analysisContext constinArgument2,
                                                                                                                      class GALGAS_unifiedTypeMap & ioArgument3,
                                                                                                                      const class GALGAS_formalParameterListAST constinArgument4,
                                                                                                                      const class GALGAS_typedPropertyList constinArgument5,
                                                                                                                      const class GALGAS_typedPropertyList constinArgument6,
                                                                                                                      const class GALGAS_semanticInstructionListAST constinArgument7,
                                                                                                                      const class GALGAS_location constinArgument8,
                                                                                                                      class GALGAS_semanticInstructionListForGeneration & outArgument9,
                                                                                                                      class GALGAS_formalParameterListForGeneration & outArgument10,
                                                                                                                      class Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethodNew?&???!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (const class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                 class GALGAS_stringset & ioArgument1,
                                                                 const class GALGAS_string constinArgument2,
                                                                 const class GALGAS_formalParameterListForGeneration constinArgument3,
                                                                 const class GALGAS_semanticInstructionListForGeneration constinArgument4,
                                                                 class GALGAS_string & outArgument5,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure?static?&???????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (const class GALGAS_bool constinArgument0,
                                                                                  const class GALGAS_string constinArgument1,
                                                                                  class GALGAS_stringset & ioArgument2,
                                                                                  const class GALGAS_formalParameterListForGeneration constinArgument3,
                                                                                  const class GALGAS_semanticInstructionListForGeneration constinArgument4,
                                                                                  const class GALGAS_bool constinArgument5,
                                                                                  const class GALGAS_string constinArgument6,
                                                                                  const class GALGAS_bool constinArgument7,
                                                                                  const class GALGAS_bool constinArgument8,
                                                                                  const class GALGAS_bool constinArgument9,
                                                                                  class GALGAS_string & outArgument10,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_setterNameForUsefulEntitiesGraph (const class GALGAS_string & constinArgument0,
                                                                const class GALGAS_lstring & constinArgument1,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter???&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (const class GALGAS_string constinArgument0,
                                                                  const class GALGAS_string constinArgument1,
                                                                  const class GALGAS_string constinArgument2,
                                                                  class GALGAS_stringset & ioArgument3,
                                                                  const class GALGAS_formalParameterListForGeneration constinArgument4,
                                                                  const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                                                  class GALGAS_string & outArgument6,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'initializerNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_initializerNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                     const class GALGAS_string & constinArgument1,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (const class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                         const class GALGAS_analysisContext constinArgument2,
                                                                         class GALGAS_unifiedTypeMap & ioArgument3,
                                                                         const class GALGAS_formalInputParameterListAST constinArgument4,
                                                                         const class GALGAS_semanticInstructionListAST constinArgument5,
                                                                         const class GALGAS_location constinArgument6,
                                                                         class GALGAS_semanticInstructionListForGeneration & outArgument7,
                                                                         class GALGAS_formalInputParameterListForGeneration & outArgument8,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInitializer??&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInitializer_3F__3F__26__3F__3F__21_ (const class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                          const class GALGAS_string constinArgument1,
                                                          class GALGAS_stringset & ioArgument2,
                                                          const class GALGAS_formalInputParameterListForGeneration constinArgument3,
                                                          const class GALGAS_semanticInstructionListForGeneration constinArgument4,
                                                          class GALGAS_string & outArgument5,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (const class GALGAS_formalInputParameterListForGeneration constinArgument0,
                                                            const class GALGAS_unifiedTypeMapEntry constinArgument1,
                                                            const class GALGAS_location constinArgument2,
                                                            const class GALGAS_functionSignature constinArgument3,
                                                            const class GALGAS_unifiedTypeMapEntry constinArgument4,
                                                            const class GALGAS_location constinArgument5,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature?&?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (const class GALGAS_semanticContext constinArgument0,
                                                                    class GALGAS_unifiedTypeMap & ioArgument1,
                                                                    const class GALGAS_formalParameterListAST constinArgument2,
                                                                    class GALGAS_localVarManager & ioArgument3,
                                                                    class GALGAS_formalParameterListForGeneration & outArgument4,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures_3F__3F__3F__3F_ (const class GALGAS_formalParameterListForGeneration constinArgument0,
                                                    const class GALGAS_location constinArgument1,
                                                    const class GALGAS_formalParameterSignature constinArgument2,
                                                    const class GALGAS_location constinArgument3,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedListTypeAST&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedListTypeAST_26__3F__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                      const class GALGAS_string constinArgument1,
                                                      class GALGAS_lstringlist & ioArgument2,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'insertInUsefulnessEntities&?'
//
//--------------------------------------------------------------------------------------------------

void routine_insertInUsefulnessEntities_26__3F_ (class GALGAS_lstringlist & ioArgument0,
                                                 const class GALGAS_string constinArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2StringListTypeAST&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_StringListTypeAST_26__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                            class GALGAS_lstringlist & ioArgument1,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation_26__3F__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                             const class GALGAS_string constinArgument1,
                                                             class GALGAS_lstringlist & ioArgument2,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType_26__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                  class GALGAS_lstringlist & ioArgument1,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                class GALGAS_lstringlist & ioArgument1,
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

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith2Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (class GALGAS_classFunctionMap & ioArgument0,
                                                                                                                                                                         class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                         const class GALGAS_string constinArgument2,
                                                                                                                                                                         const class GALGAS_string constinArgument3,
                                                                                                                                                                         const class GALGAS_string constinArgument4,
                                                                                                                                                                         const class GALGAS_string constinArgument5,
                                                                                                                                                                         const class GALGAS_string constinArgument6,
                                                                                                                                                                         const class GALGAS_string constinArgument7,
                                                                                                                                                                         const class GALGAS_bool constinArgument8,
                                                                                                                                                                         class Compiler * inCompiler
                                                                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument&&?methodName?argType?argName?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (class GALGAS_classMethodMap & ioArgument0,
                                                                                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                const class GALGAS_string constinArgument2,
                                                                                                                const class GALGAS_string constinArgument3,
                                                                                                                const class GALGAS_string constinArgument4,
                                                                                                                const class GALGAS_bool constinArgument5,
                                                                                                                class Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments&&?methodName?argType1?argName1?argType2?argName2?argType3?argName3?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (class GALGAS_classMethodMap & ioArgument0,
                                                                                                                                                                                         class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                                         const class GALGAS_string constinArgument2,
                                                                                                                                                                                         const class GALGAS_string constinArgument3,
                                                                                                                                                                                         const class GALGAS_string constinArgument4,
                                                                                                                                                                                         const class GALGAS_string constinArgument5,
                                                                                                                                                                                         const class GALGAS_string constinArgument6,
                                                                                                                                                                                         const class GALGAS_string constinArgument7,
                                                                                                                                                                                         const class GALGAS_string constinArgument8,
                                                                                                                                                                                         const class GALGAS_bool constinArgument9,
                                                                                                                                                                                         class Compiler * inCompiler
                                                                                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument&&?argTypeName?argName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (class GALGAS_setterMap & ioArgument0,
                                                                                                            class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                            const class GALGAS_string constinArgument2,
                                                                                                            const class GALGAS_string constinArgument3,
                                                                                                            const class GALGAS_string constinArgument4,
                                                                                                            const class GALGAS_bool constinArgument5,
                                                                                                            class Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments&&?arg1TypeName?arg1Name?arg2TypeName?arg2Name?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (class GALGAS_setterMap & ioArgument0,
                                                                                                                                                           class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                                                           const class GALGAS_string constinArgument2,
                                                                                                                                                           const class GALGAS_string constinArgument3,
                                                                                                                                                           const class GALGAS_string constinArgument4,
                                                                                                                                                           const class GALGAS_string constinArgument5,
                                                                                                                                                           const class GALGAS_string constinArgument6,
                                                                                                                                                           const class GALGAS_bool constinArgument7,
                                                                                                                                                           class Compiler * inCompiler
                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument&&?getterName???returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
                                                                                                                        class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                        const class GALGAS_string constinArgument2,
                                                                                                                        const class GALGAS_string constinArgument3,
                                                                                                                        const class GALGAS_string constinArgument4,
                                                                                                                        const class GALGAS_string constinArgument5,
                                                                                                                        const class GALGAS_bool constinArgument6,
                                                                                                                        class Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith2Arguments&&?getterName?????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
                                                                                                                                     class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                                     const class GALGAS_string constinArgument2,
                                                                                                                                     const class GALGAS_string constinArgument3,
                                                                                                                                     const class GALGAS_string constinArgument4,
                                                                                                                                     const class GALGAS_string constinArgument5,
                                                                                                                                     const class GALGAS_string constinArgument6,
                                                                                                                                     const class GALGAS_string constinArgument7,
                                                                                                                                     const class GALGAS_bool constinArgument8,
                                                                                                                                     class Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith3Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?argTypeName3?argName3?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (class GALGAS_classFunctionMap & ioArgument0,
                                                                                                                                                                                                           class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                                                           const class GALGAS_string constinArgument2,
                                                                                                                                                                                                           const class GALGAS_string constinArgument3,
                                                                                                                                                                                                           const class GALGAS_string constinArgument4,
                                                                                                                                                                                                           const class GALGAS_string constinArgument5,
                                                                                                                                                                                                           const class GALGAS_string constinArgument6,
                                                                                                                                                                                                           const class GALGAS_string constinArgument7,
                                                                                                                                                                                                           const class GALGAS_string constinArgument8,
                                                                                                                                                                                                           const class GALGAS_string constinArgument9,
                                                                                                                                                                                                           const class GALGAS_bool constinArgument10,
                                                                                                                                                                                                           class Compiler * inCompiler
                                                                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith3Arguments&&????????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
                                                                                                                                   class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                                   const class GALGAS_string constinArgument2,
                                                                                                                                   const class GALGAS_string constinArgument3,
                                                                                                                                   const class GALGAS_string constinArgument4,
                                                                                                                                   const class GALGAS_string constinArgument5,
                                                                                                                                   const class GALGAS_string constinArgument6,
                                                                                                                                   const class GALGAS_string constinArgument7,
                                                                                                                                   const class GALGAS_string constinArgument8,
                                                                                                                                   const class GALGAS_string constinArgument9,
                                                                                                                                   const class GALGAS_bool constinArgument10,
                                                                                                                                   class Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument&&?inputArgTypeName?inputArgName?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (class GALGAS_instanceMethodMap & ioArgument0,
                                                                                                                 class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                 const class GALGAS_string constinArgument2,
                                                                                                                 const class GALGAS_string constinArgument3,
                                                                                                                 const class GALGAS_string constinArgument4,
                                                                                                                 const class GALGAS_bool constinArgument5,
                                                                                                                 class Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

