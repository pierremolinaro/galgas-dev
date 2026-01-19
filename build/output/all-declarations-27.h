#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

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
//Filewrapper 'weakClassGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

extern const char * gWrapperFileContent_0_weakClassGenerationTemplate ;

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cRegularFileWrapper gWrapperFile_0_weakClassGenerationTemplate ;

//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_weakClassGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'weakClassGenerationTemplate weakReferenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeHeader_31_ (class Compiler * inCompiler,
                                                                                             const class GGS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_string & in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'weakClassGenerationTemplate weakReferenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                                         const class GGS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const class GGS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const class GGS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const class GGS_string & in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER
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
//Routine 'enterInheritedGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
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
//Routine 'enterInheritedGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                   class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                   const class GGS_string constinArgument2,
                                                                                                                                   const class GGS_string constinArgument3,
                                                                                                                                   const class GGS_string constinArgument4,
                                                                                                                                   const class GGS_bool constinArgument5,
                                                                                                                                   class Compiler * inCompiler
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
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const class GGS_lstring constinArgument0,
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

