#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'gLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTypeMap function_gLexicalTypeMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap??&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap_3F__3F__26_ (const class GGS_lexicalTypeMap constinArgument0,
                                                   const class GGS__5B_lexicalAttributeAST_5D_ constinArgument1,
                                                   class GGS_lexicalAttributeMap & ioArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_lexiqueNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap_21_ (class GGS_lexicalFunctionMap & outArgument0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap_21_ (class GGS_lexicalRoutineMap & outArgument0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (class GGS_stringset & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'functionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_functionNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody?&?&????!signatureIR!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                             class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                             const class GGS_analysisContext constinArgument2,
                                                                                             class GGS_unifiedTypeMap & ioArgument3,
                                                                                             const class GGS__5B_formalInputParameterAST_5D_ constinArgument4,
                                                                                             const class GGS__5B_semanticInstructionAST_5D_ constinArgument5,
                                                                                             const class GGS_lstring constinArgument6,
                                                                                             const class GGS_location constinArgument7,
                                                                                             class GGS__5B_formalInputParameterForGeneration_5D_ & outArgument8,
                                                                                             class GGS_unifiedTypeMapEntry & outArgument9,
                                                                                             class GGS_string & outArgument10,
                                                                                             class GGS__5B_semanticInstructionForGeneration_5D_ & outArgument11,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'gSwiftLexicalStyleFileName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_gSwiftLexicalStyleFileName (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksWindowsTarget??buildDirName???libpmPath??'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F_ (const class GGS_string constinArgument0,
                                                                                                     const class GGS_string constinArgument1,
                                                                                                     const class GGS_string constinArgument2,
                                                                                                     const class GGS__5B_string_5D_ constinArgument3,
                                                                                                     const class GGS_string constinArgument4,
                                                                                                     const class GGS__5B_string_5D_ constinArgument5,
                                                                                                     const class GGS_string constinArgument6,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxI686Target??buildDirName?????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                                                                       const class GGS_string constinArgument1,
                                                                                                       const class GGS_string constinArgument2,
                                                                                                       const class GGS__5B_string_5D_ constinArgument3,
                                                                                                       const class GGS_string constinArgument4,
                                                                                                       const class GGS__5B_string_5D_ constinArgument5,
                                                                                                       const class GGS_string constinArgument6,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxX86_64Target??buildDirName?????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                                                                               const class GGS_string constinArgument1,
                                                                                                               const class GGS_string constinArgument2,
                                                                                                               const class GGS__5B_string_5D_ constinArgument3,
                                                                                                               const class GGS_string constinArgument4,
                                                                                                               const class GGS__5B_string_5D_ constinArgument5,
                                                                                                               const class GGS_string constinArgument6,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileMinGWOnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileMinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (const class GGS_string constinArgument0,
                                                                          const class GGS_string constinArgument1,
                                                                          const class GGS_string constinArgument2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileUnixTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileUnixTarget_3F__3F_buildDirName_3F_ (const class GGS_string constinArgument0,
                                                                 const class GGS_string constinArgument1,
                                                                 const class GGS_string constinArgument2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileMacTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileMacTarget_3F__3F_buildDirName_3F_ (const class GGS_string constinArgument0,
                                                                const class GGS_string constinArgument1,
                                                                const class GGS_string constinArgument2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileLinux32OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileLinux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const class GGS_string constinArgument0,
                                                                                  const class GGS_string constinArgument1,
                                                                                  const class GGS_string constinArgument2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileLinux64OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileLinux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const class GGS_string constinArgument0,
                                                                                  const class GGS_string constinArgument1,
                                                                                  const class GGS_string constinArgument2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateArm64LinuxMakefileTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateArm_36__34_LinuxMakefileTarget_3F__3F_buildDirName_3F_ (const class GGS_string constinArgument0,
                                                                             const class GGS_string constinArgument1,
                                                                             const class GGS_string constinArgument2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'updateGalgasTargets?absoluteBuildDir?buildDirName?????appProductFileList?swiftAppProductFileList???&'
//
//--------------------------------------------------------------------------------------------------

void routine_updateGalgasTargets_3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F_appProductFileList_3F_swiftAppProductFileList_3F__3F__3F__26_ (const class GGS_string constinArgument0,
                                                                                                                                                       const class GGS_string constinArgument1,
                                                                                                                                                       const class GGS_string constinArgument2,
                                                                                                                                                       const class GGS_projectSettings constinArgument3,
                                                                                                                                                       const class GGS__5B_string_5D_ constinArgument4,
                                                                                                                                                       const class GGS__5B_string_5D_ constinArgument5,
                                                                                                                                                       const class GGS__5B_string_5D_ constinArgument6,
                                                                                                                                                       const class GGS__5B_string_5D_ constinArgument7,
                                                                                                                                                       const class GGS__5B_string_5D_ constinArgument8,
                                                                                                                                                       const class GGS_string constinArgument9,
                                                                                                                                                       const class GGS_stringset constinArgument10,
                                                                                                                                                       class GGS_stringset & ioArgument11,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath_3F_ (const class GGS_string constinArgument0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'transformLabelMap'
//
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const class GGS__5B_nonTerminalLabelAST_5D_ & constinArgument0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap_3F__3F__3F__3F_ (const class GGS_location constinArgument0,
                                            const class GGS__5B_nonTerminalLabelAST_5D_ constinArgument1,
                                            const class GGS_location constinArgument2,
                                            const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

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
                                                                                                                                  class GGS_uint & ioArgument3,
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
                                                    class GGS_uint & ioArgument5,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'grammarAnalysisAndGeneration??????????!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                               const class GGS_lstring constinArgument1,
                                                                                               const class GGS_uint constinArgument2,
                                                                                               const class GGS_string constinArgument3,
                                                                                               const class GGS_terminalSymbolsMapForGrammarAnalysis constinArgument4,
                                                                                               const class GGS__5B_syntaxComponentForGrammarAnalysis_5D_ constinArgument5,
                                                                                               const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis constinArgument6,
                                                                                               const class GGS_string constinArgument7,
                                                                                               const class GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis constinArgument8,
                                                                                               const class GGS_string constinArgument9,
                                                                                               class GGS_string & outArgument10,
                                                                                               class GGS_string & outArgument11,
                                                                                               class GGS_string & outArgument12,
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
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const class GGS_wrapperFileMap constinArgument0,
                                                                     const class GGS_wrapperDirectoryMap constinArgument1,
                                                                     class GGS__5B_string_5D_ & ioArgument2,
                                                                     class GGS__5B_string_5D_ & ioArgument3,
                                                                     class GGS__5B_string_5D_ & ioArgument4,
                                                                     class GGS__5B_string_5D_ & ioArgument5,
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

