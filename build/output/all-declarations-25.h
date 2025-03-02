#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

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

GGS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (class Compiler * inCompiler,
                                                                               const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                               const class GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const class GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const class GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const class GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (class Compiler * inCompiler,
                                                                                         const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                         const class GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const class GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const class GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const class GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (class Compiler * inCompiler,
                                                                                    const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (class Compiler * inCompiler,
                                                                                    const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (class Compiler * inCompiler,
                                                                                    const class GGS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                    const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                    const class GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                    const class GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                    const class GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                    const class GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftCocoa'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (class Compiler * inCompiler,
                                                                                         const class GGS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                         const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                         const class GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const class GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const class GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const class GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const class GGS_galgasGUIComponentListAST constinArgument0,
                                                                  const class GGS_semanticContext constinArgument1,
                                                                  class GGS_optionComponentMapForGeneration & outArgument2,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const class GGS_galgasGUIComponentListAST_2E_element constinArgument0,
                                                       const class GGS_semanticContext constinArgument1,
                                                       class GGS_optionComponentMapForGeneration & ioArgument2,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3???&objc&swift'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__3F__26_objc_26_swift (const class GGS_optionComponentMapForGeneration constinArgument0,
                                                                              const class GGS_string constinArgument1,
                                                                              const class GGS_bool constinArgument2,
                                                                              class GGS_stringlist & ioArgument3,
                                                                              class GGS_stringlist & ioArgument4,
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

GGS_string filewrapperTemplate_guiGenerationTemplates_objc_5F_gui_5F_implementation (class Compiler * inCompiler,
                                                                                     const class GGS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                     const class GGS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swift_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (class Compiler * inCompiler,
                                                                                      const class GGS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                      const class GGS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'addExtensions????&&??isClass&&&&?acceptSetters'
//
//--------------------------------------------------------------------------------------------------

void routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (const class GGS_extensionInitializerForBuildingContext constinArgument0,
                                                                                                    const class GGS_extensionMethodMapForBuildingContext constinArgument1,
                                                                                                    const class GGS_extensionGetterMapForBuildingContext constinArgument2,
                                                                                                    const class GGS_extensionSetterMapForBuildingContext constinArgument3,
                                                                                                    class GGS_semanticContext & ioArgument4,
                                                                                                    class GGS_unifiedTypeMap & ioArgument5,
                                                                                                    const class GGS_lstring constinArgument6,
                                                                                                    const class GGS_bool constinArgument7,
                                                                                                    class GGS_initializerMap & ioArgument8,
                                                                                                    class GGS_getterMap & ioArgument9,
                                                                                                    class GGS_setterMap & ioArgument10,
                                                                                                    class GGS_instanceMethodMap & ioArgument11,
                                                                                                    const class GGS_bool constinArgument12,
                                                                                                    class Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'initializerNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_initializerNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                                  const class GGS_string & constinArgument1,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'typeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_typeNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
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
//Routine 'appendPredefinedTypesASTs&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26__26_ (class GGS_semanticDeclarationListAST & ioArgument0,
                                                class GGS_lstringlist & ioArgument1,
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

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithArgument&&?name?argTypeName?argName?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (class GGS_classFunctionMap & ioArgument0,
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
//Routine 'enterClassFunctionWith2Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (class GGS_classFunctionMap & ioArgument0,
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
//Routine 'enterClassFunctionWithoutArgument&&?name?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (class GGS_classFunctionMap & ioArgument0,
                                                                                                   class GGS_unifiedTypeMap & ioArgument1,
                                                                                                   const class GGS_string constinArgument2,
                                                                                                   const class GGS_string constinArgument3,
                                                                                                   const class GGS_bool constinArgument4,
                                                                                                   class Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument&&?methodName?argType?argName?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (class GGS_classMethodMap & ioArgument0,
                                                                                                                class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                const class GGS_string constinArgument2,
                                                                                                                const class GGS_string constinArgument3,
                                                                                                                const class GGS_string constinArgument4,
                                                                                                                const class GGS_bool constinArgument5,
                                                                                                                class Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments&&?methodName?argType1?argName1?argType2?argName2?argType3?argName3?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (class GGS_classMethodMap & ioArgument0,
                                                                                                                                                                                         class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                                         const class GGS_string constinArgument2,
                                                                                                                                                                                         const class GGS_string constinArgument3,
                                                                                                                                                                                         const class GGS_string constinArgument4,
                                                                                                                                                                                         const class GGS_string constinArgument5,
                                                                                                                                                                                         const class GGS_string constinArgument6,
                                                                                                                                                                                         const class GGS_string constinArgument7,
                                                                                                                                                                                         const class GGS_string constinArgument8,
                                                                                                                                                                                         const class GGS_bool constinArgument9,
                                                                                                                                                                                         class Compiler * inCompiler
                                                                                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument&&?argTypeName?argName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (class GGS_setterMap & ioArgument0,
                                                                                                            class GGS_unifiedTypeMap & ioArgument1,
                                                                                                            const class GGS_string constinArgument2,
                                                                                                            const class GGS_string constinArgument3,
                                                                                                            const class GGS_string constinArgument4,
                                                                                                            const class GGS_bool constinArgument5,
                                                                                                            class Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments&&?arg1TypeName?arg1Name?arg2TypeName?arg2Name?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (class GGS_setterMap & ioArgument0,
                                                                                                                                                           class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                           const class GGS_string constinArgument2,
                                                                                                                                                           const class GGS_string constinArgument3,
                                                                                                                                                           const class GGS_string constinArgument4,
                                                                                                                                                           const class GGS_string constinArgument5,
                                                                                                                                                           const class GGS_string constinArgument6,
                                                                                                                                                           const class GGS_bool constinArgument7,
                                                                                                                                                           class Compiler * inCompiler
                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'commonGetterMapForAllTypes&!'
//
//--------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes_26__21_ (class GGS_unifiedTypeMap & ioArgument0,
                                                 class GGS_getterMap & outArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument&&?getterName???returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
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
//Routine 'enterBaseFinalGetterWith2Arguments&&?getterName?????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
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
//Routine 'enterBaseFinalGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                   class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                   const class GGS_string constinArgument2,
                                                                                                                                   const class GGS_string constinArgument3,
                                                                                                                                   const class GGS_string constinArgument4,
                                                                                                                                   const class GGS_bool constinArgument5,
                                                                                                                                   class Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith3Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?argTypeName3?argName3?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (class GGS_classFunctionMap & ioArgument0,
                                                                                                                                                                                                           class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                                                           const class GGS_string constinArgument2,
                                                                                                                                                                                                           const class GGS_string constinArgument3,
                                                                                                                                                                                                           const class GGS_string constinArgument4,
                                                                                                                                                                                                           const class GGS_string constinArgument5,
                                                                                                                                                                                                           const class GGS_string constinArgument6,
                                                                                                                                                                                                           const class GGS_string constinArgument7,
                                                                                                                                                                                                           const class GGS_string constinArgument8,
                                                                                                                                                                                                           const class GGS_string constinArgument9,
                                                                                                                                                                                                           const class GGS_bool constinArgument10,
                                                                                                                                                                                                           class Compiler * inCompiler
                                                                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith3Arguments&&????????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                   class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                   const class GGS_string constinArgument2,
                                                                                                                                   const class GGS_string constinArgument3,
                                                                                                                                   const class GGS_string constinArgument4,
                                                                                                                                   const class GGS_string constinArgument5,
                                                                                                                                   const class GGS_string constinArgument6,
                                                                                                                                   const class GGS_string constinArgument7,
                                                                                                                                   const class GGS_string constinArgument8,
                                                                                                                                   const class GGS_string constinArgument9,
                                                                                                                                   const class GGS_bool constinArgument10,
                                                                                                                                   class Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument&&?inputArgTypeName?inputArgName?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (class GGS_instanceMethodMap & ioArgument0,
                                                                                                                 class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                 const class GGS_string constinArgument2,
                                                                                                                 const class GGS_string constinArgument3,
                                                                                                                 const class GGS_string constinArgument4,
                                                                                                                 const class GGS_bool constinArgument5,
                                                                                                                 class Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argSelector?argType?argName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                                class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                const class GGS_string constinArgument2,
                                                                                                                                                const class GGS_string constinArgument3,
                                                                                                                                                const class GGS_string constinArgument4,
                                                                                                                                                const class GGS_string constinArgument5,
                                                                                                                                                const class GGS_string constinArgument6,
                                                                                                                                                const class GGS_bool constinArgument7,
                                                                                                                                                class Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                              class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                              const class GGS_string constinArgument2,
                                                                                                                              const class GGS_string constinArgument3,
                                                                                                                              const class GGS_string constinArgument4,
                                                                                                                              const class GGS_bool constinArgument5,
                                                                                                                              class Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument&&?classMethod?argName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (class GGS_classMethodMap & ioArgument0,
                                                                                                       class GGS_unifiedTypeMap & ioArgument1,
                                                                                                       const class GGS_string constinArgument2,
                                                                                                       const class GGS_string constinArgument3,
                                                                                                       const class GGS_bool constinArgument4,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument&?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (class GGS_instanceMethodMap & ioArgument0,
                                                                       const class GGS_string constinArgument1,
                                                                       const class GGS_bool constinArgument2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments&&?outputArgTypeName?outputArgName?inputArgTypeName?inputArgName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (class GGS_setterMap & ioArgument0,
                                                                                                                                                                      class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                      const class GGS_string constinArgument2,
                                                                                                                                                                      const class GGS_string constinArgument3,
                                                                                                                                                                      const class GGS_string constinArgument4,
                                                                                                                                                                      const class GGS_string constinArgument5,
                                                                                                                                                                      const class GGS_string constinArgument6,
                                                                                                                                                                      const class GGS_bool constinArgument7,
                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&?getterName?arg1Selector?arg1TypeName?arg1Name?arg2Selector?arg2TypeName?arg2Name?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                                                                                                          class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                                                                          const class GGS_string constinArgument2,
                                                                                                                                                                                                                          const class GGS_string constinArgument3,
                                                                                                                                                                                                                          const class GGS_string constinArgument4,
                                                                                                                                                                                                                          const class GGS_string constinArgument5,
                                                                                                                                                                                                                          const class GGS_string constinArgument6,
                                                                                                                                                                                                                          const class GGS_string constinArgument7,
                                                                                                                                                                                                                          const class GGS_string constinArgument8,
                                                                                                                                                                                                                          const class GGS_string constinArgument9,
                                                                                                                                                                                                                          const class GGS_bool constinArgument10,
                                                                                                                                                                                                                          class Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument&??compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (class GGS_setterMap & ioArgument0,
                                                                  const class GGS_string constinArgument1,
                                                                  const class GGS_bool constinArgument2,
                                                                  class Compiler * inCompiler
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
//Function 'makeEmbeddedElementTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeEmbeddedElementTypeLName (const class GGS_lstring & constinArgument0,
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
//Routine 'handleEquatableComparableExtension&?&?acceptEquatable?acceptComparable'
//
//--------------------------------------------------------------------------------------------------

void routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (class GGS_equatableExtensionMap & ioArgument0,
                                                                                                    const class GGS_lstring constinArgument1,
                                                                                                    class GGS_typeFeatures & ioArgument2,
                                                                                                    const class GGS_bool constinArgument3,
                                                                                                    const class GGS_bool constinArgument4,
                                                                                                    class Compiler * inCompiler
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

GGS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (class Compiler * inCompiler,
                                                                                const class GGS_string & in_TYPE_5F_NAME,
                                                                                const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayTypeGenerationTemplate arrayTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                            const class GGS_string & in_TYPE_5F_NAME,
                                                                                            const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const class GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                            const class GGS_bool & in_GENERATE_5F_COMPARISON
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

GGS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (class Compiler * inCompiler,
                                                                               const class GGS_string & in_TYPE_5F_NAME,
                                                                               const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const class GGS_bool & in_IS_5F_CONCRETE,
                                                                               const class GGS_initializerMap & in_INITIALIZER_5F_MAP,
                                                                               const class GGS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                               const class GGS_getterMap & in_GETTER_5F_MAP,
                                                                               const class GGS_setterMap & in_MODIFIER_5F_MAP,
                                                                               const class GGS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                               const class GGS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                               const class GGS_subscriptMap & in_READ_5F_SUBSCRIPT_5F_MAP,
                                                                               const class GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                               const class GGS_typeFeatures & in_SUPPORTED_5F_OPERATORS,
                                                                               const class GGS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                               const class GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                               const class GGS_bool & in_SUPPORT_5F_COLLECTION_5F_VALUE
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForPackage'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (class Compiler * inCompiler,
                                                                                  const class GGS_string & in_TYPE_5F_NAME,
                                                                                  const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const class GGS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                                  const class GGS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate genericTypeImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (class Compiler * inCompiler,
                                                                                 const class GGS_string & in_TYPE_5F_NAME,
                                                                                 const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const class GGS_unifiedTypeMapEntry & in_SUPER_5F_TYPE_5F_INDEX
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate externTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (class Compiler * inCompiler,
                                                                            const class GGS_string & in_TYPE_5F_NAME,
                                                                            const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const class GGS_string & in_PRE_5F_DECLARATION,
                                                                            const class GGS_string & in_CODE
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (class Compiler * inCompiler,
                                                                           const class GGS_string & in_TYPE_5F_NAME,
                                                                           const class GGS_string & in_TYPE_5F_IDENTIFIER
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (class Compiler * inCompiler,
                                                                                       const class GGS_unifiedTypeMapEntry & in_TYPE,
                                                                                       const class GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const class GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                       const class GGS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                       COMMA_LOCATION_ARGS) ;

