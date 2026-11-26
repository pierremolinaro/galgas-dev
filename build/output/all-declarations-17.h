#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@semanticContext removeAll'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_removeAll (class GGS_semanticContext & ioObject,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertDeclaredLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalVariable (class GGS_localVarManager & ioObject,
                                                  const class GGS_lstring constin_inVarName,
                                                  const class GGS_unifiedTypeMapEntry constin_inType,
                                                  const class GGS_string constin_inCppName,
                                                  const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (class GGS_localVarManager & ioObject,
                                              const class GGS_lstring constin_inVarName,
                                              const class GGS_unifiedTypeMapEntry constin_inType,
                                              const class GGS_string constin_inCppName,
                                              const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertDeclaredLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalConstant (class GGS_localVarManager & ioObject,
                                                  const class GGS_lstring constin_inVarName,
                                                  const class GGS_unifiedTypeMapEntry constin_inType,
                                                  const class GGS_string constin_inCppName,
                                                  const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgumentDeclaredAsUnused (class GGS_localVarManager & ioObject,
                                                                const class GGS_lstring constin_inVarName,
                                                                const class GGS_unifiedTypeMapEntry constin_inType,
                                                                const class GGS_string constin_inCppName,
                                                                const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgument (class GGS_localVarManager & ioObject,
                                                const class GGS_lstring constin_inVarName,
                                                const class GGS_unifiedTypeMapEntry constin_inType,
                                                const class GGS_string constin_inCppName,
                                                const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (class GGS_localVarManager & ioObject,
                                                                        const class GGS_lstring constin_inVarName,
                                                                        const class GGS_unifiedTypeMapEntry constin_inType,
                                                                        const class GGS_string constin_inCppName,
                                                                        const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertConstantInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgument (class GGS_localVarManager & ioObject,
                                                        const class GGS_lstring constin_inVarName,
                                                        const class GGS_unifiedTypeMapEntry constin_inType,
                                                        const class GGS_string constin_inCppName,
                                                        const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertOutputFormalArgument (class GGS_localVarManager & ioObject,
                                                 const class GGS_lstring constin_inVarName,
                                                 const class GGS_unifiedTypeMapEntry constin_inType,
                                                 const class GGS_string constin_inCppName,
                                                 const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (class GGS_localVarManager & ioObject,
                                                                      const class GGS_lstring constin_inVarName,
                                                                      const class GGS_unifiedTypeMapEntry constin_inType,
                                                                      const class GGS_string constin_inCppName,
                                                                      const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertInputOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgument (class GGS_localVarManager & ioObject,
                                                      const class GGS_lstring constin_inVarName,
                                                      const class GGS_unifiedTypeMapEntry constin_inType,
                                                      const class GGS_string constin_inCppName,
                                                      const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertNonMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertNonMutableProperty (class GGS_localVarManager & ioObject,
                                               const class GGS_lstring constin_inVarName,
                                               const class GGS_unifiedTypeMapEntry constin_inType,
                                               const class GGS_string constin_inCppName,
                                               const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertMutableProperty (class GGS_localVarManager & ioObject,
                                            const class GGS_lstring constin_inVarName,
                                            const class GGS_unifiedTypeMapEntry constin_inType,
                                            const class GGS_string constin_inCppName,
                                            const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertInitializerSelfProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializerSelfProperty (class GGS_localVarManager & ioObject,
                                                    const class GGS_string constin_inPropertyName,
                                                    const class GGS_location constin_inErrorLocation,
                                                    const class GGS_unifiedTypeMapEntry constin_inType,
                                                    const class GGS_string constin_inCppName,
                                                    const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                    const class GGS_bool constin_inInitialized,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (class GGS_localVarManager & ioObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (class GGS_localVarManager & ioObject,
                                    const class GGS_location constin__5F_inEndOfBranchLocation,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (class GGS_localVarManager & ioObject,
                                  const class GGS_location constin_inEndOfBranchLocation,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const class GGS_localVarManager inObject,
                                                        const class GGS_location constin_inErrorLocation,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GGS_localVarManager & ioObject,
                                    const class GGS_lstring constin_inVarName,
                                    class GGS_unifiedTypeMapEntry & out_outType,
                                    class GGS_string & out_outCppName,
                                    class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (class GGS_localVarManager & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (class GGS_localVarManager & ioObject,
                                           const class GGS_lstring constin_inVarName,
                                           class GGS_unifiedTypeMapEntry & out_outType,
                                           class GGS_string & out_outCppName,
                                           class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (class GGS_localVarManager & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          class GGS_unifiedTypeMapEntry & out_outType,
                                          class GGS_string & out_outCppName,
                                          class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (class GGS_localVarManager & ioObject,
                                               const class GGS_lstring constin_inVarName,
                                               class GGS_unifiedTypeMapEntry & out_outType,
                                               class GGS_string & out_outCppName,
                                               class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const class GGS_localVarManager inObject,
                                           const class GGS_location constin_inErrorLocation,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'println?'
//
//--------------------------------------------------------------------------------------------------

void routine_println_3F_ (const class GGS_string constinArgument0,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'print?'
//
//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const class GGS_string constinArgument0,
                        Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction?&?&?????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                                   class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                   const class GGS_analysisContext constinArgument2,
                                                                                                   class GGS_unifiedTypeMap & ioArgument3,
                                                                                                   const class GGS_semanticExpressionAST constinArgument4,
                                                                                                   const class GGS_semanticExpressionAST constinArgument5,
                                                                                                   const class GGS__5B_fixitElementAST_5D_ constinArgument6,
                                                                                                   const class GGS_location constinArgument7,
                                                                                                   const class GGS_string constinArgument8,
                                                                                                   class GGS_localVarManager & ioArgument9,
                                                                                                   class GGS_semanticExpressionForGeneration & outArgument10,
                                                                                                   class GGS_semanticExpressionForGeneration & outArgument11,
                                                                                                   class GGS__5B_fixitElementForGeneration_5D_ & outArgument12,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'procedureNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_procedureNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_grammarNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList?&?&?localConstantList??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (const class GGS_lstring constinArgument0,
                                                                                                  class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                  const class GGS_analysisContext constinArgument2,
                                                                                                  class GGS_unifiedTypeMap & ioArgument3,
                                                                                                  const class GGS__5B_localConstant_5D_ constinArgument4,
                                                                                                  const class GGS__5B_semanticInstructionAST_5D_ constinArgument5,
                                                                                                  const class GGS_location constinArgument6,
                                                                                                  class GGS_localVarManager & ioArgument7,
                                                                                                  class GGS__5B_semanticInstructionForGeneration_5D_ & outArgument8,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList&?&&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInstructionList_26__3F__26__26__3F__26_ (class GGS_stringset & ioArgument0,
                                                              const class GGS__5B_semanticInstructionForGeneration_5D_ constinArgument1,
                                                              class GGS_u_33__32_ & ioArgument2,
                                                              class GGS_stringset & ioArgument3,
                                                              const class GGS_bool constinArgument4,
                                                              class GGS_string & ioArgument5,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch?&?&?localConstantList?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F__26__21_ (const class GGS_lstring constinArgument0,
                                                                                                           class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                           const class GGS_analysisContext constinArgument2,
                                                                                                           class GGS_unifiedTypeMap & ioArgument3,
                                                                                                           const class GGS__5B_localConstant_5D_ constinArgument4,
                                                                                                           const class GGS__5B_semanticInstructionAST_5D_ constinArgument5,
                                                                                                           class GGS_localVarManager & ioArgument6,
                                                                                                           class GGS__5B_semanticInstructionForGeneration_5D_ & outArgument7,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

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

