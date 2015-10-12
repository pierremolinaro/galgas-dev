#ifndef all_2D_declarations_2D__31__39__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__39__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-18.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @templateInstructionSwitchForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateInstructionSwitchForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionSwitchForGeneration (void) ;

//---
  public : inline const class cPtr_templateInstructionSwitchForGeneration * ptr (void) const { return (const cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionSwitchForGeneration (const cPtr_templateInstructionSwitchForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionSwitchForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateInstructionSwitchForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                 const class GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionSwitchForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mSwitchExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListForGeneration reader_mTemplateInstructionSwitchBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionSwitchForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @templateInstructionSwitchForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionSwitchForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mSwitchExpression ;
  public : GALGAS_templateInstructionSwitchBranchListForGeneration mAttribute_mTemplateInstructionSwitchBranchList ;

//--- Constructor
  public : cPtr_templateInstructionSwitchForGeneration (const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                        const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mSwitchExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionSwitchBranchListForGeneration reader_mTemplateInstructionSwitchBranchList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category method '@templateExpressionAST templateExpressionAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_templateExpressionAST_templateExpressionAnalysis) (const class cPtr_templateExpressionAST * inObject,
                                                                                          const class GALGAS_templateAnalysisContext constinArgument0,
                                                                                          class GALGAS_semanticExpressionForGeneration & outArgument1,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_templateExpressionAnalysis (const int32_t inClassIndex,
                                                     categoryMethodSignature_templateExpressionAST_templateExpressionAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_templateExpressionAnalysis (const class cPtr_templateExpressionAST * inObject,
                                                    const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                    GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category reader '@lexicalExpressionAST generateConditionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalExpressionAST_generateConditionCode) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                                   class GALGAS_lexiqueAnalysisContext inArgument0,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateConditionCode (const int32_t inClassIndex,
                                                categoryReaderSignature_lexicalExpressionAST_generateConditionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                              GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Abstract category reader '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                                         class C_Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                            categoryReaderSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Abstract category reader '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                        class C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateRoutineArgument (const int32_t inClassIndex,
                                                  categoryReaderSignature_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category reader '@lexicalSendDefaultActionAST generateDefaultSendCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalSendDefaultActionAST_generateDefaultSendCode) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                            class GALGAS_string inArgument0,
                                                                                                            class C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateDefaultSendCode (const int32_t inClassIndex,
                                                  categoryReaderSignature_lexicalSendDefaultActionAST_generateDefaultSendCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                GALGAS_string in_inScannerClassName,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category reader '@lexicalInstructionAST generateInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalInstructionAST_generateInstructionCode) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                                      class GALGAS_string inArgument0,
                                                                                                      class GALGAS_lexiqueAnalysisContext inArgument1,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateInstructionCode (const int32_t inClassIndex,
                                                  categoryReaderSignature_lexicalInstructionAST_generateInstructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                GALGAS_string in_inScannerClassName,
                                                                GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category reader '@lexicalExpressionAST generateCocoaConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalExpressionAST_generateCocoaConditionCode) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                                        class GALGAS_lexiqueAnalysisContext inArgument0,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaConditionCode (const int32_t inClassIndex,
                                                     categoryReaderSignature_lexicalExpressionAST_generateCocoaConditionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateCocoaConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                                   GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Abstract category reader '@lexicalRoutineOrFunctionFormalInputArgumentAST generateCocoaRoutineOrFunctionArgument'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                                              class C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                                 categoryReaderSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateCocoaRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Abstract category reader '@abstractLexicalRoutineActualArgumentAST generateCocoaRoutineArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                             class GALGAS_lexiqueAnalysisContext inArgument0,
                                                                                                                             class C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaRoutineArgument (const int32_t inClassIndex,
                                                       categoryReaderSignature_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateCocoaRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category reader '@lexicalSendDefaultActionAST generateCocoaDefaultSendCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                                 class GALGAS_string inArgument0,
                                                                                                                 class C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaDefaultSendCode (const int32_t inClassIndex,
                                                       categoryReaderSignature_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateCocoaDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                     GALGAS_string in_inScannerClassName,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category reader '@lexicalInstructionAST generateCocoaInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalInstructionAST_generateCocoaInstructionCode) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                                           class GALGAS_string inArgument0,
                                                                                                           class GALGAS_lexiqueAnalysisContext inArgument1,
                                                                                                           class C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaInstructionCode (const int32_t inClassIndex,
                                                       categoryReaderSignature_lexicalInstructionAST_generateCocoaInstructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateCocoaInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                     GALGAS_string in_inScannerClassName,
                                                                     GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category Getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool categoryReader_needsReferenceInInputOutputInCocoa (const class GALGAS_lexicalTypeEnum & inObject,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                               class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalDefaultAction (const int32_t inClassIndex,
                                                    categoryMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalDefaultAction (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                   GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category method '@lexicalExpressionAST checkLexicalExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_lexicalExpressionAST_checkLexicalExpression) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                     class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalExpression (const int32_t inClassIndex,
                                                 categoryMethodSignature_lexicalExpressionAST_checkLexicalExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalExpression (const class cPtr_lexicalExpressionAST * inObject,
                                                GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Abstract category method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                         class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                         class GALGAS_lexicalTypeEnum inArgument1,
                                                                                                                         class C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalFunctionCallArgument (const int32_t inClassIndex,
                                                           categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalFunctionCallArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Abstract category method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                        class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                        class GALGAS_lexicalTypeEnum inArgument1,
                                                                                                                        class C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                          categoryMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalRoutineCallArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                         GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                         GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract category method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                 class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                 class GALGAS_lexicalArgumentModeAST inArgument1,
                                                                                                                 class GALGAS_lexicalTypeEnum inArgument2,
                                                                                                                 class C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                          categoryMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalRoutineCallArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                         GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                         GALGAS_lexicalArgumentModeAST in_inLexicalRoutineFormalArgumentMode,
                                                         GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@lexicalInstructionAST checkLexicalInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_lexicalInstructionAST_checkLexicalInstruction) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                       class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                       class GALGAS_lexicalTagMap & ioArgument1,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalInstruction (const int32_t inClassIndex,
                                                  categoryMethodSignature_lexicalInstructionAST_checkLexicalInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalInstruction (const class cPtr_lexicalInstructionAST * inObject,
                                                 GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 GALGAS_lexicalTagMap & io_ioTagMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@abstractLexicalRuleAST checkLexicalRule'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractLexicalRuleAST_checkLexicalRule) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                 class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalRule (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractLexicalRuleAST_checkLexicalRule inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalRule (const class cPtr_abstractLexicalRuleAST * inObject,
                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@predefinedTypeAST getConstructorMap'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_predefinedTypeAST_getConstructorMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                             class GALGAS_unifiedTypeMap & ioArgument0,
                                                                             class GALGAS_constructorMap & outArgument1,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getConstructorMap (const int32_t inClassIndex,
                                            categoryMethodSignature_predefinedTypeAST_getConstructorMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getConstructorMap (const class cPtr_predefinedTypeAST * inObject,
                                           GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                           GALGAS_constructorMap & out_outConstructorMap,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@predefinedTypeAST getReaderMap'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_predefinedTypeAST_getReaderMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                        class GALGAS_unifiedTypeMap & ioArgument0,
                                                                        class GALGAS_getterMap & outArgument1,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getReaderMap (const int32_t inClassIndex,
                                       categoryMethodSignature_predefinedTypeAST_getReaderMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getReaderMap (const class cPtr_predefinedTypeAST * inObject,
                                      GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                      GALGAS_getterMap & out_outReaderMap,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@predefinedTypeAST getModifierMap'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_predefinedTypeAST_getModifierMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                          class GALGAS_unifiedTypeMap & ioArgument0,
                                                                          class GALGAS_setterMap & outArgument1,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getModifierMap (const int32_t inClassIndex,
                                         categoryMethodSignature_predefinedTypeAST_getModifierMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getModifierMap (const class cPtr_predefinedTypeAST * inObject,
                                        GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                        GALGAS_setterMap & out_outModifierMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@predefinedTypeAST getInstanceMethodMap'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_predefinedTypeAST_getInstanceMethodMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                                class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                class GALGAS_instanceMethodMap & outArgument1,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getInstanceMethodMap (const int32_t inClassIndex,
                                               categoryMethodSignature_predefinedTypeAST_getInstanceMethodMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getInstanceMethodMap (const class cPtr_predefinedTypeAST * inObject,
                                              GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                              GALGAS_instanceMethodMap & out_outInstanceMethodMap,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@predefinedTypeAST getClassMethodMap'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_predefinedTypeAST_getClassMethodMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                             class GALGAS_unifiedTypeMap & ioArgument0,
                                                                             class GALGAS_classMethodMap & outArgument1,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getClassMethodMap (const int32_t inClassIndex,
                                            categoryMethodSignature_predefinedTypeAST_getClassMethodMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getClassMethodMap (const class cPtr_predefinedTypeAST * inObject,
                                           GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                           GALGAS_classMethodMap & out_outClassMethodMap,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category reader '@predefinedTypeAST getSupportedOperatorFlags'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*categoryReaderSignature_predefinedTypeAST_getSupportedOperatorFlags) (const class cPtr_predefinedTypeAST * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_getSupportedOperatorFlags (const int32_t inClassIndex,
                                                    categoryReaderSignature_predefinedTypeAST_getSupportedOperatorFlags inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callCategoryReader_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@predefinedTypeAST getAddAssignArgumentList'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_predefinedTypeAST_getAddAssignArgumentList) (const class cPtr_predefinedTypeAST * inObject,
                                                                                    class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                    class GALGAS_functionSignature & outArgument1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getAddAssignArgumentList (const int32_t inClassIndex,
                                                   categoryMethodSignature_predefinedTypeAST_getAddAssignArgumentList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getAddAssignArgumentList (const class cPtr_predefinedTypeAST * inObject,
                                                  GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                                  GALGAS_functionSignature & out_outAddAssignArgumentList,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@predefinedTypeAST getEnumerationList'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_predefinedTypeAST_getEnumerationList) (const class cPtr_predefinedTypeAST * inObject,
                                                                              class GALGAS_unifiedTypeMap & ioArgument0,
                                                                              class GALGAS_enumerationDescriptorList & outArgument1,
                                                                              class GALGAS_stringlist & outArgument2,
                                                                              class GALGAS_string & outArgument3,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getEnumerationList (const int32_t inClassIndex,
                                             categoryMethodSignature_predefinedTypeAST_getEnumerationList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getEnumerationList (const class cPtr_predefinedTypeAST * inObject,
                                            GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GALGAS_enumerationDescriptorList & out_outEnumerationList,
                                            GALGAS_stringlist & out_outEnumerationVariant,
                                            GALGAS_string & out_outEnumeratedType,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@location sourceFile' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_sourceFile (const class GALGAS_location & inObject,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category Getter '@location commaSourceFile' (as function)                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_commaSourceFile (const class GALGAS_location & inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category method '@semanticInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext) (const class cPtr_semanticInstructionAST * inObject,
                                                                                                  class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInstructionInSemanticContext (const int32_t inClassIndex,
                                                            categoryMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInstructionInSemanticContext (const class cPtr_semanticInstructionAST * inObject,
                                                           GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category method '@semanticExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext) (const class cPtr_semanticExpressionAST * inObject,
                                                                                                class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterExpressionInSemanticContext (const int32_t inClassIndex,
                                                           categoryMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterExpressionInSemanticContext (const class cPtr_semanticExpressionAST * inObject,
                                                          GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@semanticInstructionListAST enterInstructionListInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInstructionListInSemanticContext (const class GALGAS_semanticInstructionListAST inObject,
                                                           class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@actualOutputExpressionList enterInSemanticContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInSemanticContext (const class GALGAS_actualOutputExpressionList inObject,
                                            class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category Getter '@predefinedTypeKindEnum defaultConstructorName' (as function)                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_defaultConstructorName (const class GALGAS_predefinedTypeKindEnum & inObject,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@abstractCollectionValueElement enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractCollectionValueElement_enterInSemanticContext) (const class cPtr_abstractCollectionValueElement * inObject,
                                                                                               class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                 categoryMethodSignature_abstractCollectionValueElement_enterInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInSemanticContext (const class cPtr_abstractCollectionValueElement * inObject,
                                                GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@abstractCollectionValueElement analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractCollectionValueElement_analyze) (const class cPtr_abstractCollectionValueElement * inObject,
                                                                                const class GALGAS_analysisContext constinArgument0,
                                                                                const class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                                class GALGAS_variableMap & ioArgument2,
                                                                                class GALGAS_collectionValueElementListForGeneration & ioArgument3,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyze (const int32_t inClassIndex,
                                  categoryMethodSignature_abstractCollectionValueElement_analyze inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyze (const class cPtr_abstractCollectionValueElement * inObject,
                                 const GALGAS_analysisContext constin_inAnalysisContext,
                                 const GALGAS_unifiedTypeMap_2D_proxy constin_inElementType,
                                 GALGAS_variableMap & io_ioVariableMap,
                                 GALGAS_collectionValueElementListForGeneration & io_ioCollectionValueElementListForGeneration,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Category Getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString' (as function)         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_correspondingEffectiveParameterString (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@actualParameterAST enterParameterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_actualParameterAST_enterParameterInSemanticContext) (const class cPtr_actualParameterAST * inObject,
                                                                                            class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                            class C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterParameterInSemanticContext (const int32_t inClassIndex,
                                                          categoryMethodSignature_actualParameterAST_enterParameterInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterParameterInSemanticContext (const class cPtr_actualParameterAST * inObject,
                                                         GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Abstract category method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT) (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                                const class GALGAS_analysisContext constinArgument0,
                                                                                                                                const class GALGAS_bool constinArgument1,
                                                                                                                                const class GALGAS_string constinArgument2,
                                                                                                                                class GALGAS_stringlist & ioArgument3,
                                                                                                                                class GALGAS_variableMap & ioArgument4,
                                                                                                                                class C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeGrammarInstructionSDT (const int32_t inClassIndex,
                                                       categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeGrammarInstructionSDT (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                      const GALGAS_analysisContext constin_inAnalysisContext,
                                                      const GALGAS_bool constin_inHasTranslateFeature,
                                                      const GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                      GALGAS_stringlist & io_ioAssignementList,
                                                      GALGAS_variableMap & io_ioVariableMap,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@abstractInputParameter analyzeInputParameter'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractInputParameter_analyzeInputParameter) (const class cPtr_abstractInputParameter * inObject,
                                                                                      const class GALGAS_analysisContext constinArgument0,
                                                                                      const class GALGAS_lexicalTypeEnum constinArgument1,
                                                                                      const class GALGAS_string constinArgument2,
                                                                                      class GALGAS_terminalCheckAssignementList & ioArgument3,
                                                                                      class GALGAS_variableMap & ioArgument4,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeInputParameter (const int32_t inClassIndex,
                                                categoryMethodSignature_abstractInputParameter_analyzeInputParameter inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeInputParameter (const class cPtr_abstractInputParameter * inObject,
                                               const GALGAS_analysisContext constin_inAnalysisContext,
                                               const GALGAS_lexicalTypeEnum constin_inRequiredLexicalType,
                                               const GALGAS_string constin_inLexicalAttributeName,
                                               GALGAS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                               GALGAS_variableMap & io_ioVariableMap,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Abstract category method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT) (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                              const class GALGAS_analysisContext constinArgument0,
                                                                                                              const class GALGAS_bool constinArgument1,
                                                                                                              class GALGAS_variableMap & ioArgument2,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSDT (const int32_t inClassIndex,
                                     categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSDT (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                    const GALGAS_bool constin_inHasTranslateFeature,
                                    GALGAS_variableMap & io_ioVariableMap,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract category method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode) (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                const class GALGAS_bool constinArgument0,
                                                                                                                const class GALGAS_string constinArgument1,
                                                                                                                class GALGAS_stringset & ioArgument2,
                                                                                                                class GALGAS_string & ioArgument3,
                                                                                                                class C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateCode (const int32_t inClassIndex,
                                       categoryMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateCode (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                      const GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                      const GALGAS_string constin_inAccessMethodName,
                                      GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                      GALGAS_string & io_ioGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Abstract category method '@abstractCollectionValueElementForGeneration generateCollectionElementCode'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode) (const class cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                                   const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                                                                   class GALGAS_string & ioArgument1,
                                                                                                                   class GALGAS_stringset & ioArgument2,
                                                                                                                   class GALGAS_uint & ioArgument3,
                                                                                                                   class GALGAS_stringset & ioArgument4,
                                                                                                                   const class GALGAS_string constinArgument5,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateCollectionElementCode (const int32_t inClassIndex,
                                                        categoryMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateCollectionElementCode (const class cPtr_abstractCollectionValueElementForGeneration * inObject,
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
//                 Abstract category method '@abstractEnumeratedCollectionAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext) (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                                class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                 categoryMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInSemanticContext (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@abstractEnumeratedCollectionAST analyzeEnumeration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration) (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                            const class GALGAS_analysisContext constinArgument0,
                                                                                            class GALGAS_variableMap & ioArgument1,
                                                                                            class GALGAS_localInitializedVariableList & ioArgument2,
                                                                                            class GALGAS_string & outArgument3,
                                                                                            class GALGAS_semanticExpressionForGeneration & outArgument4,
                                                                                            class C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeEnumeration (const int32_t inClassIndex,
                                             categoryMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeEnumeration (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                            const GALGAS_analysisContext constin_inAnalysisContext,
                                            GALGAS_variableMap & io_ioVariableMap,
                                            GALGAS_localInitializedVariableList & io_ioLocalConstantListForDoBranch,
                                            GALGAS_string & out_outEnumeratorCppName,
                                            GALGAS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

#endif
