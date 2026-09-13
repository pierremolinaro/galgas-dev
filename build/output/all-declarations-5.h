#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @repeatInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstruction : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_repeatInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_repeatInstruction (const class cPtr_repeatInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_syntaxInstructionList readProperty_mRepeatedInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (void) const ;

  public: class GGS_listOfSyntaxInstructionList readProperty_mRepeatBranchList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_repeat_5F_instruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_repeatInstruction init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_syntaxInstructionList & inOperand1,
                                                                 const class GGS_location & inOperand2,
                                                                 const class GGS_listOfSyntaxInstructionList & inOperand3,
                                                                 const class GGS_location & inOperand4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_repeatInstruction extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @repeatInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_repeatInstruction : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void repeatInstruction_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_syntaxInstructionList & inOperand1,
                                                           const class GGS_location & inOperand2,
                                                           const class GGS_listOfSyntaxInstructionList & inOperand3,
                                                           const class GGS_location & inOperand4,
                                                           Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_syntaxInstructionList mProperty_mRepeatedInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  public: GGS_listOfSyntaxInstructionList mProperty_mRepeatBranchList ;
  public: GGS_location mProperty_mEndOf_5F_repeat_5F_instruction ;


//--- Default constructor
  public: cPtr_repeatInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_repeatInstruction (const GGS_location & in_mInstructionLocation,
                                  const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                                  const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                  const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                  const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @repeatInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstruction_2E_weak : public GGS_syntaxInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_repeatInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_repeatInstruction_2E_weak (const class GGS_repeatInstruction & inSource) ;

  public: GGS_repeatInstruction_2E_weak & operator = (const class GGS_repeatInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_repeatInstruction_2E_weak init_nil (void) {
    GGS_repeatInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_repeatInstruction bang_repeatInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_repeatInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_repeatInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_repeatInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @repeatInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstructionForGeneration : public GGS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_repeatInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_repeatInstructionForGeneration (const class cPtr_repeatInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mSyntaxComponentName (void) const ;

  public: class GGS_uint readProperty_mChoiceIndex (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_m_5F_repeated_5F_instructionList (void) const ;

  public: class GGS_location readProperty_mEndOfRepeatedInstructions (void) const ;

  public: class GGS_listOfSemanticInstructionListForGeneration readProperty_mListOfSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_repeatInstructionForGeneration init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_string & inOperand1,
                                                                                  const class GGS_uint & inOperand2,
                                                                                  const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                  const class GGS_location & inOperand4,
                                                                                  const class GGS_listOfSemanticInstructionListForGeneration & inOperand5,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_repeatInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @repeatInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_repeatInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void repeatInstructionForGeneration_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            const class GGS_uint & inOperand2,
                                                                            const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                            const class GGS_location & inOperand4,
                                                                            const class GGS_listOfSemanticInstructionListForGeneration & inOperand5,
                                                                            Compiler * inCompiler) ;


//--- Extension getter compareInstructionSyntaxSignature
  public: virtual class GGS_bool getter_compareInstructionSyntaxSignature (const class GGS_semanticInstructionForGeneration inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg_inPosfix,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mSyntaxComponentName ;
  public: GGS_uint mProperty_mChoiceIndex ;
  public: GGS_semanticInstructionListForGeneration mProperty_m_5F_repeated_5F_instructionList ;
  public: GGS_location mProperty_mEndOfRepeatedInstructions ;
  public: GGS_listOfSemanticInstructionListForGeneration mProperty_mListOfSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_repeatInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_repeatInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                               const GGS_string & in_mSyntaxComponentName,
                                               const GGS_uint & in_mChoiceIndex,
                                               const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                               const GGS_location & in_mEndOfRepeatedInstructions,
                                               const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @repeatInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstructionForGeneration_2E_weak : public GGS_syntaxInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_repeatInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_repeatInstructionForGeneration_2E_weak (const class GGS_repeatInstructionForGeneration & inSource) ;

  public: GGS_repeatInstructionForGeneration_2E_weak & operator = (const class GGS_repeatInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_repeatInstructionForGeneration_2E_weak init_nil (void) {
    GGS_repeatInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_repeatInstructionForGeneration bang_repeatInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_repeatInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_repeatInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_repeatInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInGraph (class cPtr_semanticDeclarationAST * inObject,
                                                  class GGS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                  class GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                  class GGS_extensionInitializerForBuildingContext & io_ioExtensionInitializerForBuildingContext,
                                                  class GGS_extensionMethodMapForBuildingContext & io_ioExtensionMethodMapForBuildingContext,
                                                  class GGS_extensionGetterMapForBuildingContext & io_ioExtensionGetterMapForBuildingContext,
                                                  class GGS_extensionSetterMapForBuildingContext & io_ioExtensionSetterMapForBuildingContext,
                                                  class GGS_semanticDeclarationListAST & io_ioExtensionOverrideDefinitionList,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticTypePrecedenceGraph graph
//--------------------------------------------------------------------------------------------------

class GGS_semanticTypePrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GGS_semanticTypePrecedenceGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticTypePrecedenceGraph init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticTypePrecedenceGraph extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_addNode (class GGS_lstring inArgument0,
                               class GGS_semanticDeclarationAST inArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_circularities (class GGS_semanticDeclarationListAST & outArgument0,
                                     class GGS_lstringlist & outArgument1
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_depthFirstTopologicalSort (class GGS_semanticDeclarationListAST & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 class GGS_semanticDeclarationListAST & outArgument2,
                                                 class GGS_lstringlist & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoPredecessor (class GGS_semanticDeclarationListAST & outArgument0,
                                              class GGS_lstringlist & outArgument1
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoSuccessor (class GGS_semanticDeclarationListAST & outArgument0,
                                            class GGS_lstringlist & outArgument1
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_topologicalSort (class GGS_semanticDeclarationListAST & outArgument0,
                                       class GGS_lstringlist & outArgument1,
                                       class GGS_semanticDeclarationListAST & outArgument2,
                                       class GGS_lstringlist & outArgument3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_lstringlist getter_accessibleNodesFrom (const class GGS_lstringlist & constinOperand0,
                                                            const class GGS_stringset & constinOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationListAST getter_nodeList (LOCATION_ARGS) const ;

  public: class GGS_semanticTypePrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: class GGS_semanticTypePrecedenceGraph getter_subgraphFromNodes (const class GGS_lstringlist & constinOperand0,
                                                                          const class GGS_stringset & constinOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_semanticDeclarationListAST final {
  public: DownEnumerator_semanticDeclarationListAST (const class GGS_semanticDeclarationListAST & inList) ;

  public: ~ DownEnumerator_semanticDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticDeclarationAST current_mSemanticDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_semanticDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_semanticDeclarationListAST (const DownEnumerator_semanticDeclarationListAST &) = delete ;
  private: DownEnumerator_semanticDeclarationListAST & operator = (const DownEnumerator_semanticDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_semanticDeclarationListAST final {
  public: UpEnumerator_semanticDeclarationListAST (const class GGS_semanticDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_semanticDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticDeclarationAST current_mSemanticDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_semanticDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_semanticDeclarationListAST (const UpEnumerator_semanticDeclarationListAST &) = delete ;
  private: UpEnumerator_semanticDeclarationListAST & operator = (const UpEnumerator_semanticDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @semanticDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_semanticDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_semanticDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_semanticDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_semanticDeclarationListAST (const GGS_semanticDeclarationListAST &) = default ;
  public: GGS_semanticDeclarationListAST & operator = (const GGS_semanticDeclarationListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_semanticDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_semanticDeclarationListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_semanticDeclarationListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_semanticDeclarationAST & in_mSemanticDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticDeclarationListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticDeclarationListAST class_func_listWithValue (const class GGS_semanticDeclarationAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_semanticDeclarationListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_semanticDeclarationAST & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_semanticDeclarationListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_semanticDeclarationListAST add_operation (const GGS_semanticDeclarationListAST & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticDeclarationAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_semanticDeclarationAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_semanticDeclarationAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_semanticDeclarationAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_semanticDeclarationAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMSemanticDeclarationAtIndex (class GGS_semanticDeclarationAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_semanticDeclarationAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_semanticDeclarationAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationAST getter_mSemanticDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_semanticDeclarationListAST ;
  friend class DownEnumerator_semanticDeclarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForBuildingContext map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionGetterMapForBuildingContext final {

  public: DownEnumerator_extensionGetterMapForBuildingContext (const class GGS_extensionGetterMapForBuildingContext & inMap) ;

  public: ~ DownEnumerator_extensionGetterMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForType current_mExtensionGetterMapForType (LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionGetterMapForBuildingContext (const DownEnumerator_extensionGetterMapForBuildingContext &) = delete ;
  private: DownEnumerator_extensionGetterMapForBuildingContext & operator = (const DownEnumerator_extensionGetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionGetterMapForBuildingContext final {
  public: UpEnumerator_extensionGetterMapForBuildingContext (const class GGS_extensionGetterMapForBuildingContext & inMap)  ;

  public: ~ UpEnumerator_extensionGetterMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionGetterMapForType current_mExtensionGetterMapForType (LOCATION_ARGS) const ;
  public: class GGS_extensionGetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionGetterMapForBuildingContext (const UpEnumerator_extensionGetterMapForBuildingContext &) = delete ;
  private: UpEnumerator_extensionGetterMapForBuildingContext & operator = (const UpEnumerator_extensionGetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForBuildingContext : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForBuildingContext_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionGetterMapForBuildingContext (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionGetterMapForBuildingContext (void) ;

//--- Handle copy
  public: GGS_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inSource) ;
  public: GGS_extensionGetterMapForBuildingContext & operator = (const GGS_extensionGetterMapForBuildingContext & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_extensionGetterMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForBuildingContext init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForBuildingContext extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionGetterMapForBuildingContext & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionGetterMapForType constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_replaceKey (class GGS_extensionGetterMapForBuildingContext_2E_element constinArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMExtensionGetterMapForTypeForKey (class GGS_extensionGetterMapForType constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionGetterMapForType & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForType getter_mExtensionGetterMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extensionGetterMapForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionGetterMapForBuildingContext ;
  friend class DownEnumerator_extensionGetterMapForBuildingContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerForBuildingContext map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionInitializerForBuildingContext final {

  public: DownEnumerator_extensionInitializerForBuildingContext (const class GGS_extensionInitializerForBuildingContext & inMap) ;

  public: ~ DownEnumerator_extensionInitializerForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerMapForType current_mExtensionInitializerMapForType (LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionInitializerForBuildingContext (const DownEnumerator_extensionInitializerForBuildingContext &) = delete ;
  private: DownEnumerator_extensionInitializerForBuildingContext & operator = (const DownEnumerator_extensionInitializerForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionInitializerForBuildingContext final {
  public: UpEnumerator_extensionInitializerForBuildingContext (const class GGS_extensionInitializerForBuildingContext & inMap)  ;

  public: ~ UpEnumerator_extensionInitializerForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionInitializerMapForType current_mExtensionInitializerMapForType (LOCATION_ARGS) const ;
  public: class GGS_extensionInitializerForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionInitializerForBuildingContext (const UpEnumerator_extensionInitializerForBuildingContext &) = delete ;
  private: UpEnumerator_extensionInitializerForBuildingContext & operator = (const UpEnumerator_extensionInitializerForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerForBuildingContext : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionInitializerForBuildingContext_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionInitializerForBuildingContext (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionInitializerForBuildingContext (void) ;

//--- Handle copy
  public: GGS_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inSource) ;
  public: GGS_extensionInitializerForBuildingContext & operator = (const GGS_extensionInitializerForBuildingContext & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_extensionInitializerForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerForBuildingContext init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionInitializerForBuildingContext extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionInitializerForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionInitializerForBuildingContext & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionInitializerMapForType constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_replaceKey (class GGS_extensionInitializerForBuildingContext_2E_element constinArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMExtensionInitializerMapForTypeForKey (class GGS_extensionInitializerMapForType constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionInitializerMapForType & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerMapForType getter_mExtensionInitializerMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extensionInitializerForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionInitializerForBuildingContext ;
  friend class DownEnumerator_extensionInitializerForBuildingContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForBuildingContext map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionMethodMapForBuildingContext final {

  public: DownEnumerator_extensionMethodMapForBuildingContext (const class GGS_extensionMethodMapForBuildingContext & inMap) ;

  public: ~ DownEnumerator_extensionMethodMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForType current_mExtensionMethodMapForType (LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionMethodMapForBuildingContext (const DownEnumerator_extensionMethodMapForBuildingContext &) = delete ;
  private: DownEnumerator_extensionMethodMapForBuildingContext & operator = (const DownEnumerator_extensionMethodMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionMethodMapForBuildingContext final {
  public: UpEnumerator_extensionMethodMapForBuildingContext (const class GGS_extensionMethodMapForBuildingContext & inMap)  ;

  public: ~ UpEnumerator_extensionMethodMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionMethodMapForType current_mExtensionMethodMapForType (LOCATION_ARGS) const ;
  public: class GGS_extensionMethodMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionMethodMapForBuildingContext (const UpEnumerator_extensionMethodMapForBuildingContext &) = delete ;
  private: UpEnumerator_extensionMethodMapForBuildingContext & operator = (const UpEnumerator_extensionMethodMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForBuildingContext : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForBuildingContext_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionMethodMapForBuildingContext (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionMethodMapForBuildingContext (void) ;

//--- Handle copy
  public: GGS_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inSource) ;
  public: GGS_extensionMethodMapForBuildingContext & operator = (const GGS_extensionMethodMapForBuildingContext & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_extensionMethodMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForBuildingContext init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForBuildingContext extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionMethodMapForBuildingContext & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionMethodMapForType constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_replaceKey (class GGS_extensionMethodMapForBuildingContext_2E_element constinArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMExtensionMethodMapForTypeForKey (class GGS_extensionMethodMapForType constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionMethodMapForType & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForType getter_mExtensionMethodMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extensionMethodMapForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionMethodMapForBuildingContext ;
  friend class DownEnumerator_extensionMethodMapForBuildingContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForBuildingContext map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionSetterMapForBuildingContext final {

  public: DownEnumerator_extensionSetterMapForBuildingContext (const class GGS_extensionSetterMapForBuildingContext & inMap) ;

  public: ~ DownEnumerator_extensionSetterMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForType current_mExtensionSetterMapForType (LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionSetterMapForBuildingContext (const DownEnumerator_extensionSetterMapForBuildingContext &) = delete ;
  private: DownEnumerator_extensionSetterMapForBuildingContext & operator = (const DownEnumerator_extensionSetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionSetterMapForBuildingContext final {
  public: UpEnumerator_extensionSetterMapForBuildingContext (const class GGS_extensionSetterMapForBuildingContext & inMap)  ;

  public: ~ UpEnumerator_extensionSetterMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionSetterMapForType current_mExtensionSetterMapForType (LOCATION_ARGS) const ;
  public: class GGS_extensionSetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionSetterMapForBuildingContext (const UpEnumerator_extensionSetterMapForBuildingContext &) = delete ;
  private: UpEnumerator_extensionSetterMapForBuildingContext & operator = (const UpEnumerator_extensionSetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForBuildingContext : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionSetterMapForBuildingContext_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionSetterMapForBuildingContext (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionSetterMapForBuildingContext (void) ;

//--- Handle copy
  public: GGS_extensionSetterMapForBuildingContext (const GGS_extensionSetterMapForBuildingContext & inSource) ;
  public: GGS_extensionSetterMapForBuildingContext & operator = (const GGS_extensionSetterMapForBuildingContext & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_extensionSetterMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForBuildingContext init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForBuildingContext extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionSetterMapForBuildingContext & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionSetterMapForType constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_replaceKey (class GGS_extensionSetterMapForBuildingContext_2E_element constinArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMExtensionSetterMapForTypeForKey (class GGS_extensionSetterMapForType constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionSetterMapForType & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForType getter_mExtensionSetterMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extensionSetterMapForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionSetterMapForBuildingContext ;
  friend class DownEnumerator_extensionSetterMapForBuildingContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInSemanticContext (class cPtr_semanticDeclarationAST * inObject,
                                                            class GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                            const class GGS_extensionInitializerForBuildingContext constin_inExtensionInitializerMapForBuildingContext,
                                                            const class GGS_extensionMethodMapForBuildingContext constin_inExtensionMethodMapForBuildingContext,
                                                            const class GGS_extensionGetterMapForBuildingContext constin_inExtensionGetterMapForBuildingContext,
                                                            const class GGS_extensionSetterMapForBuildingContext constin_inExtensionSetterMapForBuildingContext,
                                                            class GGS_unifiedTypeMap & io_ioTypeMap,
                                                            class GGS_semanticContext & io_ioSemanticContext,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (class cPtr_semanticDeclarationAST * inObject,
                                           class GGS_lstringlist & io_ioUsefulnessRootEntities,
                                           class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                           const class GGS_string constin_inProductDirectory,
                                           const class GGS_semanticContext constin_inSemanticContext,
                                           class GGS_unifiedTypeMap & io_ioTypeMap,
                                           const class GGS_predefinedTypes constin_inPredefinedTypes,
                                           class GGS_semanticDeclarationListForGeneration & io_ioSemanticDeclarationListForGeneration,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_semanticDeclarationListForGeneration final {
  public: DownEnumerator_semanticDeclarationListForGeneration (const class GGS_semanticDeclarationListForGeneration & inList) ;

  public: ~ DownEnumerator_semanticDeclarationListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_infoMessage (LOCATION_ARGS) const ;
  public: class GGS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticDeclarationListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_semanticDeclarationListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_semanticDeclarationListForGeneration (const DownEnumerator_semanticDeclarationListForGeneration &) = delete ;
  private: DownEnumerator_semanticDeclarationListForGeneration & operator = (const DownEnumerator_semanticDeclarationListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_semanticDeclarationListForGeneration final {
  public: UpEnumerator_semanticDeclarationListForGeneration (const class GGS_semanticDeclarationListForGeneration & inList)  ;

  public: ~ UpEnumerator_semanticDeclarationListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_infoMessage (LOCATION_ARGS) const ;
  public: class GGS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticDeclarationListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_semanticDeclarationListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_semanticDeclarationListForGeneration (const UpEnumerator_semanticDeclarationListForGeneration &) = delete ;
  private: UpEnumerator_semanticDeclarationListForGeneration & operator = (const UpEnumerator_semanticDeclarationListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @semanticDeclarationListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_semanticDeclarationListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_semanticDeclarationListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_semanticDeclarationListForGeneration (void) = default ;

//--- Copy
  public: GGS_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration &) = default ;
  public: GGS_semanticDeclarationListForGeneration & operator = (const GGS_semanticDeclarationListForGeneration &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_semanticDeclarationListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_semanticDeclarationListForGeneration subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_semanticDeclarationListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_infoMessage,
                                                 const class GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationListForGeneration init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticDeclarationListForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticDeclarationListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                          const class GGS_semanticDeclarationForGeneration & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_semanticDeclarationListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_semanticDeclarationForGeneration & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_semanticDeclarationListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_semanticDeclarationListForGeneration add_operation (const GGS_semanticDeclarationListForGeneration & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_semanticDeclarationForGeneration constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_semanticDeclarationForGeneration constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_semanticDeclarationForGeneration & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_semanticDeclarationForGeneration & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_semanticDeclarationForGeneration & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setInfoMessageAtIndex (class GGS_string constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMDeclarationAtIndex (class GGS_semanticDeclarationForGeneration constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_semanticDeclarationForGeneration & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_semanticDeclarationForGeneration & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_infoMessageAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationForGeneration getter_mDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_semanticDeclarationListForGeneration ;
  friend class DownEnumerator_semanticDeclarationListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE galgasScanner_33_
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_galgasScanner_33_ : public cToken {
  public: BigSigned mLexicalAttribute_bigintValue ;
  public: utf32 mLexicalAttribute_charValue ;
  public: double mLexicalAttribute_floatValue ;
  public: String mLexicalAttribute_identifierString ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_galgasScanner_33_ (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_galgasScanner_33_ : public Lexique {
//--- Constructors
  public: Lexique_galgasScanner_33_ (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_galgasScanner_33_ (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_galgasScanner_33_ (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken_double_2E_xxx = 2 ;
  public: static const int32_t kToken_literalInt = 3 ;
  public: static const int32_t kToken__27_char_27_ = 4 ;
  public: static const int32_t kToken__24_terminal_24_ = 5 ;
  public: static const int32_t kToken_comment = 6 ;
  public: static const int32_t kToken_commentMark = 7 ;
  public: static const int32_t kToken__40_type = 8 ;
  public: static const int32_t kToken__3F_selector_3A_ = 9 ;
  public: static const int32_t kToken__3F_ = 10 ;
  public: static const int32_t kToken__3F__21_selector_3A_ = 11 ;
  public: static const int32_t kToken__3F__21_ = 12 ;
  public: static const int32_t kToken__21_selector_3A_ = 13 ;
  public: static const int32_t kToken__21_ = 14 ;
  public: static const int32_t kToken__21__3F_selector_3A_ = 15 ;
  public: static const int32_t kToken__21__3F_ = 16 ;
  public: static const int32_t kToken__3C_ = 17 ;
  public: static const int32_t kToken__3C__3D_ = 18 ;
  public: static const int32_t kToken__3C__3C_ = 19 ;
  public: static const int32_t kToken__3C_non_5F_terminal_3E_ = 20 ;
  public: static const int32_t kToken__22_string_22_ = 21 ;
  public: static const int32_t kToken_abstract = 22 ;
  public: static const int32_t kToken_after = 23 ;
  public: static const int32_t kToken_as = 24 ;
  public: static const int32_t kToken_bang = 25 ;
  public: static const int32_t kToken_before = 26 ;
  public: static const int32_t kToken_between = 27 ;
  public: static const int32_t kToken_block = 28 ;
  public: static const int32_t kToken_boolset = 29 ;
  public: static const int32_t kToken_case = 30 ;
  public: static const int32_t kToken_class = 31 ;
  public: static const int32_t kToken_default = 32 ;
  public: static const int32_t kToken_dict = 33 ;
  public: static const int32_t kToken_do = 34 ;
  public: static const int32_t kToken_drop = 35 ;
  public: static const int32_t kToken_else = 36 ;
  public: static const int32_t kToken_elsif = 37 ;
  public: static const int32_t kToken_end = 38 ;
  public: static const int32_t kToken_enum = 39 ;
  public: static const int32_t kToken_error = 40 ;
  public: static const int32_t kToken_extension = 41 ;
  public: static const int32_t kToken_extern = 42 ;
  public: static const int32_t kToken_false = 43 ;
  public: static const int32_t kToken_fileprivate = 44 ;
  public: static const int32_t kToken_filewrapper = 45 ;
  public: static const int32_t kToken_for = 46 ;
  public: static const int32_t kToken_final = 47 ;
  public: static const int32_t kToken_fixit = 48 ;
  public: static const int32_t kToken_func = 49 ;
  public: static const int32_t kToken_getter = 50 ;
  public: static const int32_t kToken_grammar = 51 ;
  public: static const int32_t kToken_graph = 52 ;
  public: static const int32_t kToken_guard = 53 ;
  public: static const int32_t kToken_gui = 54 ;
  public: static const int32_t kToken_if = 55 ;
  public: static const int32_t kToken_in = 56 ;
  public: static const int32_t kToken_indexing = 57 ;
  public: static const int32_t kToken_init = 58 ;
  public: static const int32_t kToken_insert = 59 ;
  public: static const int32_t kToken_is = 60 ;
  public: static const int32_t kToken_json = 61 ;
  public: static const int32_t kToken_label = 62 ;
  public: static const int32_t kToken_let = 63 ;
  public: static const int32_t kToken_lexique = 64 ;
  public: static const int32_t kToken_list = 65 ;
  public: static const int32_t kToken_log = 66 ;
  public: static const int32_t kToken_loop = 67 ;
  public: static const int32_t kToken_map = 68 ;
  public: static const int32_t kToken_message = 69 ;
  public: static const int32_t kToken_method = 70 ;
  public: static const int32_t kToken_mod = 71 ;
  public: static const int32_t kToken_mutating = 72 ;
  public: static const int32_t kToken_nil = 73 ;
  public: static const int32_t kToken_not = 74 ;
  public: static const int32_t kToken_on = 75 ;
  public: static const int32_t kToken_operator = 76 ;
  public: static const int32_t kToken_option = 77 ;
  public: static const int32_t kToken_or = 78 ;
  public: static const int32_t kToken_override = 79 ;
  public: static const int32_t kToken_parse = 80 ;
  public: static const int32_t kToken_public = 81 ;
  public: static const int32_t kToken_protected = 82 ;
  public: static const int32_t kToken_private = 83 ;
  public: static const int32_t kToken_proc = 84 ;
  public: static const int32_t kToken_project = 85 ;
  public: static const int32_t kToken_remove = 86 ;
  public: static const int32_t kToken_repeat = 87 ;
  public: static const int32_t kToken_replace = 88 ;
  public: static const int32_t kToken_rewind = 89 ;
  public: static const int32_t kToken_rule = 90 ;
  public: static const int32_t kToken_search = 91 ;
  public: static const int32_t kToken_select = 92 ;
  public: static const int32_t kToken_self = 93 ;
  public: static const int32_t kToken_send = 94 ;
  public: static const int32_t kToken_setter = 95 ;
  public: static const int32_t kToken_sortedlist = 96 ;
  public: static const int32_t kToken_spoil = 97 ;
  public: static const int32_t kToken_struct = 98 ;
  public: static const int32_t kToken_style = 99 ;
  public: static const int32_t kToken_super = 100 ;
  public: static const int32_t kToken_switch = 101 ;
  public: static const int32_t kToken_syntax = 102 ;
  public: static const int32_t kToken_tag = 103 ;
  public: static const int32_t kToken_template = 104 ;
  public: static const int32_t kToken_then = 105 ;
  public: static const int32_t kToken_true = 106 ;
  public: static const int32_t kToken_typealias = 107 ;
  public: static const int32_t kToken_unused = 108 ;
  public: static const int32_t kToken_var = 109 ;
  public: static const int32_t kToken_warning = 110 ;
  public: static const int32_t kToken_weak = 111 ;
  public: static const int32_t kToken_while = 112 ;
  public: static const int32_t kToken_with = 113 ;
  public: static const int32_t kToken__25_applicationBundleBase = 114 ;
  public: static const int32_t kToken__25_clonable = 115 ;
  public: static const int32_t kToken__25_codeblocks_2D_linux_33__32_ = 116 ;
  public: static const int32_t kToken__25_codeblocks_2D_linux_36__34_ = 117 ;
  public: static const int32_t kToken__25_codeblocks_2D_windows = 118 ;
  public: static const int32_t kToken__25_comparable = 119 ;
  public: static const int32_t kToken__25_equatable = 120 ;
  public: static const int32_t kToken__25_from = 121 ;
  public: static const int32_t kToken__25_generatedInSeparateFile = 122 ;
  public: static const int32_t kToken__25_initArgLabel = 123 ;
  public: static const int32_t kToken__25_libpmAtPath = 124 ;
  public: static const int32_t kToken__25_MacSwiftApp = 125 ;
  public: static const int32_t kToken__25_macCodeSign = 126 ;
  public: static const int32_t kToken__25_makefile_2D_macosx = 127 ;
  public: static const int32_t kToken__25_makefile_2D_unix = 128 ;
  public: static const int32_t kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx = 129 ;
  public: static const int32_t kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx = 130 ;
  public: static const int32_t kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx = 131 ;
  public: static const int32_t kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx = 132 ;
  public: static const int32_t kToken__25_nonAtomicSelection = 133 ;
  public: static const int32_t kToken__25_once = 134 ;
  public: static const int32_t kToken__25_preserved = 135 ;
  public: static const int32_t kToken__25_quietOutputByDefault = 136 ;
  public: static const int32_t kToken__25_searchSubscript = 137 ;
  public: static const int32_t kToken__25_templateEndMark = 138 ;
  public: static const int32_t kToken__25_translate = 139 ;
  public: static const int32_t kToken__25_usefull = 140 ;
  public: static const int32_t kToken__2A_ = 141 ;
  public: static const int32_t kToken__2C_ = 142 ;
  public: static const int32_t kToken__2B_ = 143 ;
  public: static const int32_t kToken__26__2B_ = 144 ;
  public: static const int32_t kToken__26__2D_ = 145 ;
  public: static const int32_t kToken__26__2A_ = 146 ;
  public: static const int32_t kToken__26__2F_ = 147 ;
  public: static const int32_t kToken__3E_ = 148 ;
  public: static const int32_t kToken__3B_ = 149 ;
  public: static const int32_t kToken__3A_ = 150 ;
  public: static const int32_t kToken__3A__3E_ = 151 ;
  public: static const int32_t kToken__2D_ = 152 ;
  public: static const int32_t kToken__28_ = 153 ;
  public: static const int32_t kToken__29_ = 154 ;
  public: static const int32_t kToken__2D__3E_ = 155 ;
  public: static const int32_t kToken__3D__3D_ = 156 ;
  public: static const int32_t kToken__3D_ = 157 ;
  public: static const int32_t kToken__26__26_ = 158 ;
  public: static const int32_t kToken__5B_ = 159 ;
  public: static const int32_t kToken__5D_ = 160 ;
  public: static const int32_t kToken__2B__2B__3D_ = 161 ;
  public: static const int32_t kToken__2E_ = 162 ;
  public: static const int32_t kToken__2E__2E__2E_ = 163 ;
  public: static const int32_t kToken__2E__2E__3C_ = 164 ;
  public: static const int32_t kToken__40__7B_ = 165 ;
  public: static const int32_t kToken__40__28_ = 166 ;
  public: static const int32_t kToken__40__5B_ = 167 ;
  public: static const int32_t kToken__2B__3D_ = 168 ;
  public: static const int32_t kToken__2D__3D_ = 169 ;
  public: static const int32_t kToken__2A__3D_ = 170 ;
  public: static const int32_t kToken__2F__3D_ = 171 ;
  public: static const int32_t kToken__26__3D_ = 172 ;
  public: static const int32_t kToken__7C__3D_ = 173 ;
  public: static const int32_t kToken__5E__3D_ = 174 ;
  public: static const int32_t kToken__2F_ = 175 ;
  public: static const int32_t kToken__21__3D_ = 176 ;
  public: static const int32_t kToken__3E__3D_ = 177 ;
  public: static const int32_t kToken__26_ = 178 ;
  public: static const int32_t kToken__7B_ = 179 ;
  public: static const int32_t kToken__7D_ = 180 ;
  public: static const int32_t kToken__60_ = 181 ;
  public: static const int32_t kToken__7C__7C_ = 182 ;
  public: static const int32_t kToken__7C_ = 183 ;
  public: static const int32_t kToken__5E_ = 184 ;
  public: static const int32_t kToken__3E__3E_ = 185 ;
  public: static const int32_t kToken__7E_ = 186 ;
  public: static const int32_t kToken__3D__3D__3D_ = 187 ;
  public: static const int32_t kToken__21__3D__3D_ = 188 ;
  public: static const int32_t kToken__3F__5E_ = 189 ;
  public: static const int32_t kToken__21__5E_ = 190 ;

//--- Key words table 'galgasKeyWordList'
  public: static int32_t search_into_galgasKeyWordList (const String & inSearchedString) ;

//--- Key words table 'attributeKeyWordList'
  public: static int32_t search_into_attributeKeyWordList (const String & inSearchedString) ;

//--- Key words table 'galgasDelimitorsList'
  public: static int32_t search_into_galgasDelimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GGS_lbigint synthetizedAttribute_bigintValue (void) const ;
  public: GGS_lchar synthetizedAttribute_charValue (void) const ;
  public: GGS_ldouble synthetizedAttribute_floatValue (void) const ;
  public: GGS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: BigSigned attributeValue_bigintValue (void) const ;
  public: utf32 attributeValue_charValue (void) const ;
  public: double attributeValue_floatValue (void) const ;
  public: String attributeValue_identifierString (void) const ;
  public: String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- indexing keys
public: static const uint32_t kIndexing_classDefinition = 0 ;
public: static const uint32_t kIndexing_enumDefinition = 1 ;
public: static const uint32_t kIndexing_structDefinition = 2 ;
public: static const uint32_t kIndexing_listDefinition = 3 ;
public: static const uint32_t kIndexing_sortedListDefinition = 4 ;
public: static const uint32_t kIndexing_mapDefinition = 5 ;
public: static const uint32_t kIndexing_dictionaryDefinition = 6 ;
public: static const uint32_t kIndexing_externTypeDefinition = 7 ;
public: static const uint32_t kIndexing_filewrapperDefinition = 8 ;
public: static const uint32_t kIndexing_filewrapperReference = 9 ;
public: static const uint32_t kIndexing_graphDefinition = 10 ;
public: static const uint32_t kIndexing_classReferencedAsSuperClass = 11 ;
public: static const uint32_t kIndexing_typeReferenceInConstructor = 12 ;
public: static const uint32_t kIndexing_typeReferenceInTypeMethod = 13 ;
public: static const uint32_t kIndexing_routineDefinition = 14 ;
public: static const uint32_t kIndexing_routineCall = 15 ;
public: static const uint32_t kIndexing_functionDefinition = 16 ;
public: static const uint32_t kIndexing_functionCall = 17 ;
public: static const uint32_t kIndexing_terminalDeclaration = 18 ;
public: static const uint32_t kIndexing_terminalReference = 19 ;
public: static const uint32_t kIndexing_ruleDefinition = 20 ;
public: static const uint32_t kIndexing_ruleReference = 21 ;
public: static const uint32_t kIndexing_abstractExtensionSetterDefinition = 22 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionSetter = 23 ;
public: static const uint32_t kIndexing_overrideabstractExtensionSetterDefinition = 24 ;
public: static const uint32_t kIndexing_extensionSetterDefinition = 25 ;
public: static const uint32_t kIndexing_typeReferenceExtensionSetter = 26 ;
public: static const uint32_t kIndexing_overrideExtensionSetterDefinition = 27 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionSetterDefinition = 28 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionSetter = 29 ;
public: static const uint32_t kIndexing_abstractExtensionMethodDefinition = 30 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionMethod = 31 ;
public: static const uint32_t kIndexing_overrideAbstractExtensionMethodDefinition = 32 ;
public: static const uint32_t kIndexing_extensionMethodDefinition = 33 ;
public: static const uint32_t kIndexing_typeReferenceExtensionMethod = 34 ;
public: static const uint32_t kIndexing_overrideExtensionMethodDefinition = 35 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionMethodDefinition = 36 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionMethod = 37 ;
public: static const uint32_t kIndexing_abstractExtensionGetterDefinition = 38 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionGetter = 39 ;
public: static const uint32_t kIndexing_overrideAbstractExtensionGetterDefinition = 40 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionGetter = 41 ;
public: static const uint32_t kIndexing_extensionGetterDefinition = 42 ;
public: static const uint32_t kIndexing_typeReferenceExtensionGetter = 43 ;
public: static const uint32_t kIndexing_overrideExtensionGetterDefinition = 44 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionGetter = 45 ;
public: static const uint32_t kIndexing_optionComponentDefinition = 46 ;
public: static const uint32_t kIndexing_optionComponentReference = 47 ;
public: static const uint32_t kIndexing_grammarComponentDefinition = 48 ;
public: static const uint32_t kIndexing_grammarComponentReference = 49 ;
public: static const uint32_t kIndexing_indexingNameDefinition = 50 ;
public: static const uint32_t kIndexing_indexingNameReference = 51 ;

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_galgasScanner_33_ & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 190 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_galgasScanner_33_ & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@selfMutability selfIsMutable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_selfIsMutable (const class GGS_selfMutability & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfAvailability_2E_available struct
//--------------------------------------------------------------------------------------------------

class GGS_selfAvailability_2E_available : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_type ;
  public: inline GGS_unifiedTypeMapEntry readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_selfMutability mProperty_selfMutability ;
  public: inline GGS_selfMutability readProperty_selfMutability (void) const {
    return mProperty_selfMutability ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_selfAvailability_2E_available (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setSelfMutability (const GGS_selfMutability & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfMutability = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_selfAvailability_2E_available (const GGS_unifiedTypeMapEntry & in_type,
                                             const GGS_selfMutability & in_selfMutability) ;

//--------------------------------- Copy constructor
  public: GGS_selfAvailability_2E_available (const GGS_selfAvailability_2E_available & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_selfAvailability_2E_available & operator = (const GGS_selfAvailability_2E_available & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfAvailability_2E_available init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                 const class GGS_selfMutability & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfAvailability_2E_available extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAvailability_2E_available & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available ;

//--------------------------------------------------------------------------------------------------
// Phase 1: selfAvailability.available? optional
//--------------------------------------------------------------------------------------------------

class GGS_selfAvailability_2E_available_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_selfAvailability_2E_available mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_selfAvailability_2E_available_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_selfAvailability_2E_available_3F_ (const GGS_selfAvailability_2E_available & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_selfAvailability_2E_available_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_selfAvailability_2E_available unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfAvailability_2E_available_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAvailability_2E_available_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                            const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                              const class GGS_string constin_inScannerClassName,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateLexicalInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                     const class GGS_string constin_inScannerClassName,
                                                                     const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_lexicalInstructionUsesLoopLocalVariable (const class cPtr_lexicalInstructionAST * inObject,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateLexicalRuleCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                              const class GGS_string constin_inScannerClassName,
                                                              const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_lexicalRuleUsesLoopLocalVar (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @programListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_programListForGeneration final {
  public: DownEnumerator_programListForGeneration (const class GGS_programListForGeneration & inList) ;

  public: ~ DownEnumerator_programListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_programListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_programListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_programListForGeneration (const DownEnumerator_programListForGeneration &) = delete ;
  private: DownEnumerator_programListForGeneration & operator = (const DownEnumerator_programListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_programListForGeneration final {
  public: UpEnumerator_programListForGeneration (const class GGS_programListForGeneration & inList)  ;

  public: ~ UpEnumerator_programListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_programListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_programListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_programListForGeneration (const UpEnumerator_programListForGeneration &) = delete ;
  private: UpEnumerator_programListForGeneration & operator = (const UpEnumerator_programListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @programListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_programListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_programListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_programListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_programListForGeneration (void) = default ;

//--- Copy
  public: GGS_programListForGeneration (const GGS_programListForGeneration &) = default ;
  public: GGS_programListForGeneration & operator = (const GGS_programListForGeneration &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_programListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_programListForGeneration subList (const int32_t inStart,
                                                 const int32_t inLength,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_programListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programListForGeneration init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programListForGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_programListForGeneration class_func_listWithValue (const class GGS_semanticDeclarationForGeneration & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_programListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_semanticDeclarationForGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_programListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_programListForGeneration add_operation (const GGS_programListForGeneration & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticDeclarationForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_semanticDeclarationForGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_semanticDeclarationForGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_semanticDeclarationForGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_semanticDeclarationForGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMDeclarationAtIndex (class GGS_semanticDeclarationForGeneration constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_semanticDeclarationForGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_semanticDeclarationForGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationForGeneration getter_mDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_programListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_programListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_programListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_programListForGeneration ;
  friend class DownEnumerator_programListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @programListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_programListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticDeclarationForGeneration mProperty_mDeclaration ;
  public: inline GGS_semanticDeclarationForGeneration readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_programListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclaration (const GGS_semanticDeclarationForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_programListForGeneration_2E_element (const GGS_semanticDeclarationForGeneration & in_mDeclaration) ;

//--------------------------------- Copy constructor
  public: GGS_programListForGeneration_2E_element (const GGS_programListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_programListForGeneration_2E_element & operator = (const GGS_programListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programListForGeneration_2E_element init_21_ (const class GGS_semanticDeclarationForGeneration & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@functionSignature initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS_functionSignature & inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@functionSignature subcriptSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_subcriptSignature (const class GGS_functionSignature & inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionalMethodSignature list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_optionalMethodSignature final {
  public: DownEnumerator_optionalMethodSignature (const class GGS_optionalMethodSignature & inList) ;

  public: ~ DownEnumerator_optionalMethodSignature (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_bool current_mInputArgument (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_optionalMethodSignature_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_optionalMethodSignature_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_optionalMethodSignature (const DownEnumerator_optionalMethodSignature &) = delete ;
  private: DownEnumerator_optionalMethodSignature & operator = (const DownEnumerator_optionalMethodSignature &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_optionalMethodSignature final {
  public: UpEnumerator_optionalMethodSignature (const class GGS_optionalMethodSignature & inList)  ;

  public: ~ UpEnumerator_optionalMethodSignature (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_bool current_mInputArgument (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_optionalMethodSignature_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_optionalMethodSignature_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_optionalMethodSignature (const UpEnumerator_optionalMethodSignature &) = delete ;
  private: UpEnumerator_optionalMethodSignature & operator = (const UpEnumerator_optionalMethodSignature &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @optionalMethodSignature list
//--------------------------------------------------------------------------------------------------

class GGS_optionalMethodSignature : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_optionalMethodSignature_2E_element> mArray ;

//--- Default constructor
  public: GGS_optionalMethodSignature (void) ;

//--- Destructor
  public: virtual ~ GGS_optionalMethodSignature (void) = default ;

//--- Copy
  public: GGS_optionalMethodSignature (const GGS_optionalMethodSignature &) = default ;
  public: GGS_optionalMethodSignature & operator = (const GGS_optionalMethodSignature &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_optionalMethodSignature_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_optionalMethodSignature subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_optionalMethodSignature (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_bool & in_mInputArgument,
                                                 const class GGS_lstring & in_mFormalSelector,
                                                 const class GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const class GGS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionalMethodSignature init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalMethodSignature extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalMethodSignature class_func_listWithValue (const class GGS_bool & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                             const class GGS_string & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_optionalMethodSignature inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_bool & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_unifiedTypeMapEntry & inOperand2,
                                   const class GGS_string & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_optionalMethodSignature_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_optionalMethodSignature add_operation (const GGS_optionalMethodSignature & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_bool constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_unifiedTypeMapEntry constinArgument2,
                              class GGS_string constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_bool constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_unifiedTypeMapEntry constinArgument2,
                                     class GGS_string constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_bool & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_unifiedTypeMapEntry & outArgument2,
                                class GGS_string & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_bool & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_unifiedTypeMapEntry & outArgument2,
                               class GGS_string & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_bool & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_unifiedTypeMapEntry & outArgument2,
                                     class GGS_string & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentNameAtIndex (class GGS_string constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMInputArgumentAtIndex (class GGS_bool constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_bool & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_unifiedTypeMapEntry & outArgument2,
                             class GGS_string & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_bool & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_unifiedTypeMapEntry & outArgument2,
                            class GGS_string & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mFormalArgumentTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mInputArgumentAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_optionalMethodSignature getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_optionalMethodSignature getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_optionalMethodSignature getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_optionalMethodSignature ;
  friend class DownEnumerator_optionalMethodSignature ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalMethodSignature ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionalMethodSignature_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_optionalMethodSignature_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mInputArgument ;
  public: inline GGS_bool readProperty_mInputArgument (void) const {
    return mProperty_mInputArgument ;
  }

  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GGS_string mProperty_mFormalArgumentName ;
  public: inline GGS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_optionalMethodSignature_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInputArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputArgument = inValue ;
  }

  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_optionalMethodSignature_2E_element (const GGS_bool & in_mInputArgument,
                                                  const GGS_lstring & in_mFormalSelector,
                                                  const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                  const GGS_string & in_mFormalArgumentName) ;

//--------------------------------- Copy constructor
  public: GGS_optionalMethodSignature_2E_element (const GGS_optionalMethodSignature_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_optionalMethodSignature_2E_element & operator = (const GGS_optionalMethodSignature_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionalMethodSignature_2E_element init_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                              const class GGS_string & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalMethodSignature_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalMethodSignature_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typedPropertyList initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS_typedPropertyList & inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyInCollectionInitializationAST_2E_some struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyInCollectionInitializationAST_2E_some : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_expression ;
  public: inline GGS_semanticExpressionAST readProperty_expression (void) const {
    return mProperty_expression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyInCollectionInitializationAST_2E_some (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExpression (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyInCollectionInitializationAST_2E_some (const GGS_semanticExpressionAST & in_expression) ;

//--------------------------------- Copy constructor
  public: GGS_propertyInCollectionInitializationAST_2E_some (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyInCollectionInitializationAST_2E_some & operator = (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyInCollectionInitializationAST_2E_some init_21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyInCollectionInitializationAST_2E_some extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_propertyInCollectionInitializationAST_2E_some & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyInCollectionInitializationAST.some? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyInCollectionInitializationAST_2E_some_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyInCollectionInitializationAST_2E_some mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyInCollectionInitializationAST_2E_some_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyInCollectionInitializationAST_2E_some_3F_ (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyInCollectionInitializationAST_2E_some_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyInCollectionInitializationAST_2E_some unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyInCollectionInitializationAST_2E_some_3F_ extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_propertyInCollectionInitializationAST_2E_some_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @associatedValueDescriptorList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_associatedValueDescriptorList final {
  public: DownEnumerator_associatedValueDescriptorList (const class GGS_associatedValueDescriptorList & inList) ;

  public: ~ DownEnumerator_associatedValueDescriptorList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_type (LOCATION_ARGS) const ;
  public: class GGS_string current_name (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_associatedValueDescriptorList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_associatedValueDescriptorList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_associatedValueDescriptorList (const DownEnumerator_associatedValueDescriptorList &) = delete ;
  private: DownEnumerator_associatedValueDescriptorList & operator = (const DownEnumerator_associatedValueDescriptorList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_associatedValueDescriptorList final {
  public: UpEnumerator_associatedValueDescriptorList (const class GGS_associatedValueDescriptorList & inList)  ;

  public: ~ UpEnumerator_associatedValueDescriptorList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_type (LOCATION_ARGS) const ;
  public: class GGS_string current_name (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_associatedValueDescriptorList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_associatedValueDescriptorList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_associatedValueDescriptorList (const UpEnumerator_associatedValueDescriptorList &) = delete ;
  private: UpEnumerator_associatedValueDescriptorList & operator = (const UpEnumerator_associatedValueDescriptorList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @associatedValueDescriptorList list
//--------------------------------------------------------------------------------------------------

class GGS_associatedValueDescriptorList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_associatedValueDescriptorList_2E_element> mArray ;

//--- Default constructor
  public: GGS_associatedValueDescriptorList (void) ;

//--- Destructor
  public: virtual ~ GGS_associatedValueDescriptorList (void) = default ;

//--- Copy
  public: GGS_associatedValueDescriptorList (const GGS_associatedValueDescriptorList &) = default ;
  public: GGS_associatedValueDescriptorList & operator = (const GGS_associatedValueDescriptorList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_associatedValueDescriptorList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_associatedValueDescriptorList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_associatedValueDescriptorList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_unifiedTypeMapEntry & in_type,
                                                 const class GGS_string & in_name
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_associatedValueDescriptorList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_associatedValueDescriptorList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_associatedValueDescriptorList class_func_listWithValue (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GGS_string & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_associatedValueDescriptorList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_unifiedTypeMapEntry & inOperand0,
                                   const class GGS_string & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_associatedValueDescriptorList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_associatedValueDescriptorList add_operation (const GGS_associatedValueDescriptorList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_associatedValueDescriptorList & inOperand) const ;

//--------------------------------- Setters
  public: void setter_append (class GGS_unifiedTypeMapEntry constinArgument0,
                              class GGS_string constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_unifiedTypeMapEntry & outArgument0,
                                class GGS_string & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_unifiedTypeMapEntry & outArgument0,
                               class GGS_string & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_unifiedTypeMapEntry & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setNameAtIndex (class GGS_string constinArgument0,
                                      class GGS_uint constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                      class GGS_uint constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_unifiedTypeMapEntry & outArgument0,
                             class GGS_string & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_unifiedTypeMapEntry & outArgument0,
                            class GGS_string & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_nameAtIndex (const class GGS_uint & constinOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_associatedValueDescriptorList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_associatedValueDescriptorList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_associatedValueDescriptorList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_typeAtIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_associatedValueDescriptorList ;
  friend class DownEnumerator_associatedValueDescriptorList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValueDescriptorList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @associatedValueDescriptorList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_associatedValueDescriptorList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_type ;
  public: inline GGS_unifiedTypeMapEntry readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_string mProperty_name ;
  public: inline GGS_string readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_associatedValueDescriptorList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_associatedValueDescriptorList_2E_element (const GGS_unifiedTypeMapEntry & in_type,
                                                        const GGS_string & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_associatedValueDescriptorList_2E_element (const GGS_associatedValueDescriptorList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_associatedValueDescriptorList_2E_element & operator = (const GGS_associatedValueDescriptorList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_associatedValueDescriptorList_2E_element init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_associatedValueDescriptorList_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_associatedValueDescriptorList_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValueDescriptorList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantIndexMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_constantIndexMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GGS_associatedValueDescriptorList mProperty_mAssociatedTypeList ;
  public: inline GGS_associatedValueDescriptorList readProperty_mAssociatedTypeList (void) const {
    return mProperty_mAssociatedTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constantIndexMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMAssociatedTypeList (const GGS_associatedValueDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedTypeList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constantIndexMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_uint & in_mIndex,
                                           const GGS_associatedValueDescriptorList & in_mAssociatedTypeList) ;

//--------------------------------- Copy constructor
  public: GGS_constantIndexMap_2E_element (const GGS_constantIndexMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constantIndexMap_2E_element & operator = (const GGS_constantIndexMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantIndexMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_uint & inOperand1,
                                                                   const class GGS_associatedValueDescriptorList & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantIndexMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_constantIndexMap_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantIndexMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: constantIndexMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_constantIndexMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constantIndexMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constantIndexMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_constantIndexMap_2E_element_3F_ (const GGS_constantIndexMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_constantIndexMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_constantIndexMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantIndexMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_constantIndexMap_2E_element_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantIndexMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum optionDefaultValueEnumAST
//--------------------------------------------------------------------------------------------------

class GGS_optionDefaultValueEnumAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_optionDefaultValueEnumAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noDefaultValue,
    enum_unsignedDefaultValue,
    enum_stringDefaultValue
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionDefaultValueEnumAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionDefaultValueEnumAST class_func_noDefaultValue (LOCATION_ARGS) ;

  public: static class GGS_optionDefaultValueEnumAST class_func_stringDefaultValue (LOCATION_ARGS) ;

  public: static class GGS_optionDefaultValueEnumAST class_func_unsignedDefaultValue (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionDefaultValueEnumAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isNoDefaultValue (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isStringDefaultValue (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUnsignedDefaultValue (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_commandLineOptionListAST final {
  public: DownEnumerator_commandLineOptionListAST (const class GGS_commandLineOptionListAST & inList) ;

  public: ~ DownEnumerator_commandLineOptionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionInternalName (LOCATION_ARGS) const ;
  public: class GGS_lchar current_mOptionInvocationLetter (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionInvocationString (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionComment (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionDefaultValue (LOCATION_ARGS) const ;
  public: class GGS_optionDefaultValueEnumAST current_mOptionDefaultValueKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_commandLineOptionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_commandLineOptionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_commandLineOptionListAST (const DownEnumerator_commandLineOptionListAST &) = delete ;
  private: DownEnumerator_commandLineOptionListAST & operator = (const DownEnumerator_commandLineOptionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_commandLineOptionListAST final {
  public: UpEnumerator_commandLineOptionListAST (const class GGS_commandLineOptionListAST & inList)  ;

  public: ~ UpEnumerator_commandLineOptionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionInternalName (LOCATION_ARGS) const ;
  public: class GGS_lchar current_mOptionInvocationLetter (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionInvocationString (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionComment (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionDefaultValue (LOCATION_ARGS) const ;
  public: class GGS_optionDefaultValueEnumAST current_mOptionDefaultValueKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_commandLineOptionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_commandLineOptionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_commandLineOptionListAST (const UpEnumerator_commandLineOptionListAST &) = delete ;
  private: UpEnumerator_commandLineOptionListAST & operator = (const UpEnumerator_commandLineOptionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @commandLineOptionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_commandLineOptionListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_commandLineOptionListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_commandLineOptionListAST (void) = default ;

//--- Copy
  public: GGS_commandLineOptionListAST (const GGS_commandLineOptionListAST &) = default ;
  public: GGS_commandLineOptionListAST & operator = (const GGS_commandLineOptionListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_commandLineOptionListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_commandLineOptionListAST subList (const int32_t inStart,
                                                 const int32_t inLength,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_commandLineOptionListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOptionTypeName,
                                                 const class GGS_lstring & in_mOptionInternalName,
                                                 const class GGS_lchar & in_mOptionInvocationLetter,
                                                 const class GGS_lstring & in_mOptionInvocationString,
                                                 const class GGS_lstring & in_mOptionComment,
                                                 const class GGS_lstring & in_mOptionDefaultValue,
                                                 const class GGS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_commandLineOptionListAST init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionListAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_commandLineOptionListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_lchar & inOperand2,
                                                                              const class GGS_lstring & inOperand3,
                                                                              const class GGS_lstring & inOperand4,
                                                                              const class GGS_lstring & inOperand5,
                                                                              const class GGS_optionDefaultValueEnumAST & inOperand6
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_commandLineOptionListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_lchar & inOperand2,
                                   const class GGS_lstring & inOperand3,
                                   const class GGS_lstring & inOperand4,
                                   const class GGS_lstring & inOperand5,
                                   const class GGS_optionDefaultValueEnumAST & inOperand6
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_commandLineOptionListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_commandLineOptionListAST add_operation (const GGS_commandLineOptionListAST & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_lchar constinArgument2,
                              class GGS_lstring constinArgument3,
                              class GGS_lstring constinArgument4,
                              class GGS_lstring constinArgument5,
                              class GGS_optionDefaultValueEnumAST constinArgument6,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_lchar constinArgument2,
                                     class GGS_lstring constinArgument3,
                                     class GGS_lstring constinArgument4,
                                     class GGS_lstring constinArgument5,
                                     class GGS_optionDefaultValueEnumAST constinArgument6,
                                     class GGS_uint constinArgument7,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_lchar & outArgument2,
                                class GGS_lstring & outArgument3,
                                class GGS_lstring & outArgument4,
                                class GGS_lstring & outArgument5,
                                class GGS_optionDefaultValueEnumAST & outArgument6,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_lchar & outArgument2,
                               class GGS_lstring & outArgument3,
                               class GGS_lstring & outArgument4,
                               class GGS_lstring & outArgument5,
                               class GGS_optionDefaultValueEnumAST & outArgument6,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_lchar & outArgument2,
                                     class GGS_lstring & outArgument3,
                                     class GGS_lstring & outArgument4,
                                     class GGS_lstring & outArgument5,
                                     class GGS_optionDefaultValueEnumAST & outArgument6,
                                     class GGS_uint constinArgument7,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionCommentAtIndex (class GGS_lstring constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionDefaultValueAtIndex (class GGS_lstring constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionDefaultValueKindAtIndex (class GGS_optionDefaultValueEnumAST constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionInternalNameAtIndex (class GGS_lstring constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionInvocationLetterAtIndex (class GGS_lchar constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionInvocationStringAtIndex (class GGS_lstring constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_lchar & outArgument2,
                             class GGS_lstring & outArgument3,
                             class GGS_lstring & outArgument4,
                             class GGS_lstring & outArgument5,
                             class GGS_optionDefaultValueEnumAST & outArgument6,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_lchar & outArgument2,
                            class GGS_lstring & outArgument3,
                            class GGS_lstring & outArgument4,
                            class GGS_lstring & outArgument5,
                            class GGS_optionDefaultValueEnumAST & outArgument6,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOptionCommentAtIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOptionDefaultValueAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_optionDefaultValueEnumAST getter_mOptionDefaultValueKindAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOptionInternalNameAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lchar getter_mOptionInvocationLetterAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOptionInvocationStringAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOptionTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_commandLineOptionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_commandLineOptionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_commandLineOptionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_commandLineOptionListAST ;
  friend class DownEnumerator_commandLineOptionListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOptionTypeName ;
  public: inline GGS_lstring readProperty_mOptionTypeName (void) const {
    return mProperty_mOptionTypeName ;
  }

  public: GGS_lstring mProperty_mOptionInternalName ;
  public: inline GGS_lstring readProperty_mOptionInternalName (void) const {
    return mProperty_mOptionInternalName ;
  }

  public: GGS_lchar mProperty_mOptionInvocationLetter ;
  public: inline GGS_lchar readProperty_mOptionInvocationLetter (void) const {
    return mProperty_mOptionInvocationLetter ;
  }

  public: GGS_lstring mProperty_mOptionInvocationString ;
  public: inline GGS_lstring readProperty_mOptionInvocationString (void) const {
    return mProperty_mOptionInvocationString ;
  }

  public: GGS_lstring mProperty_mOptionComment ;
  public: inline GGS_lstring readProperty_mOptionComment (void) const {
    return mProperty_mOptionComment ;
  }

  public: GGS_lstring mProperty_mOptionDefaultValue ;
  public: inline GGS_lstring readProperty_mOptionDefaultValue (void) const {
    return mProperty_mOptionDefaultValue ;
  }

  public: GGS_optionDefaultValueEnumAST mProperty_mOptionDefaultValueKind ;
  public: inline GGS_optionDefaultValueEnumAST readProperty_mOptionDefaultValueKind (void) const {
    return mProperty_mOptionDefaultValueKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_commandLineOptionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionTypeName = inValue ;
  }

  public: inline void setter_setMOptionInternalName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionInternalName = inValue ;
  }

  public: inline void setter_setMOptionInvocationLetter (const GGS_lchar & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionInvocationLetter = inValue ;
  }

  public: inline void setter_setMOptionInvocationString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionInvocationString = inValue ;
  }

  public: inline void setter_setMOptionComment (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionComment = inValue ;
  }

  public: inline void setter_setMOptionDefaultValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionDefaultValue = inValue ;
  }

  public: inline void setter_setMOptionDefaultValueKind (const GGS_optionDefaultValueEnumAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionDefaultValueKind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_commandLineOptionListAST_2E_element (const GGS_lstring & in_mOptionTypeName,
                                                   const GGS_lstring & in_mOptionInternalName,
                                                   const GGS_lchar & in_mOptionInvocationLetter,
                                                   const GGS_lstring & in_mOptionInvocationString,
                                                   const GGS_lstring & in_mOptionComment,
                                                   const GGS_lstring & in_mOptionDefaultValue,
                                                   const GGS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind) ;

//--------------------------------- Copy constructor
  public: GGS_commandLineOptionListAST_2E_element (const GGS_commandLineOptionListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_commandLineOptionListAST_2E_element & operator = (const GGS_commandLineOptionListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_commandLineOptionListAST_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_lstring & inOperand1,
                                                                                           const class GGS_lchar & inOperand2,
                                                                                           const class GGS_lstring & inOperand3,
                                                                                           const class GGS_lstring & inOperand4,
                                                                                           const class GGS_lstring & inOperand5,
                                                                                           const class GGS_optionDefaultValueEnumAST & inOperand6,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionListAST_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionComponentDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_optionComponentDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_optionComponentDeclarationAST (const class cPtr_optionComponentDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOptionComponentName (void) const ;

  public: class GGS_commandLineOptionListAST readProperty_mOptions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionComponentDeclarationAST init_21_isPredefined_21__21_ (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_commandLineOptionListAST & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionComponentDeclarationAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionComponentDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @optionComponentDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_optionComponentDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionComponentDeclarationAST_init_21_isPredefined_21__21_ (const class GGS_bool & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_commandLineOptionListAST & inOperand2,
                                                                           Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mOptionComponentName ;
  public: GGS_commandLineOptionListAST mProperty_mOptions ;


//--- Default constructor
  public: cPtr_optionComponentDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionComponentDeclarationAST (const GGS_bool & in_isPredefined,
                                              const GGS_lstring & in_mOptionComponentName,
                                              const GGS_commandLineOptionListAST & in_mOptions,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionComponentDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_optionComponentDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_optionComponentDeclarationAST_2E_weak (const class GGS_optionComponentDeclarationAST & inSource) ;

  public: GGS_optionComponentDeclarationAST_2E_weak & operator = (const class GGS_optionComponentDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_optionComponentDeclarationAST_2E_weak init_nil (void) {
    GGS_optionComponentDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionComponentDeclarationAST bang_optionComponentDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_optionComponentDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionComponentDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionComponentDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionComponentDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionSortedList sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_commandLineOptionSortedList final {
//--- Constructor
  public: DownEnumerator_commandLineOptionSortedList (const class GGS_commandLineOptionSortedList & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_string current_mOptionIdentifier (LOCATION_ARGS) const ;
  public: class GGS_char current_mOptionChar (LOCATION_ARGS) const ;
  public: class GGS_string current_mOptionString (LOCATION_ARGS) const ;
  public: class GGS_string current_mComment (LOCATION_ARGS) const ;
  public: class GGS_string current_mDefaultValue (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_commandLineOptionSortedList_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_commandLineOptionSortedList_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_commandLineOptionSortedList (const DownEnumerator_commandLineOptionSortedList &) = delete ;
  private: DownEnumerator_commandLineOptionSortedList & operator = (const DownEnumerator_commandLineOptionSortedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_commandLineOptionSortedList final {
//--- Constructor
  public: UpEnumerator_commandLineOptionSortedList (const class GGS_commandLineOptionSortedList & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_string current_mOptionIdentifier (LOCATION_ARGS) const ;
  public: class GGS_char current_mOptionChar (LOCATION_ARGS) const ;
  public: class GGS_string current_mOptionString (LOCATION_ARGS) const ;
  public: class GGS_string current_mComment (LOCATION_ARGS) const ;
  public: class GGS_string current_mDefaultValue (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_commandLineOptionSortedList_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_commandLineOptionSortedList_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_commandLineOptionSortedList (const UpEnumerator_commandLineOptionSortedList &) = delete ;
  private: UpEnumerator_commandLineOptionSortedList & operator = (const UpEnumerator_commandLineOptionSortedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionSortedList sorted list
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionSortedList final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_commandLineOptionSortedList_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_commandLineOptionSortedList (void) ;

//--- Destructor
  public: virtual ~ GGS_commandLineOptionSortedList (void) = default ;

//--- Handle copy
  public: GGS_commandLineOptionSortedList (const GGS_commandLineOptionSortedList &) = default ;
  public: GGS_commandLineOptionSortedList & operator = (const GGS_commandLineOptionSortedList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline int32_t count (void) const { return mSharedArray.count () ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_commandLineOptionSortedList_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_commandLineOptionSortedList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionSortedList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_commandLineOptionSortedList class_func_sortedListWithValue (const class GGS_string & inOperand0,
                                                                                       const class GGS_char & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS_string & inOperand3,
                                                                                       const class GGS_string & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_commandLineOptionSortedList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_char & inOperand1,
                                   const class GGS_string & inOperand2,
                                   const class GGS_string & inOperand3,
                                   const class GGS_string & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_commandLineOptionSortedList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_string inArgument0,
                              class GGS_char inArgument1,
                              class GGS_string inArgument2,
                              class GGS_string inArgument3,
                              class GGS_string inArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_popGreatest (class GGS_string & outArgument0,
                                   class GGS_char & outArgument1,
                                   class GGS_string & outArgument2,
                                   class GGS_string & outArgument3,
                                   class GGS_string & outArgument4,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_popSmallest (class GGS_string & outArgument0,
                                   class GGS_char & outArgument1,
                                   class GGS_string & outArgument2,
                                   class GGS_string & outArgument3,
                                   class GGS_string & outArgument4,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_greatest (class GGS_string & outArgument0,
                                class GGS_char & outArgument1,
                                class GGS_string & outArgument2,
                                class GGS_string & outArgument3,
                                class GGS_string & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public: void method_smallest (class GGS_string & outArgument0,
                                class GGS_char & outArgument1,
                                class GGS_string & outArgument2,
                                class GGS_string & outArgument3,
                                class GGS_string & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_commandLineOptionSortedList ;
  friend class DownEnumerator_commandLineOptionSortedList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionSortedList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionSortedList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionSortedList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mOptionIdentifier ;
  public: inline GGS_string readProperty_mOptionIdentifier (void) const {
    return mProperty_mOptionIdentifier ;
  }

  public: GGS_char mProperty_mOptionChar ;
  public: inline GGS_char readProperty_mOptionChar (void) const {
    return mProperty_mOptionChar ;
  }

  public: GGS_string mProperty_mOptionString ;
  public: inline GGS_string readProperty_mOptionString (void) const {
    return mProperty_mOptionString ;
  }

  public: GGS_string mProperty_mComment ;
  public: inline GGS_string readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

  public: GGS_string mProperty_mDefaultValue ;
  public: inline GGS_string readProperty_mDefaultValue (void) const {
    return mProperty_mDefaultValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_commandLineOptionSortedList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionIdentifier (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionIdentifier = inValue ;
  }

  public: inline void setter_setMOptionChar (const GGS_char & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionChar = inValue ;
  }

  public: inline void setter_setMOptionString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionString = inValue ;
  }

  public: inline void setter_setMComment (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

  public: inline void setter_setMDefaultValue (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_commandLineOptionSortedList_2E_element (const GGS_string & in_mOptionIdentifier,
                                                      const GGS_char & in_mOptionChar,
                                                      const GGS_string & in_mOptionString,
                                                      const GGS_string & in_mComment,
                                                      const GGS_string & in_mDefaultValue) ;

//--------------------------------- Copy constructor
  public: GGS_commandLineOptionSortedList_2E_element (const GGS_commandLineOptionSortedList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_commandLineOptionSortedList_2E_element & operator = (const GGS_commandLineOptionSortedList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_commandLineOptionSortedList_2E_element init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                      const class GGS_char & inOperand1,
                                                                                      const class GGS_string & inOperand2,
                                                                                      const class GGS_string & inOperand3,
                                                                                      const class GGS_string & inOperand4,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionSortedList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionSortedList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_commandLineOptionMap final {

  public: DownEnumerator_commandLineOptionMap (const class GGS_commandLineOptionMap & inMap) ;

  public: ~ DownEnumerator_commandLineOptionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_char current_mOptionChar (LOCATION_ARGS) const ;

  public: class GGS_string current_mOptionString (LOCATION_ARGS) const ;

  public: class GGS_string current_mComment (LOCATION_ARGS) const ;

  public: class GGS_string current_mDefaultValue (LOCATION_ARGS) const ;

  public: class GGS_commandLineOptionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_commandLineOptionMap (const DownEnumerator_commandLineOptionMap &) = delete ;
  private: DownEnumerator_commandLineOptionMap & operator = (const DownEnumerator_commandLineOptionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_commandLineOptionMap final {
  public: UpEnumerator_commandLineOptionMap (const class GGS_commandLineOptionMap & inMap)  ;

  public: ~ UpEnumerator_commandLineOptionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_char current_mOptionChar (LOCATION_ARGS) const ;
  public: class GGS_string current_mOptionString (LOCATION_ARGS) const ;
  public: class GGS_string current_mComment (LOCATION_ARGS) const ;
  public: class GGS_string current_mDefaultValue (LOCATION_ARGS) const ;
  public: class GGS_commandLineOptionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_commandLineOptionMap (const UpEnumerator_commandLineOptionMap &) = delete ;
  private: UpEnumerator_commandLineOptionMap & operator = (const UpEnumerator_commandLineOptionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_commandLineOptionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_commandLineOptionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_commandLineOptionMap (void) ;

//--- Handle copy
  public: GGS_commandLineOptionMap (const GGS_commandLineOptionMap & inSource) ;
  public: GGS_commandLineOptionMap & operator = (const GGS_commandLineOptionMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_commandLineOptionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_commandLineOptionMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionMap extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_commandLineOptionMap class_func_mapWithMapToOverride (const class GGS_commandLineOptionMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_char constinArgument1,
                                 class GGS_string constinArgument2,
                                 class GGS_string constinArgument3,
                                 class GGS_string constinArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMCommentForKey (class GGS_string constinArgument0,
                                         class GGS_string constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMDefaultValueForKey (class GGS_string constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionCharForKey (class GGS_char constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionStringForKey (class GGS_string constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_char & outArgument1,
                                 class GGS_string & outArgument2,
                                 class GGS_string & outArgument3,
                                 class GGS_string & outArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mCommentForKey (const class GGS_string & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mDefaultValueForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_char getter_mOptionCharForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mOptionStringForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_commandLineOptionMap getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_commandLineOptionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_commandLineOptionMap ;
  friend class DownEnumerator_commandLineOptionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_char mProperty_mOptionChar ;
  public: inline GGS_char readProperty_mOptionChar (void) const {
    return mProperty_mOptionChar ;
  }

  public: GGS_string mProperty_mOptionString ;
  public: inline GGS_string readProperty_mOptionString (void) const {
    return mProperty_mOptionString ;
  }

  public: GGS_string mProperty_mComment ;
  public: inline GGS_string readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

  public: GGS_string mProperty_mDefaultValue ;
  public: inline GGS_string readProperty_mDefaultValue (void) const {
    return mProperty_mDefaultValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_commandLineOptionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOptionChar (const GGS_char & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionChar = inValue ;
  }

  public: inline void setter_setMOptionString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionString = inValue ;
  }

  public: inline void setter_setMComment (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

  public: inline void setter_setMDefaultValue (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_commandLineOptionMap_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_char & in_mOptionChar,
                                               const GGS_string & in_mOptionString,
                                               const GGS_string & in_mComment,
                                               const GGS_string & in_mDefaultValue) ;

//--------------------------------- Copy constructor
  public: GGS_commandLineOptionMap_2E_element (const GGS_commandLineOptionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_commandLineOptionMap_2E_element & operator = (const GGS_commandLineOptionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_commandLineOptionMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_char & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS_string & inOperand3,
                                                                               const class GGS_string & inOperand4,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionMap_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: commandLineOptionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_commandLineOptionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_commandLineOptionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_commandLineOptionMap_2E_element_3F_ (const GGS_commandLineOptionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_commandLineOptionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_commandLineOptionMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExpressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_lexicalExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalExpressionAST_2E_weak (const class GGS_lexicalExpressionAST & inSource) ;

  public: GGS_lexicalExpressionAST_2E_weak & operator = (const class GGS_lexicalExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalExpressionAST_2E_weak init_nil (void) {
    GGS_lexicalExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalExpressionAST bang_lexicalExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractLexicalRuleAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractLexicalRuleAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractLexicalRuleAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractLexicalRuleAST_2E_weak (const class GGS_abstractLexicalRuleAST & inSource) ;

  public: GGS_abstractLexicalRuleAST_2E_weak & operator = (const class GGS_abstractLexicalRuleAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractLexicalRuleAST_2E_weak init_nil (void) {
    GGS_abstractLexicalRuleAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractLexicalRuleAST bang_abstractLexicalRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractLexicalRuleAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractLexicalRuleAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractLexicalRuleAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractLexicalRuleAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalRuleListAST useLoopLocalVar' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_useLoopLocalVar (const class GGS_lexicalRuleListAST & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalImplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalImplicitRuleAST : public GGS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GGS_lexicalImplicitRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalImplicitRuleAST (const class cPtr_lexicalImplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mListName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalImplicitRuleAST init_21_ (const class GGS_lstring & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalImplicitRuleAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalImplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalImplicitRuleAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalImplicitRuleAST : public cPtr_abstractLexicalRuleAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalImplicitRuleAST_init_21_ (const class GGS_lstring & inOperand0,
                                                Compiler * inCompiler) ;


//--- Extension getter generateLexicalRuleCode
  public: virtual class GGS_string getter_generateLexicalRuleCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaCode
  public: virtual class GGS_string getter_generateSwiftCocoaCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalRuleUsesLoopLocalVar
  public: virtual class GGS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalRule
  public: virtual void method_checkLexicalRule (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mListName ;


//--- Default constructor
  public: cPtr_lexicalImplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalImplicitRuleAST (const GGS_lstring & in_mListName,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalImplicitRuleAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalImplicitRuleAST_2E_weak : public GGS_abstractLexicalRuleAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalImplicitRuleAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalImplicitRuleAST_2E_weak (const class GGS_lexicalImplicitRuleAST & inSource) ;

  public: GGS_lexicalImplicitRuleAST_2E_weak & operator = (const class GGS_lexicalImplicitRuleAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalImplicitRuleAST_2E_weak init_nil (void) {
    GGS_lexicalImplicitRuleAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalImplicitRuleAST bang_lexicalImplicitRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalImplicitRuleAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalImplicitRuleAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalImplicitRuleAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalImplicitRuleAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitRuleAST : public GGS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GGS_lexicalExplicitRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalExplicitRuleAST (const class cPtr_lexicalExplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalExpressionAST readProperty_mLexicalRuleExpression (void) const ;

  public: class GGS_lexicalInstructionListAST readProperty_mInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExplicitRuleAST init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                          const class GGS_lexicalInstructionListAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalExplicitRuleAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalExplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalExplicitRuleAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalExplicitRuleAST : public cPtr_abstractLexicalRuleAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalExplicitRuleAST_init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                    const class GGS_lexicalInstructionListAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension getter generateLexicalRuleCode
  public: virtual class GGS_string getter_generateLexicalRuleCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaCode
  public: virtual class GGS_string getter_generateSwiftCocoaCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalRuleUsesLoopLocalVar
  public: virtual class GGS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalRule
  public: virtual void method_checkLexicalRule (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lexicalExpressionAST mProperty_mLexicalRuleExpression ;
  public: GGS_lexicalInstructionListAST mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_lexicalExplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalExplicitRuleAST (const GGS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                       const GGS_lexicalInstructionListAST & in_mInstructionList,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitRuleAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitRuleAST_2E_weak : public GGS_abstractLexicalRuleAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalExplicitRuleAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalExplicitRuleAST_2E_weak (const class GGS_lexicalExplicitRuleAST & inSource) ;

  public: GGS_lexicalExplicitRuleAST_2E_weak & operator = (const class GGS_lexicalExplicitRuleAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalExplicitRuleAST_2E_weak init_nil (void) {
    GGS_lexicalExplicitRuleAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalExplicitRuleAST bang_lexicalExplicitRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalExplicitRuleAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalExplicitRuleAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalExplicitRuleAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalExplicitRuleAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sentLexicalAttributeListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_sentLexicalAttributeListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_lstring mProperty_mAttributeName ;
  public: inline GGS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sentLexicalAttributeListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMAttributeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sentLexicalAttributeListAST_2E_element (const GGS_lstring & in_mFormalSelector,
                                                      const GGS_lstring & in_mAttributeName) ;

//--------------------------------- Copy constructor
  public: GGS_sentLexicalAttributeListAST_2E_element (const GGS_sentLexicalAttributeListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sentLexicalAttributeListAST_2E_element & operator = (const GGS_sentLexicalAttributeListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sentLexicalAttributeListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sentLexicalAttributeListAST_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalListEntryListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalListEntryListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mEntrySpelling ;
  public: inline GGS_lstring readProperty_mEntrySpelling (void) const {
    return mProperty_mEntrySpelling ;
  }

  public: GGS_lstring mProperty_mTerminalSpelling ;
  public: inline GGS_lstring readProperty_mTerminalSpelling (void) const {
    return mProperty_mTerminalSpelling ;
  }

  public: GGS_bool mProperty_nonAtomicSelection ;
  public: inline GGS_bool readProperty_nonAtomicSelection (void) const {
    return mProperty_nonAtomicSelection ;
  }

  public: GGS_bool mProperty_isEndOfTemplateMark ;
  public: inline GGS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalListEntryListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEntrySpelling (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntrySpelling = inValue ;
  }

  public: inline void setter_setMTerminalSpelling (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalSpelling = inValue ;
  }

  public: inline void setter_setNonAtomicSelection (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nonAtomicSelection = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalListEntryListAST_2E_element (const GGS_lstring & in_mEntrySpelling,
                                                  const GGS_lstring & in_mTerminalSpelling,
                                                  const GGS_bool & in_nonAtomicSelection,
                                                  const GGS_bool & in_isEndOfTemplateMark) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalListEntryListAST_2E_element (const GGS_lexicalListEntryListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalListEntryListAST_2E_element & operator = (const GGS_lexicalListEntryListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalListEntryListAST_2E_element init_21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (const class GGS_lstring & inOperand0,
                                                                                                                   const class GGS_lstring & inOperand1,
                                                                                                                   const class GGS_bool & inOperand2,
                                                                                                                   const class GGS_bool & inOperand3,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalListEntryListAST_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalOrExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalOrExpressionAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalOrExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalOrExpressionAST (const class cPtr_lexicalOrExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalExpressionAST readProperty_mLeftOperand (void) const ;

  public: class GGS_lexicalExpressionAST readProperty_mRightOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalOrExpressionAST init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                          const class GGS_lexicalExpressionAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalOrExpressionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalOrExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalOrExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalOrExpressionAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalOrExpressionAST_init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                    const class GGS_lexicalExpressionAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lexicalExpressionAST mProperty_mLeftOperand ;
  public: GGS_lexicalExpressionAST mProperty_mRightOperand ;


//--- Default constructor
  public: cPtr_lexicalOrExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalOrExpressionAST (const GGS_lexicalExpressionAST & in_mLeftOperand,
                                       const GGS_lexicalExpressionAST & in_mRightOperand,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalOrExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalOrExpressionAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalOrExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalOrExpressionAST_2E_weak (const class GGS_lexicalOrExpressionAST & inSource) ;

  public: GGS_lexicalOrExpressionAST_2E_weak & operator = (const class GGS_lexicalOrExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalOrExpressionAST_2E_weak init_nil (void) {
    GGS_lexicalOrExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalOrExpressionAST bang_lexicalOrExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalOrExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalOrExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalOrExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalOrExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterSetMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterSetMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterSetMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterSetMatchAST (const class cPtr_lexicalCharacterSetMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mCharacterSetName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterSetMatchAST init_21_ (const class GGS_lstring & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterSetMatchAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterSetMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterSetMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterSetMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterSetMatchAST_init_21_ (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mCharacterSetName ;


//--- Default constructor
  public: cPtr_lexicalCharacterSetMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterSetMatchAST (const GGS_lstring & in_mCharacterSetName,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterSetMatchAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterSetMatchAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterSetMatchAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalCharacterSetMatchAST_2E_weak (const class GGS_lexicalCharacterSetMatchAST & inSource) ;

  public: GGS_lexicalCharacterSetMatchAST_2E_weak & operator = (const class GGS_lexicalCharacterSetMatchAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalCharacterSetMatchAST_2E_weak init_nil (void) {
    GGS_lexicalCharacterSetMatchAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalCharacterSetMatchAST bang_lexicalCharacterSetMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalCharacterSetMatchAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterSetMatchAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalCharacterSetMatchAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterSetMatchAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterMatchAST (const class cPtr_lexicalCharacterMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterMatchAST init_21_ (const class GGS_lchar & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterMatchAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterMatchAST_init_21_ (const class GGS_lchar & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mCharacter ;


//--- Default constructor
  public: cPtr_lexicalCharacterMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterMatchAST (const GGS_lchar & in_mCharacter,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterMatchAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterMatchAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterMatchAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalCharacterMatchAST_2E_weak (const class GGS_lexicalCharacterMatchAST & inSource) ;

  public: GGS_lexicalCharacterMatchAST_2E_weak & operator = (const class GGS_lexicalCharacterMatchAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalCharacterMatchAST_2E_weak init_nil (void) {
    GGS_lexicalCharacterMatchAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalCharacterMatchAST bang_lexicalCharacterMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalCharacterMatchAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterMatchAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalCharacterMatchAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterMatchAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterIntervalMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterIntervalMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterIntervalMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterIntervalMatchAST (const class cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mLowerBound (void) const ;

  public: class GGS_lchar readProperty_mUpperBound (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterIntervalMatchAST init_21__21_ (const class GGS_lchar & inOperand0,
                                                                    const class GGS_lchar & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterIntervalMatchAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterIntervalMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterIntervalMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterIntervalMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterIntervalMatchAST_init_21__21_ (const class GGS_lchar & inOperand0,
                                                              const class GGS_lchar & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mLowerBound ;
  public: GGS_lchar mProperty_mUpperBound ;


//--- Default constructor
  public: cPtr_lexicalCharacterIntervalMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterIntervalMatchAST (const GGS_lchar & in_mLowerBound,
                                                 const GGS_lchar & in_mUpperBound,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterIntervalMatchAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterIntervalMatchAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterIntervalMatchAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalCharacterIntervalMatchAST_2E_weak (const class GGS_lexicalCharacterIntervalMatchAST & inSource) ;

  public: GGS_lexicalCharacterIntervalMatchAST_2E_weak & operator = (const class GGS_lexicalCharacterIntervalMatchAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalCharacterIntervalMatchAST_2E_weak init_nil (void) {
    GGS_lexicalCharacterIntervalMatchAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalCharacterIntervalMatchAST bang_lexicalCharacterIntervalMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalCharacterIntervalMatchAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterIntervalMatchAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalCharacterIntervalMatchAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterIntervalMatchAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStringMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStringMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalStringMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalStringMatchAST (const class cPtr_lexicalStringMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStringMatchAST init_21_ (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalStringMatchAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalStringMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalStringMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalStringMatchAST_init_21_ (const class GGS_lstring & inOperand0,
                                               Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mString ;


//--- Default constructor
  public: cPtr_lexicalStringMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalStringMatchAST (const GGS_lstring & in_mString,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStringMatchAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStringMatchAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalStringMatchAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalStringMatchAST_2E_weak (const class GGS_lexicalStringMatchAST & inSource) ;

  public: GGS_lexicalStringMatchAST_2E_weak & operator = (const class GGS_lexicalStringMatchAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalStringMatchAST_2E_weak init_nil (void) {
    GGS_lexicalStringMatchAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalStringMatchAST bang_lexicalStringMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalStringMatchAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalStringMatchAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalStringMatchAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringMatchAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStringNotMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStringNotMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalStringNotMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalStringNotMatchAST (const class cPtr_lexicalStringNotMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mString (void) const ;

  public: class GGS_lstring readProperty_mErrorMessage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStringNotMatchAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalStringNotMatchAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringNotMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalStringNotMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalStringNotMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalStringNotMatchAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                      const class GGS_lstring & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mString ;
  public: GGS_lstring mProperty_mErrorMessage ;


//--- Default constructor
  public: cPtr_lexicalStringNotMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalStringNotMatchAST (const GGS_lstring & in_mString,
                                         const GGS_lstring & in_mErrorMessage,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStringNotMatchAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStringNotMatchAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalStringNotMatchAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalStringNotMatchAST_2E_weak (const class GGS_lexicalStringNotMatchAST & inSource) ;

  public: GGS_lexicalStringNotMatchAST_2E_weak & operator = (const class GGS_lexicalStringNotMatchAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalStringNotMatchAST_2E_weak init_nil (void) {
    GGS_lexicalStringNotMatchAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalStringNotMatchAST bang_lexicalStringNotMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalStringNotMatchAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalStringNotMatchAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalStringNotMatchAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringNotMatchAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSendDefaultActionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSendDefaultActionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_lexicalSendDefaultActionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalSendDefaultActionAST_2E_weak (const class GGS_lexicalSendDefaultActionAST & inSource) ;

  public: GGS_lexicalSendDefaultActionAST_2E_weak & operator = (const class GGS_lexicalSendDefaultActionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalSendDefaultActionAST_2E_weak init_nil (void) {
    GGS_lexicalSendDefaultActionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalSendDefaultActionAST bang_lexicalSendDefaultActionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalSendDefaultActionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalSendDefaultActionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalSendDefaultActionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSendDefaultActionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSendTerminalByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSendTerminalByDefaultAST : public GGS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalSendTerminalByDefaultAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalSendTerminalByDefaultAST (const class cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDefaultSentTerminal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalSendTerminalByDefaultAST init_21_ (const class GGS_lstring & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalSendTerminalByDefaultAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSendTerminalByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalSendTerminalByDefaultAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalSendTerminalByDefaultAST : public cPtr_lexicalSendDefaultActionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalSendTerminalByDefaultAST_init_21_ (const class GGS_lstring & inOperand0,
                                                         Compiler * inCompiler) ;


//--- Extension getter generateDefaultSendCode
  public: virtual class GGS_string getter_generateDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaDefaultSendCode
  public: virtual class GGS_string getter_generateSwiftCocoaDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDefaultSentTerminal ;


//--- Default constructor
  public: cPtr_lexicalSendTerminalByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalSendTerminalByDefaultAST (const GGS_lstring & in_mDefaultSentTerminal,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSendTerminalByDefaultAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSendTerminalByDefaultAST_2E_weak : public GGS_lexicalSendDefaultActionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalSendTerminalByDefaultAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalSendTerminalByDefaultAST_2E_weak (const class GGS_lexicalSendTerminalByDefaultAST & inSource) ;

  public: GGS_lexicalSendTerminalByDefaultAST_2E_weak & operator = (const class GGS_lexicalSendTerminalByDefaultAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalSendTerminalByDefaultAST_2E_weak init_nil (void) {
    GGS_lexicalSendTerminalByDefaultAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalSendTerminalByDefaultAST bang_lexicalSendTerminalByDefaultAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalSendTerminalByDefaultAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalSendTerminalByDefaultAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalSendTerminalByDefaultAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSendTerminalByDefaultAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalErrorByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalErrorByDefaultAST : public GGS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalErrorByDefaultAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalErrorByDefaultAST (const class cPtr_lexicalErrorByDefaultAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDefaultErrorMessageName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalErrorByDefaultAST init_21_ (const class GGS_lstring & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalErrorByDefaultAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalErrorByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalErrorByDefaultAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalErrorByDefaultAST : public cPtr_lexicalSendDefaultActionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalErrorByDefaultAST_init_21_ (const class GGS_lstring & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension getter generateDefaultSendCode
  public: virtual class GGS_string getter_generateDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaDefaultSendCode
  public: virtual class GGS_string getter_generateSwiftCocoaDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDefaultErrorMessageName ;


//--- Default constructor
  public: cPtr_lexicalErrorByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalErrorByDefaultAST (const GGS_lstring & in_mDefaultErrorMessageName,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalErrorByDefaultAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalErrorByDefaultAST_2E_weak : public GGS_lexicalSendDefaultActionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalErrorByDefaultAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalErrorByDefaultAST_2E_weak (const class GGS_lexicalErrorByDefaultAST & inSource) ;

  public: GGS_lexicalErrorByDefaultAST_2E_weak & operator = (const class GGS_lexicalErrorByDefaultAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalErrorByDefaultAST_2E_weak init_nil (void) {
    GGS_lexicalErrorByDefaultAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalErrorByDefaultAST bang_lexicalErrorByDefaultAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalErrorByDefaultAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalErrorByDefaultAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalErrorByDefaultAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalErrorByDefaultAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) ;

  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak & operator = (const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST bang_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionCallActualArgumentListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalFunctionCallActualArgumentListAST final {
  public: DownEnumerator_lexicalFunctionCallActualArgumentListAST (const class GGS_lexicalFunctionCallActualArgumentListAST & inList) ;

  public: ~ DownEnumerator_lexicalFunctionCallActualArgumentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST current_mLexicalActualInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalFunctionCallActualArgumentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalFunctionCallActualArgumentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalFunctionCallActualArgumentListAST (const DownEnumerator_lexicalFunctionCallActualArgumentListAST &) = delete ;
  private: DownEnumerator_lexicalFunctionCallActualArgumentListAST & operator = (const DownEnumerator_lexicalFunctionCallActualArgumentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalFunctionCallActualArgumentListAST final {
  public: UpEnumerator_lexicalFunctionCallActualArgumentListAST (const class GGS_lexicalFunctionCallActualArgumentListAST & inList)  ;

  public: ~ UpEnumerator_lexicalFunctionCallActualArgumentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST current_mLexicalActualInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalFunctionCallActualArgumentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalFunctionCallActualArgumentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalFunctionCallActualArgumentListAST (const UpEnumerator_lexicalFunctionCallActualArgumentListAST &) = delete ;
  private: UpEnumerator_lexicalFunctionCallActualArgumentListAST & operator = (const UpEnumerator_lexicalFunctionCallActualArgumentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalFunctionCallActualArgumentListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionCallActualArgumentListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalFunctionCallActualArgumentListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalFunctionCallActualArgumentListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalFunctionCallActualArgumentListAST (void) = default ;

//--- Copy
  public: GGS_lexicalFunctionCallActualArgumentListAST (const GGS_lexicalFunctionCallActualArgumentListAST &) = default ;
  public: GGS_lexicalFunctionCallActualArgumentListAST & operator = (const GGS_lexicalFunctionCallActualArgumentListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_lexicalFunctionCallActualArgumentListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalFunctionCallActualArgumentListAST subList (const int32_t inStart,
                                                                 const int32_t inLength,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalFunctionCallActualArgumentListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionCallActualArgumentListAST init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionCallActualArgumentListAST extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFunctionCallActualArgumentListAST class_func_listWithValue (const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_lexicalFunctionCallActualArgumentListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_lexicalFunctionCallActualArgumentListAST add_operation (const GGS_lexicalFunctionCallActualArgumentListAST & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalActualInputArgumentAtIndex (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST getter_mLexicalActualInputArgumentAtIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_lexicalFunctionCallActualArgumentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalFunctionCallActualArgumentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalFunctionCallActualArgumentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalFunctionCallActualArgumentListAST ;
  friend class DownEnumerator_lexicalFunctionCallActualArgumentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionCallActualArgumentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionCallActualArgumentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST mProperty_mLexicalActualInputArgument ;
  public: inline GGS_lexicalRoutineOrFunctionFormalInputArgumentAST readProperty_mLexicalActualInputArgument (void) const {
    return mProperty_mLexicalActualInputArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalFunctionCallActualArgumentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalActualInputArgument (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalActualInputArgument = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalFunctionCallActualArgumentListAST_2E_element (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalFunctionCallActualArgumentListAST_2E_element (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalFunctionCallActualArgumentListAST_2E_element & operator = (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionCallActualArgumentListAST_2E_element init_21_ (const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionCallActualArgumentListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalAttributeInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalAttributeInputArgumentAST (const class cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mAttributeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalAttributeInputArgumentAST init_21_ (const class GGS_lstring & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalAttributeInputArgumentAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalAttributeInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalAttributeInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalAttributeInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalAttributeInputArgumentAST_init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mAttributeName ;


//--- Default constructor
  public: cPtr_lexicalAttributeInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalAttributeInputArgumentAST (const GGS_lstring & in_mAttributeName,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeInputArgumentAST_2E_weak : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalAttributeInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalAttributeInputArgumentAST_2E_weak (const class GGS_lexicalAttributeInputArgumentAST & inSource) ;

  public: GGS_lexicalAttributeInputArgumentAST_2E_weak & operator = (const class GGS_lexicalAttributeInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalAttributeInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalAttributeInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalAttributeInputArgumentAST bang_lexicalAttributeInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalAttributeInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalAttributeInputArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalAttributeInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalAttributeInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterInputArgumentAST (const class cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterInputArgumentAST init_21_ (const class GGS_lchar & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterInputArgumentAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterInputArgumentAST_init_21_ (const class GGS_lchar & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mCharacter ;


//--- Default constructor
  public: cPtr_lexicalCharacterInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterInputArgumentAST (const GGS_lchar & in_mCharacter,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterInputArgumentAST_2E_weak : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalCharacterInputArgumentAST_2E_weak (const class GGS_lexicalCharacterInputArgumentAST & inSource) ;

  public: GGS_lexicalCharacterInputArgumentAST_2E_weak & operator = (const class GGS_lexicalCharacterInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalCharacterInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalCharacterInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalCharacterInputArgumentAST bang_lexicalCharacterInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalCharacterInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterInputArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalCharacterInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalUnsignedInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalUnsignedInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalUnsignedInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalUnsignedInputArgumentAST (const class cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbigint readProperty_mUnsigned (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalUnsignedInputArgumentAST init_21_ (const class GGS_lbigint & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalUnsignedInputArgumentAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalUnsignedInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalUnsignedInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalUnsignedInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalUnsignedInputArgumentAST_init_21_ (const class GGS_lbigint & inOperand0,
                                                         Compiler * inCompiler) ;


//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lbigint mProperty_mUnsigned ;


//--- Default constructor
  public: cPtr_lexicalUnsignedInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalUnsignedInputArgumentAST (const GGS_lbigint & in_mUnsigned,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalUnsignedInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalUnsignedInputArgumentAST_2E_weak : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalUnsignedInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalUnsignedInputArgumentAST_2E_weak (const class GGS_lexicalUnsignedInputArgumentAST & inSource) ;

  public: GGS_lexicalUnsignedInputArgumentAST_2E_weak & operator = (const class GGS_lexicalUnsignedInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalUnsignedInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalUnsignedInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalUnsignedInputArgumentAST bang_lexicalUnsignedInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalUnsignedInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalUnsignedInputArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalUnsignedInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalUnsignedInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCurrentCharacterInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCurrentCharacterInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCurrentCharacterInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCurrentCharacterInputArgumentAST (const class cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCurrentCharacterInputArgumentAST init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCurrentCharacterInputArgumentAST extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCurrentCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCurrentCharacterInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCurrentCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCurrentCharacterInputArgumentAST_init_21_ (const class GGS_location & inOperand0,
                                                                 Compiler * inCompiler) ;


//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_lexicalCurrentCharacterInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCurrentCharacterInputArgumentAST (const GGS_location & in_mLocation,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCurrentCharacterInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak (const class GGS_lexicalCurrentCharacterInputArgumentAST & inSource) ;

  public: GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak & operator = (const class GGS_lexicalCurrentCharacterInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalCurrentCharacterInputArgumentAST bang_lexicalCurrentCharacterInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalCurrentCharacterInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalFunctionInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalFunctionInputArgumentAST (const class cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS_lexicalFunctionCallActualArgumentListAST readProperty_mFunctionActualArgumentList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionInputArgumentAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_lexicalFunctionCallActualArgumentListAST & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionInputArgumentAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalFunctionInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalFunctionInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalFunctionInputArgumentAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_lexicalFunctionCallActualArgumentListAST & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS_lexicalFunctionCallActualArgumentListAST mProperty_mFunctionActualArgumentList ;


//--- Default constructor
  public: cPtr_lexicalFunctionInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalFunctionInputArgumentAST (const GGS_lstring & in_mFunctionName,
                                                const GGS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionInputArgumentAST_2E_weak : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalFunctionInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalFunctionInputArgumentAST_2E_weak (const class GGS_lexicalFunctionInputArgumentAST & inSource) ;

  public: GGS_lexicalFunctionInputArgumentAST_2E_weak & operator = (const class GGS_lexicalFunctionInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalFunctionInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalFunctionInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalFunctionInputArgumentAST bang_lexicalFunctionInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalFunctionInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionInputArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFunctionInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalFunctionInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST_2E_weak ;

