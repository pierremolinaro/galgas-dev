#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter (const class GALGAS_string constinArgument0,
                                      const class GALGAS_string constinArgument1,
                                      const class GALGAS_string constinArgument2,
                                      class GALGAS_stringset & ioArgument3,
                                      const class GALGAS_formalParameterListForGeneration constinArgument4,
                                      const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                      class GALGAS_string & outArgument6,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures (const class GALGAS_formalInputParameterListForGeneration constinArgument0,
                                    const class GALGAS_unifiedTypeMap_2D_entry constinArgument1,
                                    const class GALGAS_location constinArgument2,
                                    const class GALGAS_functionSignature constinArgument3,
                                    const class GALGAS_unifiedTypeMap_2D_entry constinArgument4,
                                    const class GALGAS_location constinArgument5,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature (const class GALGAS_semanticContext constinArgument0,
                                                const class GALGAS_formalParameterListAST constinArgument1,
                                                class GALGAS_localVarManager & ioArgument2,
                                                class GALGAS_formalParameterListForGeneration & outArgument3,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures (const class GALGAS_formalParameterListForGeneration constinArgument0,
                                    const class GALGAS_location constinArgument1,
                                    const class GALGAS_formalParameterSignature constinArgument2,
                                    const class GALGAS_location constinArgument3,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'generateFewHeaderFiles'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool function_generateFewHeaderFiles (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_32_Arguments (class GALGAS_constructorMap & ioArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                const class GALGAS_string constinArgument5,
                                                const class GALGAS_string constinArgument6,
                                                const class GALGAS_string constinArgument7,
                                                const class GALGAS_bool constinArgument8,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith3Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_33_Arguments (class GALGAS_constructorMap & ioArgument0,
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
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith4Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_34_Arguments (class GALGAS_constructorMap & ioArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                const class GALGAS_string constinArgument5,
                                                const class GALGAS_string constinArgument6,
                                                const class GALGAS_string constinArgument7,
                                                const class GALGAS_string constinArgument8,
                                                const class GALGAS_string constinArgument9,
                                                const class GALGAS_string constinArgument10,
                                                const class GALGAS_string constinArgument11,
                                                const class GALGAS_string constinArgument12,
                                                const class GALGAS_string constinArgument13,
                                                const class GALGAS_string constinArgument14,
                                                const class GALGAS_string constinArgument15,
                                                const class GALGAS_bool constinArgument16,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument (class GALGAS_getterMap & ioArgument0,
                                               class GALGAS_unifiedTypeMap & ioArgument1,
                                               const class GALGAS_string constinArgument2,
                                               const class GALGAS_string constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               const class GALGAS_string constinArgument5,
                                               const class GALGAS_bool constinArgument6,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
                                                    class GALGAS_unifiedTypeMap & ioArgument1,
                                                    const class GALGAS_string constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_string constinArgument4,
                                                    const class GALGAS_string constinArgument5,
                                                    const class GALGAS_string constinArgument6,
                                                    const class GALGAS_string constinArgument7,
                                                    const class GALGAS_bool constinArgument8,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith3Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments (class GALGAS_getterMap & ioArgument0,
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
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument (class GALGAS_setterMap & ioArgument0,
                                             class GALGAS_unifiedTypeMap & ioArgument1,
                                             const class GALGAS_string constinArgument2,
                                             const class GALGAS_string constinArgument3,
                                             const class GALGAS_string constinArgument4,
                                             const class GALGAS_bool constinArgument5,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments (class GALGAS_setterMap & ioArgument0,
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
//Routine 'enterModifierWith2InputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments (class GALGAS_setterMap & ioArgument0,
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
//Routine 'enterModifierWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument (class GALGAS_setterMap & ioArgument0,
                                           const class GALGAS_string constinArgument1,
                                           const class GALGAS_bool constinArgument2,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument (class GALGAS_instanceMethodMap & ioArgument0,
                                                 const class GALGAS_string constinArgument1,
                                                 const class GALGAS_bool constinArgument2,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument (class GALGAS_instanceMethodMap & ioArgument0,
                                                   class GALGAS_unifiedTypeMap & ioArgument1,
                                                   const class GALGAS_string constinArgument2,
                                                   const class GALGAS_string constinArgument3,
                                                   const class GALGAS_string constinArgument4,
                                                   const class GALGAS_bool constinArgument5,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument (class GALGAS_classMethodMap & ioArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                const class GALGAS_bool constinArgument5,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments (class GALGAS_classMethodMap & ioArgument0,
                                                     class GALGAS_unifiedTypeMap & ioArgument1,
                                                     const class GALGAS_string constinArgument2,
                                                     const class GALGAS_string constinArgument3,
                                                     const class GALGAS_string constinArgument4,
                                                     const class GALGAS_string constinArgument5,
                                                     const class GALGAS_string constinArgument6,
                                                     const class GALGAS_string constinArgument7,
                                                     const class GALGAS_string constinArgument8,
                                                     const class GALGAS_bool constinArgument9,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument (class GALGAS_classMethodMap & ioArgument0,
                                                      class GALGAS_unifiedTypeMap & ioArgument1,
                                                      const class GALGAS_string constinArgument2,
                                                      const class GALGAS_string constinArgument3,
                                                      const class GALGAS_bool constinArgument4,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'compilerCppName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_compilerCppName (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'syntaxDirectedTranslationResultVarName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_syntaxDirectedTranslationResultVarName (class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_recursivelyEnumerateDirectories (const class GALGAS_string constinArgument0,
                                              const class GALGAS_string constinArgument1,
                                              const class GALGAS_wrapperExtensionMap constinArgument2,
                                              const class GALGAS_wrapperExtensionMap constinArgument3,
                                              class GALGAS_wrapperFileMap & outArgument4,
                                              class GALGAS_wrapperDirectoryMap & outArgument5,
                                              class GALGAS_uint & ioArgument6,
                                              class GALGAS_uint & ioArgument7,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateInstructionList (class GALGAS_stringset & ioArgument0,
                                      const class GALGAS_semanticInstructionListForGeneration constinArgument1,
                                      class GALGAS_uint & ioArgument2,
                                      class GALGAS_stringset & ioArgument3,
                                      const class GALGAS_bool constinArgument4,
                                      class GALGAS_string & ioArgument5,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList (const class GALGAS_lstring constinArgument0,
                                             class GALGAS_usefulEntitiesGraph & ioArgument1,
                                             const class GALGAS_analysisContext constinArgument2,
                                             const class GALGAS_localConstantList constinArgument3,
                                             const class GALGAS_localInitializedVariableList constinArgument4,
                                             const class GALGAS_localInitializedVariableList constinArgument5,
                                             const class GALGAS_semanticInstructionListAST constinArgument6,
                                             const class GALGAS_location constinArgument7,
                                             class GALGAS_localVarManager & ioArgument8,
                                             class GALGAS_semanticInstructionListForGeneration & outArgument9,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch (const class GALGAS_lstring constinArgument0,
                                                          class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                          const class GALGAS_analysisContext constinArgument2,
                                                          const class GALGAS_localConstantList constinArgument3,
                                                          const class GALGAS_localInitializedVariableList constinArgument4,
                                                          const class GALGAS_localInitializedVariableList constinArgument5,
                                                          const class GALGAS_semanticInstructionListAST constinArgument6,
                                                          class GALGAS_localVarManager & ioArgument7,
                                                          class GALGAS_semanticInstructionListForGeneration & outArgument8,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

