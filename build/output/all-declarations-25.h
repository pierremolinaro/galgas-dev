#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

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
                                                                     const class GALGAS_formalParameterListAST & constinArgument1,
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

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedListTypeAST&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedListTypeAST_26__3F__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                      const class GALGAS_string constinArgument1,
                                                      class GALGAS_lstringlist & ioArgument2,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'insertInUsefulnessEntities&?'
//
//--------------------------------------------------------------------------------------------------

void routine_insertInUsefulnessEntities_26__3F_ (class GALGAS_lstringlist & ioArgument0,
                                                 const class GALGAS_string constinArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2StringListTypeAST&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_StringListTypeAST_26__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                            class GALGAS_lstringlist & ioArgument1,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation_26__3F__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                             const class GALGAS_string constinArgument1,
                                                             class GALGAS_lstringlist & ioArgument2,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType_26__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                  class GALGAS_lstringlist & ioArgument1,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                class GALGAS_lstringlist & ioArgument1,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith2Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (class GALGAS_classFunctionMap & ioArgument0,
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
//Routine 'enterClassMethodWithInputArgument&&?methodName?argType?argName?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (class GALGAS_classMethodMap & ioArgument0,
                                                                                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                const class GALGAS_string constinArgument2,
                                                                                                                const class GALGAS_string constinArgument3,
                                                                                                                const class GALGAS_string constinArgument4,
                                                                                                                const class GALGAS_bool constinArgument5,
                                                                                                                class Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments&&?methodName?argType1?argName1?argType2?argName2?argType3?argName3?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (class GALGAS_classMethodMap & ioArgument0,
                                                                                                                                                                                         class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                                         const class GALGAS_string constinArgument2,
                                                                                                                                                                                         const class GALGAS_string constinArgument3,
                                                                                                                                                                                         const class GALGAS_string constinArgument4,
                                                                                                                                                                                         const class GALGAS_string constinArgument5,
                                                                                                                                                                                         const class GALGAS_string constinArgument6,
                                                                                                                                                                                         const class GALGAS_string constinArgument7,
                                                                                                                                                                                         const class GALGAS_string constinArgument8,
                                                                                                                                                                                         const class GALGAS_bool constinArgument9,
                                                                                                                                                                                         class Compiler * inCompiler
                                                                                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument&&?argTypeName?argName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (class GALGAS_setterMap & ioArgument0,
                                                                                                            class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                            const class GALGAS_string constinArgument2,
                                                                                                            const class GALGAS_string constinArgument3,
                                                                                                            const class GALGAS_string constinArgument4,
                                                                                                            const class GALGAS_bool constinArgument5,
                                                                                                            class Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments&&?arg1TypeName?arg1Name?arg2TypeName?arg2Name?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (class GALGAS_setterMap & ioArgument0,
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
//Routine 'enterBaseFinalGetterWithArgument&&?getterName???returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
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
//Routine 'enterBaseFinalGetterWith2Arguments&&?getterName?????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
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
//Routine 'enterClassFunctionWith3Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?argTypeName3?argName3?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (class GALGAS_classFunctionMap & ioArgument0,
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
//Routine 'enterBaseFinalGetterWith3Arguments&&????????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GALGAS_getterMap & ioArgument0,
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
//Routine 'enterInstanceMethodWithInputArgument&&?inputArgTypeName?inputArgName?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (class GALGAS_instanceMethodMap & ioArgument0,
                                                                                                                 class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                                 const class GALGAS_string constinArgument2,
                                                                                                                 const class GALGAS_string constinArgument3,
                                                                                                                 const class GALGAS_string constinArgument4,
                                                                                                                 const class GALGAS_bool constinArgument5,
                                                                                                                 class Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument&&?classMethod?argName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (class GALGAS_classMethodMap & ioArgument0,
                                                                                                       class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                                       const class GALGAS_string constinArgument2,
                                                                                                       const class GALGAS_string constinArgument3,
                                                                                                       const class GALGAS_bool constinArgument4,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument&?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (class GALGAS_instanceMethodMap & ioArgument0,
                                                                       const class GALGAS_string constinArgument1,
                                                                       const class GALGAS_bool constinArgument2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments&&?outputArgTypeName?outputArgName?inputArgTypeName?inputArgName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (class GALGAS_setterMap & ioArgument0,
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
//Routine 'enterBaseOptionalMethodWithArgument&&?optionalMethodName??'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseOptionalMethodWithArgument_26__26__3F_optionalMethodName_3F__3F_ (class GALGAS_optionalMethodMap & ioArgument0,
                                                                                        class GALGAS_unifiedTypeMap & ioArgument1,
                                                                                        const class GALGAS_string constinArgument2,
                                                                                        const class GALGAS_string constinArgument3,
                                                                                        const class GALGAS_string constinArgument4,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument&??compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (class GALGAS_setterMap & ioArgument0,
                                                                  const class GALGAS_string constinArgument1,
                                                                  const class GALGAS_bool constinArgument2,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'procedureNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_procedureNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool function_generateFewHeaderFiles (class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

