#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ruleDeclarationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ruleDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_ruleDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_ruleDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mNonterminalName,
                                                  const class GALGAS_uint & in_mRuleIndex,
                                                  const class GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ruleDeclarationList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ruleDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_ruleDeclarationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_uint & inOperand1,
                                                                              const class GALGAS_ruleLabelImplementationList & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ruleDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_ruleLabelImplementationList & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_ruleDeclarationList add_operation (const GALGAS_ruleDeclarationList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_ruleDeclarationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       class GALGAS_ruleLabelImplementationList constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_ruleLabelImplementationList & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_ruleLabelImplementationList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       class GALGAS_ruleLabelImplementationList & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLabelImplementationListAtIndex (class GALGAS_ruleLabelImplementationList constinArgument0,
                                                                            class GALGAS_uint constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRuleIndexAtIndex (class GALGAS_uint constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_uint & outArgument1,
                                               class GALGAS_ruleLabelImplementationList & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_ruleLabelImplementationList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList getter_mLabelImplementationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mNonterminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRuleIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_ruleDeclarationList ;
 
} ; // End of GALGAS_ruleDeclarationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_ruleDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_ruleDeclarationList (const GALGAS_ruleDeclarationList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mNonterminalName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mRuleIndex (LOCATION_ARGS) const ;
  public : class GALGAS_ruleLabelImplementationList current_mLabelImplementationList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ruleDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ruleDeclarationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ruleDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mNonterminalName ;

  public : GALGAS_uint mProperty_mRuleIndex ;

  public : GALGAS_ruleLabelImplementationList mProperty_mLabelImplementationList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ruleDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ruleDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_ruleDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ruleDeclarationList_2D_element (const GALGAS_string & in_mNonterminalName,
                                                  const GALGAS_uint & in_mRuleIndex,
                                                  const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ruleDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ruleDeclarationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_uint & inOperand1,
                                                                               const class GALGAS_ruleLabelImplementationList & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ruleDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList getter_mLabelImplementationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mNonterminalName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRuleIndex (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ruleDeclarationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxDeclarationForGeneration : public GALGAS_semanticDeclarationForGeneration {
//--- Constructor
  public : GALGAS_syntaxDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_syntaxDeclarationForGeneration * ptr (void) const { return (const cPtr_syntaxDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_syntaxDeclarationForGeneration (const cPtr_syntaxDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syntaxDeclarationForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_nonterminalMap & inOperand2,
                                                                               const class GALGAS_ruleDeclarationList & inOperand3,
                                                                               const class GALGAS_uint & inOperand4,
                                                                               const class GALGAS_bool & inOperand5,
                                                                               const class GALGAS_bool & inOperand6
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMHasIndexing (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeature (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationMap (class GALGAS_nonterminalMap inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRuleDeclarationList (class GALGAS_ruleDeclarationList inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSelectMethodCount (class GALGAS_uint inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasIndexing (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalMap getter_mNonterminalDeclarationMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList getter_mRuleDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSelectMethodCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @syntaxDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_syntaxDeclarationForGeneration : public cPtr_semanticDeclarationForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mSyntaxComponentName ;
  public : GALGAS_string mProperty_mLexiqueName ;
  public : GALGAS_nonterminalMap mProperty_mNonterminalDeclarationMap ;
  public : GALGAS_ruleDeclarationList mProperty_mRuleDeclarationList ;
  public : GALGAS_uint mProperty_mSelectMethodCount ;
  public : GALGAS_bool mProperty_mHasIndexing ;
  public : GALGAS_bool mProperty_mHasTranslateFeature ;

//--- Constructor
  public : cPtr_syntaxDeclarationForGeneration (const GALGAS_string & in_mSyntaxComponentName,
                                                const GALGAS_string & in_mLexiqueName,
                                                const GALGAS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                const GALGAS_ruleDeclarationList & in_mRuleDeclarationList,
                                                const GALGAS_uint & in_mSelectMethodCount,
                                                const GALGAS_bool & in_mHasIndexing,
                                                const GALGAS_bool & in_mHasTranslateFeature
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLexiqueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_nonterminalMap getter_mNonterminalDeclarationMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationMap (GALGAS_nonterminalMap inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_ruleDeclarationList getter_mRuleDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRuleDeclarationList (GALGAS_ruleDeclarationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mSelectMethodCount (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSelectMethodCount (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasIndexing (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasIndexing (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeature (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction) (const class cPtr_syntaxInstructionAST * inObject,
                                                                                        const class GALGAS_lstring constinArgument0,
                                                                                        class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                        const class GALGAS_analysisContext constinArgument2,
                                                                                        const class GALGAS_bool constinArgument3,
                                                                                        const class GALGAS_terminalMap constinArgument4,
                                                                                        const class GALGAS_string constinArgument5,
                                                                                        const class GALGAS_nonterminalMap constinArgument6,
                                                                                        const class GALGAS_string constinArgument7,
                                                                                        const class GALGAS_stringset constinArgument8,
                                                                                        class GALGAS_semanticInstructionListForGeneration & ioArgument9,
                                                                                        class GALGAS_variableMap & ioArgument10,
                                                                                        class GALGAS_uint & ioArgument11,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeSyntaxInstruction (const int32_t inClassIndex,
                                                    extensionMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSyntaxInstruction (const class cPtr_syntaxInstructionAST * inObject,
                                                   const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                   GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
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

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInputParameter analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractInputParameter_analyzeInputParameter) (const class cPtr_abstractInputParameter * inObject,
                                                                                       const class GALGAS_analysisContext constinArgument0,
                                                                                       const class GALGAS_lexicalTypeEnum constinArgument1,
                                                                                       const class GALGAS_string constinArgument2,
                                                                                       class GALGAS_terminalCheckAssignementList & ioArgument3,
                                                                                       class GALGAS_variableMap & ioArgument4,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeInputParameter (const int32_t inClassIndex,
                                                 extensionMethodSignature_abstractInputParameter_analyzeInputParameter inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (const class cPtr_abstractInputParameter * inObject,
                                                const GALGAS_analysisContext constin_inAnalysisContext,
                                                const GALGAS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const GALGAS_string constin_inLexicalAttributeName,
                                                GALGAS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                                GALGAS_variableMap & io_ioVariableMap,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT) (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                               const class GALGAS_analysisContext constinArgument0,
                                                                                                               const class GALGAS_bool constinArgument1,
                                                                                                               class GALGAS_variableMap & ioArgument2,
                                                                                                               class C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeSDT (const int32_t inClassIndex,
                                      extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSDT (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const GALGAS_analysisContext constin_inAnalysisContext,
                                     const GALGAS_bool constin_inHasTranslateFeature,
                                     GALGAS_variableMap & io_ioVariableMap,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode) (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                 const class GALGAS_bool constinArgument0,
                                                                                                                 const class GALGAS_string constinArgument1,
                                                                                                                 class GALGAS_stringset & ioArgument2,
                                                                                                                 class GALGAS_string & ioArgument3,
                                                                                                                 class C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const GALGAS_string constin_inAccessMethodName,
                                       GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                       GALGAS_string & io_ioGeneratedCode,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @keySortedList sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_keySortedList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_keySortedList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_keySortedList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_keySortedList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_keySortedList constructor_sortedListWithValue (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_uint & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_keySortedList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_string & outArgument0,
                                                     class GALGAS_uint & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_string & outArgument0,
                                                     class GALGAS_uint & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_string & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_string & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_keySortedList ;
 
} ; // End of GALGAS_keySortedList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_keySortedList : public cGenericAbstractEnumerator {
  public : cEnumerator_keySortedList (const GALGAS_keySortedList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mKey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mOrder (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_keySortedList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_keySortedList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @keySortedList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_keySortedList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mKey ;

  public : GALGAS_uint mProperty_mOrder ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_keySortedList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_keySortedList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_keySortedList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_keySortedList_2D_element (const GALGAS_string & in_mKey,
                                            const GALGAS_uint & in_mOrder) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_keySortedList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_keySortedList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_uint & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_keySortedList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mKey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOrder (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_keySortedList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_keySortedList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @uselessEntityLocationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_uselessEntityLocationMap ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uselessEntityLocationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_uselessEntityLocationMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_uselessEntityLocationMap (const GALGAS_uselessEntityLocationMap & inSource) ;
  public : GALGAS_uselessEntityLocationMap & operator = (const GALGAS_uselessEntityLocationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_uselessEntityLocationMap extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_uselessEntityLocationMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_uselessEntityLocationMap constructor_mapWithMapToOverride (const class GALGAS_uselessEntityLocationMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_location & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_location constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLocationForKey (class GALGAS_location constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocationForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uselessEntityLocationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_location & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_uselessEntityLocationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                      const GALGAS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_uselessEntityLocationMap ;
 
} ; // End of GALGAS_uselessEntityLocationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_uselessEntityLocationMap : public cGenericAbstractEnumerator {
  public : cEnumerator_uselessEntityLocationMap (const GALGAS_uselessEntityLocationMap & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_uselessEntityLocationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@uselessEntityLocationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_uselessEntityLocationMap : public cMapElement {
//--- Map attributes
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cMapElement_uselessEntityLocationMap (const GALGAS_lstring & inKey,
                                                 const GALGAS_location & in_mLocation
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @uselessEntityLocationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uselessEntityLocationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_location mProperty_mLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_uselessEntityLocationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_uselessEntityLocationMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_uselessEntityLocationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_uselessEntityLocationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                       const GALGAS_location & in_mLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_uselessEntityLocationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_uselessEntityLocationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_location & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_uselessEntityLocationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_uselessEntityLocationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_ifExpressionAST (void) ;

//---
  public : inline const class cPtr_ifExpressionAST * ptr (void) const { return (const cPtr_ifExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ifExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2,
                                                                const class GALGAS_semanticExpressionAST & inOperand3
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMElseExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIfExpression (class GALGAS_semanticExpressionAST inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMThenExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mElseExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mIfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mThenExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ifExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mIfExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mThenExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mElseExpression ;

//--- Constructor
  public : cPtr_ifExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                 const GALGAS_semanticExpressionAST & in_mIfExpression,
                                 const GALGAS_semanticExpressionAST & in_mThenExpression,
                                 const GALGAS_semanticExpressionAST & in_mElseExpression
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mIfExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIfExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mThenExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMThenExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mElseExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElseExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryPlusExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryPlusExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_unaryPlusExpressionAST (void) ;

//---
  public : inline const class cPtr_unaryPlusExpressionAST * ptr (void) const { return (const cPtr_unaryPlusExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_unaryPlusExpressionAST (const cPtr_unaryPlusExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unaryPlusExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unaryPlusExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unaryPlusExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryPlusExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryPlusExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_unaryPlusExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_unaryPlusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_semanticExpressionAST & in_mExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_unaryMinusExpressionAST (void) ;

//---
  public : inline const class cPtr_unaryMinusExpressionAST * ptr (void) const { return (const cPtr_unaryMinusExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_unaryMinusExpressionAST (const cPtr_unaryMinusExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unaryMinusExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unaryMinusExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_semanticExpressionAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unaryMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryMinusExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryMinusExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_unaryMinusExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_unaryMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_semanticExpressionAST & in_mExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actualOutputExpressionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actualOutputExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_actualOutputExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_actualOutputExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mActualSelector,
                                                  const class GALGAS_semanticExpressionAST & in_mExpression,
                                                  const class GALGAS_location & in_mEndOfExpressionLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actualOutputExpressionList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_actualOutputExpressionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_actualOutputExpressionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                     const class GALGAS_location & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_actualOutputExpressionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList add_operation (const GALGAS_actualOutputExpressionList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_actualOutputExpressionList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_semanticExpressionAST constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_semanticExpressionAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_semanticExpressionAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_semanticExpressionAST & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMActualSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionLocationAtIndex (class GALGAS_location constinArgument0,
                                                                            class GALGAS_uint constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_semanticExpressionAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_semanticExpressionAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_semanticExpressionAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_actualOutputExpressionList ;
 
} ; // End of GALGAS_actualOutputExpressionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_actualOutputExpressionList : public cGenericAbstractEnumerator {
  public : cEnumerator_actualOutputExpressionList (const GALGAS_actualOutputExpressionList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public : class GALGAS_semanticExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_actualOutputExpressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualOutputExpressionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actualOutputExpressionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actualOutputExpressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mActualSelector ;

  public : GALGAS_semanticExpressionAST mProperty_mExpression ;

  public : GALGAS_location mProperty_mEndOfExpressionLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_actualOutputExpressionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_actualOutputExpressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_actualOutputExpressionList_2D_element (const GALGAS_lstring & in_mActualSelector,
                                                         const GALGAS_semanticExpressionAST & in_mExpression,
                                                         const GALGAS_location & in_mEndOfExpressionLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actualOutputExpressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_actualOutputExpressionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                      const class GALGAS_location & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_actualOutputExpressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actualOutputExpressionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualOutputExpressionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@actualOutputExpressionList enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const class GALGAS_actualOutputExpressionList inObject,
                                             class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_trueExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_trueExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_trueExpressionAST * ptr (void) const { return (const cPtr_trueExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_trueExpressionAST (const cPtr_trueExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_trueExpressionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_trueExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_trueExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_trueExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @trueExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_trueExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_trueExpressionAST (const GALGAS_location & in_mLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_falseExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_falseExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_falseExpressionAST * ptr (void) const { return (const cPtr_falseExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_falseExpressionAST (const cPtr_falseExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_falseExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_falseExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_falseExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_falseExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @falseExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_falseExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_falseExpressionAST (const GALGAS_location & in_mLocation
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalStringExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringExpressionAST * ptr (void) const { return (const cPtr_literalStringExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringExpressionAST (const cPtr_literalStringExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalStringExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_stringlist & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStringSequence (class GALGAS_stringlist inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mStringSequence (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalStringExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalStringExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mLocation ;
  public : GALGAS_stringlist mProperty_mStringSequence ;

//--- Constructor
  public : cPtr_literalStringExpressionAST (const GALGAS_location & in_mLocation,
                                            const GALGAS_stringlist & in_mStringSequence
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist getter_mStringSequence (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStringSequence (GALGAS_stringlist inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @equalExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_equalExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_equalExpressionAST (void) ;

//---
  public : inline const class cPtr_equalExpressionAST * ptr (void) const { return (const cPtr_equalExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_equalExpressionAST (const cPtr_equalExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_equalExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_equalExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   const class GALGAS_semanticExpressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_equalExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_equalExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equalExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @equalExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_equalExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_equalExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                    const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                    const GALGAS_semanticExpressionAST & in_mRightExpression
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @notEqualExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_notEqualExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_notEqualExpressionAST (void) ;

//---
  public : inline const class cPtr_notEqualExpressionAST * ptr (void) const { return (const cPtr_notEqualExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_notEqualExpressionAST (const cPtr_notEqualExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_notEqualExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_notEqualExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_semanticExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_notEqualExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notEqualExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notEqualExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @notEqualExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_notEqualExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_notEqualExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                       const GALGAS_semanticExpressionAST & in_mRightExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lowerOrEqualExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lowerOrEqualExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_lowerOrEqualExpressionAST (void) ;

//---
  public : inline const class cPtr_lowerOrEqualExpressionAST * ptr (void) const { return (const cPtr_lowerOrEqualExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lowerOrEqualExpressionAST (const cPtr_lowerOrEqualExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lowerOrEqualExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lowerOrEqualExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_semanticExpressionAST & inOperand1,
                                                                          const class GALGAS_semanticExpressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lowerOrEqualExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lowerOrEqualExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lowerOrEqualExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lowerOrEqualExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lowerOrEqualExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_lowerOrEqualExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                           const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                           const GALGAS_semanticExpressionAST & in_mRightExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @greaterOrEqualExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_greaterOrEqualExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_greaterOrEqualExpressionAST (void) ;

//---
  public : inline const class cPtr_greaterOrEqualExpressionAST * ptr (void) const { return (const cPtr_greaterOrEqualExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_greaterOrEqualExpressionAST (const cPtr_greaterOrEqualExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_greaterOrEqualExpressionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_greaterOrEqualExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_semanticExpressionAST & inOperand1,
                                                                            const class GALGAS_semanticExpressionAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_greaterOrEqualExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_greaterOrEqualExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_greaterOrEqualExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @greaterOrEqualExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_greaterOrEqualExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_greaterOrEqualExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                             const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                             const GALGAS_semanticExpressionAST & in_mRightExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @strictGreaterExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_strictGreaterExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_strictGreaterExpressionAST (void) ;

//---
  public : inline const class cPtr_strictGreaterExpressionAST * ptr (void) const { return (const cPtr_strictGreaterExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_strictGreaterExpressionAST (const cPtr_strictGreaterExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_strictGreaterExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_strictGreaterExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                                           const class GALGAS_semanticExpressionAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_strictGreaterExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_strictGreaterExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_strictGreaterExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @strictGreaterExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_strictGreaterExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_strictGreaterExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @strictLowerExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_strictLowerExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_strictLowerExpressionAST (void) ;

//---
  public : inline const class cPtr_strictLowerExpressionAST * ptr (void) const { return (const cPtr_strictLowerExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_strictLowerExpressionAST (const cPtr_strictLowerExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_strictLowerExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_strictLowerExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                                         const class GALGAS_semanticExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_strictLowerExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_strictLowerExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_strictLowerExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @strictLowerExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_strictLowerExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_strictLowerExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                          const GALGAS_semanticExpressionAST & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @rightShiftExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_rightShiftExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_rightShiftExpressionAST (void) ;

//---
  public : inline const class cPtr_rightShiftExpressionAST * ptr (void) const { return (const cPtr_rightShiftExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_rightShiftExpressionAST (const cPtr_rightShiftExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_rightShiftExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_rightShiftExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_semanticExpressionAST & inOperand1,
                                                                        const class GALGAS_semanticExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_rightShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_rightShiftExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @rightShiftExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_rightShiftExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_rightShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                         const GALGAS_semanticExpressionAST & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @leftShiftExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_leftShiftExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_leftShiftExpressionAST (void) ;

//---
  public : inline const class cPtr_leftShiftExpressionAST * ptr (void) const { return (const cPtr_leftShiftExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_leftShiftExpressionAST (const cPtr_leftShiftExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_leftShiftExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_leftShiftExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                       const class GALGAS_semanticExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_leftShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_leftShiftExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @leftShiftExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_leftShiftExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_leftShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @addExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_addExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_addExpressionAST (void) ;

//---
  public : inline const class cPtr_addExpressionAST * ptr (void) const { return (const cPtr_addExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_addExpressionAST (const cPtr_addExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_addExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_addExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1,
                                                                 const class GALGAS_semanticExpressionAST & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_addExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @addExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_addExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_addExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @addExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_addExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_addExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_addExpressionNoOverflowAST * ptr (void) const { return (const cPtr_addExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_addExpressionNoOverflowAST (const cPtr_addExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_addExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_addExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                                           const class GALGAS_semanticExpressionAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_addExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionNoOverflowAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @addExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_addExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_addExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @subExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_subExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_subExpressionAST (void) ;

//---
  public : inline const class cPtr_subExpressionAST * ptr (void) const { return (const cPtr_subExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_subExpressionAST (const cPtr_subExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_subExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_subExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1,
                                                                 const class GALGAS_semanticExpressionAST & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_subExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @subExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_subExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_subExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @subExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_subExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_subExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_subExpressionNoOverflowAST * ptr (void) const { return (const cPtr_subExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_subExpressionNoOverflowAST (const cPtr_subExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_subExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_subExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                                           const class GALGAS_semanticExpressionAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_subExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subExpressionNoOverflowAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @subExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_subExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_subExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @collectionValueElementList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_collectionValueElementList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_collectionValueElementList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_collectionValueElementList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractCollectionValueElement & in_mElement
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueElementList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_collectionValueElementList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_collectionValueElementList constructor_listWithValue (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_collectionValueElementList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_collectionValueElementList add_operation (const GALGAS_collectionValueElementList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_collectionValueElementList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractCollectionValueElement constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GALGAS_abstractCollectionValueElement constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractCollectionValueElement & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractCollectionValueElement & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElement getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_collectionValueElementList ;
 
} ; // End of GALGAS_collectionValueElementList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_collectionValueElementList : public cGenericAbstractEnumerator {
  public : cEnumerator_collectionValueElementList (const GALGAS_collectionValueElementList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractCollectionValueElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_collectionValueElementList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractCollectionValueElement class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractCollectionValueElement : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractCollectionValueElement (void) ;

//---
  public : inline const class cPtr_abstractCollectionValueElement * ptr (void) const { return (const cPtr_abstractCollectionValueElement *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractCollectionValueElement (const cPtr_abstractCollectionValueElement * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractCollectionValueElement extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractCollectionValueElement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCollectionValueElement class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCollectionValueElement ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractCollectionValueElement class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractCollectionValueElement : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractCollectionValueElement (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @collectionValueElementList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_collectionValueElementList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractCollectionValueElement mProperty_mElement ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_collectionValueElementList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_collectionValueElementList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_collectionValueElementList_2D_element (const GALGAS_abstractCollectionValueElement & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueElementList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_collectionValueElementList_2D_element constructor_new (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_collectionValueElementList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElement getter_mElement (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueElementList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionCollectionValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionCollectionValue : public GALGAS_abstractCollectionValueElement {
//--- Constructor
  public : GALGAS_expressionCollectionValue (void) ;

//---
  public : inline const class cPtr_expressionCollectionValue * ptr (void) const { return (const cPtr_expressionCollectionValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionCollectionValue (const cPtr_expressionCollectionValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionCollectionValue extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_expressionCollectionValue constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                          const class GALGAS_location & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionCollectionValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpressionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @expressionCollectionValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_expressionCollectionValue : public cPtr_abstractCollectionValueElement {
//--- Attributes
  public : GALGAS_semanticExpressionAST mProperty_mExpression ;
  public : GALGAS_location mProperty_mExpressionLocation ;

//--- Constructor
  public : cPtr_expressionCollectionValue (const GALGAS_semanticExpressionAST & in_mExpression,
                                           const GALGAS_location & in_mExpressionLocation
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionListCollectionValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionListCollectionValue : public GALGAS_abstractCollectionValueElement {
//--- Constructor
  public : GALGAS_expressionListCollectionValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_expressionListCollectionValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_expressionListCollectionValue * ptr (void) const { return (const cPtr_expressionListCollectionValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionListCollectionValue (const cPtr_expressionListCollectionValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionListCollectionValue extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_expressionListCollectionValue constructor_new (const class GALGAS_actualOutputExpressionList & inOperand0,
                                                                              const class GALGAS_location & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionListCollectionValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionLocation (class GALGAS_location inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (class GALGAS_actualOutputExpressionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_mExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionListCollectionValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionListCollectionValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @expressionListCollectionValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_expressionListCollectionValue : public cPtr_abstractCollectionValueElement {
//--- Attributes
  public : GALGAS_actualOutputExpressionList mProperty_mExpressionList ;
  public : GALGAS_location mProperty_mEndOfExpressionLocation ;

//--- Constructor
  public : cPtr_expressionListCollectionValue (const GALGAS_actualOutputExpressionList & in_mExpressionList,
                                               const GALGAS_location & in_mEndOfExpressionLocation
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList getter_mExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (GALGAS_actualOutputExpressionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfExpressionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElement enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext) (const class cPtr_abstractCollectionValueElement * inObject,
                                                                                                class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (const class cPtr_abstractCollectionValueElement * inObject,
                                                 GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElement analyze'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractCollectionValueElement_analyze) (const class cPtr_abstractCollectionValueElement * inObject,
                                                                                 const class GALGAS_lstring constinArgument0,
                                                                                 class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                 const class GALGAS_analysisContext constinArgument2,
                                                                                 const class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
                                                                                 class GALGAS_variableMap & ioArgument4,
                                                                                 class GALGAS_collectionValueElementListForGeneration & ioArgument5,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyze (const int32_t inClassIndex,
                                   extensionMethodSignature_abstractCollectionValueElement_analyze inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyze (const class cPtr_abstractCollectionValueElement * inObject,
                                  const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                  GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                  const GALGAS_analysisContext constin_inAnalysisContext,
                                  const GALGAS_unifiedTypeMap_2D_proxy constin_inElementType,
                                  GALGAS_variableMap & io_ioVariableMap,
                                  GALGAS_collectionValueElementListForGeneration & io_ioCollectionValueElementListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @collectionValueElementListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_collectionValueElementListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_collectionValueElementListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_collectionValueElementListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueElementListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_collectionValueElementListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_collectionValueElementListForGeneration constructor_listWithValue (const class GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_collectionValueElementListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_collectionValueElementListForGeneration add_operation (const GALGAS_collectionValueElementListForGeneration & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_collectionValueElementListForGeneration_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractCollectionValueElementForGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GALGAS_abstractCollectionValueElementForGeneration constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElementForGeneration getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_collectionValueElementListForGeneration ;
 
} ; // End of GALGAS_collectionValueElementListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_collectionValueElementListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractCollectionValueElementForGeneration current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_collectionValueElementListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractCollectionValueElementForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractCollectionValueElementForGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractCollectionValueElementForGeneration (void) ;

//---
  public : inline const class cPtr_abstractCollectionValueElementForGeneration * ptr (void) const { return (const cPtr_abstractCollectionValueElementForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractCollectionValueElementForGeneration (const cPtr_abstractCollectionValueElementForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractCollectionValueElementForGeneration extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractCollectionValueElementForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCollectionValueElementForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractCollectionValueElementForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractCollectionValueElementForGeneration : public acPtr_class {
//--- Attributes
  public : GALGAS_location mProperty_mExpressionLocation ;

//--- Constructor
  public : cPtr_abstractCollectionValueElementForGeneration (const GALGAS_location & in_mExpressionLocation
                                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @collectionValueElementListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_collectionValueElementListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractCollectionValueElementForGeneration mProperty_mElement ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_collectionValueElementListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_collectionValueElementListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_collectionValueElementListForGeneration_2D_element (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueElementListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_collectionValueElementListForGeneration_2D_element constructor_new (const class GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_collectionValueElementListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElementForGeneration getter_mElement (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueElementListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElementForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode) (const class cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                                                                    class GALGAS_string & ioArgument1,
                                                                                                                    class GALGAS_stringset & ioArgument2,
                                                                                                                    class GALGAS_uint & ioArgument3,
                                                                                                                    class GALGAS_stringset & ioArgument4,
                                                                                                                    const class GALGAS_string constinArgument5,
                                                                                                                    class C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCollectionElementCode (const int32_t inClassIndex,
                                                         extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCollectionElementCode (const class cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                        const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                                        GALGAS_string & io_ioGeneratedCode,
                                                        GALGAS_stringset & io_ioInclusionSet,
                                                        GALGAS_uint & io_ioTemporaryVariableIndex,
                                                        GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                        const GALGAS_string constin_inCppTargetVar,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionListCollectionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionListCollectionForGeneration : public GALGAS_abstractCollectionValueElementForGeneration {
//--- Constructor
  public : GALGAS_expressionListCollectionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_expressionListCollectionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_expressionListCollectionForGeneration * ptr (void) const { return (const cPtr_expressionListCollectionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionListCollectionForGeneration (const cPtr_expressionListCollectionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionListCollectionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_expressionListCollectionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_semanticExpressionListForGeneration & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionListCollectionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (class GALGAS_semanticExpressionListForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_mExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionListCollectionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @expressionListCollectionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_expressionListCollectionForGeneration : public cPtr_abstractCollectionValueElementForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionListForGeneration mProperty_mExpressionList ;

//--- Constructor
  public : cPtr_expressionListCollectionForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                       const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration getter_mExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (GALGAS_semanticExpressionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfInExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_selfInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selfInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selfInExpressionAST * ptr (void) const { return (const cPtr_selfInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfInExpressionAST (const cPtr_selfInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfInExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selfInExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfInExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMSelfLocation (class GALGAS_location inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mSelfLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfInExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfInExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfInExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mSelfLocation ;

//--- Constructor
  public : cPtr_selfInExpressionAST (const GALGAS_location & in_mSelfLocation
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mSelfLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSelfLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @notExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_notExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_notExpressionAST (void) ;

//---
  public : inline const class cPtr_notExpressionAST * ptr (void) const { return (const cPtr_notExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_notExpressionAST (const cPtr_notExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_notExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_notExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_notExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @notExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_notExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_notExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tildeExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tildeExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_tildeExpressionAST (void) ;

//---
  public : inline const class cPtr_tildeExpressionAST * ptr (void) const { return (const cPtr_tildeExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_tildeExpressionAST (const cPtr_tildeExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tildeExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tildeExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tildeExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tildeExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @tildeExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_tildeExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_tildeExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                    const GALGAS_semanticExpressionAST & in_mExpression
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryWrappingMinusExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryWrappingMinusExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_unaryWrappingMinusExpressionAST (void) ;

//---
  public : inline const class cPtr_unaryWrappingMinusExpressionAST * ptr (void) const { return (const cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_unaryWrappingMinusExpressionAST (const cPtr_unaryWrappingMinusExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unaryWrappingMinusExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unaryWrappingMinusExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_semanticExpressionAST & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unaryWrappingMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryWrappingMinusExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryWrappingMinusExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_unaryWrappingMinusExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_unaryWrappingMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                 const GALGAS_semanticExpressionAST & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @orExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_orExpressionAST (void) ;

//---
  public : inline const class cPtr_orExpressionAST * ptr (void) const { return (const cPtr_orExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orExpressionAST (const cPtr_orExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_orExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_orExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_orExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                 const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                 const GALGAS_semanticExpressionAST & in_mRightExpression
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @orShortExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orShortExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_orShortExpressionAST (void) ;

//---
  public : inline const class cPtr_orShortExpressionAST * ptr (void) const { return (const cPtr_orShortExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orShortExpressionAST (const cPtr_orShortExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orShortExpressionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_orShortExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                     const class GALGAS_semanticExpressionAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orShortExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orShortExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orShortExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_orShortExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_orShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                      const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                      const GALGAS_semanticExpressionAST & in_mRightExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xorExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xorExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_xorExpressionAST (void) ;

//---
  public : inline const class cPtr_xorExpressionAST * ptr (void) const { return (const cPtr_xorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_xorExpressionAST (const cPtr_xorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_xorExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_xorExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1,
                                                                 const class GALGAS_semanticExpressionAST & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_xorExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xorExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xorExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_xorExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_xorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @closedSliceExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_closedSliceExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_closedSliceExpressionAST (void) ;

//---
  public : inline const class cPtr_closedSliceExpressionAST * ptr (void) const { return (const cPtr_closedSliceExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_closedSliceExpressionAST (const cPtr_closedSliceExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_closedSliceExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_closedSliceExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                                         const class GALGAS_semanticExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_closedSliceExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_closedSliceExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @closedSliceExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_closedSliceExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_closedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                          const GALGAS_semanticExpressionAST & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @openedSliceExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_openedSliceExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_openedSliceExpressionAST (void) ;

//---
  public : inline const class cPtr_openedSliceExpressionAST * ptr (void) const { return (const cPtr_openedSliceExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_openedSliceExpressionAST (const cPtr_openedSliceExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_openedSliceExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_openedSliceExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                                         const class GALGAS_semanticExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_openedSliceExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_openedSliceExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @openedSliceExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_openedSliceExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_openedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                          const GALGAS_semanticExpressionAST & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @andShortExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andShortExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_andShortExpressionAST (void) ;

//---
  public : inline const class cPtr_andShortExpressionAST * ptr (void) const { return (const cPtr_andShortExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andShortExpressionAST (const cPtr_andShortExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andShortExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_andShortExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_semanticExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andShortExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andShortExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andShortExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_andShortExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_andShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                       const GALGAS_semanticExpressionAST & in_mRightExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @andExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_andExpressionAST (void) ;

//---
  public : inline const class cPtr_andExpressionAST * ptr (void) const { return (const cPtr_andExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andExpressionAST (const cPtr_andExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_andExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1,
                                                                 const class GALGAS_semanticExpressionAST & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_andExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_andExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @multiplicationExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multiplicationExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_multiplicationExpressionAST (void) ;

//---
  public : inline const class cPtr_multiplicationExpressionAST * ptr (void) const { return (const cPtr_multiplicationExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_multiplicationExpressionAST (const cPtr_multiplicationExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multiplicationExpressionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_multiplicationExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_semanticExpressionAST & inOperand1,
                                                                            const class GALGAS_semanticExpressionAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @multiplicationExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_multiplicationExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_multiplicationExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                             const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                             const GALGAS_semanticExpressionAST & in_mRightExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @multiplicationExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multiplicationExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_multiplicationExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_multiplicationExpressionNoOverflowAST * ptr (void) const { return (const cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_multiplicationExpressionNoOverflowAST (const cPtr_multiplicationExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multiplicationExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_multiplicationExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                      const class GALGAS_semanticExpressionAST & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionNoOverflowAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @multiplicationExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_multiplicationExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_multiplicationExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                       const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                       const GALGAS_semanticExpressionAST & in_mRightExpression
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @divisionExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_divisionExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_divisionExpressionAST (void) ;

//---
  public : inline const class cPtr_divisionExpressionAST * ptr (void) const { return (const cPtr_divisionExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_divisionExpressionAST (const cPtr_divisionExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_divisionExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_divisionExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_semanticExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_divisionExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divisionExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @divisionExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_divisionExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_divisionExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                       const GALGAS_semanticExpressionAST & in_mRightExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @divisionExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_divisionExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_divisionExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_divisionExpressionNoOverflowAST * ptr (void) const { return (const cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_divisionExpressionNoOverflowAST (const cPtr_divisionExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_divisionExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_divisionExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_divisionExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divisionExpressionNoOverflowAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @divisionExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_divisionExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_divisionExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                 const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                 const GALGAS_semanticExpressionAST & in_mRightExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @moduloExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_moduloExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_moduloExpressionAST (void) ;

//---
  public : inline const class cPtr_moduloExpressionAST * ptr (void) const { return (const cPtr_moduloExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_moduloExpressionAST (const cPtr_moduloExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_moduloExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_moduloExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_semanticExpressionAST & inOperand1,
                                                                    const class GALGAS_semanticExpressionAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_moduloExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_moduloExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduloExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @moduloExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_moduloExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_moduloExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                     const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                     const GALGAS_semanticExpressionAST & in_mRightExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @variableMap_2D_proxy map proxy
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_variableMap_2D_proxy : public AC_GALGAS_uniqueMapProxy {
//--------------------------------- Default constructor
  public : GALGAS_variableMap_2D_proxy (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_variableMap_2D_proxy extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_variableMap_2D_proxy constructor_neutralAccess (const class GALGAS_variableMap & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_variableMap_2D_proxy constructor_null (LOCATION_ARGS) ;

  public : static class GALGAS_variableMap_2D_proxy constructor_searchForDropAccess (const class GALGAS_variableMap & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_variableMap_2D_proxy constructor_searchForReadAccess (const class GALGAS_variableMap & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_variableMap_2D_proxy constructor_searchForReadWriteAccess (const class GALGAS_variableMap & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_variableMap_2D_proxy constructor_searchForWriteAccess (const class GALGAS_variableMap & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public : static void class_method_makeOptionalProxy (class GALGAS_variableMap & ioArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_variableMap_2D_proxy & outArgument2
                                                       COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxy (class GALGAS_variableMap & ioArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_variableMap_2D_proxy & outArgument2
                                               COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxyFromString (class GALGAS_variableMap & ioArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_variableMap_2D_proxy & outArgument2
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppName (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mNameForCheckingFormalParameterUsing (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeProxy (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_variableMap_2D_proxy class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableMap_2D_proxy ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression) (const class cPtr_semanticExpressionAST * inObject,
                                                                                          const class GALGAS_lstring constinArgument0,
                                                                                          class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                          const class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                                                          const class GALGAS_analysisContext constinArgument3,
                                                                                          class GALGAS_variableMap & ioArgument4,
                                                                                          class GALGAS_semanticExpressionForGeneration & outArgument5,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeSemanticExpression (const int32_t inClassIndex,
                                                     extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticExpression (const class cPtr_semanticExpressionAST * inObject,
                                                    const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                    GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const GALGAS_unifiedTypeMap_2D_proxy constin_inType,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    GALGAS_variableMap & io_ioVariableMap,
                                                    GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_castInstructionBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_castInstructionBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_castInstructionBranchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTypeName,
                                                  const class GALGAS_lstring & in_mConstantVarName,
                                                  const class GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                  const class GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                  const class GALGAS_location & in_mEndOfInstructions
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_castInstructionBranchListAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_castInstructionBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_castInstructionBranchListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_semanticInstructionListAST & inOperand2,
                                                                                       const class GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                       const class GALGAS_location & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_castInstructionBranchListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_semanticInstructionListAST & inOperand2,
                                                      const class GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_castInstructionBranchListAST add_operation (const GALGAS_castInstructionBranchListAST & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_castInstructionBranchListAST_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_semanticInstructionListAST constinArgument2,
                                                       class GALGAS_dynamicTypeComparisonKind constinArgument3,
                                                       class GALGAS_location constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_semanticInstructionListAST & outArgument2,
                                                  class GALGAS_dynamicTypeComparisonKind & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_semanticInstructionListAST & outArgument2,
                                                 class GALGAS_dynamicTypeComparisonKind & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_semanticInstructionListAST & outArgument2,
                                                       class GALGAS_dynamicTypeComparisonKind & outArgument3,
                                                       class GALGAS_location & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConstantVarNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionsAtIndex (class GALGAS_location constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_semanticInstructionListAST constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeComparisonKindAtIndex (class GALGAS_dynamicTypeComparisonKind constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_semanticInstructionListAST & outArgument2,
                                               class GALGAS_dynamicTypeComparisonKind & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_semanticInstructionListAST & outArgument2,
                                              class GALGAS_dynamicTypeComparisonKind & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dynamicTypeComparisonKind getter_mTypeComparisonKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_castInstructionBranchListAST ;
 
} ; // End of GALGAS_castInstructionBranchListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_castInstructionBranchListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mConstantVarName (LOCATION_ARGS) const ;
  public : class GALGAS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_dynamicTypeComparisonKind current_mTypeComparisonKind (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInstructions (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_castInstructionBranchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_castInstructionBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mTypeName ;

  public : GALGAS_lstring mProperty_mConstantVarName ;

  public : GALGAS_semanticInstructionListAST mProperty_mInstructionList ;

  public : GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;

  public : GALGAS_location mProperty_mEndOfInstructions ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_castInstructionBranchListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_castInstructionBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_castInstructionBranchListAST_2D_element (const GALGAS_lstring & in_mTypeName,
                                                           const GALGAS_lstring & in_mConstantVarName,
                                                           const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                           const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                           const GALGAS_location & in_mEndOfInstructions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_castInstructionBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_castInstructionBranchListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_semanticInstructionListAST & inOperand2,
                                                                                        const class GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                        const class GALGAS_location & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_castInstructionBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dynamicTypeComparisonKind getter_mTypeComparisonKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_castInstructionBranchListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListAST_2D_element ;

