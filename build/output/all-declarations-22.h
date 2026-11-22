#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//--------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent?&?????&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (const class GGS_lstring constinArgument0,
                                                                                                        class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                        const class GGS__5B_nonterminalDeclarationAST_5D_ constinArgument2,
                                                                                                        const class GGS__5B_syntaxRuleAST_5D_ constinArgument3,
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
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitClassGraphFile??'
//
//--------------------------------------------------------------------------------------------------

void routine_emitClassGraphFile_3F__3F_ (const class GGS_string constinArgument0,
                                         const class GGS_unifiedTypeMap constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (const class GGS_lstring constinArgument0,
                                                                   const class GGS_nonterminalLabelMap constinArgument1,
                                                                   class GGS_nonterminalMap & ioArgument2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (const class GGS__5B_nonterminalDeclarationAST_5D_ constinArgument0,
                                                              const class GGS_semanticContext constinArgument1,
                                                              class GGS_unifiedTypeMap & ioArgument2,
                                                              class GGS_nonterminalMap & outArgument3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel?&???&???????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                                              class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                              const class GGS__5B_formalParameterAST_5D_ constinArgument2,
                                                                                                              const class GGS__5B_syntaxInstructionAST_5D_ constinArgument3,
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
                                                                                                              class GGS__5B_formalParameterForGeneration_5D_ & outArgument14,
                                                                                                              class GGS__5B_formalParameterSignatureElement_5D_ & outArgument15,
                                                                                                              class GGS__5B_semanticInstructionForGeneration_5D_ & outArgument16,
                                                                                                              Compiler * inCompiler
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
                                                                             Compiler * inCompiler
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
                                                                             Compiler * inCompiler
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
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

