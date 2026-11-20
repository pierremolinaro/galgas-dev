#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-19.h"

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'programFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_programFileGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'programFileGenerationTemplate programFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (Compiler * inCompiler,
                                                                                        const class GGS_string & in_COMPONENT_5F_NAME,
                                                                                        const class GGS__5B_string_5D_ & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                        const class GGS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                        const class GGS__5B_programRuleAST_5D_ & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                        const class GGS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileBeforeClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (class GGS__5B_lstring_5D_ & ioArgument0,
                                                                    class GGS_usefulEntitiesGraph & ioArgument1,
                                                                    const class GGS_analysisContext constinArgument2,
                                                                    class GGS_unifiedTypeMap & ioArgument3,
                                                                    const class GGS__5B_prologueEpilogueAST_5D_ constinArgument4,
                                                                    class GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument5,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (class GGS__5B_lstring_5D_ & ioArgument0,
                                                                    class GGS_usefulEntitiesGraph & ioArgument1,
                                                                    const class GGS_analysisContext constinArgument2,
                                                                    class GGS_unifiedTypeMap & ioArgument3,
                                                                    const class GGS__5B_programRuleAST_5D_ constinArgument4,
                                                                    class GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument5,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAfterClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (class GGS__5B_lstring_5D_ & ioArgument0,
                                                                   class GGS_usefulEntitiesGraph & ioArgument1,
                                                                   const class GGS_analysisContext constinArgument2,
                                                                   class GGS_unifiedTypeMap & ioArgument3,
                                                                   const class GGS__5B_prologueEpilogueAST_5D_ constinArgument4,
                                                                   class GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument5,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator?operatorIsHandled??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (const class GGS_bool constinArgument0,
                                                                       const class GGS_string constinArgument1,
                                                                       const class GGS_location constinArgument2,
                                                                       class GGS_semanticExpressionForGeneration & ioArgument3,
                                                                       class GGS_semanticExpressionForGeneration & ioArgument4,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_arrayTypeGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayTypeGenerationTemplate arrayTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (Compiler * inCompiler,
                                                                                const class GGS_string & in_TYPE_5F_NAME,
                                                                                const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayTypeGenerationTemplate arrayTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (Compiler * inCompiler,
                                                                                            const class GGS_string & in_TYPE_5F_NAME,
                                                                                            const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                            const class GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeDictionaryTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeDictionaryTypeName (const class GGS_string & constinArgument0,
                                                  const class GGS_string & constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'dictionaryGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_dictionaryGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictionaryGenerationTemplate dictTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_dictionaryGenerationTemplate_dictTypeHeader_31_ (Compiler * inCompiler,
                                                                                const class GGS_string & in_TYPE_5F_NAME,
                                                                                const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                const class GGS__5B_enumerationDescriptor_5D_ & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                const class GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                                const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictionaryGenerationTemplate dictTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_dictionaryGenerationTemplate_dictTypeSpecificImplementation (Compiler * inCompiler,
                                                                                            const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const class GGS__5B_enumerationDescriptor_5D_ & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                            const class GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                                            const class GGS_bool & in_GENERATE_5F_COMPARISON,
                                                                                            const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                            const class GGS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'kForbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_kForbiddenKeysForStruct (Compiler * inCompiler
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

GGS_string filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (Compiler * inCompiler,
                                                                                 const class GGS_string & in_TYPE_5F_NAME,
                                                                                 const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const class GGS__5B_typedProperty_5D_ & in_PROPERTY_5F_LIST
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structureGenerationTemplate structTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (Compiler * inCompiler,
                                                                                             const class GGS_string & in_TYPE_5F_NAME,
                                                                                             const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS__5B_typedProperty_5D_ & in_PROPERTY_5F_LIST,
                                                                                             const class GGS__5B_typedProperty_5D_ & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                             const class GGS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                             const class GGS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                             const class GGS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                             const class GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'weakClassGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_weakClassGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'weakClassGenerationTemplate weakReferenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeHeader_31_ (Compiler * inCompiler,
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

GGS_string filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                         const class GGS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const class GGS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const class GGS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const class GGS_string & in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeEmbeddedTypeName (const class GGS_string & constinArgument0,
                                                const class GGS_string & constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeOptionalTypeName (const class GGS_string & constinArgument0,
                                                Compiler * inCompiler
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

GGS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (Compiler * inCompiler,
                                                                          const class GGS_string & in_TYPE_5F_NAME,
                                                                          const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                          const class GGS__5B_enumConstantForGeneration_5D_ & in_CONSTANT_5F_LIST,
                                                                          const class GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (Compiler * inCompiler,
                                                                                      const class GGS_string & in_TYPE_5F_NAME,
                                                                                      const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GGS__5B_enumConstantForGeneration_5D_ & in_CONSTANT_5F_LIST,
                                                                                      const class GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES,
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
//Filewrapper template 'structGenerationTemplate optionSetTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structGenerationTemplate_optionSetTypeHeader_31_ (Compiler * inCompiler,
                                                                                 const class GGS_string & in_TYPE_5F_NAME,
                                                                                 const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const class GGS__5B_lstring_5D_ & in_SLOT_5F_LIST
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate optionSetTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structGenerationTemplate_optionSetTypeSpecificImplementation (Compiler * inCompiler,
                                                                                             const class GGS_string & in_TYPE_5F_NAME,
                                                                                             const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const class GGS__5B_lstring_5D_ & in_SLOT_5F_LIST,
                                                                                             const class GGS_bigint & in_FULL_5F_SET,
                                                                                             const class GGS_bool & in_EQUATABLE
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (const class GGS_lstring constinArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'graphGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_graphGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'graphGenerationTemplate graphTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_graphGenerationTemplate_graphTypeHeader_31_ (Compiler * inCompiler,
                                                                            const class GGS_string & in_TYPE_5F_NAME,
                                                                            const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const class GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ARRAY_5F_TYPE,
                                                                            const class GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ELEMENT_5F_TYPE,
                                                                            const class GGS_unifiedTypeMapEntry & in_LSTRING_5F_ARRAY_5F_TYPE,
                                                                            const class GGS_unifiedTypeMapEntry & in_STRING_5F_ARRAY_5F_TYPE
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'graphGenerationTemplate graphTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_graphGenerationTemplate_graphTypeSpecificImplementation (Compiler * inCompiler,
                                                                                        const class GGS_unifiedTypeMapEntry & in_TYPE,
                                                                                        const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const class GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ARRAY_5F_TYPE,
                                                                                        const class GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ELEMENT_5F_TYPE,
                                                                                        const class GGS__5B_graphInsertModifier_5D_ & in_INSERT_5F_MODIFIER_5F_LIST,
                                                                                        const class GGS_unifiedTypeMapEntry & in_LSTRING_5F_ARRAY_5F_TYPE,
                                                                                        const class GGS_unifiedTypeMapEntry & in_STRING_5F_ARRAY_5F_TYPE
                                                                                        COMMA_LOCATION_ARGS) ;

