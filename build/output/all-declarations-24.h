#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters (const class GALGAS_lstring constinArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'forbiddenKeysForMapAndDict'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_forbiddenKeysForMapAndDict (class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWithArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWithArgument (class GALGAS_constructorMap & ioArgument0,
                                           class GALGAS_unifiedTypeMap & ioArgument1,
                                           const class GALGAS_string constinArgument2,
                                           const class GALGAS_string constinArgument3,
                                           const class GALGAS_string constinArgument4,
                                           const class GALGAS_string constinArgument5,
                                           const class GALGAS_bool constinArgument6,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
                                                    class GALGAS_unifiedTypeMap & ioArgument1,
                                                    const class GALGAS_string constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_string constinArgument4,
                                                    const class GALGAS_string constinArgument5,
                                                    const class GALGAS_string constinArgument6,
                                                    const class GALGAS_string constinArgument7,
                                                    const class GALGAS_bool constinArgument8,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'sortedListGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_sortedListGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                                     const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                     const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                     const class GALGAS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST
                                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'selectorFeatureForNewConstructor'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_selectorFeatureForNewConstructor (class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'forbiddenKeysForStruct'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_forbiddenKeysForStruct (class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'boolsetGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_boolsetGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'boolsetGenerationTemplate structTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_boolsetGenerationTemplate_structTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                  const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const class GALGAS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                  const class GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'boolsetGenerationTemplate structTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_boolsetGenerationTemplate_structTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const class GALGAS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                              const class GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticComponentGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_semanticComponentGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (class C_Compiler * inCompiler,
                                                                                                          const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                          const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const class GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (class C_Compiler * inCompiler,
                                                                                                             const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                             const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                             const class GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (class C_Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                  const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const class GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (class C_Compiler * inCompiler,
                                                                                                     const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                     const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const class GALGAS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                     const class GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (class C_Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const class GALGAS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                               const class GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (class C_Compiler * inCompiler,
                                                                                                          const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                          const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (class C_Compiler * inCompiler,
                                                                                                             const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                             const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (class C_Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                  const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionsetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (class C_Compiler * inCompiler,
                                                                                                     const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                     const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const class GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionSetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (class C_Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                               const class GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (class C_Compiler * inCompiler,
                                                                                                          const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                          const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (class C_Compiler * inCompiler,
                                                                                                             const class GALGAS_unifiedTypeMapEntry & in_RECEIVER_5F_TYPE,
                                                                                                             const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                             const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (class C_Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                  const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (class C_Compiler * inCompiler,
                                                                                                     const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                     const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (class C_Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (class C_Compiler * inCompiler,
                                                                                              const class GALGAS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_string & in_FILEWRAPPER_5F_NAME
                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (class C_Compiler * inCompiler,
                                                                                                 const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                 const class GALGAS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (class C_Compiler * inCompiler,
                                                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                            const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                            const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (class C_Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const class GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (class C_Compiler * inCompiler,
                                                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                            const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (class C_Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterAsFunctionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (class C_Compiler * inCompiler,
                                                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                            const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (class C_Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                           const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (class C_Compiler * inCompiler,
                                                                                              const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                              const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                              const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                              const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                          const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                             const class GALGAS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (class C_Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                                  const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                                  const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (class C_Compiler * inCompiler,
                                                                                                      const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const class GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (class C_Compiler * inCompiler,
                                                                                                         const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                         const class GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                         const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const class GALGAS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                         const class GALGAS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                         const class GALGAS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'getterNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_getterNameForUsefulEntitiesGraph (const class GALGAS_string & constinArgument0,
                                                                const class GALGAS_lstring & constinArgument1,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody (const class GALGAS_lstring constinArgument0,
                                  class GALGAS_usefulEntitiesGraph & ioArgument1,
                                  const class GALGAS_analysisContext constinArgument2,
                                  const class GALGAS_formalInputParameterListAST constinArgument3,
                                  const class GALGAS_typedPropertyList constinArgument4,
                                  const class GALGAS_string constinArgument5,
                                  const class GALGAS_semanticInstructionListAST constinArgument6,
                                  const class GALGAS_lstring constinArgument7,
                                  const class GALGAS_lstring constinArgument8,
                                  const class GALGAS_location constinArgument9,
                                  class GALGAS_formalInputParameterListForGeneration & outArgument10,
                                  class GALGAS_unifiedTypeMapEntry & outArgument11,
                                  class GALGAS_string & outArgument12,
                                  class GALGAS_semanticInstructionListForGeneration & outArgument13,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetterNew'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionGetterNew (const class GALGAS_string constinArgument0,
                                         class GALGAS_stringset & ioArgument1,
                                         const class GALGAS_formalInputParameterListForGeneration constinArgument2,
                                         const class GALGAS_semanticInstructionListForGeneration constinArgument3,
                                         const class GALGAS_string constinArgument4,
                                         const class GALGAS_unifiedTypeMapEntry constinArgument5,
                                         const class GALGAS_string constinArgument6,
                                         class GALGAS_string & outArgument7,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateFunction (const class GALGAS_string constinArgument0,
                               class GALGAS_stringset & ioArgument1,
                               const class GALGAS_formalInputParameterListForGeneration constinArgument2,
                               const class GALGAS_semanticInstructionListForGeneration constinArgument3,
                               const class GALGAS_string constinArgument4,
                               const class GALGAS_unifiedTypeMapEntry constinArgument5,
                               const class GALGAS_string constinArgument6,
                               const class GALGAS_bool constinArgument7,
                               const class GALGAS_bool constinArgument8,
                               class GALGAS_string & outArgument9,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'methodNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_methodNameForUsefulEntitiesGraph (const class GALGAS_string & constinArgument0,
                                                                const class GALGAS_lstring & constinArgument1,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody (const class GALGAS_lstring constinArgument0,
                                 class GALGAS_usefulEntitiesGraph & ioArgument1,
                                 const class GALGAS_analysisContext constinArgument2,
                                 const class GALGAS_formalParameterListAST constinArgument3,
                                 const class GALGAS_typedPropertyList constinArgument4,
                                 const class GALGAS_typedPropertyList constinArgument5,
                                 const class GALGAS_semanticInstructionListAST constinArgument6,
                                 const class GALGAS_location constinArgument7,
                                 class GALGAS_semanticInstructionListForGeneration & outArgument8,
                                 class GALGAS_formalParameterListForGeneration & outArgument9,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethodNew'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionMethodNew (const class GALGAS_unifiedTypeMapEntry constinArgument0,
                                         class GALGAS_stringset & ioArgument1,
                                         const class GALGAS_string constinArgument2,
                                         const class GALGAS_formalParameterListForGeneration constinArgument3,
                                         const class GALGAS_semanticInstructionListForGeneration constinArgument4,
                                         class GALGAS_string & outArgument5,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateProcedure (const class GALGAS_bool constinArgument0,
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
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'setterNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_setterNameForUsefulEntitiesGraph (const class GALGAS_string & constinArgument0,
                                                                const class GALGAS_lstring & constinArgument1,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter (const class GALGAS_string constinArgument0,
                                      const class GALGAS_string constinArgument1,
                                      const class GALGAS_string constinArgument2,
                                      class GALGAS_stringset & ioArgument3,
                                      const class GALGAS_formalParameterListForGeneration constinArgument4,
                                      const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                      class GALGAS_string & outArgument6,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures (const class GALGAS_formalInputParameterListForGeneration constinArgument0,
                                    const class GALGAS_unifiedTypeMapEntry constinArgument1,
                                    const class GALGAS_location constinArgument2,
                                    const class GALGAS_functionSignature constinArgument3,
                                    const class GALGAS_unifiedTypeMapEntry constinArgument4,
                                    const class GALGAS_location constinArgument5,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature (const class GALGAS_semanticContext constinArgument0,
                                                const class GALGAS_formalParameterListAST constinArgument1,
                                                class GALGAS_localVarManager & ioArgument2,
                                                class GALGAS_formalParameterListForGeneration & outArgument3,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures (const class GALGAS_formalParameterListForGeneration constinArgument0,
                                    const class GALGAS_location constinArgument1,
                                    const class GALGAS_formalParameterSignature constinArgument2,
                                    const class GALGAS_location constinArgument3,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'generateFewHeaderFiles'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool function_generateFewHeaderFiles (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_32_Arguments (class GALGAS_constructorMap & ioArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                const class GALGAS_string constinArgument5,
                                                const class GALGAS_string constinArgument6,
                                                const class GALGAS_string constinArgument7,
                                                const class GALGAS_bool constinArgument8,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith3Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_33_Arguments (class GALGAS_constructorMap & ioArgument0,
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
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith4Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_34_Arguments (class GALGAS_constructorMap & ioArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                const class GALGAS_string constinArgument5,
                                                const class GALGAS_string constinArgument6,
                                                const class GALGAS_string constinArgument7,
                                                const class GALGAS_string constinArgument8,
                                                const class GALGAS_string constinArgument9,
                                                const class GALGAS_string constinArgument10,
                                                const class GALGAS_string constinArgument11,
                                                const class GALGAS_string constinArgument12,
                                                const class GALGAS_string constinArgument13,
                                                const class GALGAS_string constinArgument14,
                                                const class GALGAS_string constinArgument15,
                                                const class GALGAS_bool constinArgument16,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument (class GALGAS_getterMap & ioArgument0,
                                               class GALGAS_unifiedTypeMap & ioArgument1,
                                               const class GALGAS_string constinArgument2,
                                               const class GALGAS_string constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               const class GALGAS_string constinArgument5,
                                               const class GALGAS_bool constinArgument6,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
                                                    class GALGAS_unifiedTypeMap & ioArgument1,
                                                    const class GALGAS_string constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_string constinArgument4,
                                                    const class GALGAS_string constinArgument5,
                                                    const class GALGAS_string constinArgument6,
                                                    const class GALGAS_string constinArgument7,
                                                    const class GALGAS_bool constinArgument8,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith3Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments (class GALGAS_getterMap & ioArgument0,
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
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

