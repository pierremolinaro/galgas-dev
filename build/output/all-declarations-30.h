#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-29.h"

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
//Function 'makeEmbeddedTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeEmbeddedTypeName (const class GGS_string & constinArgument0,
                                                const class GGS_string & constinArgument1,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

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
//Routine 'printPredefinedLexicalActions'
//
//--------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

