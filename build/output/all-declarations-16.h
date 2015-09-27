#ifndef all_2D_declarations_2D__31__36__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__36__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-15.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeRoutineArguments'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineArguments (const class GALGAS_analysisContext constinArgument0,
                                      const class GALGAS_lstring constinArgument1,
                                      const class GALGAS_string constinArgument2,
                                      const class GALGAS_formalParameterSignature constinArgument3,
                                      const class GALGAS_actualParameterListAST constinArgument4,
                                      class GALGAS_variableMap & ioArgument5,
                                      class GALGAS_semanticInstructionListForGeneration & ioArgument6,
                                      class GALGAS_actualParameterListForGeneration & outArgument7,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@actualParameterAST checkAgainstFormalArgument'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_actualParameterAST_checkAgainstFormalArgument) (const class cPtr_actualParameterAST * inObject,
                                                                                       const class GALGAS_analysisContext constinArgument0,
                                                                                       const class GALGAS_lstring constinArgument1,
                                                                                       const class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                                                       const class GALGAS_formalArgumentPassingModeAST constinArgument3,
                                                                                       class GALGAS_variableMap & ioArgument4,
                                                                                       class GALGAS_actualParameterListForGeneration & ioArgument5,
                                                                                       class GALGAS_stringset & ioArgument6,
                                                                                       class GALGAS_semanticInstructionListForGeneration & ioArgument7,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkAgainstFormalArgument (const int32_t inClassIndex,
                                                     categoryMethodSignature_actualParameterAST_checkAgainstFormalArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkAgainstFormalArgument (const class cPtr_actualParameterAST * inObject,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    const GALGAS_lstring constin_inFormalSelector,
                                                    const GALGAS_unifiedTypeMap_2D_proxy constin_inFormalArgumentType,
                                                    const GALGAS_formalArgumentPassingModeAST constin_inFormalArgumentPassingMode,
                                                    GALGAS_variableMap & io_ioVariableMap,
                                                    GALGAS_actualParameterListForGeneration & io_ioActualParameterListForGeneration,
                                                    GALGAS_stringset & io_ioExclusiveVariableSet,
                                                    GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Function 'checkMethodImplementationInSuperClasses'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_checkMethodImplementationInSuperClasses (const class GALGAS_lstring & constinArgument0,
                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Function 'checkModifierImplementationInSuperClasses'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_checkModifierImplementationInSuperClasses (const class GALGAS_lstring & constinArgument0,
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'checkExpressionIsBoolean'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkExpressionIsBoolean (const class GALGAS_analysisContext constinArgument0,
                                       const class GALGAS_location constinArgument1,
                                       const class GALGAS_semanticExpressionForGeneration constinArgument2,
                                       class GALGAS_semanticExpressionForGeneration & outArgument3,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @structFieldAccessExpressionForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structFieldAccessExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_structFieldAccessExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_structFieldAccessExpressionForGeneration * ptr (void) const { return (const cPtr_structFieldAccessExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structFieldAccessExpressionForGeneration (const cPtr_structFieldAccessExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structFieldAccessExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structFieldAccessExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                   const class GALGAS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structFieldAccessExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mStructFieldName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structFieldAccessExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @structFieldAccessExpressionForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structFieldAccessExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mExpression ;
  public : GALGAS_string mAttribute_mStructFieldName ;

//--- Constructor
  public : cPtr_structFieldAccessExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                          const GALGAS_location & in_mLocation,
                                                          const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                          const GALGAS_string & in_mStructFieldName
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mStructFieldName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkMethodSignatures'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkMethodSignatures (const class GALGAS_formalParameterListForGeneration constinArgument0,
                                    const class GALGAS_location constinArgument1,
                                    const class GALGAS_formalParameterSignature constinArgument2,
                                    const class GALGAS_location constinArgument3,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category Getter '@formalArgumentPassingModeAST formalArgumentMessage' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_formalArgumentMessage (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Getter '@formalArgumentPassingModeAST string' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_string (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkReaderSignatures'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkReaderSignatures (const class GALGAS_formalInputParameterListForGeneration constinArgument0,
                                    const class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                    const class GALGAS_location constinArgument2,
                                    const class GALGAS_functionSignature constinArgument3,
                                    const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                    const class GALGAS_location constinArgument5,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'check_K_escapeCharacters'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_check_5F_K_5F_escapeCharacters (class GALGAS_lstring inArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'check_K_L_escapeCharacters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_check_5F_K_5F_L_5F_escapeCharacters (class GALGAS_lstring inArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'forbiddenKeysForMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_forbiddenKeysForMap (class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'buildLocalVariableMapAndSignature'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLocalVariableMapAndSignature (const class GALGAS_semanticContext constinArgument0,
                                                const class GALGAS_formalParameterListAST constinArgument1,
                                                class GALGAS_variableMap & ioArgument2,
                                                class GALGAS_formalParameterListForGeneration & outArgument3,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeRoutineBody'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineBody (const class GALGAS_analysisContext constinArgument0,
                                 const class GALGAS_formalParameterListAST constinArgument1,
                                 const class GALGAS_localConstantList constinArgument2,
                                 const class GALGAS_typedPropertyList constinArgument3,
                                 const class GALGAS_typedPropertyList constinArgument4,
                                 const class GALGAS_string constinArgument5,
                                 const class GALGAS_semanticInstructionListAST constinArgument6,
                                 const class GALGAS_location constinArgument7,
                                 class GALGAS_semanticInstructionListForGeneration & outArgument8,
                                 class GALGAS_formalParameterListForGeneration & outArgument9,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeFunctionBody'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionBody (const class GALGAS_analysisContext constinArgument0,
                                  const class GALGAS_formalInputParameterListAST constinArgument1,
                                  const class GALGAS_typedPropertyList constinArgument2,
                                  const class GALGAS_string constinArgument3,
                                  const class GALGAS_semanticInstructionListAST constinArgument4,
                                  const class GALGAS_lstring constinArgument5,
                                  const class GALGAS_lstring constinArgument6,
                                  const class GALGAS_location constinArgument7,
                                  class GALGAS_formalInputParameterListForGeneration & outArgument8,
                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument9,
                                  class GALGAS_string & outArgument10,
                                  class GALGAS_semanticInstructionListForGeneration & outArgument11,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'buildPredefinedTypes'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_predefinedTypes function_buildPredefinedTypes (const class GALGAS_semanticContext & constinArgument0,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'performSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performSemanticAnalysis (const class GALGAS_string constinArgument0,
                                      const class GALGAS_semanticDeclarationListAST constinArgument1,
                                      const class GALGAS_semanticContext constinArgument2,
                                      class GALGAS_semanticDeclarationSortedListForGeneration & outArgument3,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@semanticDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationAST_semanticAnalysis) (const class cPtr_semanticDeclarationAST * inObject,
                                                                                 const class GALGAS_string constinArgument0,
                                                                                 const class GALGAS_semanticContext constinArgument1,
                                                                                 const class GALGAS_predefinedTypes constinArgument2,
                                                                                 class GALGAS_semanticDeclarationSortedListForGeneration & ioArgument3,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_semanticDeclarationAST_semanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const class cPtr_semanticDeclarationAST * inObject,
                                          const GALGAS_string constin_inProductDirectory,
                                          const GALGAS_semanticContext constin_inSemanticContext,
                                          const GALGAS_predefinedTypes constin_inPredefinedTypes,
                                          GALGAS_semanticDeclarationSortedListForGeneration & io_ioSemanticDeclarationListForGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Filewrapper 'syntaxFileGenerationTemplate'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'syntaxFileGenerationTemplate syntaxFileHeader'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileHeader (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                 const class GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                 const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'syntaxFileGenerationTemplate syntaxFileHeaderGalgas3'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileHeaderGalgas_33_ (class C_Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                           const class GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementation (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                         const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (class C_Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                               const class GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                               const class GALGAS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                               const class GALGAS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                               const class GALGAS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                               const class GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                               const class GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'enterNonterminalNonTerminalInMapAndCheck'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterNonterminalNonTerminalInMapAndCheck (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_nonterminalLabelMap constinArgument1,
                                                       class GALGAS_nonterminalMap & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildNonterminalDeclarationsMap'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildNonterminalDeclarationsMap (const class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                              const class GALGAS_semanticContext constinArgument1,
                                              class GALGAS_nonterminalMap & outArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeSyntaxInstructionList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSyntaxInstructionList (const class GALGAS_analysisContext constinArgument0,
                                           const class GALGAS_bool constinArgument1,
                                           const class GALGAS_terminalMap constinArgument2,
                                           const class GALGAS_string constinArgument3,
                                           const class GALGAS_nonterminalMap constinArgument4,
                                           const class GALGAS_string constinArgument5,
                                           const class GALGAS_syntaxInstructionList constinArgument6,
                                           const class GALGAS_location constinArgument7,
                                           const class GALGAS_stringset constinArgument8,
                                           class GALGAS_variableMap & ioArgument9,
                                           class GALGAS_uint & ioArgument10,
                                           class GALGAS_semanticInstructionListForGeneration & outArgument11,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@syntaxInstructionAST analyzeSyntaxInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction) (const class cPtr_syntaxInstructionAST * inObject,
                                                                                       const class GALGAS_analysisContext constinArgument0,
                                                                                       const class GALGAS_bool constinArgument1,
                                                                                       const class GALGAS_terminalMap constinArgument2,
                                                                                       const class GALGAS_string constinArgument3,
                                                                                       const class GALGAS_nonterminalMap constinArgument4,
                                                                                       const class GALGAS_string constinArgument5,
                                                                                       const class GALGAS_stringset constinArgument6,
                                                                                       class GALGAS_semanticInstructionListForGeneration & ioArgument7,
                                                                                       class GALGAS_variableMap & ioArgument8,
                                                                                       class GALGAS_uint & ioArgument9,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSyntaxInstruction (const int32_t inClassIndex,
                                                   categoryMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSyntaxInstruction (const class cPtr_syntaxInstructionAST * inObject,
                                                  const GALGAS_analysisContext constin_inAnalysisContext,
                                                  const GALGAS_bool constin_inHasTranslateFeature,
                                                  const GALGAS_terminalMap constin_inTerminalMap,
                                                  const GALGAS_string constin_inLexiqueName,
                                                  const GALGAS_nonterminalMap constin_inNonterminalMap,
                                                  const GALGAS_string constin_inComponentName,
                                                  const GALGAS_stringset constin_inIndexNameSet,
                                                  GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                  GALGAS_variableMap & io_ioVariableMap,
                                                  GALGAS_uint & io_ioSelectMethodCount,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'semanticAnalysisOfRuleLabel'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfRuleLabel (const class GALGAS_formalParameterListAST constinArgument0,
                                          const class GALGAS_syntaxInstructionList constinArgument1,
                                          const class GALGAS_analysisContext constinArgument2,
                                          const class GALGAS_terminalMap constinArgument3,
                                          const class GALGAS_bool constinArgument4,
                                          const class GALGAS_string constinArgument5,
                                          const class GALGAS_nonterminalMap constinArgument6,
                                          const class GALGAS_string constinArgument7,
                                          const class GALGAS_location constinArgument8,
                                          const class GALGAS_stringset constinArgument9,
                                          class GALGAS_uint & ioArgument10,
                                          class GALGAS_formalParameterListForGeneration & outArgument11,
                                          class GALGAS_formalParameterSignature & outArgument12,
                                          class GALGAS_semanticInstructionListForGeneration & outArgument13,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'semanticAnalysisOfSyntaxComponent'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfSyntaxComponent (const class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                const class GALGAS_syntaxRuleListAST constinArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_semanticContext constinArgument4,
                                                const class GALGAS_predefinedTypes constinArgument5,
                                                const class GALGAS_terminalMap constinArgument6,
                                                const class GALGAS_stringset constinArgument7,
                                                const class GALGAS_bool constinArgument8,
                                                const class GALGAS_bool constinArgument9,
                                                class GALGAS_syntaxDeclarationForGeneration & outArgument10,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateProcedure'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateProcedure (const class GALGAS_bool constinArgument0,
                                const class GALGAS_string constinArgument1,
                                class GALGAS_stringset & ioArgument2,
                                class GALGAS_formalParameterListForGeneration inArgument3,
                                const class GALGAS_semanticInstructionListForGeneration constinArgument4,
                                const class GALGAS_bool constinArgument5,
                                const class GALGAS_string constinArgument6,
                                const class GALGAS_bool constinArgument7,
                                const class GALGAS_bool constinArgument8,
                                const class GALGAS_bool constinArgument9,
                                class GALGAS_string & outArgument10,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@unifiedTypeMap-proxy addHeaderFileName'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_addHeaderFileName (const class GALGAS_unifiedTypeMap_2D_proxy inObject,
                                       class GALGAS_stringset & io_ioInclusions,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateFunction'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateFunction (const class GALGAS_string constinArgument0,
                               class GALGAS_stringset & ioArgument1,
                               const class GALGAS_formalInputParameterListForGeneration constinArgument2,
                               const class GALGAS_semanticInstructionListForGeneration constinArgument3,
                               const class GALGAS_string constinArgument4,
                               const class GALGAS_unifiedTypeMap_2D_proxy constinArgument5,
                               const class GALGAS_string constinArgument6,
                               const class GALGAS_bool constinArgument7,
                               class GALGAS_string & outArgument8,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateCategoryModifier'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryModifier (const class GALGAS_string constinArgument0,
                                       const class GALGAS_string constinArgument1,
                                       const class GALGAS_string constinArgument2,
                                       class GALGAS_stringset & ioArgument3,
                                       const class GALGAS_formalParameterListForGeneration constinArgument4,
                                       const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                       class GALGAS_string & outArgument6,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateCategoryMethod'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryMethod (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class GALGAS_stringset & ioArgument2,
                                     const class GALGAS_string constinArgument3,
                                     const class GALGAS_formalParameterListForGeneration constinArgument4,
                                     const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                     class GALGAS_string & outArgument6,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateCategoryReader'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryReader (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class GALGAS_stringset & ioArgument2,
                                     const class GALGAS_string constinArgument3,
                                     const class GALGAS_formalInputParameterListForGeneration constinArgument4,
                                     const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                     const class GALGAS_string constinArgument6,
                                     const class GALGAS_string constinArgument7,
                                     const class GALGAS_string constinArgument8,
                                     class GALGAS_string & outArgument9,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'typeGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_typeGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                  const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const class GALGAS_bool & in_IS_5F_CONCRETE,
                                                                                  const class GALGAS_constructorMap & in_CONSTRUCTOR_5F_MAP,
                                                                                  const class GALGAS_getterMap & in_READER_5F_MAP,
                                                                                  const class GALGAS_setterMap & in_MODIFIER_5F_MAP,
                                                                                  const class GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                  const class GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                                  const class GALGAS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                  const class GALGAS_uint & in_SUPPORTED_5F_OPERATORS,
                                                                                  const class GALGAS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_ENUMERATED_5F_OBJECT_5F_TYPE
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'typeGenerationTemplate genericTypeImplementation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (class C_Compiler * inCompiler,
                                                                                    const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & in_SUPER_5F_TYPE_5F_INDEX,
                                                                                    const class GALGAS_uint & in_SUPPORTED_5F_OPERATORS
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate externTypeHeader1'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_TYPE_5F_NAME,
                                                                               const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const class GALGAS_string & in_PRE_5F_DECLARATION,
                                                                               const class GALGAS_string & in_CODE
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate graphTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & in_TYPE,
                                                                                          const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                          const class GALGAS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate arrayTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_uint & in_DIMENSION
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate arrayTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_uint & in_DIMENSION,
                                                                                          const class GALGAS_stringlist & in_DIMENSION_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'typeGenerationTemplate listmapTypeHeader1'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                const class GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'typeGenerationTemplate listmapTypeSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const class GALGAS_string & in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER,
                                                                                            const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'typeGenerationTemplate mapTypeHeader1'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                            const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'typeGenerationTemplate mapTypeHeader2'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (class C_Compiler * inCompiler,
                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'typeGenerationTemplate mapTypeSpecificImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                        const class GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_mapRemoveMethodListAST & in_REMOVE_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate classTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                              const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                              const class GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'typeGenerationTemplate classTypeHeader2part1'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (class C_Compiler * inCompiler,
                                                                                      const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                      const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'typeGenerationTemplate classTypeHeader2part2'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (class C_Compiler * inCompiler,
                                                                                      const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                      const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate classTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                          const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                          const class GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                          const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                          const class GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Filewrapper 'semanticComponentGenerationTemplate'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_semanticComponentGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryReaderDeclaration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderDeclaration (class C_Compiler * inCompiler,
                                                                                                         const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                         const class GALGAS_string & in_READER_5F_NAME,
                                                                                                         const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const class GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryReaderImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderImplementation (class C_Compiler * inCompiler,
                                                                                                            const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                            const class GALGAS_string & in_READER_5F_NAME,
                                                                                                            const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                            const class GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate categoryReaderDeclaration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderDeclaration (class C_Compiler * inCompiler,
                                                                                                 const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                 const class GALGAS_string & in_READER_5F_NAME,
                                                                                                 const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'semanticComponentGenerationTemplate categoryReaderImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderImplementation (class C_Compiler * inCompiler,
                                                                                                    const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                    const class GALGAS_string & in_READER_5F_NAME,
                                                                                                    const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE,
                                                                                                    const class GALGAS_string & in_READER_5F_IMPLEMENTATION
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate overridingCategoryReaderImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryReaderImplementation (class C_Compiler * inCompiler,
                                                                                                              const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                              const class GALGAS_string & in_READER_5F_NAME,
                                                                                                              const class GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE,
                                                                                                              const class GALGAS_string & in_READER_5F_IMPLEMENTATION
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryModifierDeclaration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierDeclaration (class C_Compiler * inCompiler,
                                                                                                           const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                           const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                           const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryModifierImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierImplementation (class C_Compiler * inCompiler,
                                                                                                              const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                              const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                              const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'semanticComponentGenerationTemplate categoryModifierDeclaration'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierDeclaration (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                   const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                   const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'semanticComponentGenerationTemplate categoryModifierImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierImplementation (class C_Compiler * inCompiler,
                                                                                                      const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                      const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                      const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                      const class GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Filewrapper template 'semanticComponentGenerationTemplate overridingCategoryModifierImplementation'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryModifierImplementation (class C_Compiler * inCompiler,
                                                                                                                const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                                const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                                const class GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryMethodDeclaration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodDeclaration (class C_Compiler * inCompiler,
                                                                                                         const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                         const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                         const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryMethodImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodImplementation (class C_Compiler * inCompiler,
                                                                                                            const class GALGAS_unifiedTypeMap_2D_proxy & in_RECEIVER_5F_TYPE,
                                                                                                            const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                            const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate categoryMethodDeclaration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodDeclaration (class C_Compiler * inCompiler,
                                                                                                 const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                 const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                 const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'semanticComponentGenerationTemplate categoryMethodImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodImplementation (class C_Compiler * inCompiler,
                                                                                                    const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                    const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                    const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                    const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate overridingCategoryMethodImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryMethodImplementation (class C_Compiler * inCompiler,
                                                                                                              const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                              const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                              const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (class C_Compiler * inCompiler,
                                                                                              const class GALGAS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_string & in_FILEWRAPPER_5F_NAME
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (class C_Compiler * inCompiler,
                                                                                                 const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                 const class GALGAS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate categoryReaderAsFunctionDeclaration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionDeclaration (class C_Compiler * inCompiler,
                                                                                                           const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                           const class GALGAS_string & in_READER_5F_NAME,
                                                                                                           const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                           const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate categoryReaderAsFunctionImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionImplementation (class C_Compiler * inCompiler,
                                                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                              const class GALGAS_string & in_READER_5F_NAME,
                                                                                                              const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate categoryMethodAsFunctionDeclaration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionDeclaration (class C_Compiler * inCompiler,
                                                                                                           const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                           const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                           const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate categoryMethodAsFunctionImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (class C_Compiler * inCompiler,
                                                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                              const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                              const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate categoryModifierAsFunctionDeclaration'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierAsFunctionDeclaration (class C_Compiler * inCompiler,
                                                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                             const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                             const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Filewrapper template 'semanticComponentGenerationTemplate categoryMmodifierAsFunctionImplementation'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMmodifierAsFunctionImplementation (class C_Compiler * inCompiler,
                                                                                                                 const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                                 const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                                 const class GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (class C_Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                           const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (class C_Compiler * inCompiler,
                                                                                              const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                              const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                              const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                              const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                          const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                             const class GALGAS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (class C_Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                                  const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                                  const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (class C_Compiler * inCompiler,
                                                                                                      const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const class GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (class C_Compiler * inCompiler,
                                                                                                         const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                         const class GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                         const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const class GALGAS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                         const class GALGAS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                         const class GALGAS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'recursivlyEnumerateRegularFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursivlyEnumerateRegularFile (const class GALGAS_wrapperFileMap constinArgument0,
                                             const class GALGAS_wrapperDirectoryMap constinArgument1,
                                             class GALGAS_stringlist & ioArgument2,
                                             class GALGAS_stringlist & ioArgument3,
                                             class GALGAS_stringlist & ioArgument4,
                                             class GALGAS_stringlist & ioArgument5,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateWrapperContents'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateWrapperContents (const class GALGAS_string constinArgument0,
                                      const class GALGAS_string constinArgument1,
                                      const class GALGAS_uint constinArgument2,
                                      const class GALGAS_wrapperFileMap constinArgument3,
                                      const class GALGAS_wrapperDirectoryMap constinArgument4,
                                      class GALGAS_string & ioArgument5,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Filewrapper 'predefinedTypeGenerationTemplate'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (class C_Compiler * inCompiler,
                                                                                                 const class GALGAS_stringset & in_TYPE_5F_LIST
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate sint_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate object_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate uint_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate bool_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'predefinedTypeGenerationTemplate function_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate type_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'predefinedTypeGenerationTemplate location_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate data_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate char_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate double_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate string_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'predefinedTypeGenerationTemplate application_type'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate timer_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

#endif
