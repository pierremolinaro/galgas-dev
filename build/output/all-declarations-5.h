#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @equatableExtensionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_equatableExtensionAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_equatableExtensionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_equatableExtensionAST (const class cPtr_equatableExtensionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_equatableComparableExtension readProperty_mExtension (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_equatableExtensionAST init_21_isPredefined_21__21_ (const class GGS_bool & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_equatableComparableExtension & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_equatableExtensionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_equatableExtensionAST class_func_new (const class GGS_bool & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 const class GGS_equatableComparableExtension & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_equatableExtensionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_equatableExtensionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equatableExtensionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @equatableExtensionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_equatableExtensionAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void equatableExtensionAST_init_21_isPredefined_21__21_ (const class GGS_bool & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_equatableComparableExtension & inOperand2,
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
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_equatableComparableExtension mProperty_mExtension ;


//--- Default constructor
  public: cPtr_equatableExtensionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_equatableExtensionAST (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mTypeName,
                                      const GGS_equatableComparableExtension & in_mExtension
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @equatableExtensionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_equatableExtensionAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_equatableExtensionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_equatableExtensionAST_2E_weak (const class GGS_equatableExtensionAST & inSource) ;

  public: GGS_equatableExtensionAST_2E_weak & operator = (const class GGS_equatableExtensionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_equatableExtensionAST_2E_weak init_nil (void) {
    GGS_equatableExtensionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_equatableExtensionAST bang_equatableExtensionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_equatableExtensionAST unwrappedValue (void) const {
    GGS_equatableExtensionAST result ;
    if (isValid ()) {
      const cPtr_equatableExtensionAST * p = (cPtr_equatableExtensionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_equatableExtensionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_equatableExtensionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_equatableExtensionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_equatableExtensionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_equatableExtensionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equatableExtensionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_semanticInstructionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_semanticInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticInstructionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_semanticInstructionListAST class_func_listWithValue (const class GGS_semanticInstructionAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_semanticInstructionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_semanticInstructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_semanticInstructionListAST add_operation (const GGS_semanticInstructionListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_semanticInstructionAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_semanticInstructionAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_semanticInstructionAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_semanticInstructionAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_semanticInstructionAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_semanticInstructionAST constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_semanticInstructionAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_semanticInstructionAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionAST getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_semanticInstructionListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_semanticInstructionListAST ;
 
} ; // End of GGS_semanticInstructionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_semanticInstructionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_semanticInstructionListAST (const GGS_semanticInstructionListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_semanticInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticInstructionListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_syntaxInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syntaxInstructionAST (const class cPtr_syntaxInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxInstructionAST init_21_ (const class GGS_location & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxInstructionAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syntaxInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @syntaxInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxInstructionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxInstructionAST_init_21_ (const class GGS_location & inOperand0,
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
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_syntaxInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxInstructionAST (const GGS_location & in_mInstructionLocation
                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionAST : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticInstructionAST (const class cPtr_semanticInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionAST init_21_ (const class GGS_location & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_semanticInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticInstructionAST : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticInstructionAST_init_21_ (const class GGS_location & inOperand0,
                                                Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

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

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_semanticInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticInstructionAST (const GGS_location & in_mInstructionLocation
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticInstructionAST mProperty_mInstruction ;
  public: inline GGS_semanticInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticInstructionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_semanticInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_semanticInstructionListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticInstructionListAST_2E_element (const GGS_semanticInstructionAST & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionListAST_2E_element init_21_ (const class GGS_semanticInstructionAST & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionListAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticInstructionListAST_2E_element class_func_new (const class GGS_semanticInstructionAST & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_semanticInstructionListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_extensionGetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extensionGetterAST (const class cPtr_extensionGetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mExtensionGetterName (void) const ;

  public: class GGS_formalInputParameterListAST readProperty_mExtensionGetterFormalInputParameterList (void) const ;

  public: class GGS_lstring readProperty_mExtensionGetterReturnedTypeName (void) const ;

  public: class GGS_lstring readProperty_mExtensionGetterReturnedVariableName (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mExtensionGetterInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfReaderLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                              const class GGS_bool & inOperand1,
                                                                                                                              const class GGS_lstring & inOperand2,
                                                                                                                              const class GGS_lstring & inOperand3,
                                                                                                                              const class GGS_formalInputParameterListAST & inOperand4,
                                                                                                                              const class GGS_lstring & inOperand5,
                                                                                                                              const class GGS_lstring & inOperand6,
                                                                                                                              const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                                              const class GGS_location & inOperand8,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterAST class_func_new (const class GGS_bool & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_lstring & inOperand3,
                                                              const class GGS_formalInputParameterListAST & inOperand4,
                                                              const class GGS_lstring & inOperand5,
                                                              const class GGS_lstring & inOperand6,
                                                              const class GGS_semanticInstructionListAST & inOperand7,
                                                              const class GGS_location & inOperand8
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionGetterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionGetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extensionGetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                        const class GGS_bool & inOperand1,
                                                                                                                        const class GGS_lstring & inOperand2,
                                                                                                                        const class GGS_lstring & inOperand3,
                                                                                                                        const class GGS_formalInputParameterListAST & inOperand4,
                                                                                                                        const class GGS_lstring & inOperand5,
                                                                                                                        const class GGS_lstring & inOperand6,
                                                                                                                        const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                                        const class GGS_location & inOperand8,
                                                                                                                        Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mExtensionGetterName ;
  public: GGS_formalInputParameterListAST mProperty_mExtensionGetterFormalInputParameterList ;
  public: GGS_lstring mProperty_mExtensionGetterReturnedTypeName ;
  public: GGS_lstring mProperty_mExtensionGetterReturnedVariableName ;
  public: GGS_semanticInstructionListAST mProperty_mExtensionGetterInstructionList ;
  public: GGS_location mProperty_mEndOfReaderLocation ;


//--- Default constructor
  public: cPtr_extensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionGetterAST (const GGS_bool & in_isPredefined,
                                   const GGS_bool & in_requiresSelfForAccessingProperty,
                                   const GGS_lstring & in_mTypeName,
                                   const GGS_lstring & in_mExtensionGetterName,
                                   const GGS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                   const GGS_lstring & in_mExtensionGetterReturnedTypeName,
                                   const GGS_lstring & in_mExtensionGetterReturnedVariableName,
                                   const GGS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                   const GGS_location & in_mEndOfReaderLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionGetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionGetterAST_2E_weak (const class GGS_extensionGetterAST & inSource) ;

  public: GGS_extensionGetterAST_2E_weak & operator = (const class GGS_extensionGetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionGetterAST_2E_weak init_nil (void) {
    GGS_extensionGetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionGetterAST bang_extensionGetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_extensionGetterAST unwrappedValue (void) const {
    GGS_extensionGetterAST result ;
    if (isValid ()) {
      const cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_extensionGetterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_extensionGetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionGetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionGetterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_semanticInstructionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_semanticInstructionForGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionListForGeneration init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionListForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticInstructionListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_semanticInstructionListForGeneration class_func_listWithValue (const class GGS_semanticInstructionForGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_semanticInstructionListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_semanticInstructionForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_semanticInstructionListForGeneration add_operation (const GGS_semanticInstructionListForGeneration & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_semanticInstructionForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_semanticInstructionForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_semanticInstructionForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_semanticInstructionForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_semanticInstructionForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_semanticInstructionForGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_semanticInstructionForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_semanticInstructionForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionForGeneration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_semanticInstructionListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_semanticInstructionListForGeneration ;
 
} ; // End of GGS_semanticInstructionListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_semanticInstructionListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_semanticInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticInstructionListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticInstructionForGeneration (const class cPtr_semanticInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_semanticInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticInstructionForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticInstructionForGeneration_init (Compiler * inCompiler) ;


//--- Extension getter compareInstructionSyntaxSignature
  public: virtual class GGS_bool getter_compareInstructionSyntaxSignature (const class GGS_semanticInstructionForGeneration inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg_inPosfix,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_semanticInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticInstructionForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionListForGeneration_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticInstructionForGeneration mProperty_mInstruction ;
  public: inline GGS_semanticInstructionForGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticInstructionListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_semanticInstructionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_semanticInstructionListForGeneration_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticInstructionListForGeneration_2E_element (const GGS_semanticInstructionForGeneration & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionListForGeneration_2E_element init_21_ (const class GGS_semanticInstructionForGeneration & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticInstructionListForGeneration_2E_element class_func_new (const class GGS_semanticInstructionForGeneration & inOperand0,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_semanticInstructionListForGeneration_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_extensionMethodAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extensionMethodAST (const class cPtr_extensionMethodAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mExtensionMethodName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mExtensionMethodFormalParameterList (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mExtensionMethodInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfMethodLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                      const class GGS_bool & inOperand1,
                                                                                                                      const class GGS_lstring & inOperand2,
                                                                                                                      const class GGS_lstring & inOperand3,
                                                                                                                      const class GGS_formalParameterListAST & inOperand4,
                                                                                                                      const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                      const class GGS_location & inOperand6,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodAST class_func_new (const class GGS_bool & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_lstring & inOperand3,
                                                              const class GGS_formalParameterListAST & inOperand4,
                                                              const class GGS_semanticInstructionListAST & inOperand5,
                                                              const class GGS_location & inOperand6
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionMethodAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionMethodAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extensionMethodAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionMethodAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                const class GGS_lstring & inOperand2,
                                                                                                                const class GGS_lstring & inOperand3,
                                                                                                                const class GGS_formalParameterListAST & inOperand4,
                                                                                                                const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                const class GGS_location & inOperand6,
                                                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mExtensionMethodName ;
  public: GGS_formalParameterListAST mProperty_mExtensionMethodFormalParameterList ;
  public: GGS_semanticInstructionListAST mProperty_mExtensionMethodInstructionList ;
  public: GGS_location mProperty_mEndOfMethodLocation ;


//--- Default constructor
  public: cPtr_extensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionMethodAST (const GGS_bool & in_isPredefined,
                                   const GGS_bool & in_requiresSelfForAccessingProperty,
                                   const GGS_lstring & in_mTypeName,
                                   const GGS_lstring & in_mExtensionMethodName,
                                   const GGS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                   const GGS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                   const GGS_location & in_mEndOfMethodLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionMethodAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionMethodAST_2E_weak (const class GGS_extensionMethodAST & inSource) ;

  public: GGS_extensionMethodAST_2E_weak & operator = (const class GGS_extensionMethodAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionMethodAST_2E_weak init_nil (void) {
    GGS_extensionMethodAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionMethodAST bang_extensionMethodAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_extensionMethodAST unwrappedValue (void) const {
    GGS_extensionMethodAST result ;
    if (isValid ()) {
      const cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_extensionMethodAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_extensionMethodAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionMethodAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionMethodAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_extensionSetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extensionSetterAST (const class cPtr_extensionSetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mExtensionSetterName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mExtensionSetterFormalParameterList (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mExtensionSetterInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfSetterDeclarationLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                      const class GGS_bool & inOperand1,
                                                                                                                      const class GGS_lstring & inOperand2,
                                                                                                                      const class GGS_lstring & inOperand3,
                                                                                                                      const class GGS_formalParameterListAST & inOperand4,
                                                                                                                      const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                      const class GGS_location & inOperand6,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterAST class_func_new (const class GGS_bool & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_lstring & inOperand3,
                                                              const class GGS_formalParameterListAST & inOperand4,
                                                              const class GGS_semanticInstructionListAST & inOperand5,
                                                              const class GGS_location & inOperand6
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionSetterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionSetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extensionSetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionSetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                const class GGS_lstring & inOperand2,
                                                                                                                const class GGS_lstring & inOperand3,
                                                                                                                const class GGS_formalParameterListAST & inOperand4,
                                                                                                                const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                const class GGS_location & inOperand6,
                                                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mExtensionSetterName ;
  public: GGS_formalParameterListAST mProperty_mExtensionSetterFormalParameterList ;
  public: GGS_semanticInstructionListAST mProperty_mExtensionSetterInstructionList ;
  public: GGS_location mProperty_mEndOfSetterDeclarationLocation ;


//--- Default constructor
  public: cPtr_extensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionSetterAST (const GGS_bool & in_isPredefined,
                                   const GGS_bool & in_requiresSelfForAccessingProperty,
                                   const GGS_lstring & in_mTypeName,
                                   const GGS_lstring & in_mExtensionSetterName,
                                   const GGS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                   const GGS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                   const GGS_location & in_mEndOfSetterDeclarationLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionSetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionSetterAST_2E_weak (const class GGS_extensionSetterAST & inSource) ;

  public: GGS_extensionSetterAST_2E_weak & operator = (const class GGS_extensionSetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionSetterAST_2E_weak init_nil (void) {
    GGS_extensionSetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionSetterAST bang_extensionSetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_extensionSetterAST unwrappedValue (void) const {
    GGS_extensionSetterAST result ;
    if (isValid ()) {
      const cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_extensionSetterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_extensionSetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionSetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionSetterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @initializerAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_initializerAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_initializerAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_initializerAST (const class cPtr_initializerAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_formalInputParameterListAST readProperty_mFormalParameterList (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfInitializerLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_initializerAST init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_formalInputParameterListAST & inOperand2,
                                                                          const class GGS_semanticInstructionListAST & inOperand3,
                                                                          const class GGS_location & inOperand4,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_initializerAST extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_initializerAST class_func_new (const class GGS_bool & inOperand0,
                                                          const class GGS_lstring & inOperand1,
                                                          const class GGS_formalInputParameterListAST & inOperand2,
                                                          const class GGS_semanticInstructionListAST & inOperand3,
                                                          const class GGS_location & inOperand4
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_initializerAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_initializerAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @initializerAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_initializerAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void initializerAST_init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_formalInputParameterListAST & inOperand2,
                                                                    const class GGS_semanticInstructionListAST & inOperand3,
                                                                    const class GGS_location & inOperand4,
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
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_formalInputParameterListAST mProperty_mFormalParameterList ;
  public: GGS_semanticInstructionListAST mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInitializerLocation ;


//--- Default constructor
  public: cPtr_initializerAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_initializerAST (const GGS_bool & in_isPredefined,
                               const GGS_lstring & in_mTypeName,
                               const GGS_formalInputParameterListAST & in_mFormalParameterList,
                               const GGS_semanticInstructionListAST & in_mInstructionList,
                               const GGS_location & in_mEndOfInitializerLocation
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @initializerAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_initializerAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_initializerAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_initializerAST_2E_weak (const class GGS_initializerAST & inSource) ;

  public: GGS_initializerAST_2E_weak & operator = (const class GGS_initializerAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_initializerAST_2E_weak init_nil (void) {
    GGS_initializerAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_initializerAST bang_initializerAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_initializerAST unwrappedValue (void) const {
    GGS_initializerAST result ;
    if (isValid ()) {
      const cPtr_initializerAST * p = (cPtr_initializerAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_initializerAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_initializerAST_2E_weak extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_initializerAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_initializerAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_initializerAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionGetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionGetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionGetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingAbstractExtensionGetterAST (const class cPtr_overridingAbstractExtensionGetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mAbstractExtensionGetterName (void) const ;

  public: class GGS_formalInputParameterListAST readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const ;

  public: class GGS_lstring readProperty_mAbstractExtensionGetterReturnedTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingAbstractExtensionGetterAST init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_lstring & inOperand2,
                                                                                                const class GGS_formalInputParameterListAST & inOperand3,
                                                                                                const class GGS_lstring & inOperand4,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingAbstractExtensionGetterAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionGetterAST class_func_new (const class GGS_bool & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_formalInputParameterListAST & inOperand3,
                                                                                const class GGS_lstring & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingAbstractExtensionGetterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionGetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionGetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingAbstractExtensionGetterAST_init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_lstring & inOperand2,
                                                                                          const class GGS_formalInputParameterListAST & inOperand3,
                                                                                          const class GGS_lstring & inOperand4,
                                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mAbstractExtensionGetterName ;
  public: GGS_formalInputParameterListAST mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  public: GGS_lstring mProperty_mAbstractExtensionGetterReturnedTypeName ;


//--- Default constructor
  public: cPtr_overridingAbstractExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionGetterAST (const GGS_bool & in_isPredefined,
                                                     const GGS_lstring & in_mTypeName,
                                                     const GGS_lstring & in_mAbstractExtensionGetterName,
                                                     const GGS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                     const GGS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionGetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionGetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionGetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingAbstractExtensionGetterAST_2E_weak (const class GGS_overridingAbstractExtensionGetterAST & inSource) ;

  public: GGS_overridingAbstractExtensionGetterAST_2E_weak & operator = (const class GGS_overridingAbstractExtensionGetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingAbstractExtensionGetterAST_2E_weak init_nil (void) {
    GGS_overridingAbstractExtensionGetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingAbstractExtensionGetterAST bang_overridingAbstractExtensionGetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingAbstractExtensionGetterAST unwrappedValue (void) const {
    GGS_overridingAbstractExtensionGetterAST result ;
    if (isValid ()) {
      const cPtr_overridingAbstractExtensionGetterAST * p = (cPtr_overridingAbstractExtensionGetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingAbstractExtensionGetterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_overridingAbstractExtensionGetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionGetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionGetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingAbstractExtensionGetterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionMethodAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionMethodAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionMethodAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingAbstractExtensionMethodAST (const class cPtr_overridingAbstractExtensionMethodAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionMethodName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mOverridingExtensionMethodFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingAbstractExtensionMethodAST init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_formalParameterListAST & inOperand3,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingAbstractExtensionMethodAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionMethodAST class_func_new (const class GGS_bool & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_formalParameterListAST & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingAbstractExtensionMethodAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionMethodAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionMethodAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingAbstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_formalParameterListAST & inOperand3,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionMethodName ;
  public: GGS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;


//--- Default constructor
  public: cPtr_overridingAbstractExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionMethodAST (const GGS_bool & in_isPredefined,
                                                     const GGS_lstring & in_mTypeName,
                                                     const GGS_lstring & in_mOverridingExtensionMethodName,
                                                     const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionMethodAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionMethodAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionMethodAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingAbstractExtensionMethodAST_2E_weak (const class GGS_overridingAbstractExtensionMethodAST & inSource) ;

  public: GGS_overridingAbstractExtensionMethodAST_2E_weak & operator = (const class GGS_overridingAbstractExtensionMethodAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingAbstractExtensionMethodAST_2E_weak init_nil (void) {
    GGS_overridingAbstractExtensionMethodAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingAbstractExtensionMethodAST bang_overridingAbstractExtensionMethodAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingAbstractExtensionMethodAST unwrappedValue (void) const {
    GGS_overridingAbstractExtensionMethodAST result ;
    if (isValid ()) {
      const cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingAbstractExtensionMethodAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_overridingAbstractExtensionMethodAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionMethodAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionMethodAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingAbstractExtensionMethodAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionSetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionSetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionSetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingAbstractExtensionSetterAST (const class cPtr_overridingAbstractExtensionSetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionSetterName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mOverridingExtensionSetterFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingAbstractExtensionSetterAST init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_formalParameterListAST & inOperand3,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingAbstractExtensionSetterAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionSetterAST class_func_new (const class GGS_bool & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_formalParameterListAST & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingAbstractExtensionSetterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionSetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionSetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingAbstractExtensionSetterAST_init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_formalParameterListAST & inOperand3,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionSetterName ;
  public: GGS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;


//--- Default constructor
  public: cPtr_overridingAbstractExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionSetterAST (const GGS_bool & in_isPredefined,
                                                     const GGS_lstring & in_mTypeName,
                                                     const GGS_lstring & in_mOverridingExtensionSetterName,
                                                     const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionSetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionSetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionSetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingAbstractExtensionSetterAST_2E_weak (const class GGS_overridingAbstractExtensionSetterAST & inSource) ;

  public: GGS_overridingAbstractExtensionSetterAST_2E_weak & operator = (const class GGS_overridingAbstractExtensionSetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingAbstractExtensionSetterAST_2E_weak init_nil (void) {
    GGS_overridingAbstractExtensionSetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingAbstractExtensionSetterAST bang_overridingAbstractExtensionSetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingAbstractExtensionSetterAST unwrappedValue (void) const {
    GGS_overridingAbstractExtensionSetterAST result ;
    if (isValid ()) {
      const cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingAbstractExtensionSetterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_overridingAbstractExtensionSetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionSetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionSetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingAbstractExtensionSetterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionGetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionGetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionGetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingExtensionGetterAST (const class cPtr_overridingExtensionGetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionGetterName (void) const ;

  public: class GGS_formalInputParameterListAST readProperty_mOverridingExtensionGetterFormalInputParameterList (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionGetterReturnedTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionGetterReturnedVariableName (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mOverridingExtensionGetterInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfReaderLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingExtensionGetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                        const class GGS_bool & inOperand1,
                                                                                                                                        const class GGS_lstring & inOperand2,
                                                                                                                                        const class GGS_lstring & inOperand3,
                                                                                                                                        const class GGS_formalInputParameterListAST & inOperand4,
                                                                                                                                        const class GGS_lstring & inOperand5,
                                                                                                                                        const class GGS_lstring & inOperand6,
                                                                                                                                        const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                                                        const class GGS_location & inOperand8,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingExtensionGetterAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionGetterAST class_func_new (const class GGS_bool & inOperand0,
                                                                        const class GGS_bool & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_lstring & inOperand3,
                                                                        const class GGS_formalInputParameterListAST & inOperand4,
                                                                        const class GGS_lstring & inOperand5,
                                                                        const class GGS_lstring & inOperand6,
                                                                        const class GGS_semanticInstructionListAST & inOperand7,
                                                                        const class GGS_location & inOperand8
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingExtensionGetterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionGetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionGetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingExtensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                  const class GGS_bool & inOperand1,
                                                                                                                                  const class GGS_lstring & inOperand2,
                                                                                                                                  const class GGS_lstring & inOperand3,
                                                                                                                                  const class GGS_formalInputParameterListAST & inOperand4,
                                                                                                                                  const class GGS_lstring & inOperand5,
                                                                                                                                  const class GGS_lstring & inOperand6,
                                                                                                                                  const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                                                  const class GGS_location & inOperand8,
                                                                                                                                  Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionGetterName ;
  public: GGS_formalInputParameterListAST mProperty_mOverridingExtensionGetterFormalInputParameterList ;
  public: GGS_lstring mProperty_mOverridingExtensionGetterReturnedTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionGetterReturnedVariableName ;
  public: GGS_semanticInstructionListAST mProperty_mOverridingExtensionGetterInstructionList ;
  public: GGS_location mProperty_mEndOfReaderLocation ;


//--- Default constructor
  public: cPtr_overridingExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionGetterAST (const GGS_bool & in_isPredefined,
                                             const GGS_bool & in_requiresSelfForAccessingProperty,
                                             const GGS_lstring & in_mTypeName,
                                             const GGS_lstring & in_mOverridingExtensionGetterName,
                                             const GGS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                             const GGS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                             const GGS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                             const GGS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                             const GGS_location & in_mEndOfReaderLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionGetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionGetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionGetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingExtensionGetterAST_2E_weak (const class GGS_overridingExtensionGetterAST & inSource) ;

  public: GGS_overridingExtensionGetterAST_2E_weak & operator = (const class GGS_overridingExtensionGetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingExtensionGetterAST_2E_weak init_nil (void) {
    GGS_overridingExtensionGetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingExtensionGetterAST bang_overridingExtensionGetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingExtensionGetterAST unwrappedValue (void) const {
    GGS_overridingExtensionGetterAST result ;
    if (isValid ()) {
      const cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingExtensionGetterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_overridingExtensionGetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionGetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionGetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingExtensionGetterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionMethodAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionMethodAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionMethodAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingExtensionMethodAST (const class cPtr_overridingExtensionMethodAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionMethodName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mOverridingExtensionMethodFormalParameterList (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mOverridingExtensionMethodInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfMethodLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingExtensionMethodAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                                const class GGS_lstring & inOperand2,
                                                                                                                                const class GGS_lstring & inOperand3,
                                                                                                                                const class GGS_formalParameterListAST & inOperand4,
                                                                                                                                const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                                const class GGS_location & inOperand6,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingExtensionMethodAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionMethodAST class_func_new (const class GGS_bool & inOperand0,
                                                                        const class GGS_bool & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_lstring & inOperand3,
                                                                        const class GGS_formalParameterListAST & inOperand4,
                                                                        const class GGS_semanticInstructionListAST & inOperand5,
                                                                        const class GGS_location & inOperand6
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingExtensionMethodAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionMethodAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionMethodAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingExtensionMethodAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                          const class GGS_bool & inOperand1,
                                                                                                                          const class GGS_lstring & inOperand2,
                                                                                                                          const class GGS_lstring & inOperand3,
                                                                                                                          const class GGS_formalParameterListAST & inOperand4,
                                                                                                                          const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                          const class GGS_location & inOperand6,
                                                                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionMethodName ;
  public: GGS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;
  public: GGS_semanticInstructionListAST mProperty_mOverridingExtensionMethodInstructionList ;
  public: GGS_location mProperty_mEndOfMethodLocation ;


//--- Default constructor
  public: cPtr_overridingExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionMethodAST (const GGS_bool & in_isPredefined,
                                             const GGS_bool & in_requiresSelfForAccessingProperty,
                                             const GGS_lstring & in_mTypeName,
                                             const GGS_lstring & in_mOverridingExtensionMethodName,
                                             const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                             const GGS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                             const GGS_location & in_mEndOfMethodLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionMethodAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionMethodAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionMethodAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingExtensionMethodAST_2E_weak (const class GGS_overridingExtensionMethodAST & inSource) ;

  public: GGS_overridingExtensionMethodAST_2E_weak & operator = (const class GGS_overridingExtensionMethodAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingExtensionMethodAST_2E_weak init_nil (void) {
    GGS_overridingExtensionMethodAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingExtensionMethodAST bang_overridingExtensionMethodAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingExtensionMethodAST unwrappedValue (void) const {
    GGS_overridingExtensionMethodAST result ;
    if (isValid ()) {
      const cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingExtensionMethodAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_overridingExtensionMethodAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionMethodAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionMethodAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingExtensionMethodAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionSetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionSetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionSetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingExtensionSetterAST (const class cPtr_overridingExtensionSetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionSetterName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mOverridingExtensionSetterFormalParameterList (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mOverridingExtensionSetterInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfSetterDeclarationLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingExtensionSetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                                const class GGS_lstring & inOperand2,
                                                                                                                                const class GGS_lstring & inOperand3,
                                                                                                                                const class GGS_formalParameterListAST & inOperand4,
                                                                                                                                const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                                const class GGS_location & inOperand6,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingExtensionSetterAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionSetterAST class_func_new (const class GGS_bool & inOperand0,
                                                                        const class GGS_bool & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_lstring & inOperand3,
                                                                        const class GGS_formalParameterListAST & inOperand4,
                                                                        const class GGS_semanticInstructionListAST & inOperand5,
                                                                        const class GGS_location & inOperand6
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingExtensionSetterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionSetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionSetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingExtensionSetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                          const class GGS_bool & inOperand1,
                                                                                                                          const class GGS_lstring & inOperand2,
                                                                                                                          const class GGS_lstring & inOperand3,
                                                                                                                          const class GGS_formalParameterListAST & inOperand4,
                                                                                                                          const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                          const class GGS_location & inOperand6,
                                                                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionSetterName ;
  public: GGS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;
  public: GGS_semanticInstructionListAST mProperty_mOverridingExtensionSetterInstructionList ;
  public: GGS_location mProperty_mEndOfSetterDeclarationLocation ;


//--- Default constructor
  public: cPtr_overridingExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionSetterAST (const GGS_bool & in_isPredefined,
                                             const GGS_bool & in_requiresSelfForAccessingProperty,
                                             const GGS_lstring & in_mTypeName,
                                             const GGS_lstring & in_mOverridingExtensionSetterName,
                                             const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                             const GGS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                             const GGS_location & in_mEndOfSetterDeclarationLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionSetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionSetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionSetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingExtensionSetterAST_2E_weak (const class GGS_overridingExtensionSetterAST & inSource) ;

  public: GGS_overridingExtensionSetterAST_2E_weak & operator = (const class GGS_overridingExtensionSetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingExtensionSetterAST_2E_weak init_nil (void) {
    GGS_overridingExtensionSetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingExtensionSetterAST bang_overridingExtensionSetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingExtensionSetterAST unwrappedValue (void) const {
    GGS_overridingExtensionSetterAST result ;
    if (isValid ()) {
      const cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingExtensionSetterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_overridingExtensionSetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionSetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionSetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overridingExtensionSetterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum typeKindEnum
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_typeKindEnum (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_classType,
    enum_weakReferenceType,
    enum_enumType,
    enum_listType,
    enum_sortedListType,
    enum_mapType,
    enum_sharedMapType,
    enum_sharedMapEntryType,
    enum_listMapType,
    enum_boolsetType,
    enum_structType,
    enum_graphType,
    enum_externType,
    enum_otherType,
    enum_packageType
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_classType (class GGS_bool & out_isReference) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_weakReferenceType (class GGS_unifiedTypeMapEntry & out_referenceType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_enumType (class GGS_constantIndexMap & out_constantMap) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindEnum extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindEnum class_func_boolsetType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_classType (const class GGS_bool & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_enumType (const class GGS_constantIndexMap & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_externType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_graphType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_listMapType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_listType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_mapType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_otherType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_packageType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_sharedMapEntryType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_sharedMapType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_sortedListType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_structType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_weakReferenceType (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractClassType (class GGS_bool & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractEnumType (class GGS_constantIndexMap & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractWeakReferenceType (class GGS_unifiedTypeMapEntry & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_typeKindEnum_2E_classType_3F_ getter_getClassType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKindEnum_2E_enumType_3F_ getter_getEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKindEnum_2E_weakReferenceType_3F_ getter_getWeakReferenceType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBoolsetType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isClassType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isExternType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGraphType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isListMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isListType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOtherType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPackageType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSharedMapEntryType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSharedMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSortedListType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStructType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isWeakReferenceType (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKindEnum class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2E_classType struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_classType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isReference ;
  public: inline GGS_bool readProperty_isReference (void) const {
    return mProperty_isReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_classType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsReference (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isReference = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKindEnum_2E_classType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKindEnum_2E_classType (const GGS_bool & in_isReference) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindEnum_2E_classType init_21_ (const class GGS_bool & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindEnum_2E_classType extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindEnum_2E_classType class_func_new (const class GGS_bool & inOperand0,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_classType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKindEnum_2E_classType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_classType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKindEnum.classType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_classType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKindEnum_2E_classType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_classType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKindEnum_2E_classType_3F_ (const GGS_typeKindEnum_2E_classType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKindEnum_2E_classType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKindEnum_2E_classType unwrappedValue (void) const {
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
  public: static GGS_typeKindEnum_2E_classType_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_classType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKindEnum_2E_classType_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_classType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantIndexMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constantIndexMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_constantIndexMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_constantIndexMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_constantIndexMap (void) ;

//--------------------------------- Handle copy
  public: GGS_constantIndexMap (const GGS_constantIndexMap & inSource) ;
  public: GGS_constantIndexMap & operator = (const GGS_constantIndexMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantIndexMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantIndexMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantIndexMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_constantIndexMap class_func_mapWithMapToOverride (const class GGS_constantIndexMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_associatedValueDescriptorList & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_constantIndexMap add_operation (const GGS_constantIndexMap & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_associatedValueDescriptorList constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedTypeListForKey (class GGS_associatedValueDescriptorList constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_associatedValueDescriptorList & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_associatedValueDescriptorList getter_mAssociatedTypeListForKey (const class GGS_string & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constantIndexMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_constantIndexMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_constantIndexMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GGS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_constantIndexMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_constantIndexMap ;
 
} ; // End of GGS_constantIndexMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_constantIndexMap : public cGenericAbstractEnumerator {
  public: cEnumerator_constantIndexMap (const GGS_constantIndexMap & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_associatedValueDescriptorList current_mAssociatedTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantIndexMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2E_enumType struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_enumType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_constantIndexMap mProperty_constantMap ;
  public: inline GGS_constantIndexMap readProperty_constantMap (void) const {
    return mProperty_constantMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_enumType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstantMap (const GGS_constantIndexMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKindEnum_2E_enumType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKindEnum_2E_enumType (const GGS_constantIndexMap & in_constantMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindEnum_2E_enumType init_21_ (const class GGS_constantIndexMap & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindEnum_2E_enumType extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindEnum_2E_enumType class_func_new (const class GGS_constantIndexMap & inOperand0,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_enumType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKindEnum_2E_enumType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKindEnum.enumType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_enumType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKindEnum_2E_enumType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_enumType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKindEnum_2E_enumType_3F_ (const GGS_typeKindEnum_2E_enumType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKindEnum_2E_enumType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKindEnum_2E_enumType unwrappedValue (void) const {
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
  public: static GGS_typeKindEnum_2E_enumType_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_enumType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKindEnum_2E_enumType_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2E_weakReferenceType struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_weakReferenceType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_referenceType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_referenceType (void) const {
    return mProperty_referenceType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_weakReferenceType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setReferenceType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_referenceType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKindEnum_2E_weakReferenceType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKindEnum_2E_weakReferenceType (const GGS_unifiedTypeMapEntry & in_referenceType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindEnum_2E_weakReferenceType init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindEnum_2E_weakReferenceType extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindEnum_2E_weakReferenceType class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_weakReferenceType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKindEnum_2E_weakReferenceType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKindEnum.weakReferenceType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_weakReferenceType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKindEnum_2E_weakReferenceType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_weakReferenceType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKindEnum_2E_weakReferenceType_3F_ (const GGS_typeKindEnum_2E_weakReferenceType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKindEnum_2E_weakReferenceType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKindEnum_2E_weakReferenceType unwrappedValue (void) const {
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
  public: static GGS_typeKindEnum_2E_weakReferenceType_3F_ extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_weakReferenceType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKindEnum_2E_weakReferenceType_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertyMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_propertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_propertyMap (void) ;

//--------------------------------- Handle copy
  public: GGS_propertyMap (const GGS_propertyMap & inSource) ;
  public: GGS_propertyMap & operator = (const GGS_propertyMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMap extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_propertyMap class_func_mapWithMapToOverride (const class GGS_propertyMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_AccessControl & inOperand1,
                                                     const class GGS_bool & inOperand2,
                                                     const class GGS_unifiedTypeMapEntry & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_propertyMap add_operation (const GGS_propertyMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_AccessControl constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  class GGS_unifiedTypeMapEntry constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessControlForKey (class GGS_AccessControl constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsConstantForKey (class GGS_bool constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_AccessControl & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  class GGS_unifiedTypeMapEntry & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_AccessControl getter_mAccessControlForKey (const class GGS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsConstantForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mPropertyTypeForKey (const class GGS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_propertyMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertyMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_propertyMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_propertyMap ;
 
} ; // End of GGS_propertyMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertyMap : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyMap (const GGS_propertyMap & inEnumeratedObject,
                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_AccessControl current_mAccessControl (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsConstant (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mPropertyType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap ;

//--------------------------------------------------------------------------------------------------
//   enum AccessControl
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_AccessControl (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_publicAccess,
    enum_protectedAccess,
    enum_protectedSetAccess,
    enum_privateAccess,
    enum_privateSetAccess,
    enum_fileprivateAccess,
    enum_fileprivateSetAccess
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_protectedAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_protectedSetAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_privateAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_privateSetAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fileprivateAccess (class GGS_location & out_declarationLocation) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fileprivateSetAccess (class GGS_location & out_declarationLocation) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AccessControl class_func_fileprivateAccess (const class GGS_location & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_fileprivateSetAccess (const class GGS_location & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_privateAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_privateSetAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_protectedAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_protectedSetAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_publicAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractFileprivateAccess (class GGS_location & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFileprivateSetAccess (class GGS_location & outArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractPrivateAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractPrivateSetAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractProtectedAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractProtectedSetAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_fileprivateAccess_3F_ getter_getFileprivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_fileprivateSetAccess_3F_ getter_getFileprivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_privateAccess_3F_ getter_getPrivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_privateSetAccess_3F_ getter_getPrivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_protectedAccess_3F_ getter_getProtectedAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_protectedSetAccess_3F_ getter_getProtectedSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFileprivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFileprivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isProtectedAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isProtectedSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPublicAccess (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyMap : public cMapElement {
//--- Map attributes
  public: GGS_AccessControl mProperty_mAccessControl ;
  public: GGS_bool mProperty_mIsConstant ;
  public: GGS_unifiedTypeMapEntry mProperty_mPropertyType ;

//--- Constructors
  public: cMapElement_propertyMap (const GGS_propertyMap_2E_element & inValue
                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_propertyMap (const GGS_lstring & inKey,
                                   const GGS_AccessControl & in_mAccessControl,
                                   const GGS_bool & in_mIsConstant,
                                   const GGS_unifiedTypeMapEntry & in_mPropertyType
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_propertyMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_AccessControl mProperty_mAccessControl ;
  public: inline GGS_AccessControl readProperty_mAccessControl (void) const {
    return mProperty_mAccessControl ;
  }

  public: GGS_bool mProperty_mIsConstant ;
  public: inline GGS_bool readProperty_mIsConstant (void) const {
    return mProperty_mIsConstant ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mPropertyType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mPropertyType (void) const {
    return mProperty_mPropertyType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAccessControl (const GGS_AccessControl & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessControl = inValue ;
  }

  public: inline void setter_setMIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConstant = inValue ;
  }

  public: inline void setter_setMPropertyType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_propertyMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_AccessControl & in_mAccessControl,
                                      const GGS_bool & in_mIsConstant,
                                      const GGS_unifiedTypeMapEntry & in_mPropertyType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_AccessControl & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMap_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_AccessControl & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertyMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: propertyMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_propertyMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyMap_2E_element_3F_ (const GGS_propertyMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_propertyMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertyMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classFunctionMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_classFunctionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GGS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mReturnedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mReturnedType (void) const {
    return mProperty_mReturnedType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classFunctionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMReturnedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_classFunctionMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classFunctionMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_functionSignature & in_mArgumentTypeList,
                                           const GGS_bool & in_mHasCompilerArgument,
                                           const GGS_unifiedTypeMapEntry & in_mReturnedType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classFunctionMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_functionSignature & inOperand1,
                                                                       const class GGS_bool & inOperand2,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classFunctionMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classFunctionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_functionSignature & inOperand1,
                                                                       const class GGS_bool & inOperand2,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_classFunctionMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classFunctionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: classFunctionMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_classFunctionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classFunctionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classFunctionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classFunctionMap_2E_element_3F_ (const GGS_classFunctionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classFunctionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classFunctionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_classFunctionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_classFunctionMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getterMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_getterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_methodKind mProperty_mKind ;
  public: inline GGS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GGS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

  public: GGS_location mProperty_mDeclarationLocation ;
  public: inline GGS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mReturnedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mReturnedType (void) const {
    return mProperty_mReturnedType ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GGS_string mProperty_mGetterNameThatObsoletesInvokationName ;
  public: inline GGS_string readProperty_mGetterNameThatObsoletesInvokationName (void) const {
    return mProperty_mGetterNameThatObsoletesInvokationName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_getterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GGS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMReturnedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMGetterNameThatObsoletesInvokationName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterNameThatObsoletesInvokationName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_getterMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_getterMap_2E_element (const GGS_lstring & in_lkey,
                                    const GGS_methodKind & in_mKind,
                                    const GGS_functionSignature & in_mArgumentTypeList,
                                    const GGS_location & in_mDeclarationLocation,
                                    const GGS_bool & in_mHasCompilerArgument,
                                    const GGS_unifiedTypeMapEntry & in_mReturnedType,
                                    const GGS_methodQualifier & in_mQualifier,
                                    const GGS_string & in_mGetterNameThatObsoletesInvokationName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getterMap_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_methodKind & inOperand1,
                                                                                const class GGS_functionSignature & inOperand2,
                                                                                const class GGS_location & inOperand3,
                                                                                const class GGS_bool & inOperand4,
                                                                                const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                const class GGS_methodQualifier & inOperand6,
                                                                                const class GGS_string & inOperand7,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getterMap_2E_element extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getterMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_methodKind & inOperand1,
                                                                const class GGS_functionSignature & inOperand2,
                                                                const class GGS_location & inOperand3,
                                                                const class GGS_bool & inOperand4,
                                                                const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                const class GGS_methodQualifier & inOperand6,
                                                                const class GGS_string & inOperand7,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_getterMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: getterMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_getterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_getterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_getterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_getterMap_2E_element_3F_ (const GGS_getterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_getterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_getterMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_getterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_getterMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setterMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_setterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_methodKind mProperty_mKind ;
  public: inline GGS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_formalParameterSignature mProperty_mParameterList ;
  public: inline GGS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GGS_string mProperty_mErrorMessage ;
  public: inline GGS_string readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_setterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GGS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_setterMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_setterMap_2E_element (const GGS_lstring & in_lkey,
                                    const GGS_methodKind & in_mKind,
                                    const GGS_formalParameterSignature & in_mParameterList,
                                    const GGS_bool & in_mHasCompilerArgument,
                                    const GGS_methodQualifier & in_mQualifier,
                                    const GGS_string & in_mErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_setterMap_2E_element init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_methodKind & inOperand1,
                                                                        const class GGS_formalParameterSignature & inOperand2,
                                                                        const class GGS_bool & inOperand3,
                                                                        const class GGS_methodQualifier & inOperand4,
                                                                        const class GGS_string & inOperand5,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_setterMap_2E_element extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_setterMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_methodKind & inOperand1,
                                                                const class GGS_formalParameterSignature & inOperand2,
                                                                const class GGS_bool & inOperand3,
                                                                const class GGS_methodQualifier & inOperand4,
                                                                const class GGS_string & inOperand5,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_setterMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: setterMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_setterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_setterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_setterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_setterMap_2E_element_3F_ (const GGS_setterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_setterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_setterMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_setterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_setterMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instanceMethodMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_instanceMethodMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_methodKind mProperty_mKind ;
  public: inline GGS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_formalParameterSignature mProperty_mParameterList ;
  public: inline GGS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_location mProperty_mDeclarationLocation ;
  public: inline GGS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GGS_string mProperty_mErrorMessage ;
  public: inline GGS_string readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_instanceMethodMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GGS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_instanceMethodMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_instanceMethodMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_methodKind & in_mKind,
                                            const GGS_formalParameterSignature & in_mParameterList,
                                            const GGS_location & in_mDeclarationLocation,
                                            const GGS_bool & in_mHasCompilerArgument,
                                            const GGS_methodQualifier & in_mQualifier,
                                            const GGS_string & in_mErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instanceMethodMap_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_methodKind & inOperand1,
                                                                                    const class GGS_formalParameterSignature & inOperand2,
                                                                                    const class GGS_location & inOperand3,
                                                                                    const class GGS_bool & inOperand4,
                                                                                    const class GGS_methodQualifier & inOperand5,
                                                                                    const class GGS_string & inOperand6,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instanceMethodMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instanceMethodMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_methodKind & inOperand1,
                                                                        const class GGS_formalParameterSignature & inOperand2,
                                                                        const class GGS_location & inOperand3,
                                                                        const class GGS_bool & inOperand4,
                                                                        const class GGS_methodQualifier & inOperand5,
                                                                        const class GGS_string & inOperand6,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_instanceMethodMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: instanceMethodMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_instanceMethodMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_instanceMethodMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_instanceMethodMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_instanceMethodMap_2E_element_3F_ (const GGS_instanceMethodMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_instanceMethodMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_instanceMethodMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_instanceMethodMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_instanceMethodMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classMethodMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_classMethodMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_formalParameterSignature mProperty_mParameterList ;
  public: inline GGS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classMethodMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_classMethodMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classMethodMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_formalParameterSignature & in_mParameterList,
                                         const GGS_bool & in_mHasCompilerArgument) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classMethodMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_formalParameterSignature & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classMethodMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classMethodMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_formalParameterSignature & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_classMethodMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: classMethodMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_classMethodMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classMethodMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classMethodMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classMethodMap_2E_element_3F_ (const GGS_classMethodMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classMethodMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classMethodMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_classMethodMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_classMethodMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @subscriptMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_subscriptMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_subscriptMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_subscriptMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_subscriptMap (void) ;

//--------------------------------- Handle copy
  public: GGS_subscriptMap (const GGS_subscriptMap & inSource) ;
  public: GGS_subscriptMap & operator = (const GGS_subscriptMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_subscriptMap init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_subscriptMap extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_subscriptMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_subscriptMap class_func_mapWithMapToOverride (const class GGS_subscriptMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_functionSignature & inOperand1,
                                                     const class GGS_unifiedTypeMapEntry & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_subscriptMap add_operation (const GGS_subscriptMap & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_functionSignature constinArgument1,
                                                  class GGS_unifiedTypeMapEntry constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setArgumentTypeListForKey (class GGS_functionSignature constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setValueTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_functionSignature & outArgument1,
                                                  class GGS_unifiedTypeMapEntry & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_functionSignature getter_argumentTypeListForKey (const class GGS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_subscriptMap getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_valueTypeForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_subscriptMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_subscriptMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GGS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_subscriptMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_subscriptMap ;
 
} ; // End of GGS_subscriptMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_subscriptMap : public cGenericAbstractEnumerator {
  public: cEnumerator_subscriptMap (const GGS_subscriptMap & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_functionSignature current_argumentTypeList (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_valueType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_subscriptMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@subscriptMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_subscriptMap : public cMapElement {
//--- Map attributes
  public: GGS_functionSignature mProperty_argumentTypeList ;
  public: GGS_unifiedTypeMapEntry mProperty_valueType ;

//--- Constructors
  public: cMapElement_subscriptMap (const GGS_subscriptMap_2E_element & inValue
                                    COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_subscriptMap (const GGS_lstring & inKey,
                                    const GGS_functionSignature & in_argumentTypeList,
                                    const GGS_unifiedTypeMapEntry & in_valueType
                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @subscriptMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_subscriptMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_functionSignature mProperty_argumentTypeList ;
  public: inline GGS_functionSignature readProperty_argumentTypeList (void) const {
    return mProperty_argumentTypeList ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_valueType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_valueType (void) const {
    return mProperty_valueType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_subscriptMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setArgumentTypeList (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_argumentTypeList = inValue ;
  }

  public: inline void setter_setValueType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_valueType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_subscriptMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_subscriptMap_2E_element (const GGS_lstring & in_lkey,
                                       const GGS_functionSignature & in_argumentTypeList,
                                       const GGS_unifiedTypeMapEntry & in_valueType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_subscriptMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_functionSignature & inOperand1,
                                                               const class GGS_unifiedTypeMapEntry & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_subscriptMap_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_subscriptMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                   const class GGS_functionSignature & inOperand1,
                                                                   const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_subscriptMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: subscriptMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_subscriptMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_subscriptMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_subscriptMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_subscriptMap_2E_element_3F_ (const GGS_subscriptMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_subscriptMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_subscriptMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_subscriptMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_subscriptMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDescriptorList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_enumerationDescriptorList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mEnumeratedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mEnumeratedType (void) const {
    return mProperty_mEnumeratedType ;
  }

  public: GGS_string mProperty_mEnumerationName ;
  public: inline GGS_string readProperty_mEnumerationName (void) const {
    return mProperty_mEnumerationName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumerationDescriptorList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumeratedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedType = inValue ;
  }

  public: inline void setter_setMEnumerationName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_enumerationDescriptorList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumerationDescriptorList_2E_element (const GGS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                    const GGS_string & in_mEnumerationName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationDescriptorList_2E_element init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationDescriptorList_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationDescriptorList_2E_element class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                const class GGS_string & inOperand1,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enumerationDescriptorList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDescriptorList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionSignature_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_functionSignature_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
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

  public: GGS_bool mProperty_isConstant ;
  public: inline GGS_bool readProperty_isConstant (void) const {
    return mProperty_isConstant ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_functionSignature_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConstant = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_functionSignature_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_functionSignature_2E_element (const GGS_lstring & in_mFormalSelector,
                                            const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                            const GGS_string & in_mFormalArgumentName,
                                            const GGS_bool & in_isConstant) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionSignature_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        const class GGS_bool & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionSignature_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionSignature_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        const class GGS_bool & inOperand3,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_functionSignature_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionSignature_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum headerKind
//--------------------------------------------------------------------------------------------------

class GGS_headerKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_headerKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noHeader,
    enum_oneHeader,
    enum_twoHeaders
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
  public: static GGS_headerKind extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_headerKind class_func_noHeader (LOCATION_ARGS) ;

  public: static class GGS_headerKind class_func_oneHeader (LOCATION_ARGS) ;

  public: static class GGS_headerKind class_func_twoHeaders (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_headerKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoHeader (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOneHeader (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTwoHeaders (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_headerKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerKind ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKindEnum string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_typeKindEnum & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constantIndexMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constantIndexMap : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mIndex ;
  public: GGS_associatedValueDescriptorList mProperty_mAssociatedTypeList ;

//--- Constructors
  public: cMapElement_constantIndexMap (const GGS_constantIndexMap_2E_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_constantIndexMap (const GGS_lstring & inKey,
                                        const GGS_uint & in_mIndex,
                                        const GGS_associatedValueDescriptorList & in_mAssociatedTypeList
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeFeatures generateCppObjectComparison' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_generateCppObjectComparison (const class GGS_typeFeatures & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableAttributes boolset
//
//--------------------------------------------------------------------------------------------------

class GGS_localVariableAttributes : public AC_GALGAS_root {
//--------------------------------- Properties
  private: uint64_t mFlags ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GGS_localVariableAttributes (void) ;

//--------------------------------- Private constructor
  private: GGS_localVariableAttributes (const uint64_t inFlags) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVariableAttributes init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableAttributes extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableAttributes class_func_acceptInitializedStateAsFinalState (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_acceptReadStateAsFinalState (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_rejectDeclaredStateAsFinalState (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_rejectWriteInInitializedAndReadStates (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_suggestDeclareUnusedParameterAsUnused (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_warnsOnAnyAcces (LOCATION_ARGS) ;

//--------------------------------- &= operator (with expression)
  public: VIRTUAL_IN_DEBUG void andAssign_operation (const GGS_localVariableAttributes inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- |= operator (with expression)
  public: VIRTUAL_IN_DEBUG void orAssign_operation (const GGS_localVariableAttributes inOperand,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ^= operator (with expression)
  public: VIRTUAL_IN_DEBUG void xorAssign_operation (const GGS_localVariableAttributes inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GGS_localVariableAttributes inOperand,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_localVariableAttributes operator_and (const GGS_localVariableAttributes & inOperand
                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_localVariableAttributes operator_or (const GGS_localVariableAttributes & inOperand
                                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GGS_localVariableAttributes operator_xor (const GGS_localVariableAttributes & inOperand
                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GGS_localVariableAttributes operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GGS_localVariableAttributes substract_operation (const GGS_localVariableAttributes & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_contains (const class GGS_localVariableAttributes & constinOperand0
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_localVariableAttributes class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableAttributes ;

//--------------------------------------------------------------------------------------------------
//   enum localVarValuation
//--------------------------------------------------------------------------------------------------

class GGS_localVarValuation : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_localVarValuation (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_invalid,
    enum_declared,
    enum_initialized,
    enum_read,
    enum_mutated
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_declared (class GGS_bool & out_usedInSubscope) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVarValuation extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVarValuation class_func_declared (const class GGS_bool & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_initialized (LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_invalid (LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_mutated (LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_read (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVarValuation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractDeclared (class GGS_bool & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_localVarValuation_2E_declared_3F_ getter_getDeclared (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDeclared (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInitialized (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInvalid (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMutated (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRead (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_localVarValuation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVarValuation_2E_declared struct
//
//--------------------------------------------------------------------------------------------------

class GGS_localVarValuation_2E_declared : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_usedInSubscope ;
  public: inline GGS_bool readProperty_usedInSubscope (void) const {
    return mProperty_usedInSubscope ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localVarValuation_2E_declared (void) ;

//--------------------------------- Property setters
  public: inline void setter_setUsedInSubscope (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_usedInSubscope = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_localVarValuation_2E_declared (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localVarValuation_2E_declared (const GGS_bool & in_usedInSubscope) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVarValuation_2E_declared init_21_ (const class GGS_bool & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVarValuation_2E_declared extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVarValuation_2E_declared class_func_new (const class GGS_bool & inOperand0,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVarValuation_2E_declared & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_localVarValuation_2E_declared class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: localVarValuation.declared? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_localVarValuation_2E_declared_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_localVarValuation_2E_declared mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_localVarValuation_2E_declared_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_localVarValuation_2E_declared_3F_ (const GGS_localVarValuation_2E_declared & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_localVarValuation_2E_declared_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_localVarValuation_2E_declared unwrappedValue (void) const {
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
  public: static GGS_localVarValuation_2E_declared_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVarValuation_2E_declared_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_localVarValuation_2E_declared_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @scopeLocalVarMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_scopeLocalVarMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_scopeLocalVarMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_scopeLocalVarMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_scopeLocalVarMap (void) ;

//--------------------------------- Handle copy
  public: GGS_scopeLocalVarMap (const GGS_scopeLocalVarMap & inSource) ;
  public: GGS_scopeLocalVarMap & operator = (const GGS_scopeLocalVarMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_scopeLocalVarMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_scopeLocalVarMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_scopeLocalVarMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_scopeLocalVarMap class_func_mapWithMapToOverride (const class GGS_scopeLocalVarMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_unifiedTypeMapEntry & inOperand1,
                                                     const class GGS_string & inOperand2,
                                                     const class GGS_string & inOperand3,
                                                     const class GGS_localVariableAttributes & inOperand4,
                                                     const class GGS_localVarValuation & inOperand5,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_scopeLocalVarMap add_operation (const GGS_scopeLocalVarMap & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_unifiedTypeMapEntry constinArgument1,
                                                  class GGS_string constinArgument2,
                                                  class GGS_string constinArgument3,
                                                  class GGS_localVariableAttributes constinArgument4,
                                                  class GGS_localVarValuation constinArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_unifiedTypeMapEntry & outArgument1,
                                                  class GGS_string & outArgument2,
                                                  class GGS_string & outArgument3,
                                                  class GGS_localVariableAttributes & outArgument4,
                                                  class GGS_localVarValuation & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributesForKey (class GGS_localVariableAttributes constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameForKey (class GGS_string constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameForCheckingFormalParameterUsingForKey (class GGS_string constinArgument0,
                                                                                      class GGS_string constinArgument1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateForKey (class GGS_localVarValuation constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_unifiedTypeMapEntry & outArgument1,
                                                  class GGS_string & outArgument2,
                                                  class GGS_string & outArgument3,
                                                  class GGS_localVariableAttributes & outArgument4,
                                                  class GGS_localVarValuation & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_localVariableAttributes getter_mAttributesForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCppNameForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mNameForCheckingFormalParameterUsingForKey (const class GGS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localVarValuation getter_mStateForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mTypeForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_scopeLocalVarMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_scopeLocalVarMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_scopeLocalVarMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GGS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_scopeLocalVarMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_scopeLocalVarMap ;
 
} ; // End of GGS_scopeLocalVarMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_scopeLocalVarMap : public cGenericAbstractEnumerator {
  public: cEnumerator_scopeLocalVarMap (const GGS_scopeLocalVarMap & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
  public: class GGS_string current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;
  public: class GGS_localVariableAttributes current_mAttributes (LOCATION_ARGS) const ;
  public: class GGS_localVarValuation current_mState (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_scopeLocalVarMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeLocalVarMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@scopeLocalVarMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_scopeLocalVarMap : public cMapElement {
//--- Map attributes
  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: GGS_string mProperty_mCppName ;
  public: GGS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GGS_localVariableAttributes mProperty_mAttributes ;
  public: GGS_localVarValuation mProperty_mState ;

//--- Constructors
  public: cMapElement_scopeLocalVarMap (const GGS_scopeLocalVarMap_2E_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_scopeLocalVarMap (const GGS_lstring & inKey,
                                        const GGS_unifiedTypeMapEntry & in_mType,
                                        const GGS_string & in_mCppName,
                                        const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                        const GGS_localVariableAttributes & in_mAttributes,
                                        const GGS_localVarValuation & in_mState
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @scopeLocalVarMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_scopeLocalVarMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_string mProperty_mCppName ;
  public: inline GGS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

  public: GGS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: inline GGS_string readProperty_mNameForCheckingFormalParameterUsing (void) const {
    return mProperty_mNameForCheckingFormalParameterUsing ;
  }

  public: GGS_localVariableAttributes mProperty_mAttributes ;
  public: inline GGS_localVariableAttributes readProperty_mAttributes (void) const {
    return mProperty_mAttributes ;
  }

  public: GGS_localVarValuation mProperty_mState ;
  public: inline GGS_localVarValuation readProperty_mState (void) const {
    return mProperty_mState ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_scopeLocalVarMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

  public: inline void setter_setMNameForCheckingFormalParameterUsing (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNameForCheckingFormalParameterUsing = inValue ;
  }

  public: inline void setter_setMAttributes (const GGS_localVariableAttributes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributes = inValue ;
  }

  public: inline void setter_setMState (const GGS_localVarValuation & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mState = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_scopeLocalVarMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_scopeLocalVarMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_unifiedTypeMapEntry & in_mType,
                                           const GGS_string & in_mCppName,
                                           const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                           const GGS_localVariableAttributes & in_mAttributes,
                                           const GGS_localVarValuation & in_mState) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_scopeLocalVarMap_2E_element init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS_string & inOperand3,
                                                                               const class GGS_localVariableAttributes & inOperand4,
                                                                               const class GGS_localVarValuation & inOperand5,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_scopeLocalVarMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_scopeLocalVarMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                       const class GGS_string & inOperand2,
                                                                       const class GGS_string & inOperand3,
                                                                       const class GGS_localVariableAttributes & inOperand4,
                                                                       const class GGS_localVarValuation & inOperand5,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_scopeLocalVarMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: scopeLocalVarMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_scopeLocalVarMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_scopeLocalVarMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_scopeLocalVarMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_scopeLocalVarMap_2E_element_3F_ (const GGS_scopeLocalVarMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_scopeLocalVarMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_scopeLocalVarMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_scopeLocalVarMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_scopeLocalVarMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVarMapListForLLVM list
//
//--------------------------------------------------------------------------------------------------

class GGS_localVarMapListForLLVM : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_localVarMapListForLLVM (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_localVarMapListForLLVM (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_scopeLocalVarMap & in_mMap
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVarMapListForLLVM init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVarMapListForLLVM extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVarMapListForLLVM class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_localVarMapListForLLVM class_func_listWithValue (const class GGS_scopeLocalVarMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_localVarMapListForLLVM inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_scopeLocalVarMap & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_localVarMapListForLLVM add_operation (const GGS_localVarMapListForLLVM & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_scopeLocalVarMap constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_scopeLocalVarMap constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_scopeLocalVarMap & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_scopeLocalVarMap & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_scopeLocalVarMap & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapAtIndex (class GGS_scopeLocalVarMap constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_scopeLocalVarMap & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_scopeLocalVarMap & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_scopeLocalVarMap getter_mMapAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localVarMapListForLLVM getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localVarMapListForLLVM getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localVarMapListForLLVM getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_localVarMapListForLLVM_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_localVarMapListForLLVM ;
 
} ; // End of GGS_localVarMapListForLLVM class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_localVarMapListForLLVM : public cGenericAbstractEnumerator {
  public: cEnumerator_localVarMapListForLLVM (const GGS_localVarMapListForLLVM & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_scopeLocalVarMap current_mMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_localVarMapListForLLVM_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVarMapListForLLVM_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_localVarMapListForLLVM_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_scopeLocalVarMap mProperty_mMap ;
  public: inline GGS_scopeLocalVarMap readProperty_mMap (void) const {
    return mProperty_mMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localVarMapListForLLVM_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMap (const GGS_scopeLocalVarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_localVarMapListForLLVM_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localVarMapListForLLVM_2E_element (const GGS_scopeLocalVarMap & in_mMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVarMapListForLLVM_2E_element init_21_ (const class GGS_scopeLocalVarMap & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVarMapListForLLVM_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVarMapListForLLVM_2E_element class_func_new (const class GGS_scopeLocalVarMap & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_localVarMapListForLLVM_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum overrideKind
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_overrideKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_selectOverrideFirstBranch,
    enum_selectOverrideNextBranches,
    enum_repeatOverride
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selectOverrideFirstBranch (class GGS_currentVarManager & out_savedManager) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selectOverrideNextBranches (class GGS_currentVarManager & out_savedManager,
                                                                                   class GGS_currentVarManager & out_referenceManager) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overrideKind extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overrideKind class_func_repeatOverride (LOCATION_ARGS) ;

  public: static class GGS_overrideKind class_func_selectOverrideFirstBranch (const class GGS_currentVarManager & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_overrideKind class_func_selectOverrideNextBranches (const class GGS_currentVarManager & inOperand0,
                                                                               const class GGS_currentVarManager & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractSelectOverrideFirstBranch (class GGS_currentVarManager & outArgument0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelectOverrideNextBranches (class GGS_currentVarManager & outArgument0,
                                                                          class GGS_currentVarManager & outArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ getter_getSelectOverrideFirstBranch (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_overrideKind_2E_selectOverrideNextBranches_3F_ getter_getSelectOverrideNextBranches (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRepeatOverride (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelectOverrideFirstBranch (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelectOverrideNextBranches (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overrideKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @currentVarManager struct
//
//--------------------------------------------------------------------------------------------------

class GGS_currentVarManager : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_scopeLocalVarMap mProperty_mLocalVarMap ;
  public: inline GGS_scopeLocalVarMap readProperty_mLocalVarMap (void) const {
    return mProperty_mLocalVarMap ;
  }

  public: GGS_localVarMapListForLLVM mProperty_mSubMaps ;
  public: inline GGS_localVarMapListForLLVM readProperty_mSubMaps (void) const {
    return mProperty_mSubMaps ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_currentVarManager (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLocalVarMap (const GGS_scopeLocalVarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocalVarMap = inValue ;
  }

  public: inline void setter_setMSubMaps (const GGS_localVarMapListForLLVM & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSubMaps = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_currentVarManager (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_currentVarManager (const GGS_scopeLocalVarMap & in_mLocalVarMap,
                                 const GGS_localVarMapListForLLVM & in_mSubMaps) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_currentVarManager init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_currentVarManager extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_currentVarManager class_func_new (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_currentVarManager class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_currentVarManager ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overrideKind_2E_selectOverrideFirstBranch struct
//
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideFirstBranch : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_currentVarManager mProperty_savedManager ;
  public: inline GGS_currentVarManager readProperty_savedManager (void) const {
    return mProperty_savedManager ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_overrideKind_2E_selectOverrideFirstBranch (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSavedManager (const GGS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_savedManager = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_overrideKind_2E_selectOverrideFirstBranch (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_overrideKind_2E_selectOverrideFirstBranch (const GGS_currentVarManager & in_savedManager) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overrideKind_2E_selectOverrideFirstBranch init_21_ (const class GGS_currentVarManager & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overrideKind_2E_selectOverrideFirstBranch extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overrideKind_2E_selectOverrideFirstBranch class_func_new (const class GGS_currentVarManager & inOperand0,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overrideKind_2E_selectOverrideFirstBranch class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: overrideKind.selectOverrideFirstBranch? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_overrideKind_2E_selectOverrideFirstBranch mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_overrideKind_2E_selectOverrideFirstBranch unwrappedValue (void) const {
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
  public: static GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overrideKind_2E_selectOverrideNextBranches struct
//
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideNextBranches : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_currentVarManager mProperty_savedManager ;
  public: inline GGS_currentVarManager readProperty_savedManager (void) const {
    return mProperty_savedManager ;
  }

  public: GGS_currentVarManager mProperty_referenceManager ;
  public: inline GGS_currentVarManager readProperty_referenceManager (void) const {
    return mProperty_referenceManager ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_overrideKind_2E_selectOverrideNextBranches (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSavedManager (const GGS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_savedManager = inValue ;
  }

  public: inline void setter_setReferenceManager (const GGS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_referenceManager = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_overrideKind_2E_selectOverrideNextBranches (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_overrideKind_2E_selectOverrideNextBranches (const GGS_currentVarManager & in_savedManager,
                                                          const GGS_currentVarManager & in_referenceManager) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overrideKind_2E_selectOverrideNextBranches init_21__21_ (const class GGS_currentVarManager & inOperand0,
                                                                              const class GGS_currentVarManager & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overrideKind_2E_selectOverrideNextBranches extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overrideKind_2E_selectOverrideNextBranches class_func_new (const class GGS_currentVarManager & inOperand0,
                                                                                      const class GGS_currentVarManager & inOperand1,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overrideKind_2E_selectOverrideNextBranches class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: overrideKind.selectOverrideNextBranches? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideNextBranches_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_overrideKind_2E_selectOverrideNextBranches mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_overrideKind_2E_selectOverrideNextBranches_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_overrideKind_2E_selectOverrideNextBranches unwrappedValue (void) const {
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
  public: static GGS_overrideKind_2E_selectOverrideNextBranches_3F_ extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_overrideKind_2E_selectOverrideNextBranches_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @openedOverrideList list
//
//--------------------------------------------------------------------------------------------------

class GGS_openedOverrideList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_openedOverrideList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_openedOverrideList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_overrideKind & in_mOverrideKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_openedOverrideList init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_openedOverrideList extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_openedOverrideList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_openedOverrideList class_func_listWithValue (const class GGS_overrideKind & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_openedOverrideList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_overrideKind & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_openedOverrideList add_operation (const GGS_openedOverrideList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_overrideKind constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_overrideKind constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_overrideKind & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_overrideKind & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_overrideKind & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOverrideKindAtIndex (class GGS_overrideKind constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_overrideKind & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_overrideKind & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_overrideKind getter_mOverrideKindAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_openedOverrideList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_openedOverrideList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_openedOverrideList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_openedOverrideList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_openedOverrideList ;
 
} ; // End of GGS_openedOverrideList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_openedOverrideList : public cGenericAbstractEnumerator {
  public: cEnumerator_openedOverrideList (const GGS_openedOverrideList & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_overrideKind current_mOverrideKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_openedOverrideList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedOverrideList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @openedOverrideList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_openedOverrideList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_overrideKind mProperty_mOverrideKind ;
  public: inline GGS_overrideKind readProperty_mOverrideKind (void) const {
    return mProperty_mOverrideKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_openedOverrideList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOverrideKind (const GGS_overrideKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOverrideKind = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_openedOverrideList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_openedOverrideList_2E_element (const GGS_overrideKind & in_mOverrideKind) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_openedOverrideList_2E_element init_21_ (const class GGS_overrideKind & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_openedOverrideList_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_openedOverrideList_2E_element class_func_new (const class GGS_overrideKind & inOperand0,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_openedOverrideList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedOverrideList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const class GGS_currentVarManager inObject,
                                                        const class GGS_location constin_inErrorLocation,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GGS_currentVarManager & ioObject,
                                    const class GGS_lstring constin_inVarName,
                                    class GGS_unifiedTypeMapEntry & out_outType,
                                    class GGS_string & out_outCppName,
                                    class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GGS_localVarMapListForLLVM & ioObject,
                                    const class GGS_lstring constin_inVarName,
                                    const class GGS_uint constin_inIndex,
                                    class GGS_unifiedTypeMapEntry & out_outType,
                                    class GGS_string & out_outCppName,
                                    class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (class GGS_currentVarManager & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation checkFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalState (const class GGS_localVarValuation inObject,
                                      const class GGS_lstring constin_inVarName,
                                      const class GGS_localVariableAttributes constin_inAttributes,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (class GGS_currentVarManager & ioObject,
                                           const class GGS_lstring constin_inVarName,
                                           class GGS_unifiedTypeMapEntry & out_outType,
                                           class GGS_string & out_outCppName,
                                           class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM writeAccessInSubMap'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeAccessInSubMap (class GGS_localVarMapListForLLVM & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          const class GGS_uint constin_inIndex,
                                          class GGS_unifiedTypeMapEntry & out_outType,
                                          class GGS_string & out_outCppName,
                                          class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarValuation writeTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeTransition (class GGS_localVarValuation & ioObject,
                                      const class GGS_lstring constin_inVarName,
                                      const class GGS_bool constin_inOverridenMap,
                                      const class GGS_localVariableAttributes constin_inAttributes,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (class GGS_currentVarManager & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          class GGS_unifiedTypeMapEntry & out_outType,
                                          class GGS_string & out_outCppName,
                                          class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (class GGS_localVarMapListForLLVM & ioObject,
                                 const class GGS_lstring constin_inVarName,
                                 const class GGS_uint constin_inIndex,
                                 class GGS_unifiedTypeMapEntry & out_outType,
                                 class GGS_string & out_outCppName,
                                 class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarValuation readTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readTransition (class GGS_localVarValuation & ioObject,
                                     const class GGS_lstring constin_inVarName,
                                     const class GGS_localVariableAttributes constin_inAttributes,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (class GGS_currentVarManager & ioObject,
                                               const class GGS_lstring constin_inVarName,
                                               class GGS_unifiedTypeMapEntry & out_outType,
                                               class GGS_string & out_outCppName,
                                               class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM readWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteAccess (class GGS_localVarMapListForLLVM & ioObject,
                                      const class GGS_lstring constin_inVarName,
                                      const class GGS_uint constin_inIndex,
                                      class GGS_unifiedTypeMapEntry & out_outType,
                                      class GGS_string & out_outCppName,
                                      class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarValuation readWriteTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteTransition (class GGS_localVarValuation & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          const class GGS_bool constin_inOverridenMap,
                                          const class GGS_localVariableAttributes constin_inAttributes,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager openScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openScope (class GGS_currentVarManager & ioObject,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager closeScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeScope (class GGS_currentVarManager & ioObject,
                                 const class GGS_location constin_inErrorLocation,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@scopeLocalVarMap checkFinalStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalStates (const class GGS_scopeLocalVarMap inObject,
                                       const class GGS_location constin_inErrorLocation,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_currentVarManager & ioObject,
                                const class GGS_lstring constin_inVarName,
                                const class GGS_unifiedTypeMapEntry constin_inType,
                                const class GGS_string constin_inCppName,
                                const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                const class GGS_localVariableAttributes constin_inAttributes,
                                const class GGS_localVarValuation constin_inState,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const class GGS_currentVarManager inObject,
                                           const class GGS_location constin_inErrorLocation,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation combineValuationWith'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_combineValuationWith (const class GGS_localVarValuation inObject,
                                           const class GGS_localVarValuation constin_inOther,
                                           class GGS_localVarValuation & out_outResult,
                                           class GGS_string & io_ioErrorMessage,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@scopeLocalVarMap combineMapWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineMapWith (class GGS_scopeLocalVarMap & ioObject,
                                     const class GGS_scopeLocalVarMap constin_inOtherMap,
                                     class GGS_string & io_ioErrorMessage,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager combineManagerWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineManagerWith (class GGS_currentVarManager & ioObject,
                                         const class GGS_currentVarManager constin_inOtherManager,
                                         const class GGS_location constin_inErrorLocation,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_unifiedTypeMapElementClass mProperty_mElement ;
  public: inline GGS_unifiedTypeMapElementClass readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMElement (const GGS_unifiedTypeMapElementClass & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_unifiedTypeMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_unifiedTypeMapElementClass & in_mElement) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_unifiedTypeMapElementClass & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_unifiedTypeMapElementClass & inOperand1,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unifiedTypeMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: unifiedTypeMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unifiedTypeMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unifiedTypeMap_2E_element_3F_ (const GGS_unifiedTypeMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_unifiedTypeMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_unifiedTypeMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_unifiedTypeMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unifiedTypeMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (class GGS_unifiedTypeMap & ioObject,
                                const class GGS_lstring constin_inLKey,
                                class GGS_unifiedTypeMapEntry & out_outEntry,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GGS_unifiedTypeMap & ioObject,
                                          const class GGS_string constin_inKey,
                                          class GGS_unifiedTypeMapEntry & out_outEntry,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeMapEntryForLKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryForLKey (const class GGS_unifiedTypeMap & inObject,
                                                                   const class GGS_lstring & constinArgument0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeMapEntryOrNullForLKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryOrNullForLKey (const class GGS_unifiedTypeMap & inObject,
                                                                         const class GGS_lstring & constinArgument0,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (class GGS_unifiedTypeMap & ioObject,
                                 const class GGS_lstring constin_inTypeName,
                                 const class GGS_unifiedTypeDefinition constin_inTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeDefinition struct
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_bool mProperty_isPredefined ;
  public: inline GGS_bool readProperty_isPredefined (void) const {
    return mProperty_isPredefined ;
  }

  public: GGS_bool mProperty_isConcrete ;
  public: inline GGS_bool readProperty_isConcrete (void) const {
    return mProperty_isConcrete ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_superType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_superType (void) const {
    return mProperty_superType ;
  }

  public: GGS_typeKindEnum mProperty_typeKind ;
  public: inline GGS_typeKindEnum readProperty_typeKind (void) const {
    return mProperty_typeKind ;
  }

  public: GGS_bool mProperty_supportCollectionValue ;
  public: inline GGS_bool readProperty_supportCollectionValue (void) const {
    return mProperty_supportCollectionValue ;
  }

  public: GGS_typedPropertyList mProperty_allTypedPropertyList ;
  public: inline GGS_typedPropertyList readProperty_allTypedPropertyList (void) const {
    return mProperty_allTypedPropertyList ;
  }

  public: GGS_propertyMap mProperty_propertyMap ;
  public: inline GGS_propertyMap readProperty_propertyMap (void) const {
    return mProperty_propertyMap ;
  }

  public: GGS_typedPropertyList mProperty_currentTypedPropertyList ;
  public: inline GGS_typedPropertyList readProperty_currentTypedPropertyList (void) const {
    return mProperty_currentTypedPropertyList ;
  }

  public: GGS_initializerMap mProperty_initializerMap ;
  public: inline GGS_initializerMap readProperty_initializerMap (void) const {
    return mProperty_initializerMap ;
  }

  public: GGS_classFunctionMap mProperty_classFunctionMap ;
  public: inline GGS_classFunctionMap readProperty_classFunctionMap (void) const {
    return mProperty_classFunctionMap ;
  }

  public: GGS_getterMap mProperty_getterMap ;
  public: inline GGS_getterMap readProperty_getterMap (void) const {
    return mProperty_getterMap ;
  }

  public: GGS_setterMap mProperty_setterMap ;
  public: inline GGS_setterMap readProperty_setterMap (void) const {
    return mProperty_setterMap ;
  }

  public: GGS_instanceMethodMap mProperty_instanceMethodMap ;
  public: inline GGS_instanceMethodMap readProperty_instanceMethodMap (void) const {
    return mProperty_instanceMethodMap ;
  }

  public: GGS_classMethodMap mProperty_classMethodMap ;
  public: inline GGS_classMethodMap readProperty_classMethodMap (void) const {
    return mProperty_classMethodMap ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_unwrappedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_unwrappedType (void) const {
    return mProperty_unwrappedType ;
  }

  public: GGS_subscriptMap mProperty_readSubscriptMap ;
  public: inline GGS_subscriptMap readProperty_readSubscriptMap (void) const {
    return mProperty_readSubscriptMap ;
  }

  public: GGS_enumerationDescriptorList mProperty_enumerationDescriptorList ;
  public: inline GGS_enumerationDescriptorList readProperty_enumerationDescriptorList (void) const {
    return mProperty_enumerationDescriptorList ;
  }

  public: GGS_typeFeatures mProperty_features ;
  public: inline GGS_typeFeatures readProperty_features (void) const {
    return mProperty_features ;
  }

  public: GGS_functionSignature mProperty_addAssignOperatorArguments ;
  public: inline GGS_functionSignature readProperty_addAssignOperatorArguments (void) const {
    return mProperty_addAssignOperatorArguments ;
  }

  public: GGS_mapSearchMethodListAST mProperty_mapSearchMethodList ;
  public: inline GGS_mapSearchMethodListAST readProperty_mapSearchMethodList (void) const {
    return mProperty_mapSearchMethodList ;
  }

  public: GGS_bool mProperty_generateHeaderInSeparateFile ;
  public: inline GGS_bool readProperty_generateHeaderInSeparateFile (void) const {
    return mProperty_generateHeaderInSeparateFile ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_typeForEnumeratedElement ;
  public: inline GGS_unifiedTypeMapEntry readProperty_typeForEnumeratedElement (void) const {
    return mProperty_typeForEnumeratedElement ;
  }

  public: GGS_string mProperty_headerFileName ;
  public: inline GGS_string readProperty_headerFileName (void) const {
    return mProperty_headerFileName ;
  }

  public: GGS_headerKind mProperty_headerKind ;
  public: inline GGS_headerKind readProperty_headerKind (void) const {
    return mProperty_headerKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeDefinition (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setIsPredefined (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isPredefined = inValue ;
  }

  public: inline void setter_setIsConcrete (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConcrete = inValue ;
  }

  public: inline void setter_setSuperType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superType = inValue ;
  }

  public: inline void setter_setTypeKind (const GGS_typeKindEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeKind = inValue ;
  }

  public: inline void setter_setSupportCollectionValue (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_supportCollectionValue = inValue ;
  }

  public: inline void setter_setAllTypedPropertyList (const GGS_typedPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_allTypedPropertyList = inValue ;
  }

  public: inline void setter_setPropertyMap (const GGS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyMap = inValue ;
  }

  public: inline void setter_setCurrentTypedPropertyList (const GGS_typedPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_currentTypedPropertyList = inValue ;
  }

  public: inline void setter_setInitializerMap (const GGS_initializerMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initializerMap = inValue ;
  }

  public: inline void setter_setClassFunctionMap (const GGS_classFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_classFunctionMap = inValue ;
  }

  public: inline void setter_setGetterMap (const GGS_getterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_getterMap = inValue ;
  }

  public: inline void setter_setSetterMap (const GGS_setterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_setterMap = inValue ;
  }

  public: inline void setter_setInstanceMethodMap (const GGS_instanceMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instanceMethodMap = inValue ;
  }

  public: inline void setter_setClassMethodMap (const GGS_classMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_classMethodMap = inValue ;
  }

  public: inline void setter_setUnwrappedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_unwrappedType = inValue ;
  }

  public: inline void setter_setReadSubscriptMap (const GGS_subscriptMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_readSubscriptMap = inValue ;
  }

  public: inline void setter_setEnumerationDescriptorList (const GGS_enumerationDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumerationDescriptorList = inValue ;
  }

  public: inline void setter_setFeatures (const GGS_typeFeatures & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_features = inValue ;
  }

  public: inline void setter_setAddAssignOperatorArguments (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_addAssignOperatorArguments = inValue ;
  }

  public: inline void setter_setMapSearchMethodList (const GGS_mapSearchMethodListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mapSearchMethodList = inValue ;
  }

  public: inline void setter_setGenerateHeaderInSeparateFile (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_generateHeaderInSeparateFile = inValue ;
  }

  public: inline void setter_setTypeForEnumeratedElement (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeForEnumeratedElement = inValue ;
  }

  public: inline void setter_setHeaderFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_headerFileName = inValue ;
  }

  public: inline void setter_setHeaderKind (const GGS_headerKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_headerKind = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_unifiedTypeDefinition (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeDefinition (const GGS_lstring & in_typeName,
                                     const GGS_bool & in_isPredefined,
                                     const GGS_bool & in_isConcrete,
                                     const GGS_unifiedTypeMapEntry & in_superType,
                                     const GGS_typeKindEnum & in_typeKind,
                                     const GGS_bool & in_supportCollectionValue,
                                     const GGS_typedPropertyList & in_allTypedPropertyList,
                                     const GGS_propertyMap & in_propertyMap,
                                     const GGS_typedPropertyList & in_currentTypedPropertyList,
                                     const GGS_initializerMap & in_initializerMap,
                                     const GGS_classFunctionMap & in_classFunctionMap,
                                     const GGS_getterMap & in_getterMap,
                                     const GGS_setterMap & in_setterMap,
                                     const GGS_instanceMethodMap & in_instanceMethodMap,
                                     const GGS_classMethodMap & in_classMethodMap,
                                     const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                     const GGS_subscriptMap & in_readSubscriptMap,
                                     const GGS_enumerationDescriptorList & in_enumerationDescriptorList,
                                     const GGS_typeFeatures & in_features,
                                     const GGS_functionSignature & in_addAssignOperatorArguments,
                                     const GGS_mapSearchMethodListAST & in_mapSearchMethodList,
                                     const GGS_bool & in_generateHeaderInSeparateFile,
                                     const GGS_unifiedTypeMapEntry & in_typeForEnumeratedElement,
                                     const GGS_string & in_headerFileName,
                                     const GGS_headerKind & in_headerKind) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeDefinition init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (const class GGS_lstring & inOperand0,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_bool & inOperand1,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_bool & inOperand2,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_typeKindEnum & inOperand4,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_bool & inOperand5,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_typedPropertyList & inOperand6,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_propertyMap & inOperand7,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_typedPropertyList & inOperand8,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_initializerMap & inOperand9,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_classFunctionMap & inOperand10,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_getterMap & inOperand11,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_setterMap & inOperand12,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_instanceMethodMap & inOperand13,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_classMethodMap & inOperand14,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_unifiedTypeMapEntry & inOperand15,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_subscriptMap & inOperand16,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_enumerationDescriptorList & inOperand17,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_typeFeatures & inOperand18,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_functionSignature & inOperand19,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_mapSearchMethodListAST & inOperand20,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_bool & inOperand21,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_unifiedTypeMapEntry & inOperand22,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_string & inOperand23,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       const class GGS_headerKind & inOperand24,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeDefinition extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeDefinition class_func_new (const class GGS_lstring & inOperand0,
                                                                 const class GGS_bool & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                 const class GGS_typeKindEnum & inOperand4,
                                                                 const class GGS_bool & inOperand5,
                                                                 const class GGS_typedPropertyList & inOperand6,
                                                                 const class GGS_propertyMap & inOperand7,
                                                                 const class GGS_typedPropertyList & inOperand8,
                                                                 const class GGS_initializerMap & inOperand9,
                                                                 const class GGS_classFunctionMap & inOperand10,
                                                                 const class GGS_getterMap & inOperand11,
                                                                 const class GGS_setterMap & inOperand12,
                                                                 const class GGS_instanceMethodMap & inOperand13,
                                                                 const class GGS_classMethodMap & inOperand14,
                                                                 const class GGS_unifiedTypeMapEntry & inOperand15,
                                                                 const class GGS_subscriptMap & inOperand16,
                                                                 const class GGS_enumerationDescriptorList & inOperand17,
                                                                 const class GGS_typeFeatures & inOperand18,
                                                                 const class GGS_functionSignature & inOperand19,
                                                                 const class GGS_mapSearchMethodListAST & inOperand20,
                                                                 const class GGS_bool & inOperand21,
                                                                 const class GGS_unifiedTypeMapEntry & inOperand22,
                                                                 const class GGS_string & inOperand23,
                                                                 const class GGS_headerKind & inOperand24,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unifiedTypeDefinition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeDefinition ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeDefinition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition extensionGetter_typeDefinition (const class GGS_unifiedTypeMap & inObject,
                                                                const class GGS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeDefinition_2E_solved struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeDefinition mProperty_definition ;
  public: inline GGS_unifiedTypeDefinition readProperty_definition (void) const {
    return mProperty_definition ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDefinition (const GGS_unifiedTypeDefinition & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_definition = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeDefinition_2E_solved (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeDefinition_2E_solved (const GGS_unifiedTypeDefinition & in_definition) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeDefinition_2E_solved init_21_ (const class GGS_unifiedTypeDefinition & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDefinition_2E_solved extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeDefinition_2E_solved class_func_new (const class GGS_unifiedTypeDefinition & inOperand0,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeDefinition_2E_solved class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeDefinition.solved? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeDefinition_2E_solved mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeDefinition_2E_solved_3F_ (const GGS_typeDefinition_2E_solved & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeDefinition_2E_solved_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeDefinition_2E_solved unwrappedValue (void) const {
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
  public: static GGS_typeDefinition_2E_solved_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeDefinition_2E_solved_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry definition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition extensionGetter_definition (const class GGS_unifiedTypeMapEntry & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry identifierRepresentation' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_identifierRepresentation (const class GGS_unifiedTypeMapEntry & inObject,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry typeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typeName (const class GGS_unifiedTypeMapEntry & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry baseType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_baseType (const class GGS_unifiedTypeMapEntry & inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const class GGS_unifiedTypeMapEntry inObject,
                                        class GGS_stringset & io_ioInclusions,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const class GGS_unifiedTypeMapEntry inObject,
                                            class GGS_stringset & io_ioInclusions,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_actualParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_actualParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_actualParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_actualParameterAST & in_mActualParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualParameterListAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualParameterListAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualParameterListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_actualParameterListAST class_func_listWithValue (const class GGS_actualParameterAST & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_actualParameterListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_actualParameterAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_actualParameterListAST add_operation (const GGS_actualParameterListAST & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_actualParameterAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_actualParameterAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_actualParameterAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_actualParameterAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_actualParameterAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterAtIndex (class GGS_actualParameterAST constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_actualParameterAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_actualParameterAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_actualParameterAST getter_mActualParameterAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualParameterListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualParameterListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualParameterListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_actualParameterListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_actualParameterListAST ;
 
} ; // End of GGS_actualParameterListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_actualParameterListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_actualParameterListAST (const GGS_actualParameterListAST & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_actualParameterAST current_mActualParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actualParameterListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_actualParameterAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_actualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_actualParameterAST (const class cPtr_actualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualParameterAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualParameterAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_actualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_actualParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @actualParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_actualParameterAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void actualParameterAST_init (Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_actualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_actualParameterAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_actualParameterListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_actualParameterAST mProperty_mActualParameter ;
  public: inline GGS_actualParameterAST readProperty_mActualParameter (void) const {
    return mProperty_mActualParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_actualParameterListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActualParameter (const GGS_actualParameterAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualParameter = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_actualParameterListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_actualParameterListAST_2E_element (const GGS_actualParameterAST & in_mActualParameter) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualParameterListAST_2E_element init_21_ (const class GGS_actualParameterAST & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualParameterListAST_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualParameterListAST_2E_element class_func_new (const class GGS_actualParameterAST & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_actualParameterListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterParameterInSemanticContext (class cPtr_actualParameterAST * inObject,
                                                          class GGS_unifiedTypeMap & io_ioTypeMap,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@actualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isCompatibleWith (const class cPtr_actualParameterAST * inObject,
                                                     const class GGS_formalArgumentPassingModeAST constin_inFormalPassingMode,
                                                     const class GGS_string constin_inSelector,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInActualOutputParameterList (class cPtr_actualParameterAST * inObject,
                                                           class GGS_actualOutputArgumentList & io_ioActualOutputArgumentList,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualOutputArgumentList list
//
//--------------------------------------------------------------------------------------------------

class GGS_actualOutputArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_actualOutputArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_actualOutputArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mActualSelector,
                                                 const class GGS_semanticExpressionAST & in_mExpression,
                                                 const class GGS_location & in_mEndOfExpressionLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualOutputArgumentList init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualOutputArgumentList extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualOutputArgumentList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_actualOutputArgumentList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                              const class GGS_semanticExpressionAST & inOperand1,
                                                                              const class GGS_location & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_actualOutputArgumentList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_semanticExpressionAST & inOperand1,
                                                     const class GGS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_actualOutputArgumentList add_operation (const GGS_actualOutputArgumentList & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_semanticExpressionAST constinArgument1,
                                               class GGS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_semanticExpressionAST constinArgument1,
                                                      class GGS_location constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_semanticExpressionAST & outArgument1,
                                                 class GGS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_semanticExpressionAST & outArgument1,
                                                class GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_semanticExpressionAST & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualSelectorAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionLocationAtIndex (class GGS_location constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_semanticExpressionAST constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_semanticExpressionAST & outArgument1,
                                              class GGS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_semanticExpressionAST & outArgument1,
                                             class GGS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mActualSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfExpressionLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticExpressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualOutputArgumentList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualOutputArgumentList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualOutputArgumentList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_actualOutputArgumentList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_actualOutputArgumentList ;
 
} ; // End of GGS_actualOutputArgumentList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_actualOutputArgumentList : public cGenericAbstractEnumerator {
  public: cEnumerator_actualOutputArgumentList (const GGS_actualOutputArgumentList & inEnumeratedObject,
                                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public: class GGS_semanticExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actualOutputArgumentList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualOutputArgumentList ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkAgainstFormalArgument (class cPtr_actualParameterAST * inObject,
                                                     const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const class GGS_analysisContext constin_inAnalysisContext,
                                                     class GGS_unifiedTypeMap & io_ioTypeMap,
                                                     const class GGS_lstring constin_inFormalSelector,
                                                     const class GGS_unifiedTypeMapEntry constin_inFormalArgumentType,
                                                     const class GGS_formalArgumentPassingModeAST constin_inFormalArgumentPassingMode,
                                                     class GGS_localVarManager & io_ioVariableMap,
                                                     class GGS_actualParameterListForGeneration & io_ioActualParameterListForGeneration,
                                                     class GGS_stringset & io_ioExclusiveVariableSet,
                                                     class GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GGS_actualParameterListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_actualParameterListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_actualParameterListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_actualParameterForGeneration & in_mActualParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualParameterListForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualParameterListForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualParameterListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_actualParameterListForGeneration class_func_listWithValue (const class GGS_actualParameterForGeneration & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_actualParameterListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_actualParameterForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_actualParameterListForGeneration add_operation (const GGS_actualParameterListForGeneration & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_actualParameterForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_actualParameterForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_actualParameterForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_actualParameterForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_actualParameterForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterAtIndex (class GGS_actualParameterForGeneration constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_actualParameterForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_actualParameterForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_actualParameterForGeneration getter_mActualParameterAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualParameterListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualParameterListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualParameterListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_actualParameterListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_actualParameterListForGeneration ;
 
} ; // End of GGS_actualParameterListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_actualParameterListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_actualParameterListForGeneration (const GGS_actualParameterListForGeneration & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_actualParameterForGeneration current_mActualParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actualParameterListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration ;

//--------------------------------------------------------------------------------------------------
//   enum selfAvailability
//--------------------------------------------------------------------------------------------------

class GGS_selfAvailability : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_selfAvailability (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_available
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_available (class GGS_unifiedTypeMapEntry & out_type,
                                                                  class GGS_selfMutability & out_selfMutability) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfAvailability extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfAvailability class_func_available (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GGS_selfMutability & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_selfAvailability class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAvailability & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractAvailable (class GGS_unifiedTypeMapEntry & outArgument0,
                                                         class GGS_selfMutability & outArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_selfAvailability_2E_available_3F_ getter_getAvailable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAvailable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selfAvailability class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAvailability ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @analysisContext struct
//
//--------------------------------------------------------------------------------------------------

class GGS_analysisContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticContext mProperty_semanticContext ;
  public: inline GGS_semanticContext readProperty_semanticContext (void) const {
    return mProperty_semanticContext ;
  }

  public: GGS_predefinedTypes mProperty_predefinedTypes ;
  public: inline GGS_predefinedTypes readProperty_predefinedTypes (void) const {
    return mProperty_predefinedTypes ;
  }

  public: GGS_string mProperty_selfObjectCppName ;
  public: inline GGS_string readProperty_selfObjectCppName (void) const {
    return mProperty_selfObjectCppName ;
  }

  public: GGS_selfAvailability mProperty_selfAvailability ;
  public: inline GGS_selfAvailability readProperty_selfAvailability (void) const {
    return mProperty_selfAvailability ;
  }

  public: GGS_string mProperty_selfObjectCppPrefixForAccessingProperty ;
  public: inline GGS_string readProperty_selfObjectCppPrefixForAccessingProperty (void) const {
    return mProperty_selfObjectCppPrefixForAccessingProperty ;
  }

  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: inline GGS_bool readProperty_requiresSelfForAccessingProperty (void) const {
    return mProperty_requiresSelfForAccessingProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_analysisContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSemanticContext (const GGS_semanticContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_semanticContext = inValue ;
  }

  public: inline void setter_setPredefinedTypes (const GGS_predefinedTypes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_predefinedTypes = inValue ;
  }

  public: inline void setter_setSelfObjectCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfObjectCppName = inValue ;
  }

  public: inline void setter_setSelfAvailability (const GGS_selfAvailability & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfAvailability = inValue ;
  }

  public: inline void setter_setSelfObjectCppPrefixForAccessingProperty (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfObjectCppPrefixForAccessingProperty = inValue ;
  }

  public: inline void setter_setRequiresSelfForAccessingProperty (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_requiresSelfForAccessingProperty = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_analysisContext (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_analysisContext (const GGS_semanticContext & in_semanticContext,
                               const GGS_predefinedTypes & in_predefinedTypes,
                               const GGS_string & in_selfObjectCppName,
                               const GGS_selfAvailability & in_selfAvailability,
                               const GGS_string & in_selfObjectCppPrefixForAccessingProperty,
                               const GGS_bool & in_requiresSelfForAccessingProperty) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_analysisContext init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (const class GGS_semanticContext & inOperand0,
                                                                                                                                                                           const class GGS_predefinedTypes & inOperand1,
                                                                                                                                                                           const class GGS_string & inOperand2,
                                                                                                                                                                           const class GGS_selfAvailability & inOperand3,
                                                                                                                                                                           const class GGS_string & inOperand4,
                                                                                                                                                                           const class GGS_bool & inOperand5,
                                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_analysisContext extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_analysisContext class_func_new (const class GGS_semanticContext & inOperand0,
                                                           const class GGS_predefinedTypes & inOperand1,
                                                           const class GGS_string & inOperand2,
                                                           const class GGS_selfAvailability & inOperand3,
                                                           const class GGS_string & inOperand4,
                                                           const class GGS_bool & inOperand5,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_analysisContext class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_analysisContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVarManager struct
//
//--------------------------------------------------------------------------------------------------

class GGS_localVarManager : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_currentVarManager mProperty_mCurrentManager ;
  public: inline GGS_currentVarManager readProperty_mCurrentManager (void) const {
    return mProperty_mCurrentManager ;
  }

  public: GGS_openedOverrideList mProperty_mOverridenManagers ;
  public: inline GGS_openedOverrideList readProperty_mOverridenManagers (void) const {
    return mProperty_mOverridenManagers ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localVarManager (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCurrentManager (const GGS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCurrentManager = inValue ;
  }

  public: inline void setter_setMOverridenManagers (const GGS_openedOverrideList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOverridenManagers = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_localVarManager (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localVarManager (const GGS_currentVarManager & in_mCurrentManager,
                               const GGS_openedOverrideList & in_mOverridenManagers) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVarManager init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVarManager extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVarManager class_func_new (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_localVarManager class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarManager ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_actualParameterAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_actualParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_actualParameterAST_2E_weak (const class GGS_actualParameterAST & inSource) ;

  public: GGS_actualParameterAST_2E_weak & operator = (const class GGS_actualParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_actualParameterAST_2E_weak init_nil (void) {
    GGS_actualParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_actualParameterAST bang_actualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_actualParameterAST unwrappedValue (void) const {
    GGS_actualParameterAST result ;
    if (isValid ()) {
      const cPtr_actualParameterAST * p = (cPtr_actualParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_actualParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_actualParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_actualParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_actualParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticExpressionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticExpressionAST_init (Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_semanticExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputActualParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_outputActualParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_outputActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputActualParameterAST (const class cPtr_outputActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mOutputActualParameterExpression (void) const ;

  public: class GGS_location readProperty_mEndOfExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputActualParameterAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_semanticExpressionAST & inOperand1,
                                                                const class GGS_location & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outputActualParameterAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outputActualParameterAST class_func_new (const class GGS_lstring & inOperand0,
                                                                    const class GGS_semanticExpressionAST & inOperand1,
                                                                    const class GGS_location & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_outputActualParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outputActualParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_outputActualParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputActualParameterAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_semanticExpressionAST & inOperand1,
                                                          const class GGS_location & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_semanticExpressionAST mProperty_mOutputActualParameterExpression ;
  public: GGS_location mProperty_mEndOfExpressionLocation ;


//--- Default constructor
  public: cPtr_outputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputActualParameterAST (const GGS_lstring & in_mActualSelector,
                                         const GGS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                         const GGS_location & in_mEndOfExpressionLocation
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputActualParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_outputActualParameterAST_2E_weak : public GGS_actualParameterAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_outputActualParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_outputActualParameterAST_2E_weak (const class GGS_outputActualParameterAST & inSource) ;

  public: GGS_outputActualParameterAST_2E_weak & operator = (const class GGS_outputActualParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_outputActualParameterAST_2E_weak init_nil (void) {
    GGS_outputActualParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_outputActualParameterAST bang_outputActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_outputActualParameterAST unwrappedValue (void) const {
    GGS_outputActualParameterAST result ;
    if (isValid ()) {
      const cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_outputActualParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_outputActualParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outputActualParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputActualParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_outputActualParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputActualParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_outputInputActualParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_outputInputActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputInputActualParameterAST (const class cPtr_outputInputActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_lstring readProperty_mOutputInputActualParameterName (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputInputActualParameterAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstringlist & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outputInputActualParameterAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outputInputActualParameterAST class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_lstringlist & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_outputInputActualParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outputInputActualParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_outputInputActualParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputInputActualParameterAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_lstringlist & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_lstring mProperty_mOutputInputActualParameterName ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;


//--- Default constructor
  public: cPtr_outputInputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputActualParameterAST (const GGS_lstring & in_mActualSelector,
                                              const GGS_lstring & in_mOutputInputActualParameterName,
                                              const GGS_lstringlist & in_mStructAttributeList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputActualParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_outputInputActualParameterAST_2E_weak : public GGS_actualParameterAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_outputInputActualParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_outputInputActualParameterAST_2E_weak (const class GGS_outputInputActualParameterAST & inSource) ;

  public: GGS_outputInputActualParameterAST_2E_weak & operator = (const class GGS_outputInputActualParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_outputInputActualParameterAST_2E_weak init_nil (void) {
    GGS_outputInputActualParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_outputInputActualParameterAST bang_outputInputActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_outputInputActualParameterAST unwrappedValue (void) const {
    GGS_outputInputActualParameterAST result ;
    if (isValid ()) {
      const cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_outputInputActualParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_outputInputActualParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outputInputActualParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputActualParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_outputInputActualParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputJokerParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_outputInputJokerParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_outputInputJokerParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputInputJokerParameterAST (const class cPtr_outputInputJokerParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_semanticExpressionAST readProperty_expression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputInputJokerParameterAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_semanticExpressionAST & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outputInputJokerParameterAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outputInputJokerParameterAST class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_semanticExpressionAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputJokerParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_outputInputJokerParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outputInputJokerParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_outputInputJokerParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputInputJokerParameterAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_semanticExpressionAST & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_semanticExpressionAST mProperty_expression ;


//--- Default constructor
  public: cPtr_outputInputJokerParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputJokerParameterAST (const GGS_lstring & in_mActualSelector,
                                             const GGS_semanticExpressionAST & in_expression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputJokerParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_outputInputJokerParameterAST_2E_weak : public GGS_actualParameterAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_outputInputJokerParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_outputInputJokerParameterAST_2E_weak (const class GGS_outputInputJokerParameterAST & inSource) ;

  public: GGS_outputInputJokerParameterAST_2E_weak & operator = (const class GGS_outputInputJokerParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_outputInputJokerParameterAST_2E_weak init_nil (void) {
    GGS_outputInputJokerParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_outputInputJokerParameterAST bang_outputInputJokerParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_outputInputJokerParameterAST unwrappedValue (void) const {
    GGS_outputInputJokerParameterAST result ;
    if (isValid ()) {
      const cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_outputInputJokerParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_outputInputJokerParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outputInputJokerParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputJokerParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_outputInputJokerParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputSelfParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_outputInputSelfParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_outputInputSelfParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputInputSelfParameterAST (const class cPtr_outputInputSelfParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputInputSelfParameterAST init_21_ (const class GGS_lstring & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outputInputSelfParameterAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outputInputSelfParameterAST class_func_new (const class GGS_lstring & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputSelfParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_outputInputSelfParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSelfParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outputInputSelfParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_outputInputSelfParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputInputSelfParameterAST_init_21_ (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;


//--- Default constructor
  public: cPtr_outputInputSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputSelfParameterAST (const GGS_lstring & in_mActualSelector
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputSelfParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_outputInputSelfParameterAST_2E_weak : public GGS_actualParameterAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_outputInputSelfParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_outputInputSelfParameterAST_2E_weak (const class GGS_outputInputSelfParameterAST & inSource) ;

  public: GGS_outputInputSelfParameterAST_2E_weak & operator = (const class GGS_outputInputSelfParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_outputInputSelfParameterAST_2E_weak init_nil (void) {
    GGS_outputInputSelfParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_outputInputSelfParameterAST bang_outputInputSelfParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_outputInputSelfParameterAST unwrappedValue (void) const {
    GGS_outputInputSelfParameterAST result ;
    if (isValid ()) {
      const cPtr_outputInputSelfParameterAST * p = (cPtr_outputInputSelfParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_outputInputSelfParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_outputInputSelfParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outputInputSelfParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputSelfParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_outputInputSelfParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSelfParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualExistingVariableParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputActualExistingVariableParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputActualExistingVariableParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualExistingVariableParameterAST (const class cPtr_inputActualExistingVariableParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_lstring readProperty_mInputActualParameterName (void) const ;

  public: class GGS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualExistingVariableParameterAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_lstringlist & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputActualExistingVariableParameterAST extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualExistingVariableParameterAST class_func_new (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_lstringlist & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualExistingVariableParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputActualExistingVariableParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputActualExistingVariableParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualExistingVariableParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualExistingVariableParameterAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_lstringlist & inOperand2,
                                                                         Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_lstring mProperty_mInputActualParameterName ;
  public: GGS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualExistingVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualExistingVariableParameterAST (const GGS_lstring & in_mActualSelector,
                                                        const GGS_lstring & in_mInputActualParameterName,
                                                        const GGS_lstringlist & in_mPoisonedVarNameList
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualExistingVariableParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputActualExistingVariableParameterAST_2E_weak : public GGS_actualParameterAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputActualExistingVariableParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputActualExistingVariableParameterAST_2E_weak (const class GGS_inputActualExistingVariableParameterAST & inSource) ;

  public: GGS_inputActualExistingVariableParameterAST_2E_weak & operator = (const class GGS_inputActualExistingVariableParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputActualExistingVariableParameterAST_2E_weak init_nil (void) {
    GGS_inputActualExistingVariableParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputActualExistingVariableParameterAST bang_inputActualExistingVariableParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_inputActualExistingVariableParameterAST unwrappedValue (void) const {
    GGS_inputActualExistingVariableParameterAST result ;
    if (isValid ()) {
      const cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_inputActualExistingVariableParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_inputActualExistingVariableParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualExistingVariableParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualExistingVariableParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputActualExistingVariableParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualSelfPropertyParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputActualSelfPropertyParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputActualSelfPropertyParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualSelfPropertyParameterAST (const class cPtr_inputActualSelfPropertyParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_lstring readProperty_mInputActualSelfPropertyName (void) const ;

  public: class GGS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualSelfPropertyParameterAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstringlist & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputActualSelfPropertyParameterAST extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualSelfPropertyParameterAST class_func_new (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_lstringlist & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualSelfPropertyParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputActualSelfPropertyParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputActualSelfPropertyParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualSelfPropertyParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualSelfPropertyParameterAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstringlist & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_lstring mProperty_mInputActualSelfPropertyName ;
  public: GGS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualSelfPropertyParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualSelfPropertyParameterAST (const GGS_lstring & in_mActualSelector,
                                                    const GGS_lstring & in_mInputActualSelfPropertyName,
                                                    const GGS_lstringlist & in_mPoisonedVarNameList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualSelfPropertyParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputActualSelfPropertyParameterAST_2E_weak : public GGS_actualParameterAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputActualSelfPropertyParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputActualSelfPropertyParameterAST_2E_weak (const class GGS_inputActualSelfPropertyParameterAST & inSource) ;

  public: GGS_inputActualSelfPropertyParameterAST_2E_weak & operator = (const class GGS_inputActualSelfPropertyParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputActualSelfPropertyParameterAST_2E_weak init_nil (void) {
    GGS_inputActualSelfPropertyParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputActualSelfPropertyParameterAST bang_inputActualSelfPropertyParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_inputActualSelfPropertyParameterAST unwrappedValue (void) const {
    GGS_inputActualSelfPropertyParameterAST result ;
    if (isValid ()) {
      const cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_inputActualSelfPropertyParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_inputActualSelfPropertyParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualSelfPropertyParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualSelfPropertyParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputActualSelfPropertyParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualSelfParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputActualSelfParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputActualSelfParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualSelfParameterAST (const class cPtr_inputActualSelfParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_location readProperty_mSelfLocation (void) const ;

  public: class GGS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualSelfParameterAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_lstringlist & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputActualSelfParameterAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualSelfParameterAST class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       const class GGS_lstringlist & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualSelfParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputActualSelfParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputActualSelfParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualSelfParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualSelfParameterAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_location & inOperand1,
                                                             const class GGS_lstringlist & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_location mProperty_mSelfLocation ;
  public: GGS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualSelfParameterAST (const GGS_lstring & in_mActualSelector,
                                            const GGS_location & in_mSelfLocation,
                                            const GGS_lstringlist & in_mPoisonedVarNameList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualSelfParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputActualSelfParameterAST_2E_weak : public GGS_actualParameterAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputActualSelfParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputActualSelfParameterAST_2E_weak (const class GGS_inputActualSelfParameterAST & inSource) ;

  public: GGS_inputActualSelfParameterAST_2E_weak & operator = (const class GGS_inputActualSelfParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputActualSelfParameterAST_2E_weak init_nil (void) {
    GGS_inputActualSelfParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputActualSelfParameterAST bang_inputActualSelfParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_inputActualSelfParameterAST unwrappedValue (void) const {
    GGS_inputActualSelfParameterAST result ;
    if (isValid ()) {
      const cPtr_inputActualSelfParameterAST * p = (cPtr_inputActualSelfParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_inputActualSelfParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_inputActualSelfParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualSelfParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualSelfParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputActualSelfParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualNewVariableParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputActualNewVariableParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputActualNewVariableParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualNewVariableParameterAST (const class cPtr_inputActualNewVariableParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_lstring readProperty_mInputOptionalActualTypeName (void) const ;

  public: class GGS_lstring readProperty_mInputActualParameterName (void) const ;

  public: class GGS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualNewVariableParameterAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              const class GGS_lstringlist & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputActualNewVariableParameterAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualNewVariableParameterAST class_func_new (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              const class GGS_lstringlist & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualNewVariableParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputActualNewVariableParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputActualNewVariableParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualNewVariableParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualNewVariableParameterAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_lstringlist & inOperand3,
                                                                        Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_lstring mProperty_mInputOptionalActualTypeName ;
  public: GGS_lstring mProperty_mInputActualParameterName ;
  public: GGS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualNewVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualNewVariableParameterAST (const GGS_lstring & in_mActualSelector,
                                                   const GGS_lstring & in_mInputOptionalActualTypeName,
                                                   const GGS_lstring & in_mInputActualParameterName,
                                                   const GGS_lstringlist & in_mPoisonedVarNameList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualNewVariableParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputActualNewVariableParameterAST_2E_weak : public GGS_actualParameterAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputActualNewVariableParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputActualNewVariableParameterAST_2E_weak (const class GGS_inputActualNewVariableParameterAST & inSource) ;

  public: GGS_inputActualNewVariableParameterAST_2E_weak & operator = (const class GGS_inputActualNewVariableParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputActualNewVariableParameterAST_2E_weak init_nil (void) {
    GGS_inputActualNewVariableParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputActualNewVariableParameterAST bang_inputActualNewVariableParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_inputActualNewVariableParameterAST unwrappedValue (void) const {
    GGS_inputActualNewVariableParameterAST result ;
    if (isValid ()) {
      const cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_inputActualNewVariableParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_inputActualNewVariableParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualNewVariableParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualNewVariableParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputActualNewVariableParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualNewConstantParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputActualNewConstantParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputActualNewConstantParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualNewConstantParameterAST (const class cPtr_inputActualNewConstantParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_lstring readProperty_mInputOptionalActualTypeName (void) const ;

  public: class GGS_lstring readProperty_mInputActualParameterName (void) const ;

  public: class GGS_bool readProperty_mMarkedAsUnused (void) const ;

  public: class GGS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualNewConstantParameterAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_lstring & inOperand2,
                                                                                  const class GGS_bool & inOperand3,
                                                                                  const class GGS_lstringlist & inOperand4,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputActualNewConstantParameterAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualNewConstantParameterAST class_func_new (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              const class GGS_bool & inOperand3,
                                                                              const class GGS_lstringlist & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualNewConstantParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputActualNewConstantParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputActualNewConstantParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualNewConstantParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualNewConstantParameterAST_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            const class GGS_bool & inOperand3,
                                                                            const class GGS_lstringlist & inOperand4,
                                                                            Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_lstring mProperty_mInputOptionalActualTypeName ;
  public: GGS_lstring mProperty_mInputActualParameterName ;
  public: GGS_bool mProperty_mMarkedAsUnused ;
  public: GGS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualNewConstantParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualNewConstantParameterAST (const GGS_lstring & in_mActualSelector,
                                                   const GGS_lstring & in_mInputOptionalActualTypeName,
                                                   const GGS_lstring & in_mInputActualParameterName,
                                                   const GGS_bool & in_mMarkedAsUnused,
                                                   const GGS_lstringlist & in_mPoisonedVarNameList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualNewConstantParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputActualNewConstantParameterAST_2E_weak : public GGS_actualParameterAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputActualNewConstantParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputActualNewConstantParameterAST_2E_weak (const class GGS_inputActualNewConstantParameterAST & inSource) ;

  public: GGS_inputActualNewConstantParameterAST_2E_weak & operator = (const class GGS_inputActualNewConstantParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputActualNewConstantParameterAST_2E_weak init_nil (void) {
    GGS_inputActualNewConstantParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputActualNewConstantParameterAST bang_inputActualNewConstantParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_inputActualNewConstantParameterAST unwrappedValue (void) const {
    GGS_inputActualNewConstantParameterAST result ;
    if (isValid ()) {
      const cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_inputActualNewConstantParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_inputActualNewConstantParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualNewConstantParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualNewConstantParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputActualNewConstantParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputSingleJokerActualParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputSingleJokerActualParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputSingleJokerActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputSingleJokerActualParameterAST (const class cPtr_inputSingleJokerActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputSingleJokerActualParameterAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstringlist & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputSingleJokerActualParameterAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputSingleJokerActualParameterAST class_func_new (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstringlist & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputSingleJokerActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputSingleJokerActualParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputSingleJokerActualParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputSingleJokerActualParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputSingleJokerActualParameterAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstringlist & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputSingleJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputSingleJokerActualParameterAST (const GGS_lstring & in_mActualSelector,
                                                   const GGS_lstringlist & in_mPoisonedVarNameList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputSingleJokerActualParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputSingleJokerActualParameterAST_2E_weak : public GGS_actualParameterAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputSingleJokerActualParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputSingleJokerActualParameterAST_2E_weak (const class GGS_inputSingleJokerActualParameterAST & inSource) ;

  public: GGS_inputSingleJokerActualParameterAST_2E_weak & operator = (const class GGS_inputSingleJokerActualParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputSingleJokerActualParameterAST_2E_weak init_nil (void) {
    GGS_inputSingleJokerActualParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputSingleJokerActualParameterAST bang_inputSingleJokerActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_inputSingleJokerActualParameterAST unwrappedValue (void) const {
    GGS_inputSingleJokerActualParameterAST result ;
    if (isValid ()) {
      const cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_inputSingleJokerActualParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_inputSingleJokerActualParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputSingleJokerActualParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputSingleJokerActualParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputSingleJokerActualParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputJokerActualParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputJokerActualParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputJokerActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputJokerActualParameterAST (const class cPtr_inputJokerActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mQualifierLocation (void) const ;

  public: class GGS_uint readProperty_mJokerIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputJokerActualParameterAST init_21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_uint & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputJokerActualParameterAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputJokerActualParameterAST class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_uint & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputJokerActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputJokerActualParameterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputJokerActualParameterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputJokerActualParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputJokerActualParameterAST_init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_uint & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GGS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mQualifierLocation ;
  public: GGS_uint mProperty_mJokerIndex ;


//--- Default constructor
  public: cPtr_inputJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputJokerActualParameterAST (const GGS_location & in_mQualifierLocation,
                                             const GGS_uint & in_mJokerIndex
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputJokerActualParameterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputJokerActualParameterAST_2E_weak : public GGS_actualParameterAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputJokerActualParameterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputJokerActualParameterAST_2E_weak (const class GGS_inputJokerActualParameterAST & inSource) ;

  public: GGS_inputJokerActualParameterAST_2E_weak & operator = (const class GGS_inputJokerActualParameterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputJokerActualParameterAST_2E_weak init_nil (void) {
    GGS_inputJokerActualParameterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputJokerActualParameterAST bang_inputJokerActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_inputJokerActualParameterAST unwrappedValue (void) const {
    GGS_inputJokerActualParameterAST result ;
    if (isValid ()) {
      const cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_inputJokerActualParameterAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_inputJokerActualParameterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputJokerActualParameterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputJokerActualParameterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputJokerActualParameterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externProcedureDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_externProcedureDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_externProcedureDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_externProcedureDeclarationAST (const class cPtr_externProcedureDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_isFilePrivate (void) const ;

  public: class GGS_lstring readProperty_mRoutineName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mFormalArgumentListAST (void) const ;

  public: class GGS_bool readProperty_usefullProcedure (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externProcedureDeclarationAST init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const class GGS_bool & inOperand0,
                                                                                                                      const class GGS_bool & inOperand1,
                                                                                                                      const class GGS_lstring & inOperand2,
                                                                                                                      const class GGS_formalParameterListAST & inOperand3,
                                                                                                                      const class GGS_bool & inOperand4,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externProcedureDeclarationAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externProcedureDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                                         const class GGS_bool & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS_formalParameterListAST & inOperand3,
                                                                         const class GGS_bool & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externProcedureDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_externProcedureDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externProcedureDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_externProcedureDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externProcedureDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const class GGS_bool & inOperand0,
                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                const class GGS_lstring & inOperand2,
                                                                                                                const class GGS_formalParameterListAST & inOperand3,
                                                                                                                const class GGS_bool & inOperand4,
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
  public: GGS_bool mProperty_isFilePrivate ;
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_formalParameterListAST mProperty_mFormalArgumentListAST ;
  public: GGS_bool mProperty_usefullProcedure ;


//--- Default constructor
  public: cPtr_externProcedureDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externProcedureDeclarationAST (const GGS_bool & in_isPredefined,
                                              const GGS_bool & in_isFilePrivate,
                                              const GGS_lstring & in_mRoutineName,
                                              const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                              const GGS_bool & in_usefullProcedure
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externProcedureDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_externProcedureDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_externProcedureDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_externProcedureDeclarationAST_2E_weak (const class GGS_externProcedureDeclarationAST & inSource) ;

  public: GGS_externProcedureDeclarationAST_2E_weak & operator = (const class GGS_externProcedureDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_externProcedureDeclarationAST_2E_weak init_nil (void) {
    GGS_externProcedureDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_externProcedureDeclarationAST bang_externProcedureDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_externProcedureDeclarationAST unwrappedValue (void) const {
    GGS_externProcedureDeclarationAST result ;
    if (isValid ()) {
      const cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_externProcedureDeclarationAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_externProcedureDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externProcedureDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externProcedureDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_externProcedureDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_procDeclarationAST : public GGS_externProcedureDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_procDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_procDeclarationAST (const class cPtr_procDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticInstructionListAST readProperty_mRoutineInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfRoutineInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procDeclarationAST init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const class GGS_bool & inOperand0,
                                                                                                                   const class GGS_bool & inOperand1,
                                                                                                                   const class GGS_lstring & inOperand2,
                                                                                                                   const class GGS_formalParameterListAST & inOperand3,
                                                                                                                   const class GGS_bool & inOperand4,
                                                                                                                   const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                   const class GGS_location & inOperand6,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procDeclarationAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_formalParameterListAST & inOperand3,
                                                              const class GGS_bool & inOperand4,
                                                              const class GGS_semanticInstructionListAST & inOperand5,
                                                              const class GGS_location & inOperand6
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_procDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @procDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_procDeclarationAST : public cPtr_externProcedureDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const class GGS_bool & inOperand0,
                                                                                                             const class GGS_bool & inOperand1,
                                                                                                             const class GGS_lstring & inOperand2,
                                                                                                             const class GGS_formalParameterListAST & inOperand3,
                                                                                                             const class GGS_bool & inOperand4,
                                                                                                             const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                             const class GGS_location & inOperand6,
                                                                                                             Compiler * inCompiler) ;


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
  public: GGS_semanticInstructionListAST mProperty_mRoutineInstructionList ;
  public: GGS_location mProperty_mEndOfRoutineInstructionList ;


//--- Default constructor
  public: cPtr_procDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_procDeclarationAST (const GGS_bool & in_isPredefined,
                                   const GGS_bool & in_isFilePrivate,
                                   const GGS_lstring & in_mRoutineName,
                                   const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                   const GGS_bool & in_usefullProcedure,
                                   const GGS_semanticInstructionListAST & in_mRoutineInstructionList,
                                   const GGS_location & in_mEndOfRoutineInstructionList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_procDeclarationAST_2E_weak : public GGS_externProcedureDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_procDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_procDeclarationAST_2E_weak (const class GGS_procDeclarationAST & inSource) ;

  public: GGS_procDeclarationAST_2E_weak & operator = (const class GGS_procDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_procDeclarationAST_2E_weak init_nil (void) {
    GGS_procDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_procDeclarationAST bang_procDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_procDeclarationAST unwrappedValue (void) const {
    GGS_procDeclarationAST result ;
    if (isValid ()) {
      const cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_procDeclarationAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_procDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_procDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxExtensionsDictionary dict
//
//--------------------------------------------------------------------------------------------------

class cSharedDictRoot_syntaxExtensionsDictionary ;

//--------------------------------------------------------------------------------------------------

class GGS_syntaxExtensionsDictionary : public AC_GALGAS_root {
//--------------------------------- Attributes
  private: cSharedDictRoot_syntaxExtensionsDictionary * mSharedDict ;

//--------------------------------- Default constructor
  public: GGS_syntaxExtensionsDictionary (void) ;

//--------------------------------- Destructor
  public: virtual ~ GGS_syntaxExtensionsDictionary (void) ;

//--------------------------------- Handle copy
  public: GGS_syntaxExtensionsDictionary (const GGS_syntaxExtensionsDictionary & inSource) ;
  public: GGS_syntaxExtensionsDictionary & operator = (const GGS_syntaxExtensionsDictionary & inSource) ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedDict != nullptr ; }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--- Insulate
  private: void insulate (LOCATION_ARGS) ;

//--- Object compare
  public: VIRTUAL_IN_DEBUG ComparisonResult objectCompare (const GGS_syntaxExtensionsDictionary & inOperand) const ;

//--- Enumeration
  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxExtensionsDictionary init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxExtensionsDictionary extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxExtensionsDictionary class_func_emptyDict (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_galgas_33_SyntaxExtensionListAST & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_string constinArgument0,
                                               class GGS_galgas_33_SyntaxExtensionListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_string constinArgument0,
                                                  class GGS_galgas_33_SyntaxExtensionListAST & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setExtensionListForKey (class GGS_galgas_33_SyntaxExtensionListAST constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_string constinArgument0,
                                                  class GGS_galgas_33_SyntaxExtensionListAST & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_SyntaxExtensionListAST getter_extensionListForKey (const class GGS_string & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_syntaxExtensionsDictionary_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_syntaxExtensionsDictionary_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syntaxExtensionsDictionary ;
 
} ; // End of GGS_syntaxExtensionsDictionary class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxExtensionsDictionary : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxExtensionsDictionary (const GGS_syntaxExtensionsDictionary & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_string current_key (LOCATION_ARGS) const ;
  public: class GGS_galgas_33_SyntaxExtensionListAST current_extensionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxExtensionsDictionary_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3SyntaxExtensionListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxExtensionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_galgas_33_SyntaxExtensionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_galgas_33_SyntaxExtensionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSyntaxComponentName,
                                                 const class GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                 const class GGS_syntaxRuleListAST & in_mRuleList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_SyntaxExtensionListAST init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_SyntaxExtensionListAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_SyntaxExtensionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_galgas_33_SyntaxExtensionListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_nonterminalDeclarationListAST & inOperand1,
                                                                                      const class GGS_syntaxRuleListAST & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_galgas_33_SyntaxExtensionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_nonterminalDeclarationListAST & inOperand1,
                                                     const class GGS_syntaxRuleListAST & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_galgas_33_SyntaxExtensionListAST add_operation (const GGS_galgas_33_SyntaxExtensionListAST & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_nonterminalDeclarationListAST constinArgument1,
                                               class GGS_syntaxRuleListAST constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_nonterminalDeclarationListAST constinArgument1,
                                                      class GGS_syntaxRuleListAST constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_nonterminalDeclarationListAST & outArgument1,
                                                 class GGS_syntaxRuleListAST & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_nonterminalDeclarationListAST & outArgument1,
                                                class GGS_syntaxRuleListAST & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_nonterminalDeclarationListAST & outArgument1,
                                                      class GGS_syntaxRuleListAST & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationListAtIndex (class GGS_nonterminalDeclarationListAST constinArgument0,
                                                                              class GGS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleListAtIndex (class GGS_syntaxRuleListAST constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GGS_lstring constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_nonterminalDeclarationListAST & outArgument1,
                                              class GGS_syntaxRuleListAST & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_nonterminalDeclarationListAST & outArgument1,
                                             class GGS_syntaxRuleListAST & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxRuleListAST getter_mRuleListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSyntaxComponentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_SyntaxExtensionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_SyntaxExtensionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_SyntaxExtensionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_galgas_33_SyntaxExtensionListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_galgas_33_SyntaxExtensionListAST ;
 
} ; // End of GGS_galgas_33_SyntaxExtensionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_galgas_33_SyntaxExtensionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GGS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GGS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_galgas_33_SyntaxExtensionListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxExtensionsDictionary_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxExtensionsDictionary_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_key ;
  public: inline GGS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS_galgas_33_SyntaxExtensionListAST mProperty_extensionList ;
  public: inline GGS_galgas_33_SyntaxExtensionListAST readProperty_extensionList (void) const {
    return mProperty_extensionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxExtensionsDictionary_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setExtensionList (const GGS_galgas_33_SyntaxExtensionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_extensionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_syntaxExtensionsDictionary_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxExtensionsDictionary_2E_element (const GGS_string & in_key,
                                                     const GGS_galgas_33_SyntaxExtensionListAST & in_extensionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxExtensionsDictionary_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                         const class GGS_galgas_33_SyntaxExtensionListAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxExtensionsDictionary_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxExtensionsDictionary_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                 const class GGS_galgas_33_SyntaxExtensionListAST & inOperand1,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syntaxExtensionsDictionary_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: syntaxExtensionsDictionary.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxExtensionsDictionary_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_syntaxExtensionsDictionary_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_syntaxExtensionsDictionary_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_syntaxExtensionsDictionary_2E_element_3F_ (const GGS_syntaxExtensionsDictionary_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_syntaxExtensionsDictionary_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_syntaxExtensionsDictionary_2E_element unwrappedValue (void) const {
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
  public: static GGS_syntaxExtensionsDictionary_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syntaxExtensionsDictionary_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalDeclarationListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_nonterminalDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_nonterminalDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mNonterminalName,
                                                 const class GGS_nonTerminalLabelListAST & in_mLabels
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalDeclarationListAST init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalDeclarationListAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonterminalDeclarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_nonterminalDeclarationListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_nonTerminalLabelListAST & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_nonterminalDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_nonTerminalLabelListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_nonterminalDeclarationListAST add_operation (const GGS_nonterminalDeclarationListAST & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_nonTerminalLabelListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_nonTerminalLabelListAST constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_nonTerminalLabelListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_nonTerminalLabelListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_nonTerminalLabelListAST & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelsAtIndex (class GGS_nonTerminalLabelListAST constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GGS_lstring constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_nonTerminalLabelListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_nonTerminalLabelListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_nonTerminalLabelListAST getter_mLabelsAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mNonterminalNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonterminalDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonterminalDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonterminalDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_nonterminalDeclarationListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_nonterminalDeclarationListAST ;
 
} ; // End of GGS_nonterminalDeclarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonterminalDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_nonterminalDeclarationListAST (const GGS_nonterminalDeclarationListAST & inEnumeratedObject,
                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GGS_nonTerminalLabelListAST current_mLabels (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_nonterminalDeclarationListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxRuleListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_syntaxRuleListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_syntaxRuleListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mNonterminalName,
                                                 const class GGS_syntaxRuleLabelListAST & in_mLabelList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxRuleListAST init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxRuleListAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxRuleListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_syntaxRuleListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_syntaxRuleLabelListAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_syntaxRuleListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_syntaxRuleLabelListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_syntaxRuleListAST add_operation (const GGS_syntaxRuleListAST & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_syntaxRuleLabelListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_syntaxRuleLabelListAST constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_syntaxRuleLabelListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_syntaxRuleLabelListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_syntaxRuleLabelListAST & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelListAtIndex (class GGS_syntaxRuleLabelListAST constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GGS_lstring constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_syntaxRuleLabelListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_syntaxRuleLabelListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_syntaxRuleLabelListAST getter_mLabelListAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mNonterminalNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxRuleListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxRuleListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxRuleListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_syntaxRuleListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syntaxRuleListAST ;
 
} ; // End of GGS_syntaxRuleListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxRuleListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxRuleListAST (const GGS_syntaxRuleListAST & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GGS_syntaxRuleLabelListAST current_mLabelList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxRuleListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxExtensionListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxExtensionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: inline GGS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GGS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: inline GGS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GGS_syntaxRuleListAST mProperty_mRuleList ;
  public: inline GGS_syntaxRuleListAST readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgas_33_SyntaxExtensionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GGS_nonterminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GGS_syntaxRuleListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_galgas_33_SyntaxExtensionListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgas_33_SyntaxExtensionListAST_2E_element (const GGS_lstring & in_mSyntaxComponentName,
                                                           const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                           const GGS_syntaxRuleListAST & in_mRuleList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_SyntaxExtensionListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_nonterminalDeclarationListAST & inOperand1,
                                                                                   const class GGS_syntaxRuleListAST & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_SyntaxExtensionListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_SyntaxExtensionListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_nonterminalDeclarationListAST & inOperand1,
                                                                                       const class GGS_syntaxRuleListAST & inOperand2,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_galgas_33_SyntaxExtensionListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxExtensions struct
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxExtensions : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_syntaxExtensionsDictionary mProperty_dictionary ;
  public: inline GGS_syntaxExtensionsDictionary readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxExtensions (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS_syntaxExtensionsDictionary & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_syntaxExtensions (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxExtensions (const GGS_syntaxExtensionsDictionary & in_dictionary) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxExtensions init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxExtensions extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxExtensions class_func_new (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syntaxExtensions class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@syntaxExtensions listForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxExtensionListAST extensionGetter_listForKey (const class GGS_syntaxExtensions & inObject,
                                                                       const class GGS_string & constinArgument0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticExpressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_semanticExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticExpressionAST_2E_weak (const class GGS_semanticExpressionAST & inSource) ;

  public: GGS_semanticExpressionAST_2E_weak & operator = (const class GGS_semanticExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticExpressionAST_2E_weak init_nil (void) {
    GGS_semanticExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticExpressionAST bang_semanticExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_semanticExpressionAST unwrappedValue (void) const {
    GGS_semanticExpressionAST result ;
    if (isValid ()) {
      const cPtr_semanticExpressionAST * p = (cPtr_semanticExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_semanticExpressionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_semanticExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_semanticExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalArgumentPassingModeAST string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_formalArgumentPassingModeAST & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalArgumentPassingModeAST formalArgumentMessage' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_formalArgumentMessage (const class GGS_formalArgumentPassingModeAST & inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalParameterListAST keyRepresentation' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_keyRepresentation (const class GGS_formalParameterListAST & inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalInputParameterListAST initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS_formalInputParameterListAST & inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

