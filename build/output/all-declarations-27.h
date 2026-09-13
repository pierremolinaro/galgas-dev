#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'templateLexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_templateLexiqueGenerationTemplates ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppHeader'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (class Compiler * inCompiler,
                                                                             const class GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                             const class GGS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (class Compiler * inCompiler,
                                                                                     const class GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                     const class GGS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER,
                                                                                     const class GGS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                     const class GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                     const class GGS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                     const class GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                     const class GGS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                     const class GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates swiftuiImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_swiftuiImplementationZone (class Compiler * inCompiler,
                                                                                             const class GGS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                             const class GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                             const class GGS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                             const class GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                             const class GGS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                             const class GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                             const class GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkextensionSetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                                             const class GGS_string constinArgument1,
                                                                             const class GGS_lstring constinArgument2,
                                                                             const class GGS_descendantClassListMap constinArgument3,
                                                                             const class GGS_genericExtensionMethodListMap constinArgument4,
                                                                             const class GGS_unifiedTypeMap constinArgument5,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionMethodDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                                             const class GGS_string constinArgument1,
                                                                             const class GGS_lstring constinArgument2,
                                                                             const class GGS_descendantClassListMap constinArgument3,
                                                                             const class GGS_genericExtensionMethodListMap constinArgument4,
                                                                             const class GGS_unifiedTypeMap constinArgument5,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionGetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                                             const class GGS_string constinArgument1,
                                                                             const class GGS_lstring constinArgument2,
                                                                             const class GGS_descendantClassListMap constinArgument3,
                                                                             const class GGS_genericExtensionMethodListMap constinArgument4,
                                                                             const class GGS_unifiedTypeMap constinArgument5,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent?&?????&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (const class GGS_lstring constinArgument0,
                                                                                                        class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                        const class GGS_nonterminalDeclarationListAST constinArgument2,
                                                                                                        const class GGS_syntaxRuleListAST constinArgument3,
                                                                                                        const class GGS_string constinArgument4,
                                                                                                        const class GGS_string constinArgument5,
                                                                                                        const class GGS_semanticContext constinArgument6,
                                                                                                        class GGS_unifiedTypeMap & ioArgument7,
                                                                                                        const class GGS_predefinedTypes constinArgument8,
                                                                                                        const class GGS_terminalMap constinArgument9,
                                                                                                        const class GGS_stringset constinArgument10,
                                                                                                        const class GGS_bool constinArgument11,
                                                                                                        const class GGS_bool constinArgument12,
                                                                                                        class GGS_syntaxDeclarationForGeneration & outArgument13,
                                                                                                        class Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitClassGraphFile??'
//
//--------------------------------------------------------------------------------------------------

void routine_emitClassGraphFile_3F__3F_ (const class GGS_string constinArgument0,
                                         const class GGS_unifiedTypeMap constinArgument1,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (const class GGS_lstring constinArgument0,
                                                                   const class GGS_nonterminalLabelMap constinArgument1,
                                                                   class GGS_nonterminalMap & ioArgument2,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (const class GGS_nonterminalDeclarationListAST constinArgument0,
                                                              const class GGS_semanticContext constinArgument1,
                                                              class GGS_unifiedTypeMap & ioArgument2,
                                                              class GGS_nonterminalMap & outArgument3,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel?&???&???????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                                              class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                              const class GGS_formalParameterListAST constinArgument2,
                                                                                                              const class GGS_syntaxInstructionList constinArgument3,
                                                                                                              const class GGS_analysisContext constinArgument4,
                                                                                                              class GGS_unifiedTypeMap & ioArgument5,
                                                                                                              const class GGS_terminalMap constinArgument6,
                                                                                                              const class GGS_bool constinArgument7,
                                                                                                              const class GGS_string constinArgument8,
                                                                                                              const class GGS_nonterminalMap constinArgument9,
                                                                                                              const class GGS_string constinArgument10,
                                                                                                              const class GGS_location constinArgument11,
                                                                                                              const class GGS_stringset constinArgument12,
                                                                                                              class GGS_uint & ioArgument13,
                                                                                                              class GGS_formalParameterListForGeneration & outArgument14,
                                                                                                              class GGS_formalParameterSignature & outArgument15,
                                                                                                              class GGS_semanticInstructionListForGeneration & outArgument16,
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
//Function 'makeEmbeddedElementTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeEmbeddedElementTypeLName (const class GGS_lstring & constinArgument0,
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
//Function 'makeEmbeddedTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeEmbeddedTypeName (const class GGS_string & constinArgument0,
                                                const class GGS_string & constinArgument1,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

