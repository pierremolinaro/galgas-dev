#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeOptionalTypeName (const class GGS_string & constinArgument0,
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

GGS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (class Compiler * inCompiler,
                                                                          const class GGS_string & in_TYPE_5F_NAME,
                                                                          const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                          const class GGS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                          const class GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                      const class GGS_string & in_TYPE_5F_NAME,
                                                                                      const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GGS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                      const class GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES,
                                                                                      const class GGS_bool & in_GENERATE_5F_COMPARISON
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
//Filewrapper 'optionalTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_optionalTypeGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionalTypeGenerationTemplate optionalTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeHeader_31_ (class Compiler * inCompiler,
                                                                                      const class GGS_string & in_TYPE_5F_NAME,
                                                                                      const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GGS_string & in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER,
                                                                                      const class GGS_string & in_WEAK_5F_TYPE_5F_IDENTIFIER
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionalTypeGenerationTemplate optionalTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                                  const class GGS_string & in_TYPE_5F_NAME,
                                                                                                  const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                  const class GGS_string & in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER,
                                                                                                  const class GGS_bool & in_GENERATE_5F_COMPARISON,
                                                                                                  const class GGS_string & in_WEAK_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeEmbeddedElementTypeName (const class GGS_string & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeArrayTypeName (const class GGS_string & constinArgument0,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeWeakTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeWeakTypeName (const class GGS_string & constinArgument0,
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

GGS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (class Compiler * inCompiler,
                                                                               const class GGS_string & in_TYPE_5F_NAME,
                                                                               const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const class GGS_lstringlist & in_SLOT_5F_LIST
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                           const class GGS_string & in_TYPE_5F_NAME,
                                                                                           const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                           const class GGS_lstringlist & in_SLOT_5F_LIST,
                                                                                           const class GGS_bigint & in_FULL_5F_SET,
                                                                                           const class GGS_bool & in_EQUATABLE
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

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_generateClassGetterDeclaration (const class GGS_lstring & constinArgument0,
                                                          const class GGS_functionSignature & constinArgument1,
                                                          const class GGS_bool & constinArgument2,
                                                          const class GGS_unifiedTypeMapEntry & constinArgument3,
                                                          const class GGS_methodQualifier & constinArgument4,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_generateClassInstanceMethodDeclaration (const class GGS_lstring & constinArgument0,
                                                                  const class GGS_formalParameterSignature & constinArgument1,
                                                                  const class GGS_bool & constinArgument2,
                                                                  const class GGS_methodQualifier & constinArgument3,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedListTypeAST&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedListTypeAST_26__3F__26_ (class GGS_semanticDeclarationListAST & ioArgument0,
                                                      const class GGS_string constinArgument1,
                                                      class GGS_lstringlist & ioArgument2,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'insertInUsefulnessEntities&?'
//
//--------------------------------------------------------------------------------------------------

void routine_insertInUsefulnessEntities_26__3F_ (class GGS_lstringlist & ioArgument0,
                                                 const class GGS_string constinArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2StringListTypeAST&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_StringListTypeAST_26__26_ (class GGS_semanticDeclarationListAST & ioArgument0,
                                                            class GGS_lstringlist & ioArgument1,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation_26__3F__26_ (class GGS_semanticDeclarationListAST & ioArgument0,
                                                             const class GGS_string constinArgument1,
                                                             class GGS_lstringlist & ioArgument2,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType_26__26_ (class GGS_semanticDeclarationListAST & ioArgument0,
                                                  class GGS_lstringlist & ioArgument1,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'insertPredefinedType&&?'
//
//--------------------------------------------------------------------------------------------------

void routine_insertPredefinedType_26__26__3F_ (class GGS_semanticDeclarationListAST & ioArgument0,
                                               class GGS_lstringlist & ioArgument1,
                                               const class GGS_predefinedTypeAST constinArgument2,
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

