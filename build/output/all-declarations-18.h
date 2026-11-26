#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations_26__3F_ (class GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument0,
                                                    const class GGS__5B_nonterminalDeclarationAST_5D_ constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (class GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument0,
                                                                const class GGS__5B_syntaxRuleAST_5D_ constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'transformInstructionListForGrammarAnalysis?&usedTerminalMap?nonTerminalSymbolMap&addedTerminalIndex&'
//
//--------------------------------------------------------------------------------------------------

void routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (const class GGS__5B_syntaxInstructionAST_5D_ constinArgument0,
                                                                                                                                  class GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument1,
                                                                                                                                  const class GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument2,
                                                                                                                                  class GGS_u_33__32_ & ioArgument3,
                                                                                                                                  class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & ioArgument4,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList_3F__3F__3F__26__26__26_ (const class GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument0,
                                                    const class GGS_lstring constinArgument1,
                                                    const class GGS__5B_syntaxRuleAST_5D_ constinArgument2,
                                                    class GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument3,
                                                    class GGS__5B_syntaxComponentForGrammarAnalysis_5D_ & ioArgument4,
                                                    class GGS_u_33__32_ & ioArgument5,
                                                    Compiler * inCompiler
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
                                                                                                                Compiler * inCompiler
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
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//--------------------------------------------------------------------------------------------------

class GGS__5B_semanticInstructionForGeneration_5D_ function_syntaxSignatureOfInstructionList (const class GGS_string & constinArgument0,
                                                                                              const class GGS__5B_semanticInstructionForGeneration_5D_ & constinArgument1,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure?static?&???????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (const class GGS_bool constinArgument0,
                                                                                  const class GGS_string constinArgument1,
                                                                                  class GGS_stringset & ioArgument2,
                                                                                  const class GGS__5B_formalParameterForGeneration_5D_ constinArgument3,
                                                                                  const class GGS__5B_semanticInstructionForGeneration_5D_ constinArgument4,
                                                                                  const class GGS_bool constinArgument5,
                                                                                  const class GGS_string constinArgument6,
                                                                                  const class GGS_bool constinArgument7,
                                                                                  const class GGS_bool constinArgument8,
                                                                                  const class GGS_bool constinArgument9,
                                                                                  class GGS_string & outArgument10,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction?&??????static?const!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (const class GGS_string constinArgument0,
                                                                                  class GGS_stringset & ioArgument1,
                                                                                  const class GGS__5B_formalInputParameterForGeneration_5D_ constinArgument2,
                                                                                  const class GGS__5B_semanticInstructionForGeneration_5D_ constinArgument3,
                                                                                  const class GGS_string constinArgument4,
                                                                                  const class GGS_unifiedTypeMapEntry constinArgument5,
                                                                                  const class GGS_string constinArgument6,
                                                                                  const class GGS_bool constinArgument7,
                                                                                  const class GGS_bool constinArgument8,
                                                                                  class GGS_string & outArgument9,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetter?&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (const class GGS_string constinArgument0,
                                                                      class GGS_stringset & ioArgument1,
                                                                      const class GGS__5B_formalInputParameterForGeneration_5D_ constinArgument2,
                                                                      const class GGS__5B_semanticInstructionForGeneration_5D_ constinArgument3,
                                                                      const class GGS_string constinArgument4,
                                                                      const class GGS_unifiedTypeMapEntry constinArgument5,
                                                                      const class GGS_string constinArgument6,
                                                                      class GGS_string & outArgument7,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethodNew?&???!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (const class GGS_unifiedTypeMapEntry constinArgument0,
                                                                 class GGS_stringset & ioArgument1,
                                                                 const class GGS_string constinArgument2,
                                                                 const class GGS__5B_formalParameterForGeneration_5D_ constinArgument3,
                                                                 const class GGS__5B_semanticInstructionForGeneration_5D_ constinArgument4,
                                                                 class GGS_string & outArgument5,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__3F__26__26__26_ (const class GGS_string constinArgument0,
                                                                  const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument1,
                                                                  const class GGS_sortedLexicalStyleArray constinArgument2,
                                                                  class GGS__5B_string_5D_ & ioArgument3,
                                                                  class GGS__5B_string_5D_ & ioArgument4,
                                                                  class GGS_stringset & ioArgument5,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'getterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_getterNameForUsefulEntitiesGraph (const class GGS_string & constinArgument0,
                                                             const class GGS_lstring & constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'typeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_typeNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (const class GGS__5B_formalInputParameterForGeneration_5D_ constinArgument0,
                                                            const class GGS_unifiedTypeMapEntry constinArgument1,
                                                            const class GGS_location constinArgument2,
                                                            const class GGS__5B_functionSignatureElement_5D_ constinArgument3,
                                                            const class GGS_unifiedTypeMapEntry constinArgument4,
                                                            const class GGS_location constinArgument5,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature?&?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (const class GGS_semanticContext constinArgument0,
                                                                    class GGS_unifiedTypeMap & ioArgument1,
                                                                    const class GGS__5B_formalParameterAST_5D_ constinArgument2,
                                                                    class GGS_localVarManager & ioArgument3,
                                                                    class GGS__5B_formalParameterForGeneration_5D_ & outArgument4,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures_3F__3F__3F__3F_ (const class GGS__5B_formalParameterForGeneration_5D_ constinArgument0,
                                                    const class GGS_location constinArgument1,
                                                    const class GGS__5B_formalParameterSignatureElement_5D_ constinArgument2,
                                                    const class GGS_location constinArgument3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_setterNameForUsefulEntitiesGraph (const class GGS_string & constinArgument0,
                                                             const class GGS_lstring & constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (const class GGS_lstring constinArgument0,
                                                                     class GGS_usefulEntitiesGraph & ioArgument1,
                                                                     const class GGS_analysisContext constinArgument2,
                                                                     class GGS_unifiedTypeMap & ioArgument3,
                                                                     const class GGS__5B_formalParameterAST_5D_ constinArgument4,
                                                                     const class GGS__5B_semanticInstructionAST_5D_ constinArgument5,
                                                                     const class GGS_location constinArgument6,
                                                                     class GGS__5B_semanticInstructionForGeneration_5D_ & outArgument7,
                                                                     class GGS__5B_formalParameterForGeneration_5D_ & outArgument8,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'initializerNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_initializerNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                                  const class GGS_string & constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (const class GGS_lstring constinArgument0,
                                                                         class GGS_usefulEntitiesGraph & ioArgument1,
                                                                         const class GGS_analysisContext constinArgument2,
                                                                         class GGS_unifiedTypeMap & ioArgument3,
                                                                         const class GGS__5B_formalInputParameterAST_5D_ constinArgument4,
                                                                         const class GGS__5B_semanticInstructionAST_5D_ constinArgument5,
                                                                         const class GGS_location constinArgument6,
                                                                         class GGS__5B_semanticInstructionForGeneration_5D_ & outArgument7,
                                                                         class GGS__5B_formalInputParameterForGeneration_5D_ & outArgument8,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInitializer??&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInitializer_3F__3F__26__3F__3F__21_ (const class GGS_unifiedTypeMapEntry constinArgument0,
                                                          const class GGS_string constinArgument1,
                                                          class GGS_stringset & ioArgument2,
                                                          const class GGS__5B_formalInputParameterForGeneration_5D_ constinArgument3,
                                                          const class GGS__5B_semanticInstructionForGeneration_5D_ constinArgument4,
                                                          class GGS_string & outArgument5,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'methodNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_methodNameForUsefulEntitiesGraph (const class GGS_string & constinArgument0,
                                                             const class GGS_lstring & constinArgument1,
                                                             Compiler * inCompiler
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
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'equatableNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_equatableNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitProductionRulesInTexFile?????'
//
//--------------------------------------------------------------------------------------------------

void routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                               const class GGS_string constinArgument1,
                                                               const class GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument2,
                                                               const class GGS__5B_syntaxComponentForGrammarAnalysis_5D_ constinArgument3,
                                                               const class GGS_lstring constinArgument4,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities_3F__3F__3F_ (const class GGS_usefulEntitiesGraph constinArgument0,
                                              const class GGS__5B_lstring_5D_ constinArgument1,
                                              const class GGS_string constinArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_syntaxNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'afterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_afterNameForUsefulEntitiesGraph (const class GGS_location & constinArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'beforeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_beforeNameForUsefulEntitiesGraph (const class GGS_location & constinArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'rootRuleNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_rootRuleNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileSemanticDeclarationsGalgas&&???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileSemanticDeclarationsGalgas_26__26__3F__3F__3F__21__21__21_ (class GGS__5B_lstring_5D_ & ioArgument0,
                                                                                class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                const class GGS_string constinArgument2,
                                                                                const class GGS_galgasDeclarationAST constinArgument3,
                                                                                const class GGS_projectSettings constinArgument4,
                                                                                class GGS_semanticContext & outArgument5,
                                                                                class GGS_unifiedTypeMap & outArgument6,
                                                                                class GGS__5B_semanticDeclarationForGeneration_5D_ & outArgument7,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

class GGS_predefinedTypes function_buildPredefinedTypes (const class GGS_unifiedTypeMap & constinArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildGalgasSemanticContext??!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildGalgasSemanticContext_3F__3F__21__21__21_ (const class GGS_galgasDeclarationAST constinArgument0,
                                                             const class GGS_projectSettings constinArgument1,
                                                             class GGS_semanticContext & outArgument2,
                                                             class GGS_unifiedTypeMap & outArgument3,
                                                             class GGS__5B_semanticDeclarationAST_5D_ & outArgument4,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSemanticDeclarationsGalgas3???&swift&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSemanticDeclarationsGalgas_33__3F__3F__3F__26_swift_26__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                                      const class GGS_string constinArgument1,
                                                                                      const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument2,
                                                                                      class GGS__5B_string_5D_ & ioArgument3,
                                                                                      class GGS__5B_string_5D_ & ioArgument4,
                                                                                      class GGS__5B_string_5D_ & ioArgument5,
                                                                                      class GGS_stringset & ioArgument6,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'gGenerateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool function_gGenerateFewHeaderFiles (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFilesWithFewHeaders???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                                   const class GGS_string constinArgument1,
                                                                                   const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument2,
                                                                                   class GGS__5B_string_5D_ & ioArgument3,
                                                                                   class GGS_stringset & ioArgument4,
                                                                                   class GGS__5B_string_5D_ & ioArgument5,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                 const class GGS_string constinArgument1,
                                                                 const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument2,
                                                                 class GGS__5B_string_5D_ & ioArgument3,
                                                                 class GGS_stringset & ioArgument4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyHeaders??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyHeaders_3F__3F__26__26_ (const class GGS_string constinArgument0,
                                                  const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument1,
                                                  class GGS_stringset & ioArgument2,
                                                  class GGS__5B_string_5D_ & ioArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                  const class GGS_string constinArgument1,
                                                                  const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument2,
                                                                  class GGS__5B_string_5D_ & ioArgument3,
                                                                  class GGS_stringset & ioArgument4,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateOneBigHeader??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateOneBigHeader_3F__3F__26__26_ (const class GGS_string constinArgument0,
                                                   const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument1,
                                                   class GGS_stringset & ioArgument2,
                                                   class GGS__5B_string_5D_ & ioArgument3,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildHeader???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildHeader_3F__3F__3F__26__26_ (const class GGS_headerCompositionMap constinArgument0,
                                              const class GGS_string constinArgument1,
                                              const class GGS_string constinArgument2,
                                              class GGS_headerRepartitionMap & ioArgument3,
                                              class GGS_string & ioArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'gGroupAmount'
//
//--------------------------------------------------------------------------------------------------

class GGS_u_33__32_ function_gGroupAmount (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkBigInteger'
//
//--------------------------------------------------------------------------------------------------

void routine_checkBigInteger (Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'displayUnicodeLexicalTestFunctions'
//
//--------------------------------------------------------------------------------------------------

void routine_displayUnicodeLexicalTestFunctions (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'parseAndAnalyzeProject??'
//
//--------------------------------------------------------------------------------------------------

void routine_parseAndAnalyzeProject_3F__3F_ (const class GGS_lstring constinArgument0,
                                             const class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProject???'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProject_3F__3F__3F_ (const class GGS_lstring constinArgument0,
                                         const class GGS_string constinArgument1,
                                         const class GGS_projectSettings constinArgument2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26_ (class GGS_galgasDeclarationAST & ioArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const class GGS__5B_galgasGUIComponentAST_5D_ constinArgument0,
                                                                  const class GGS_semanticContext constinArgument1,
                                                                  class GGS_optionComponentMapForGeneration & outArgument2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramComponentGalgas3&&????&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramComponentGalgas_33__26__26__3F__3F__3F__3F__26__3F__21_ (class GGS__5B_lstring_5D_ & ioArgument0,
                                                                                    class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                    const class GGS__5B_prologueEpilogueAST_5D_ constinArgument2,
                                                                                    const class GGS__5B_programRuleAST_5D_ constinArgument3,
                                                                                    const class GGS__5B_prologueEpilogueAST_5D_ constinArgument4,
                                                                                    const class GGS_semanticContext constinArgument5,
                                                                                    class GGS_unifiedTypeMap & ioArgument6,
                                                                                    const class GGS_string constinArgument7,
                                                                                    class GGS_programComponentForGeneration & outArgument8,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'groupSyntaxComponentsGalgas3??&'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (const class GGS__5B_syntaxComponentAST_5D_ constinArgument0,
                                                          const class GGS_syntaxExtensions constinArgument1,
                                                          class GGS__5B_semanticDeclarationAST_5D_ & ioArgument2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'performGalgas3ProjectGlobalCheckings&?'
//
//--------------------------------------------------------------------------------------------------

void routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (class GGS_unifiedTypeMap & ioArgument0,
                                                              const class GGS__5B_semanticDeclarationAST_5D_ constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'projectGeneration??absoluteBuildDir?buildDirName????????'
//
//--------------------------------------------------------------------------------------------------

void routine_projectGeneration_3F__3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                                                        const class GGS_string constinArgument1,
                                                                                                        const class GGS_string constinArgument2,
                                                                                                        const class GGS_optionComponentMapForGeneration constinArgument3,
                                                                                                        const class GGS__5B_string_5D_ constinArgument4,
                                                                                                        const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument5,
                                                                                                        const class GGS__5B_programRuleAST_5D_ constinArgument6,
                                                                                                        const class GGS_projectSettings constinArgument7,
                                                                                                        const class GGS_string constinArgument8,
                                                                                                        const class GGS_string constinArgument9,
                                                                                                        const class GGS__5B_string_5D_ constinArgument10,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3??&swift'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__26_swift (const class GGS_optionComponentMapForGeneration constinArgument0,
                                                                  const class GGS_string constinArgument1,
                                                                  class GGS__5B_string_5D_ & ioArgument2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

