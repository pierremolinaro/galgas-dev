#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

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

//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const class GGS_galgasGUIComponentAST constinArgument0,
                                                       const class GGS_semanticContext constinArgument1,
                                                       class GGS_optionComponentMapForGeneration & ioArgument2,
                                                       Compiler * inCompiler
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
                                                                                                       const class GGS__5B_syntaxInstructionAST_5D_ constinArgument9,
                                                                                                       const class GGS_location constinArgument10,
                                                                                                       const class GGS_stringset constinArgument11,
                                                                                                       class GGS_localVarManager & ioArgument12,
                                                                                                       class GGS_u_33__32_ & ioArgument13,
                                                                                                       class GGS__5B_semanticInstructionForGeneration_5D_ & outArgument14,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool function_compareSyntaxSignature (const class GGS__5B_semanticInstructionForGeneration_5D_ & constinArgument0,
                                                const class GGS__5B_semanticInstructionForGeneration_5D_ & constinArgument1,
                                                const class GGS_location & constinArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument&?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (class GGS_instanceMethodMap & ioArgument0,
                                                                       const class GGS_string constinArgument1,
                                                                       const class GGS_bool constinArgument2,
                                                                       Compiler * inCompiler
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
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithoutArgument&&?getterName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                   class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                   const class GGS_string constinArgument2,
                                                                                                                   const class GGS_string constinArgument3,
                                                                                                                   const class GGS_bool constinArgument4,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithoutArgument&&?getterName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                   class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                   const class GGS_string constinArgument2,
                                                                                                                   const class GGS_string constinArgument3,
                                                                                                                   const class GGS_bool constinArgument4,
                                                                                                                   Compiler * inCompiler
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
                                                                                                                                                    Compiler * inCompiler
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
                                                                                                                                               Compiler * inCompiler
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
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument&&?getterName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                              class GGS_unifiedTypeMap & ioArgument1,
                                                                                                              const class GGS_string constinArgument2,
                                                                                                              const class GGS_string constinArgument3,
                                                                                                              const class GGS_bool constinArgument4,
                                                                                                              Compiler * inCompiler
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
                                                                                                                                                Compiler * inCompiler
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
                                                                                                                        Compiler * inCompiler
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
                                                                                                                                                                                                                          Compiler * inCompiler
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
                                                                                                                                     Compiler * inCompiler
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
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'commonGetterMapForAllTypes&!'
//
//--------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes_26__21_ (class GGS_unifiedTypeMap & ioArgument0,
                                                 class GGS_getterMap & outArgument1,
                                                 Compiler * inCompiler
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
                                                                                                   Compiler * inCompiler
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
                                                                                                                          Compiler * inCompiler
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
                                                                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument&??compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (class GGS_setterMap & ioArgument0,
                                                                  const class GGS_string constinArgument1,
                                                                  const class GGS_bool constinArgument2,
                                                                  Compiler * inCompiler
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
                                                                                                                                                                         Compiler * inCompiler
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
                                                                                                            Compiler * inCompiler
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
                                                                                                                                                                      Compiler * inCompiler
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
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedArrayTypeAST&?'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedArrayTypeAST_26__3F_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                   const class GGS_string constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType_26_ (class GGS__5B_semanticDeclarationAST_5D_ & ioArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation&?'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation_26__3F_ (class GGS__5B_semanticDeclarationAST_5D_ & ioArgument0,
                                                         const class GGS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'append_stringString_StructAST&'
//
//--------------------------------------------------------------------------------------------------

void routine_append_5F_stringString_5F_StructAST_26_ (class GGS__5B_semanticDeclarationAST_5D_ & ioArgument0,
                                                      Compiler * inCompiler
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
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

