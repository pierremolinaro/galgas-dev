#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'buildLexicalTypeMap'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap (const class GALGAS_lexicalTypeMap constinArgument0,
                                       const class GALGAS_lexicalAttributeListAST constinArgument1,
                                       class GALGAS_lexicalAttributeMap & ioArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'lexiqueGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates headerZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                             const class GALGAS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                             const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                             const class GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                             const class GALGAS_indexingListAST & in_INDEXING_5F_LIST
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates implementationZone2Galgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (class C_Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                               const class GALGAS_bool & in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE,
                                                                                               const class GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                               const class GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                               const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                               const class GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                               const class GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                               const class GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                               const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                               const class GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                               const class GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                               const class GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                               const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                               const class GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                          const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const class GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                          const class GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                          const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                          const class GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                          const class GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                          const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                          const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                          const class GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                          const class GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                          const class GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                          const class GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates swiftCocoaImplementationZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_swiftCocoaImplementationZone_32_ (class C_Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                               const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                               const class GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                               const class GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                               const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                               const class GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                               const class GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                               const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                               const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                               const class GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                               const class GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                               const class GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                               const class GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_lexiqueNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap (class GALGAS_lexicalFunctionMap & outArgument0,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap (class GALGAS_lexicalRoutineMap & outArgument0,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis (class GALGAS_stringset & outArgument0,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'templateLexiqueGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_templateLexiqueGenerationTemplates ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppHeader'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const class GALGAS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                        const class GALGAS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER,
                                                                                        const class GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                        const class GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                        const class GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                        const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                        const class GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                        const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaHeaderZone'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaHeaderZone (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const class GALGAS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const class GALGAS_string & in_SUPER_5F_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaImplementationZone'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaImplementationZone (class C_Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                                  const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                  const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                  const class GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                  const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates swiftCocoaImplementationZone'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_swiftCocoaImplementationZone (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                                   const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                   const class GALGAS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                   const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                   const class GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                   const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (class C_Compiler * inCompiler,
                                                                                            const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftCocoa'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (class C_Compiler * inCompiler,
                                                                                            const class GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                            const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33_ (const class GALGAS_galgasGUIComponentListAST constinArgument0,
                                                      const class GALGAS_semanticContext constinArgument1,
                                                      class GALGAS_optionComponentMapForGeneration & outArgument2,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis (const class GALGAS_galgasGUIComponentListAST_2D_element constinArgument0,
                                           const class GALGAS_semanticContext constinArgument1,
                                           class GALGAS_optionComponentMapForGeneration & ioArgument2,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33_ (const class GALGAS_optionComponentMapForGeneration constinArgument0,
                                                 const class GALGAS_string constinArgument1,
                                                 const class GALGAS_bool constinArgument2,
                                                 class GALGAS_stringlist & ioArgument3,
                                                 class GALGAS_stringset & ioArgument4,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'guiGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates objc_gui_implementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_objc_5F_gui_5F_implementation (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                        const class GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swift_gui_implementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                         const class GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'commonGetterMapForAllTypes'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes (class GALGAS_unifiedTypeMap & ioArgument0,
                                         class GALGAS_getterMap & outArgument1,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument (class GALGAS_getterMap & ioArgument0,
                                          class GALGAS_unifiedTypeMap & ioArgument1,
                                          const class GALGAS_string constinArgument2,
                                          const class GALGAS_string constinArgument3,
                                          const class GALGAS_string constinArgument4,
                                          const class GALGAS_string constinArgument5,
                                          const class GALGAS_string constinArgument6,
                                          const class GALGAS_bool constinArgument7,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument (class GALGAS_getterMap & ioArgument0,
                                             class GALGAS_unifiedTypeMap & ioArgument1,
                                             const class GALGAS_string constinArgument2,
                                             const class GALGAS_string constinArgument3,
                                             const class GALGAS_bool constinArgument4,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

