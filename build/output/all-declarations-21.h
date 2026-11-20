#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-20.h"

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

GGS_string filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeHeader_31_ (Compiler * inCompiler,
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

GGS_string filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeSpecificImplementation (Compiler * inCompiler,
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
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeEmbeddedElementTypeLName (const class GGS_lstring & constinArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeWeakTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeWeakTypeName (const class GGS_string & constinArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'kForbiddenKeysForMap'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_kForbiddenKeysForMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const class GGS_lstring constinArgument0,
                                                 Compiler * inCompiler
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

GGS_string filewrapperTemplate_mapGenerationTemplate_mapTypeHeader_31_ (Compiler * inCompiler,
                                                                        const class GGS_string & in_TYPE_5F_NAME,
                                                                        const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                        const class GGS__5B_typedProperty_5D_ & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                        const class GGS__5B_mapAccessorAST_5D_ & in_SEARCH_5F_METHOD_5F_LIST,
                                                                        const class GGS__5B_enumerationDescriptor_5D_ & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                        const class GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                        const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                        const class GGS_bool & in_GENERATE_5F_COMPARISON
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapGenerationTemplate mapTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_mapGenerationTemplate_mapTypeSpecificImplementation (Compiler * inCompiler,
                                                                                    const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const class GGS__5B_typedProperty_5D_ & in_PROPERTY_5F_LIST,
                                                                                    const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                    const class GGS__5B_insertSetterAST_5D_ & in_INSERT_5F_SETTER_5F_LIST,
                                                                                    const class GGS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                    const class GGS__5B_mapAccessorAST_5D_ & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                    const class GGS__5B_mapAccessorAST_5D_ & in_SEARCH_5F_SUBCRIPT_5F_LIST,
                                                                                    const class GGS__5B_mapAccessorAST_5D_ & in_REMOVE_5F_SETTER_5F_LIST,
                                                                                    const class GGS__5B_mapAccessorAST_5D_ & in_REPLACE_5F_SETTER_5F_LIST,
                                                                                    const class GGS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE,
                                                                                    const class GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'sortedArrayTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_sortedArrayTypeGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedArrayTypeGenerationTemplate arrayTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_sortedArrayTypeGenerationTemplate_arrayTypeHeader_31_ (Compiler * inCompiler,
                                                                                      const class GGS_string & in_TYPE_5F_NAME,
                                                                                      const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedArrayTypeGenerationTemplate arrayTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_sortedArrayTypeGenerationTemplate_arrayTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                  const class GGS_string & in_TYPE_5F_NAME,
                                                                                                  const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                  const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                                  const class GGS_bool & in_GENERATE_5F_COMPARISON,
                                                                                                  const class GGS__5B_sortedArraySortProperty_5D_ & in_SORT_5F_PROPERTY_5F_ARRAY
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

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                     const class GGS_string & in_TYPE_5F_NAME,
                                                                                     const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                     const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                     const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                     const class GGS__5B_typedProperty_5D_ & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_31_ (Compiler * inCompiler,
                                                                                             const class GGS_string & in_TYPE_5F_NAME,
                                                                                             const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS__5B_typedProperty_5D_ & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                             const class GGS__5B_typedProperty_5D_ & in_ALL_5F_PROPERTY_5F_LIST,
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

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_32_ (Compiler * inCompiler,
                                                                                             const class GGS_string & in_TYPE_5F_NAME,
                                                                                             const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS__5B_typedProperty_5D_ & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                             const class GGS__5B_typedProperty_5D_ & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                             const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                             const class GGS__5B_typedProperty_5D_ & in_INITIALIZER_5F_ARGUMENT_5F_LIST
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                 const class GGS_string & in_TYPE_5F_NAME,
                                                                                                 const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                 const class GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                 const class GGS__5B_typedProperty_5D_ & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                 const class GGS__5B_typedProperty_5D_ & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                                 const class GGS__5B_typedProperty_5D_ & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                                 const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                                 const class GGS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                                 const class GGS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                                 const class GGS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                                 const class GGS__5B_typedProperty_5D_ & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                 const class GGS__5B_typedProperty_5D_ & in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                 const class GGS_initializerMap & in_INITIALIZER_5F_MAP,
                                                                                                 const class GGS_bool & in_CLONABLE
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_generateClassGetterDeclaration (const class GGS_lstring & constinArgument0,
                                                          const class GGS__5B_functionSignatureElement_5D_ & constinArgument1,
                                                          const class GGS_bool & constinArgument2,
                                                          const class GGS_unifiedTypeMapEntry & constinArgument3,
                                                          const class GGS_methodQualifier & constinArgument4,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_generateClassInstanceMethodDeclaration (const class GGS_lstring & constinArgument0,
                                                                  const class GGS__5B_formalParameterSignatureElement_5D_ & constinArgument1,
                                                                  const class GGS_bool & constinArgument2,
                                                                  const class GGS_methodQualifier & constinArgument3,
                                                                  Compiler * inCompiler
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

GGS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (Compiler * inCompiler,
                                                                               const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                               const class GGS_commandLineOptionSortedArray & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const class GGS_commandLineOptionSortedArray & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const class GGS_commandLineOptionSortedArray & in_STRING_5F_OPTION_5F_SORTED_5F_LIST
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (Compiler * inCompiler,
                                                                                         const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                         const class GGS_commandLineOptionSortedArray & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const class GGS_commandLineOptionSortedArray & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const class GGS_commandLineOptionSortedArray & in_STRING_5F_OPTION_5F_SORTED_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'projectCreationFileWrapper'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_1_projectCreationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_2_projectCreationFileWrapper ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (Compiler * inCompiler,
                                                                            const class GGS_string & in_PROJECT_5F_NAME
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (Compiler * inCompiler,
                                                                                const class GGS_string & in_PROJECT_5F_NAME
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (Compiler * inCompiler,
                                                                             const class GGS_string & in_PROJECT_5F_NAME
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation_3F_ (const class GGS_string constinArgument0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation_3F_ (const class GGS_string constinArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories????!!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (const class GGS_string constinArgument0,
                                                                              const class GGS_string constinArgument1,
                                                                              const class GGS_wrapperExtensionMap constinArgument2,
                                                                              const class GGS_wrapperExtensionMap constinArgument3,
                                                                              class GGS_wrapperFileMap & outArgument4,
                                                                              class GGS_wrapperDirectoryMap & outArgument5,
                                                                              class GGS_uint & ioArgument6,
                                                                              class GGS_uint & ioArgument7,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const class GGS_lstring constinArgument0,
                                                                      class GGS_usefulEntitiesGraph & ioArgument1,
                                                                      const class GGS_templateAnalysisContext constinArgument2,
                                                                      class GGS_unifiedTypeMap & ioArgument3,
                                                                      const class GGS__5B_templateInstructionAST_5D_ constinArgument4,
                                                                      class GGS__5B_templateInstructionForGeneration_5D_ & ioArgument5,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

