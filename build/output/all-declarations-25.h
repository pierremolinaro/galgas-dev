#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
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
//Routine 'enterInheritedGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
                                                                                                                                   class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                                   const class GALGAS_string constinArgument2,
                                                                                                                                   const class GALGAS_string constinArgument3,
                                                                                                                                   const class GALGAS_string constinArgument4,
                                                                                                                                   const class GALGAS_bool constinArgument5,
                                                                                                                                   class Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'elementTypeNameSuffix'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_elementTypeNameSuffix (class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (const class GALGAS_lstring constinArgument0,
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

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (class Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                         const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_bool & in_GENERATE_5F_COMPARISON
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const class GALGAS_lstring constinArgument0,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'forbiddenKeysForMapAndDict'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringset function_forbiddenKeysForMapAndDict (class Compiler * inCompiler
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
                                                                                                     const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                                     const class GALGAS_bool & in_GENERATE_5F_COMPARISON
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
                                                                                                const class GALGAS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                                const class GALGAS_bool & in_GENERATE_5F_COMPARISON
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

