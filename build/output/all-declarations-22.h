#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'templateLexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_templateLexiqueGenerationTemplates ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppHeader'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (class Compiler * inCompiler,
                                                                                const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const class GALGAS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (class Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                        const class GALGAS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER,
                                                                                        const class GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                        const class GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                        const class GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                        const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                        const class GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                        const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaHeaderZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaHeaderZone (class Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const class GALGAS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const class GALGAS_string & in_SUPER_5F_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaImplementationZone (class Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                                  const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                  const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                  const class GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                  const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates swiftCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_swiftCocoaImplementationZone (class Compiler * inCompiler,
                                                                                                   const class GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                                   const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                   const class GALGAS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                   const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                   const class GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                   const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//--------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderZone3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (class Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (class Compiler * inCompiler,
                                                                                            const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (class Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (class Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (class Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftCocoa'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (class Compiler * inCompiler,
                                                                                            const class GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                            const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const class GALGAS_galgasGUIComponentListAST constinArgument0,
                                                                  const class GALGAS_semanticContext constinArgument1,
                                                                  class GALGAS_optionComponentMapForGeneration & outArgument2,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const class GALGAS_galgasGUIComponentListAST_2D_element constinArgument0,
                                                       const class GALGAS_semanticContext constinArgument1,
                                                       class GALGAS_optionComponentMapForGeneration & ioArgument2,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__3F__26__26_ (const class GALGAS_optionComponentMapForGeneration constinArgument0,
                                                                     const class GALGAS_string constinArgument1,
                                                                     const class GALGAS_bool constinArgument2,
                                                                     class GALGAS_stringlist & ioArgument3,
                                                                     class GALGAS_stringset & ioArgument4,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'guiGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates objc_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_objc_5F_gui_5F_implementation (class Compiler * inCompiler,
                                                                                        const class GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                        const class GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swift_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (class Compiler * inCompiler,
                                                                                         const class GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                         const class GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'forbiddenKeysForBoolset'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringset function_forbiddenKeysForBoolset (class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'addExtensions???&&??isClass&&&?acceptSetters'
//
//--------------------------------------------------------------------------------------------------

void routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (const class GALGAS_extensionMethodMapForBuildingContext constinArgument0,
                                                                                            const class GALGAS_extensionGetterMapForBuildingContext constinArgument1,
                                                                                            const class GALGAS_extensionSetterMapForBuildingContext constinArgument2,
                                                                                            class GALGAS_semanticContext & ioArgument3,
                                                                                            class GALGAS_unifiedTypeMap & ioArgument4,
                                                                                            const class GALGAS_lstring constinArgument5,
                                                                                            const class GALGAS_bool constinArgument6,
                                                                                            class GALGAS_getterMap & ioArgument7,
                                                                                            class GALGAS_setterMap & ioArgument8,
                                                                                            class GALGAS_instanceMethodMap & ioArgument9,
                                                                                            const class GALGAS_bool constinArgument10,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'commonGetterMapForAllTypes&!'
//
//--------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes_26__21_ (class GALGAS_unifiedTypeMap & ioArgument0,
                                                 class GALGAS_getterMap & outArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
                                                                                                                                   class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                                   const class GALGAS_string constinArgument2,
                                                                                                                                   const class GALGAS_string constinArgument3,
                                                                                                                                   const class GALGAS_string constinArgument4,
                                                                                                                                   const class GALGAS_bool constinArgument5,
                                                                                                                                   class Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'typeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_typeNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'structGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_structGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (class Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                  const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const class GALGAS_lstringlist & in_SLOT_5F_LIST
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const class GALGAS_lstringlist & in_SLOT_5F_LIST,
                                                                                              const class GALGAS_bigint & in_FULL_5F_SET
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

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (class Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                  const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const class GALGAS_bool & in_IS_5F_CONCRETE,
                                                                                  const class GALGAS_constructorMap & in_CONSTRUCTOR_5F_MAP,
                                                                                  const class GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                  const class GALGAS_setterMap & in_MODIFIER_5F_MAP,
                                                                                  const class GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                  const class GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                                  const class GALGAS_optionalMethodMap & in_OPTIONAL_5F_METHOD_5F_MAP,
                                                                                  const class GALGAS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                  const class GALGAS_operators & in_SUPPORTED_5F_OPERATORS,
                                                                                  const class GALGAS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                                  const class GALGAS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate genericTypeImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (class Compiler * inCompiler,
                                                                                    const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const class GALGAS_unifiedTypeMapEntry & in_SUPER_5F_TYPE_5F_INDEX,
                                                                                    const class GALGAS_operators & in_SUPPORTED_5F_OPERATORS
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate externTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (class Compiler * inCompiler,
                                                                               const class GALGAS_string & in_TYPE_5F_NAME,
                                                                               const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const class GALGAS_string & in_PRE_5F_DECLARATION,
                                                                               const class GALGAS_string & in_CODE
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (class Compiler * inCompiler,
                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                          const class GALGAS_unifiedTypeMapEntry & in_TYPE,
                                                                                          const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_unifiedTypeMapEntry & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                          const class GALGAS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate listmapTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (class Compiler * inCompiler,
                                                                                const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                const class GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate listmapTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const class GALGAS_string & in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER,
                                                                                            const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (class Compiler * inCompiler,
                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                            const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeHeader2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (class Compiler * inCompiler,
                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                        const class GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_mapRemoveMethodListAST & in_REMOVE_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate dictTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (class Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate dictTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                         const class GALGAS_string & in_KEY_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (class Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                   const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                   const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                   const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                   const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (class Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                           const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                           const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                           const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                           const class GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                           const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                           const class GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                           const class GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (class Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                           const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                           const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                           const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                           const class GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                           const class GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                               const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                               const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                               const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                               const class GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                               const class GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                               const class GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (class Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                       const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                       const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                       const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (class Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                               const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                               const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                               const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                               const class GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                               const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                               const class GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                               const class GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (class Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                               const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                               const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                               const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                               const class GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                               const class GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                                   const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                   const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                   const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                   const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                   const class GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                                   const class GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                                   const class GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate weakReferenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (class Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                           const class GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                           const class GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate weakReferenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                                       const class GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const class GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const class GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const class GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                       const class GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                                       const class GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate typeAliasTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_typeAliasTypeHeader_31_ (class Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_ALIAS_5F_TYPE_5F_IDENTIFIER,
                                                                                  const class GALGAS_string & in_REFERENCED_5F_TYPE_5F_IDENTIFIER
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_generateClassGetterDeclaration (const class GALGAS_lstring & constinArgument0,
                                                             const class GALGAS_functionSignature & constinArgument1,
                                                             const class GALGAS_bool & constinArgument2,
                                                             const class GALGAS_unifiedTypeMapEntry & constinArgument3,
                                                             const class GALGAS_methodQualifier & constinArgument4,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_generateClassInstanceMethodDeclaration (const class GALGAS_lstring & constinArgument0,
                                                                     const class GALGAS_formalParameterSignature & constinArgument1,
                                                                     const class GALGAS_bool & constinArgument2,
                                                                     const class GALGAS_methodQualifier & constinArgument3,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
                                                                                                                              class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                              const class GALGAS_string constinArgument2,
                                                                                                                              const class GALGAS_string constinArgument3,
                                                                                                                              const class GALGAS_string constinArgument4,
                                                                                                                              const class GALGAS_bool constinArgument5,
                                                                                                                              class Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (class Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (class Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_LOCATION_ARGS) ;

