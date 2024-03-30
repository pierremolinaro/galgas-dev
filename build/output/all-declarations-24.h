#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

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
                                                                                  const class GALGAS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
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
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForPackage'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (class Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                     const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                     const class GALGAS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                                     const class GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate genericTypeImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (class Compiler * inCompiler,
                                                                                    const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const class GALGAS_unifiedTypeMapEntry & in_SUPER_5F_TYPE_5F_INDEX
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

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&?getterName?arg1Selector?arg1TypeName?arg1Name?arg2Selector?arg2TypeName?arg2Name?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
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
//Routine 'enterBaseGetterWithArgument&&?getterName?argSelector?argType?argName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
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
//Routine 'enterClassFunctionWithoutArgument&&?name?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (class GALGAS_classFunctionMap & ioArgument0,
                                                                                                   class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                   const class GALGAS_string constinArgument2,
                                                                                                   const class GALGAS_string constinArgument3,
                                                                                                   const class GALGAS_bool constinArgument4,
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
                                                                                         const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
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
                                                                                                     const class GALGAS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST
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
//Function 'compilerCppName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_compilerCppName (class Compiler * inCompiler
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
                                                                                    const class GALGAS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                    const class GALGAS_typedPropertyList & in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST
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
                                                                                                const class GALGAS_typedPropertyList & in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST,
                                                                                                const class GALGAS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                                const class GALGAS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR
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
//Routine 'generateExtensionGetterNew?&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionGetterNew_3F__26__3F__3F__3F__3F__3F__21_ (const class GALGAS_string constinArgument0,
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

