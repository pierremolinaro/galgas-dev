#ifndef all_2D_declarations_2D__31__38__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__38__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-17.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract extension getter '@lexicalExpressionAST generateCocoaConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                                     class GALGAS_lexiqueAnalysisContext inArgument0,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaConditionCode (const int32_t inClassIndex,
                                                      enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCocoaConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                                    GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateCocoaRoutineOrFunctionArgument'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                                           class C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                                  enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCocoaRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateCocoaRoutineArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                          class GALGAS_lexiqueAnalysisContext inArgument0,
                                                                                                                          class C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaRoutineArgument (const int32_t inClassIndex,
                                                        enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCocoaRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                      GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract extension getter '@lexicalSendDefaultActionAST generateCocoaDefaultSendCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                              class GALGAS_string inArgument0,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaDefaultSendCode (const int32_t inClassIndex,
                                                        enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCocoaDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                      GALGAS_string in_inScannerClassName,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension getter '@lexicalInstructionAST generateCocoaInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                                        class GALGAS_string inArgument0,
                                                                                                        class GALGAS_lexiqueAnalysisContext inArgument1,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaInstructionCode (const int32_t inClassIndex,
                                                        enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCocoaInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                      GALGAS_string in_inScannerClassName,
                                                                      GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const class GALGAS_lexicalTypeEnum & inObject,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract extension method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalDefaultAction (const int32_t inClassIndex,
                                                     extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalDefaultAction (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                    GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract extension method '@lexicalExpressionAST checkLexicalExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                      class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalExpression (const int32_t inClassIndex,
                                                  extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalExpression (const class cPtr_lexicalExpressionAST * inObject,
                                                 GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                          class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                          class GALGAS_lexicalTypeEnum inArgument1,
                                                                                                                          class C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalFunctionCallArgument (const int32_t inClassIndex,
                                                            extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalFunctionCallArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                           GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                         class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                         class GALGAS_lexicalTypeEnum inArgument1,
                                                                                                                         class C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                           extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalRoutineCallArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Abstract extension method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                  class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                  class GALGAS_lexicalArgumentModeAST inArgument1,
                                                                                                                  class GALGAS_lexicalTypeEnum inArgument2,
                                                                                                                  class C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                           extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalRoutineCallArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalArgumentModeAST in_inLexicalRoutineFormalArgumentMode,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension method '@lexicalInstructionAST checkLexicalInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                        class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                        class GALGAS_lexicalTagMap & ioArgument1,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalInstruction (const int32_t inClassIndex,
                                                   extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalInstruction (const class cPtr_lexicalInstructionAST * inObject,
                                                  GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  GALGAS_lexicalTagMap & io_ioTagMap,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract extension method '@abstractLexicalRuleAST checkLexicalRule'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                  class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalRule (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalRule (const class cPtr_abstractLexicalRuleAST * inObject,
                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@typeKindEnum kind' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_kind (const class GALGAS_typeKindEnum & inObject,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@predefinedTypeAST getConstructorMap'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getConstructorMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                              class GALGAS_unifiedTypeMap & ioArgument0,
                                                                              class GALGAS_constructorMap & outArgument1,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getConstructorMap (const int32_t inClassIndex,
                                             extensionMethodSignature_predefinedTypeAST_getConstructorMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getConstructorMap (const class cPtr_predefinedTypeAST * inObject,
                                            GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GALGAS_constructorMap & out_outConstructorMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@predefinedTypeAST getGetterMap'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getGetterMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                         class GALGAS_unifiedTypeMap & ioArgument0,
                                                                         class GALGAS_getterMap & outArgument1,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getGetterMap (const int32_t inClassIndex,
                                        extensionMethodSignature_predefinedTypeAST_getGetterMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getGetterMap (const class cPtr_predefinedTypeAST * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GALGAS_getterMap & out_outGetterMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@predefinedTypeAST getSetterMap'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getSetterMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                         class GALGAS_unifiedTypeMap & ioArgument0,
                                                                         class GALGAS_setterMap & outArgument1,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getSetterMap (const int32_t inClassIndex,
                                        extensionMethodSignature_predefinedTypeAST_getSetterMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getSetterMap (const class cPtr_predefinedTypeAST * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GALGAS_setterMap & out_outSetterMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@predefinedTypeAST getInstanceMethodMap'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getInstanceMethodMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                                 class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                 class GALGAS_instanceMethodMap & outArgument1,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getInstanceMethodMap (const int32_t inClassIndex,
                                                extensionMethodSignature_predefinedTypeAST_getInstanceMethodMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getInstanceMethodMap (const class cPtr_predefinedTypeAST * inObject,
                                               GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                               GALGAS_instanceMethodMap & out_outInstanceMethodMap,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@predefinedTypeAST getClassMethodMap'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getClassMethodMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                              class GALGAS_unifiedTypeMap & ioArgument0,
                                                                              class GALGAS_classMethodMap & outArgument1,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getClassMethodMap (const int32_t inClassIndex,
                                             extensionMethodSignature_predefinedTypeAST_getClassMethodMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getClassMethodMap (const class cPtr_predefinedTypeAST * inObject,
                                            GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GALGAS_classMethodMap & out_outClassMethodMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension getter '@predefinedTypeAST getSupportedOperatorFlags'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*enterExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags) (const class cPtr_predefinedTypeAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getSupportedOperatorFlags (const int32_t inClassIndex,
                                                     enterExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callExtensionGetter_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@predefinedTypeAST getAddAssignArgumentList'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getAddAssignArgumentList) (const class cPtr_predefinedTypeAST * inObject,
                                                                                     class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                     class GALGAS_functionSignature & outArgument1,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getAddAssignArgumentList (const int32_t inClassIndex,
                                                    extensionMethodSignature_predefinedTypeAST_getAddAssignArgumentList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getAddAssignArgumentList (const class cPtr_predefinedTypeAST * inObject,
                                                   GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                                   GALGAS_functionSignature & out_outAddAssignArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@predefinedTypeAST getEnumerationList'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getEnumerationList) (const class cPtr_predefinedTypeAST * inObject,
                                                                               class GALGAS_unifiedTypeMap & ioArgument0,
                                                                               class GALGAS_enumerationDescriptorList & outArgument1,
                                                                               class GALGAS_stringlist & outArgument2,
                                                                               class GALGAS_string & outArgument3,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getEnumerationList (const int32_t inClassIndex,
                                              extensionMethodSignature_predefinedTypeAST_getEnumerationList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getEnumerationList (const class cPtr_predefinedTypeAST * inObject,
                                             GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                             GALGAS_enumerationDescriptorList & out_outEnumerationList,
                                             GALGAS_stringlist & out_outEnumerationVariant,
                                             GALGAS_string & out_outEnumeratedType,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension getter '@location sourceFile' (as function)                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_sourceFile (const class GALGAS_location & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension getter '@location commaSourceFile' (as function)                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_commaSourceFile (const class GALGAS_location & inObject,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract extension method '@semanticInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext) (const class cPtr_semanticInstructionAST * inObject,
                                                                                                   class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterInstructionInSemanticContext (const int32_t inClassIndex,
                                                             extensionMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterInstructionInSemanticContext (const class cPtr_semanticInstructionAST * inObject,
                                                            GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract extension method '@semanticExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext) (const class cPtr_semanticExpressionAST * inObject,
                                                                                                 class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterExpressionInSemanticContext (const int32_t inClassIndex,
                                                            extensionMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterExpressionInSemanticContext (const class cPtr_semanticExpressionAST * inObject,
                                                           GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension method '@semanticInstructionListAST enterInstructionListInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInstructionListInSemanticContext (const class GALGAS_semanticInstructionListAST inObject,
                                                            class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@actualOutputExpressionList enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInSemanticContext (const class GALGAS_actualOutputExpressionList inObject,
                                             class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension getter '@predefinedTypeKindEnum defaultConstructorName' (as function)                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_defaultConstructorName (const class GALGAS_predefinedTypeKindEnum & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract extension method '@abstractCollectionValueElement enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext) (const class cPtr_abstractCollectionValueElement * inObject,
                                                                                                class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterInSemanticContext (const class cPtr_abstractCollectionValueElement * inObject,
                                                 GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract extension method '@abstractCollectionValueElement analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractCollectionValueElement_analyze) (const class cPtr_abstractCollectionValueElement * inObject,
                                                                                 const class GALGAS_lstring constinArgument0,
                                                                                 class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                 const class GALGAS_analysisContext constinArgument2,
                                                                                 const class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
                                                                                 class GALGAS_variableMap & ioArgument4,
                                                                                 class GALGAS_collectionValueElementListForGeneration & ioArgument5,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyze (const int32_t inClassIndex,
                                   extensionMethodSignature_abstractCollectionValueElement_analyze inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyze (const class cPtr_abstractCollectionValueElement * inObject,
                                  const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                  GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                  const GALGAS_analysisContext constin_inAnalysisContext,
                                  const GALGAS_unifiedTypeMap_2D_proxy constin_inElementType,
                                  GALGAS_variableMap & io_ioVariableMap,
                                  GALGAS_collectionValueElementListForGeneration & io_ioCollectionValueElementListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Extension getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString' (as function)         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_correspondingEffectiveParameterString (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@actualParameterAST enterParameterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_actualParameterAST_enterParameterInSemanticContext) (const class cPtr_actualParameterAST * inObject,
                                                                                             class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterParameterInSemanticContext (const int32_t inClassIndex,
                                                           extensionMethodSignature_actualParameterAST_enterParameterInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterParameterInSemanticContext (const class cPtr_actualParameterAST * inObject,
                                                          GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract extension method '@abstractInputParameter analyzeInputParameter'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractInputParameter_analyzeInputParameter) (const class cPtr_abstractInputParameter * inObject,
                                                                                       const class GALGAS_analysisContext constinArgument0,
                                                                                       const class GALGAS_lexicalTypeEnum constinArgument1,
                                                                                       const class GALGAS_string constinArgument2,
                                                                                       class GALGAS_terminalCheckAssignementList & ioArgument3,
                                                                                       class GALGAS_variableMap & ioArgument4,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeInputParameter (const int32_t inClassIndex,
                                                 extensionMethodSignature_abstractInputParameter_analyzeInputParameter inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeInputParameter (const class cPtr_abstractInputParameter * inObject,
                                                const GALGAS_analysisContext constin_inAnalysisContext,
                                                const GALGAS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const GALGAS_string constin_inLexicalAttributeName,
                                                GALGAS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                                GALGAS_variableMap & io_ioVariableMap,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT) (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                               const class GALGAS_analysisContext constinArgument0,
                                                                                                               const class GALGAS_bool constinArgument1,
                                                                                                               class GALGAS_variableMap & ioArgument2,
                                                                                                               class C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeSDT (const int32_t inClassIndex,
                                      extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeSDT (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const GALGAS_analysisContext constin_inAnalysisContext,
                                     const GALGAS_bool constin_inHasTranslateFeature,
                                     GALGAS_variableMap & io_ioVariableMap,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode) (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                 const class GALGAS_bool constinArgument0,
                                                                                                                 const class GALGAS_string constinArgument1,
                                                                                                                 class GALGAS_stringset & ioArgument2,
                                                                                                                 class GALGAS_string & ioArgument3,
                                                                                                                 class C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateCode (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const GALGAS_string constin_inAccessMethodName,
                                       GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                       GALGAS_string & io_ioGeneratedCode,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Abstract extension method '@abstractCollectionValueElementForGeneration generateCollectionElementCode'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode) (const class cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                                                                    class GALGAS_string & ioArgument1,
                                                                                                                    class GALGAS_stringset & ioArgument2,
                                                                                                                    class GALGAS_uint & ioArgument3,
                                                                                                                    class GALGAS_stringset & ioArgument4,
                                                                                                                    const class GALGAS_string constinArgument5,
                                                                                                                    class C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateCollectionElementCode (const int32_t inClassIndex,
                                                         extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateCollectionElementCode (const class cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                        const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                                        GALGAS_string & io_ioGeneratedCode,
                                                        GALGAS_stringset & io_ioInclusionSet,
                                                        GALGAS_uint & io_ioTemporaryVariableIndex,
                                                        GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                        const GALGAS_string constin_inCppTargetVar,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@fixitListAST enterFixItListInSemanticContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterFixItListInSemanticContext (const class GALGAS_fixitListAST inObject,
                                                      class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@fixitListForGeneration generateFixIt'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateFixIt (const class GALGAS_fixitListForGeneration inObject,
                                    class GALGAS_stringset & io_ioInclusionSet,
                                    class GALGAS_uint & io_ioTemporaryVariableIndex,
                                    class GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                    const class GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                    class GALGAS_string & io_ioGeneratedCode,
                                    class GALGAS_string & out_outFixItArrayCppName,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@semanticExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticExpressionForGeneration_generateExpression) (const class cPtr_semanticExpressionForGeneration * inObject,
                                                                                             class GALGAS_string & ioArgument0,
                                                                                             class GALGAS_stringset & ioArgument1,
                                                                                             class GALGAS_uint & ioArgument2,
                                                                                             class GALGAS_stringset & ioArgument3,
                                                                                             class GALGAS_string & outArgument4,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateExpression (const int32_t inClassIndex,
                                              extensionMethodSignature_semanticExpressionForGeneration_generateExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateExpression (const class cPtr_semanticExpressionForGeneration * inObject,
                                             GALGAS_string & io_ioGeneratedCode,
                                             GALGAS_stringset & io_ioInclusionSet,
                                             GALGAS_uint & io_ioTemporaryVariableIndex,
                                             GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                             GALGAS_string & out_outCppExpression,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract extension method '@abstractEnumeratedCollectionAST enterInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext) (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                                 class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterInSemanticContext (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@abstractEnumeratedCollectionAST analyzeEnumeration'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration) (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                             const class GALGAS_lstring constinArgument0,
                                                                                             class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                             const class GALGAS_analysisContext constinArgument2,
                                                                                             class GALGAS_variableMap & ioArgument3,
                                                                                             class GALGAS_localInitializedVariableList & ioArgument4,
                                                                                             class GALGAS_string & outArgument5,
                                                                                             class GALGAS_semanticExpressionForGeneration & outArgument6,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeEnumeration (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeEnumeration (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                             const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                             GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                             const GALGAS_analysisContext constin_inAnalysisContext,
                                             GALGAS_variableMap & io_ioVariableMap,
                                             GALGAS_localInitializedVariableList & io_ioLocalConstantListForDoBranch,
                                             GALGAS_string & out_outEnumeratorCppName,
                                             GALGAS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Extension method '@syntaxInstructionListForGrammarAnalysis tikzNodeForSyntaxInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_tikzNodeForSyntaxInstruction (const class GALGAS_syntaxInstructionListForGrammarAnalysis inObject,
                                                   class GALGAS_rowList & io_ioRowList,
                                                   const class GALGAS_uint constin_inRow,
                                                   class GALGAS_uint & io_ioColumn,
                                                   class GALGAS_string & io_ioCurrentNode,
                                                   class GALGAS_string & io_ioArrowShape,
                                                   class GALGAS_string & io_ioArrows,
                                                   class GALGAS_uint & io_ioMaxUsedRowIndex,
                                                   const class GALGAS_bool constin_inDebug,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

#endif
