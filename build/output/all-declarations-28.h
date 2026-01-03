#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

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

GGS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (class Compiler * inCompiler,
                                                                                      const class GGS_string & in_TYPE_5F_NAME,
                                                                                      const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GGS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                      const class GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                      const class GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                                      const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                                  const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                  const class GGS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                  const class GGS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST,
                                                                                                  const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                                  const class GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'forbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_forbiddenKeysForStruct (class Compiler * inCompiler
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

GGS_string filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (class Compiler * inCompiler,
                                                                                 const class GGS_string & in_TYPE_5F_NAME,
                                                                                 const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const class GGS_typedPropertyList & in_PROPERTY_5F_LIST
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structureGenerationTemplate structTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                             const class GGS_string & in_TYPE_5F_NAME,
                                                                                             const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                             const class GGS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                             const class GGS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                             const class GGS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                             const class GGS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                             const class GGS_bool & in_GENERATE_5F_COMPARISON
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
//Function 'equatableNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_equatableNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'getterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_getterNameForUsefulEntitiesGraph (const class GGS_string & constinArgument0,
                                                             const class GGS_lstring & constinArgument1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody?&?&???????!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                              class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                              const class GGS_analysisContext constinArgument2,
                                                                                              class GGS_unifiedTypeMap & ioArgument3,
                                                                                              const class GGS_formalInputParameterListAST constinArgument4,
                                                                                              const class GGS_typedPropertyList constinArgument5,
                                                                                              const class GGS_string constinArgument6,
                                                                                              const class GGS_semanticInstructionListAST constinArgument7,
                                                                                              const class GGS_lstring constinArgument8,
                                                                                              const class GGS_lstring constinArgument9,
                                                                                              const class GGS_location constinArgument10,
                                                                                              class GGS_formalInputParameterListForGeneration & outArgument11,
                                                                                              class GGS_unifiedTypeMapEntry & outArgument12,
                                                                                              class GGS_string & outArgument13,
                                                                                              class GGS_semanticInstructionListForGeneration & outArgument14,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetter?&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (const class GGS_string constinArgument0,
                                                                      class GGS_stringset & ioArgument1,
                                                                      const class GGS_formalInputParameterListForGeneration constinArgument2,
                                                                      const class GGS_semanticInstructionListForGeneration constinArgument3,
                                                                      const class GGS_string constinArgument4,
                                                                      const class GGS_unifiedTypeMapEntry constinArgument5,
                                                                      const class GGS_string constinArgument6,
                                                                      class GGS_string & outArgument7,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

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
//Function 'methodNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_methodNameForUsefulEntitiesGraph (const class GGS_string & constinArgument0,
                                                             const class GGS_lstring & constinArgument1,
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
//Function 'setterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_setterNameForUsefulEntitiesGraph (const class GGS_string & constinArgument0,
                                                             const class GGS_lstring & constinArgument1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter???&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (const class GGS_string constinArgument0,
                                                                  const class GGS_string constinArgument1,
                                                                  const class GGS_string constinArgument2,
                                                                  class GGS_stringset & ioArgument3,
                                                                  const class GGS_formalParameterListForGeneration constinArgument4,
                                                                  const class GGS_semanticInstructionListForGeneration constinArgument5,
                                                                  class GGS_string & outArgument6,
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
//Routine 'checkGetterSignatures??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (const class GGS_formalInputParameterListForGeneration constinArgument0,
                                                            const class GGS_unifiedTypeMapEntry constinArgument1,
                                                            const class GGS_location constinArgument2,
                                                            const class GGS_functionSignature constinArgument3,
                                                            const class GGS_unifiedTypeMapEntry constinArgument4,
                                                            const class GGS_location constinArgument5,
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
//Function 'generateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool function_generateFewHeaderFiles (class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxDirectedTranslationResultVarName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_syntaxDirectedTranslationResultVarName (class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

