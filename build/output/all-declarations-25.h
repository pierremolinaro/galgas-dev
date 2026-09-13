#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

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
//Filewrapper 'guiGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swiftui_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_guiGenerationTemplates_swiftui_5F_gui_5F_implementation (class Compiler * inCompiler,
                                                                                        const class GGS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                        const class GGS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList?&?&????????&&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (const class GGS_lstring constinArgument0,
                                                                                                       class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                       const class GGS_analysisContext constinArgument2,
                                                                                                       class GGS_unifiedTypeMap & ioArgument3,
                                                                                                       const class GGS_bool constinArgument4,
                                                                                                       const class GGS_terminalMap constinArgument5,
                                                                                                       const class GGS_string constinArgument6,
                                                                                                       const class GGS_nonterminalMap constinArgument7,
                                                                                                       const class GGS_string constinArgument8,
                                                                                                       const class GGS_syntaxInstructionList constinArgument9,
                                                                                                       const class GGS_location constinArgument10,
                                                                                                       const class GGS_stringset constinArgument11,
                                                                                                       class GGS_localVarManager & ioArgument12,
                                                                                                       class GGS_uint & ioArgument13,
                                                                                                       class GGS_semanticInstructionListForGeneration & outArgument14,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool function_compareSyntaxSignature (const class GGS_semanticInstructionListForGeneration & constinArgument0,
                                                const class GGS_semanticInstructionListForGeneration & constinArgument1,
                                                const class GGS_location & constinArgument2,
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
//Routine 'commonGetterMapForAllTypes&!'
//
//--------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes_26__21_ (class GGS_unifiedTypeMap & ioArgument0,
                                                 class GGS_getterMap & outArgument1,
                                                 class Compiler * inCompiler
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
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

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

GGS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (class Compiler * inCompiler,
                                                                                        const class GGS_string & in_COMPONENT_5F_NAME,
                                                                                        const class GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                        const class GGS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                        const class GGS_programRuleList & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                        const class GGS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileBeforeClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (class GGS_lstringlist & ioArgument0,
                                                                    class GGS_usefulEntitiesGraph & ioArgument1,
                                                                    const class GGS_analysisContext constinArgument2,
                                                                    class GGS_unifiedTypeMap & ioArgument3,
                                                                    const class GGS_prologueEpilogueList constinArgument4,
                                                                    class GGS_programListForGeneration & ioArgument5,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (class GGS_lstringlist & ioArgument0,
                                                                    class GGS_usefulEntitiesGraph & ioArgument1,
                                                                    const class GGS_analysisContext constinArgument2,
                                                                    class GGS_unifiedTypeMap & ioArgument3,
                                                                    const class GGS_programRuleList constinArgument4,
                                                                    class GGS_programListForGeneration & ioArgument5,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAfterClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (class GGS_lstringlist & ioArgument0,
                                                                   class GGS_usefulEntitiesGraph & ioArgument1,
                                                                   const class GGS_analysisContext constinArgument2,
                                                                   class GGS_unifiedTypeMap & ioArgument3,
                                                                   const class GGS_prologueEpilogueList constinArgument4,
                                                                   class GGS_programListForGeneration & ioArgument5,
                                                                   class Compiler * inCompiler
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
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftUI'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftUI (class Compiler * inCompiler,
                                                                                      const class GGS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                      const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                      const class GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const class GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const class GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const class GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
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
//Filewrapper 'projectCreationFileWrapper'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (class Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (class Compiler * inCompiler,
                                                                            const class GGS_string & in_PROJECT_5F_NAME
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (class Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (class Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (class Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (class Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (class Compiler * inCompiler,
                                                                                const class GGS_string & in_PROJECT_5F_NAME
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (class Compiler * inCompiler,
                                                                             const class GGS_string & in_PROJECT_5F_NAME
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation_3F_ (const class GGS_string constinArgument0,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation_3F_ (const class GGS_string constinArgument0,
                                  class Compiler * inCompiler
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
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const class GGS_lstring constinArgument0,
                                                                      class GGS_usefulEntitiesGraph & ioArgument1,
                                                                      const class GGS_templateAnalysisContext constinArgument2,
                                                                      class GGS_unifiedTypeMap & ioArgument3,
                                                                      const class GGS_templateInstructionListAST constinArgument4,
                                                                      class GGS_templateInstructionListForGeneration & ioArgument5,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

