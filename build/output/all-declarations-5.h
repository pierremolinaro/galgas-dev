#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionSetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionSetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionSetterAST (const class cPtr_abstractExtensionSetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionSetterName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mAbstractExtensionSetterFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_abstractExtensionSetterAST init_21_isPredefined_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_formalParameterListAST & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractExtensionSetterAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_formalParameterListAST & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractExtensionSetterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionSetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionSetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractExtensionSetterAST_init_21_isPredefined_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_formalParameterListAST & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mAbstractExtensionSetterFormalParameterList ;


//--- Default constructor
  public: cPtr_abstractExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractExtensionSetterAST (const GALGAS_bool & in_isPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractExtensionSetterName,
                                           const GALGAS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList
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
// Phase 1: @abstractExtensionSetterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionSetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionSetterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractExtensionSetterAST_2D_weak (const class GALGAS_abstractExtensionSetterAST & inSource) ;

  public: GALGAS_abstractExtensionSetterAST_2D_weak & operator = (const class GALGAS_abstractExtensionSetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractExtensionSetterAST bang_abstractExtensionSetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionSetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractExtensionSetterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractExtensionSetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractExtensionSetterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticInstructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_semanticInstructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_semanticInstructionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_semanticInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticInstructionListAST init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticInstructionListAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticInstructionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_semanticInstructionListAST class_func_listWithValue (const class GALGAS_semanticInstructionAST & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_semanticInstructionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticInstructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST add_operation (const GALGAS_semanticInstructionListAST & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_semanticInstructionAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticInstructionAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticInstructionAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticInstructionAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticInstructionAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_semanticInstructionAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticInstructionAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticInstructionAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionAST getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_semanticInstructionListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_semanticInstructionListAST ;
 
} ; // End of GALGAS_semanticInstructionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_semanticInstructionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_semanticInstructionListAST (const GALGAS_semanticInstructionListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_semanticInstructionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_syntaxInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_syntaxInstructionAST (const class cPtr_syntaxInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxInstructionAST init_21_ (const class GALGAS_location & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxInstructionAST extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syntaxInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxInstructionAST class


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
  public: void syntaxInstructionAST_init_21_ (const class GALGAS_location & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_bool arg_inHasTranslateFeature,
           const class GALGAS_terminalMap arg_inTerminalMap,
           const class GALGAS_string arg_inLexiqueName,
           const class GALGAS_nonterminalMap arg_inNonterminalMap,
           const class GALGAS_string arg_inComponentName,
           const class GALGAS_stringset arg_inIndexNameSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GALGAS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GALGAS_uint & arg_ioAddedNonTerminalIndex,
           class GALGAS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_syntaxInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxInstructionAST (const GALGAS_location & in_mInstructionLocation
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

class GALGAS_semanticInstructionAST : public GALGAS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_semanticInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticInstructionAST (const class cPtr_semanticInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticInstructionAST init_21_ (const class GALGAS_location & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticInstructionAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticInstructionAST class


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
  public: void semanticInstructionAST_init_21_ (const class GALGAS_location & inOperand0,
                                                Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GALGAS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_bool arg_inHasTranslateFeature,
           const class GALGAS_terminalMap arg_inTerminalMap,
           const class GALGAS_string arg_inLexiqueName,
           const class GALGAS_nonterminalMap arg_inNonterminalMap,
           const class GALGAS_string arg_inComponentName,
           const class GALGAS_stringset arg_inIndexNameSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GALGAS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GALGAS_uint & arg_ioAddedNonTerminalIndex,
           class GALGAS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_semanticInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticInstructionAST (const GALGAS_location & in_mInstructionLocation
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
// Phase 1: @semanticInstructionListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticInstructionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticInstructionAST mProperty_mInstruction ;
  public: inline GALGAS_semanticInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_semanticInstructionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_semanticInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_semanticInstructionListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticInstructionListAST_2D_element (const GALGAS_semanticInstructionAST & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticInstructionListAST_2D_element init_21_ (const class GALGAS_semanticInstructionAST & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticInstructionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticInstructionListAST_2D_element class_func_new (const class GALGAS_semanticInstructionAST & inOperand0,
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
 
} ; // End of GALGAS_semanticInstructionListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_extensionGetterAST (const class cPtr_extensionGetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mExtensionGetterName (void) const ;

  public: class GALGAS_formalInputParameterListAST readProperty_mExtensionGetterFormalInputParameterList (void) const ;

  public: class GALGAS_lstring readProperty_mExtensionGetterReturnedTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mExtensionGetterReturnedVariableName (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mExtensionGetterInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfReaderLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionGetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                 const class GALGAS_bool & inOperand1,
                                                                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                                                                 const class GALGAS_lstring & inOperand3,
                                                                                                                                 const class GALGAS_formalInputParameterListAST & inOperand4,
                                                                                                                                 const class GALGAS_lstring & inOperand5,
                                                                                                                                 const class GALGAS_lstring & inOperand6,
                                                                                                                                 const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                                                                                 const class GALGAS_location & inOperand8,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionGetterAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_bool & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_lstring & inOperand3,
                                                                 const class GALGAS_formalInputParameterListAST & inOperand4,
                                                                 const class GALGAS_lstring & inOperand5,
                                                                 const class GALGAS_lstring & inOperand6,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                 const class GALGAS_location & inOperand8
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionGetterAST class


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
  public: void extensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                        const class GALGAS_bool & inOperand1,
                                                                                                                        const class GALGAS_lstring & inOperand2,
                                                                                                                        const class GALGAS_lstring & inOperand3,
                                                                                                                        const class GALGAS_formalInputParameterListAST & inOperand4,
                                                                                                                        const class GALGAS_lstring & inOperand5,
                                                                                                                        const class GALGAS_lstring & inOperand6,
                                                                                                                        const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                                                                        const class GALGAS_location & inOperand8,
                                                                                                                        Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mExtensionGetterReturnedTypeName ;
  public: GALGAS_lstring mProperty_mExtensionGetterReturnedVariableName ;
  public: GALGAS_semanticInstructionListAST mProperty_mExtensionGetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfReaderLocation ;


//--- Default constructor
  public: cPtr_extensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionGetterAST (const GALGAS_bool & in_isPredefined,
                                   const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mExtensionGetterName,
                                   const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                   const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                   const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                   const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                   const GALGAS_location & in_mEndOfReaderLocation
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
// Phase 1: @extensionGetterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionGetterAST_2D_weak (const class GALGAS_extensionGetterAST & inSource) ;

  public: GALGAS_extensionGetterAST_2D_weak & operator = (const class GALGAS_extensionGetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionGetterAST bang_extensionGetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionGetterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionGetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionGetterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_semanticInstructionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_semanticInstructionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_semanticInstructionForGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticInstructionListForGeneration init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticInstructionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticInstructionListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_semanticInstructionListForGeneration class_func_listWithValue (const class GALGAS_semanticInstructionForGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_semanticInstructionListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticInstructionForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration add_operation (const GALGAS_semanticInstructionListForGeneration & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_semanticInstructionForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticInstructionForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticInstructionForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticInstructionForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticInstructionForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_semanticInstructionForGeneration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticInstructionForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticInstructionForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionForGeneration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_semanticInstructionListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_semanticInstructionListForGeneration ;
 
} ; // End of GALGAS_semanticInstructionListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_semanticInstructionListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_semanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_semanticInstructionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticInstructionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_semanticInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticInstructionForGeneration (const class cPtr_semanticInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticInstructionForGeneration init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticInstructionForGeneration class


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
  public: virtual class GALGAS_bool getter_compareInstructionSyntaxSignature (const class GALGAS_semanticInstructionForGeneration inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GALGAS_string arg_inPosfix,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GALGAS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & arg_ioGeneratedCode,
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
// Phase 1: @semanticInstructionListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticInstructionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticInstructionForGeneration mProperty_mInstruction ;
  public: inline GALGAS_semanticInstructionForGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_semanticInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_semanticInstructionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_semanticInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionForGeneration & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticInstructionListForGeneration_2D_element init_21_ (const class GALGAS_semanticInstructionForGeneration & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticInstructionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticInstructionListForGeneration_2D_element class_func_new (const class GALGAS_semanticInstructionForGeneration & inOperand0,
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
 
} ; // End of GALGAS_semanticInstructionListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_extensionMethodAST (const class cPtr_extensionMethodAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mExtensionMethodName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mExtensionMethodFormalParameterList (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mExtensionMethodInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfMethodLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionMethodAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                         const class GALGAS_bool & inOperand1,
                                                                                                                         const class GALGAS_lstring & inOperand2,
                                                                                                                         const class GALGAS_lstring & inOperand3,
                                                                                                                         const class GALGAS_formalParameterListAST & inOperand4,
                                                                                                                         const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                                                                         const class GALGAS_location & inOperand6,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionMethodAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_bool & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_lstring & inOperand3,
                                                                 const class GALGAS_formalParameterListAST & inOperand4,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                 const class GALGAS_location & inOperand6
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionMethodAST class


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
  public: void extensionMethodAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                const class GALGAS_bool & inOperand1,
                                                                                                                const class GALGAS_lstring & inOperand2,
                                                                                                                const class GALGAS_lstring & inOperand3,
                                                                                                                const class GALGAS_formalParameterListAST & inOperand4,
                                                                                                                const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                                                                const class GALGAS_location & inOperand6,
                                                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mExtensionMethodFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mExtensionMethodInstructionList ;
  public: GALGAS_location mProperty_mEndOfMethodLocation ;


//--- Default constructor
  public: cPtr_extensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionMethodAST (const GALGAS_bool & in_isPredefined,
                                   const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mExtensionMethodName,
                                   const GALGAS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                   const GALGAS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                   const GALGAS_location & in_mEndOfMethodLocation
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
// Phase 1: @extensionMethodAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionMethodAST_2D_weak (const class GALGAS_extensionMethodAST & inSource) ;

  public: GALGAS_extensionMethodAST_2D_weak & operator = (const class GALGAS_extensionMethodAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionMethodAST bang_extensionMethodAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionMethodAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionMethodAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionMethodAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_extensionSetterAST (const class cPtr_extensionSetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mExtensionSetterName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mExtensionSetterFormalParameterList (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mExtensionSetterInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfSetterDeclarationLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionSetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                         const class GALGAS_bool & inOperand1,
                                                                                                                         const class GALGAS_lstring & inOperand2,
                                                                                                                         const class GALGAS_lstring & inOperand3,
                                                                                                                         const class GALGAS_formalParameterListAST & inOperand4,
                                                                                                                         const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                                                                         const class GALGAS_location & inOperand6,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionSetterAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_bool & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_lstring & inOperand3,
                                                                 const class GALGAS_formalParameterListAST & inOperand4,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                 const class GALGAS_location & inOperand6
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionSetterAST class


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
  public: void extensionSetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                const class GALGAS_bool & inOperand1,
                                                                                                                const class GALGAS_lstring & inOperand2,
                                                                                                                const class GALGAS_lstring & inOperand3,
                                                                                                                const class GALGAS_formalParameterListAST & inOperand4,
                                                                                                                const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                                                                const class GALGAS_location & inOperand6,
                                                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mExtensionSetterFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mExtensionSetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfSetterDeclarationLocation ;


//--- Default constructor
  public: cPtr_extensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionSetterAST (const GALGAS_bool & in_isPredefined,
                                   const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mExtensionSetterName,
                                   const GALGAS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                   const GALGAS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                   const GALGAS_location & in_mEndOfSetterDeclarationLocation
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
// Phase 1: @extensionSetterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionSetterAST_2D_weak (const class GALGAS_extensionSetterAST & inSource) ;

  public: GALGAS_extensionSetterAST_2D_weak & operator = (const class GALGAS_extensionSetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionSetterAST bang_extensionSetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionSetterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionSetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionSetterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @initializerAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_initializerAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_initializerAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_initializerAST (const class cPtr_initializerAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_formalInputParameterListAST readProperty_mFormalParameterList (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfInitializerLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_initializerAST init_21_isPredefined_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                             const class GALGAS_semanticInstructionListAST & inOperand3,
                                                                             const class GALGAS_location & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_initializerAST extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_initializerAST class_func_new (const class GALGAS_bool & inOperand0,
                                                             const class GALGAS_lstring & inOperand1,
                                                             const class GALGAS_formalInputParameterListAST & inOperand2,
                                                             const class GALGAS_semanticInstructionListAST & inOperand3,
                                                             const class GALGAS_location & inOperand4
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_initializerAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_initializerAST class


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
  public: void initializerAST_init_21_isPredefined_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                    const class GALGAS_semanticInstructionListAST & inOperand3,
                                                                    const class GALGAS_location & inOperand4,
                                                                    Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_formalInputParameterListAST mProperty_mFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfInitializerLocation ;


//--- Default constructor
  public: cPtr_initializerAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_initializerAST (const GALGAS_bool & in_isPredefined,
                               const GALGAS_lstring & in_mTypeName,
                               const GALGAS_formalInputParameterListAST & in_mFormalParameterList,
                               const GALGAS_semanticInstructionListAST & in_mInstructionList,
                               const GALGAS_location & in_mEndOfInitializerLocation
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
// Phase 1: @initializerAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_initializerAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_initializerAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_initializerAST_2D_weak (const class GALGAS_initializerAST & inSource) ;

  public: GALGAS_initializerAST_2D_weak & operator = (const class GALGAS_initializerAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_initializerAST bang_initializerAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_initializerAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_initializerAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_initializerAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_initializerAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionGetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionGetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_overridingAbstractExtensionGetterAST (const class cPtr_overridingAbstractExtensionGetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionGetterName (void) const ;

  public: class GALGAS_formalInputParameterListAST readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionGetterReturnedTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overridingAbstractExtensionGetterAST init_21_isPredefined_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                                   const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                                                   const class GALGAS_lstring & inOperand4,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingAbstractExtensionGetterAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                   const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                                   const class GALGAS_lstring & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingAbstractExtensionGetterAST class


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
  public: void overridingAbstractExtensionGetterAST_init_21_isPredefined_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_lstring & inOperand2,
                                                                                          const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                                          const class GALGAS_lstring & inOperand4,
                                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterReturnedTypeName ;


//--- Default constructor
  public: cPtr_overridingAbstractExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionGetterAST (const GALGAS_bool & in_isPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                                     const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                     const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
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
// Phase 1: @overridingAbstractExtensionGetterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionGetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionGetterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingAbstractExtensionGetterAST_2D_weak (const class GALGAS_overridingAbstractExtensionGetterAST & inSource) ;

  public: GALGAS_overridingAbstractExtensionGetterAST_2D_weak & operator = (const class GALGAS_overridingAbstractExtensionGetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingAbstractExtensionGetterAST bang_overridingAbstractExtensionGetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionGetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingAbstractExtensionGetterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionGetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingAbstractExtensionGetterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionMethodAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionMethodAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_overridingAbstractExtensionMethodAST (const class cPtr_overridingAbstractExtensionMethodAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionMethodName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mOverridingExtensionMethodFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overridingAbstractExtensionMethodAST init_21_isPredefined_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1,
                                                                                               const class GALGAS_lstring & inOperand2,
                                                                                               const class GALGAS_formalParameterListAST & inOperand3,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingAbstractExtensionMethodAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                   const class GALGAS_formalParameterListAST & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingAbstractExtensionMethodAST class


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
  public: void overridingAbstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_formalParameterListAST & inOperand3,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;


//--- Default constructor
  public: cPtr_overridingAbstractExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionMethodAST (const GALGAS_bool & in_isPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                                     const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList
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
// Phase 1: @overridingAbstractExtensionMethodAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionMethodAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionMethodAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingAbstractExtensionMethodAST_2D_weak (const class GALGAS_overridingAbstractExtensionMethodAST & inSource) ;

  public: GALGAS_overridingAbstractExtensionMethodAST_2D_weak & operator = (const class GALGAS_overridingAbstractExtensionMethodAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingAbstractExtensionMethodAST bang_overridingAbstractExtensionMethodAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionMethodAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingAbstractExtensionMethodAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionMethodAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingAbstractExtensionMethodAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionSetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionSetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_overridingAbstractExtensionSetterAST (const class cPtr_overridingAbstractExtensionSetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionSetterName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mOverridingExtensionSetterFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overridingAbstractExtensionSetterAST init_21_isPredefined_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1,
                                                                                               const class GALGAS_lstring & inOperand2,
                                                                                               const class GALGAS_formalParameterListAST & inOperand3,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingAbstractExtensionSetterAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                   const class GALGAS_formalParameterListAST & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingAbstractExtensionSetterAST class


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
  public: void overridingAbstractExtensionSetterAST_init_21_isPredefined_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_formalParameterListAST & inOperand3,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;


//--- Default constructor
  public: cPtr_overridingAbstractExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionSetterAST (const GALGAS_bool & in_isPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                     const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList
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
// Phase 1: @overridingAbstractExtensionSetterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionSetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionSetterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingAbstractExtensionSetterAST_2D_weak (const class GALGAS_overridingAbstractExtensionSetterAST & inSource) ;

  public: GALGAS_overridingAbstractExtensionSetterAST_2D_weak & operator = (const class GALGAS_overridingAbstractExtensionSetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingAbstractExtensionSetterAST bang_overridingAbstractExtensionSetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionSetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingAbstractExtensionSetterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionSetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingAbstractExtensionSetterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionGetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionGetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionGetterAST (const class cPtr_overridingExtensionGetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionGetterName (void) const ;

  public: class GALGAS_formalInputParameterListAST readProperty_mOverridingExtensionGetterFormalInputParameterList (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionGetterReturnedTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionGetterReturnedVariableName (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mOverridingExtensionGetterInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfReaderLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overridingExtensionGetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                           const class GALGAS_bool & inOperand1,
                                                                                                                                           const class GALGAS_lstring & inOperand2,
                                                                                                                                           const class GALGAS_lstring & inOperand3,
                                                                                                                                           const class GALGAS_formalInputParameterListAST & inOperand4,
                                                                                                                                           const class GALGAS_lstring & inOperand5,
                                                                                                                                           const class GALGAS_lstring & inOperand6,
                                                                                                                                           const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                                                                                           const class GALGAS_location & inOperand8,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingExtensionGetterAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_bool & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3,
                                                                           const class GALGAS_formalInputParameterListAST & inOperand4,
                                                                           const class GALGAS_lstring & inOperand5,
                                                                           const class GALGAS_lstring & inOperand6,
                                                                           const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                           const class GALGAS_location & inOperand8
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingExtensionGetterAST class


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
  public: void overridingExtensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                  const class GALGAS_bool & inOperand1,
                                                                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                                                                  const class GALGAS_lstring & inOperand3,
                                                                                                                                  const class GALGAS_formalInputParameterListAST & inOperand4,
                                                                                                                                  const class GALGAS_lstring & inOperand5,
                                                                                                                                  const class GALGAS_lstring & inOperand6,
                                                                                                                                  const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                                                                                  const class GALGAS_location & inOperand8,
                                                                                                                                  Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mOverridingExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mOverridingExtensionGetterReturnedTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionGetterReturnedVariableName ;
  public: GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionGetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfReaderLocation ;


//--- Default constructor
  public: cPtr_overridingExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionGetterAST (const GALGAS_bool & in_isPredefined,
                                             const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionGetterName,
                                             const GALGAS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                             const GALGAS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                             const GALGAS_location & in_mEndOfReaderLocation
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
// Phase 1: @overridingExtensionGetterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionGetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionGetterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingExtensionGetterAST_2D_weak (const class GALGAS_overridingExtensionGetterAST & inSource) ;

  public: GALGAS_overridingExtensionGetterAST_2D_weak & operator = (const class GALGAS_overridingExtensionGetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingExtensionGetterAST bang_overridingExtensionGetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionGetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingExtensionGetterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingExtensionGetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingExtensionGetterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionMethodAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionMethodAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionMethodAST (const class cPtr_overridingExtensionMethodAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionMethodName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mOverridingExtensionMethodFormalParameterList (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mOverridingExtensionMethodInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfMethodLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overridingExtensionMethodAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                   const class GALGAS_bool & inOperand1,
                                                                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                                                                   const class GALGAS_formalParameterListAST & inOperand4,
                                                                                                                                   const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                                                                                   const class GALGAS_location & inOperand6,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingExtensionMethodAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_bool & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3,
                                                                           const class GALGAS_formalParameterListAST & inOperand4,
                                                                           const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                           const class GALGAS_location & inOperand6
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingExtensionMethodAST class


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
  public: void overridingExtensionMethodAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                          const class GALGAS_bool & inOperand1,
                                                                                                                          const class GALGAS_lstring & inOperand2,
                                                                                                                          const class GALGAS_lstring & inOperand3,
                                                                                                                          const class GALGAS_formalParameterListAST & inOperand4,
                                                                                                                          const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                                                                          const class GALGAS_location & inOperand6,
                                                                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionMethodInstructionList ;
  public: GALGAS_location mProperty_mEndOfMethodLocation ;


//--- Default constructor
  public: cPtr_overridingExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionMethodAST (const GALGAS_bool & in_isPredefined,
                                             const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                             const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                             const GALGAS_location & in_mEndOfMethodLocation
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
// Phase 1: @overridingExtensionMethodAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionMethodAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionMethodAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingExtensionMethodAST_2D_weak (const class GALGAS_overridingExtensionMethodAST & inSource) ;

  public: GALGAS_overridingExtensionMethodAST_2D_weak & operator = (const class GALGAS_overridingExtensionMethodAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingExtensionMethodAST bang_overridingExtensionMethodAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionMethodAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingExtensionMethodAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingExtensionMethodAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingExtensionMethodAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionSetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionSetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionSetterAST (const class cPtr_overridingExtensionSetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionSetterName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mOverridingExtensionSetterFormalParameterList (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mOverridingExtensionSetterInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfSetterDeclarationLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overridingExtensionSetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                   const class GALGAS_bool & inOperand1,
                                                                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                                                                   const class GALGAS_formalParameterListAST & inOperand4,
                                                                                                                                   const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                                                                                   const class GALGAS_location & inOperand6,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingExtensionSetterAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_bool & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3,
                                                                           const class GALGAS_formalParameterListAST & inOperand4,
                                                                           const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                           const class GALGAS_location & inOperand6
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingExtensionSetterAST class


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
  public: void overridingExtensionSetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                          const class GALGAS_bool & inOperand1,
                                                                                                                          const class GALGAS_lstring & inOperand2,
                                                                                                                          const class GALGAS_lstring & inOperand3,
                                                                                                                          const class GALGAS_formalParameterListAST & inOperand4,
                                                                                                                          const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                                                                          const class GALGAS_location & inOperand6,
                                                                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionSetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfSetterDeclarationLocation ;


//--- Default constructor
  public: cPtr_overridingExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionSetterAST (const GALGAS_bool & in_isPredefined,
                                             const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                             const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                             const GALGAS_location & in_mEndOfSetterDeclarationLocation
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
// Phase 1: @overridingExtensionSetterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionSetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionSetterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingExtensionSetterAST_2D_weak (const class GALGAS_overridingExtensionSetterAST & inSource) ;

  public: GALGAS_overridingExtensionSetterAST_2D_weak & operator = (const class GALGAS_overridingExtensionSetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingExtensionSetterAST bang_overridingExtensionSetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionSetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingExtensionSetterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingExtensionSetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingExtensionSetterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum typeKindEnum
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_typeKindEnum (void) ;

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
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_classType (class GALGAS_bool & out_isReference) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_weakReferenceType (class GALGAS_unifiedTypeMapEntry & out_referenceType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_enumType (class GALGAS_constantIndexMap & out_constantMap) const ;

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
  public: static GALGAS_typeKindEnum extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeKindEnum class_func_boolsetType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_classType (const class GALGAS_bool & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_enumType (const class GALGAS_constantIndexMap & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_externType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_graphType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_listMapType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_listType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_mapType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_otherType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_packageType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_sharedMapEntryType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_sharedMapType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_sortedListType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_structType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum class_func_weakReferenceType (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeKindEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_classType (class GALGAS_bool & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_enumType (class GALGAS_constantIndexMap & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_weakReferenceType (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindEnum_2D_classType_3F_ getter_classType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindEnum_2D_enumType_3F_ getter_enumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolsetType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isClassType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isExternType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGraphType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isListMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isListType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOtherType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPackageType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSharedMapEntryType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSharedMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSortedListType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStructType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isWeakReferenceType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindEnum_2D_weakReferenceType_3F_ getter_weakReferenceType (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKindEnum class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2D_classType struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum_2D_classType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_isReference ;
  public: inline GALGAS_bool readProperty_isReference (void) const {
    return mProperty_isReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typeKindEnum_2D_classType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsReference (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isReference = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typeKindEnum_2D_classType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typeKindEnum_2D_classType (const GALGAS_bool & in_isReference) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeKindEnum_2D_classType init_21_ (const class GALGAS_bool & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKindEnum_2D_classType extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeKindEnum_2D_classType class_func_new (const class GALGAS_bool & inOperand0,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeKindEnum_2D_classType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKindEnum_2D_classType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2D_classType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKindEnum-classType? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum_2D_classType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_typeKindEnum_2D_classType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_typeKindEnum_2D_classType_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_typeKindEnum_2D_classType_3F_ (const GALGAS_typeKindEnum_2D_classType & inValue) ;
  public: static GALGAS_typeKindEnum_2D_classType_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_typeKindEnum_2D_classType unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_typeKindEnum_2D_classType_3F_ extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKindEnum_2D_classType_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2D_classType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantIndexMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constantIndexMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_constantIndexMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_constantIndexMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_constantIndexMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_constantIndexMap (const GALGAS_constantIndexMap & inSource) ;
  public: GALGAS_constantIndexMap & operator = (const GALGAS_constantIndexMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_constantIndexMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constantIndexMap extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_constantIndexMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_constantIndexMap class_func_mapWithMapToOverride (const class GALGAS_constantIndexMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_associatedValueDescriptorList & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_constantIndexMap add_operation (const GALGAS_constantIndexMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_associatedValueDescriptorList constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedTypeListForKey (class GALGAS_associatedValueDescriptorList constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_associatedValueDescriptorList & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_associatedValueDescriptorList getter_mAssociatedTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constantIndexMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_constantIndexMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_constantIndexMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_constantIndexMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_constantIndexMap ;
 
} ; // End of GALGAS_constantIndexMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_constantIndexMap : public cGenericAbstractEnumerator {
  public: cEnumerator_constantIndexMap (const GALGAS_constantIndexMap & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GALGAS_associatedValueDescriptorList current_mAssociatedTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_constantIndexMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2D_enumType struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum_2D_enumType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_constantIndexMap mProperty_constantMap ;
  public: inline GALGAS_constantIndexMap readProperty_constantMap (void) const {
    return mProperty_constantMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typeKindEnum_2D_enumType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstantMap (const GALGAS_constantIndexMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typeKindEnum_2D_enumType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typeKindEnum_2D_enumType (const GALGAS_constantIndexMap & in_constantMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeKindEnum_2D_enumType init_21_ (const class GALGAS_constantIndexMap & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKindEnum_2D_enumType extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeKindEnum_2D_enumType class_func_new (const class GALGAS_constantIndexMap & inOperand0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeKindEnum_2D_enumType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKindEnum_2D_enumType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2D_enumType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKindEnum-enumType? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum_2D_enumType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_typeKindEnum_2D_enumType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_typeKindEnum_2D_enumType_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_typeKindEnum_2D_enumType_3F_ (const GALGAS_typeKindEnum_2D_enumType & inValue) ;
  public: static GALGAS_typeKindEnum_2D_enumType_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_typeKindEnum_2D_enumType unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_typeKindEnum_2D_enumType_3F_ extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKindEnum_2D_enumType_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2D_enumType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2D_weakReferenceType struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum_2D_weakReferenceType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_referenceType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_referenceType (void) const {
    return mProperty_referenceType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typeKindEnum_2D_weakReferenceType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setReferenceType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_referenceType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typeKindEnum_2D_weakReferenceType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typeKindEnum_2D_weakReferenceType (const GALGAS_unifiedTypeMapEntry & in_referenceType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeKindEnum_2D_weakReferenceType init_21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKindEnum_2D_weakReferenceType extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeKindEnum_2D_weakReferenceType class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeKindEnum_2D_weakReferenceType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKindEnum_2D_weakReferenceType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2D_weakReferenceType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKindEnum-weakReferenceType? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum_2D_weakReferenceType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_typeKindEnum_2D_weakReferenceType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_typeKindEnum_2D_weakReferenceType_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_typeKindEnum_2D_weakReferenceType_3F_ (const GALGAS_typeKindEnum_2D_weakReferenceType & inValue) ;
  public: static GALGAS_typeKindEnum_2D_weakReferenceType_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_typeKindEnum_2D_weakReferenceType unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_typeKindEnum_2D_weakReferenceType_3F_ extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKindEnum_2D_weakReferenceType_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2D_weakReferenceType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertyMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_propertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_propertyMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_propertyMap (const GALGAS_propertyMap & inSource) ;
  public: GALGAS_propertyMap & operator = (const GALGAS_propertyMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertyMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyMap extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_propertyMap class_func_mapWithMapToOverride (const class GALGAS_propertyMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_AccessControl & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_propertyMap add_operation (const GALGAS_propertyMap & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_AccessControl constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessControlForKey (class GALGAS_AccessControl constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsConstantForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_AccessControl & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_AccessControl getter_mAccessControlForKey (const class GALGAS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConstantForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mPropertyTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_propertyMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertyMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_propertyMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_propertyMap ;
 
} ; // End of GALGAS_propertyMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertyMap : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_AccessControl current_mAccessControl (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsConstant (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mPropertyType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_propertyMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap ;

//--------------------------------------------------------------------------------------------------
//   enum AccessControl
//--------------------------------------------------------------------------------------------------

class GALGAS_AccessControl : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_AccessControl (void) ;

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
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_protectedAccess (class GALGAS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_protectedSetAccess (class GALGAS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_privateAccess (class GALGAS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_privateSetAccess (class GALGAS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fileprivateAccess (class GALGAS_location & out_declarationLocation) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fileprivateSetAccess (class GALGAS_location & out_declarationLocation) const ;

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
  public: static GALGAS_AccessControl extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AccessControl class_func_fileprivateAccess (const class GALGAS_location & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl class_func_fileprivateSetAccess (const class GALGAS_location & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl class_func_privateAccess (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl class_func_privateSetAccess (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl class_func_protectedAccess (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl class_func_protectedSetAccess (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl class_func_publicAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_fileprivateAccess (class GALGAS_location & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_fileprivateSetAccess (class GALGAS_location & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_privateAccess (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_privateSetAccess (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_protectedAccess (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_protectedSetAccess (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_AccessControl_2D_fileprivateAccess_3F_ getter_fileprivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ getter_fileprivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFileprivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFileprivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProtectedAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProtectedSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPublicAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_AccessControl_2D_privateAccess_3F_ getter_privateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_AccessControl_2D_privateSetAccess_3F_ getter_privateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_AccessControl_2D_protectedAccess_3F_ getter_protectedAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_AccessControl_2D_protectedSetAccess_3F_ getter_protectedSetAccess (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_AccessControl class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyMap : public cMapElement {
//--- Map attributes
  public: GALGAS_AccessControl mProperty_mAccessControl ;
  public: GALGAS_bool mProperty_mIsConstant ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mPropertyType ;

//--- Constructors
  public: cMapElement_propertyMap (const GALGAS_propertyMap_2D_element & inValue
                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                   const GALGAS_AccessControl & in_mAccessControl,
                                   const GALGAS_bool & in_mIsConstant,
                                   const GALGAS_unifiedTypeMapEntry & in_mPropertyType
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
// Phase 1: @propertyMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_AccessControl mProperty_mAccessControl ;
  public: inline GALGAS_AccessControl readProperty_mAccessControl (void) const {
    return mProperty_mAccessControl ;
  }

  public: GALGAS_bool mProperty_mIsConstant ;
  public: inline GALGAS_bool readProperty_mIsConstant (void) const {
    return mProperty_mIsConstant ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mPropertyType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mPropertyType (void) const {
    return mProperty_mPropertyType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAccessControl (const GALGAS_AccessControl & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessControl = inValue ;
  }

  public: inline void setter_setMIsConstant (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConstant = inValue ;
  }

  public: inline void setter_setMPropertyType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_AccessControl & in_mAccessControl,
                                         const GALGAS_bool & in_mIsConstant,
                                         const GALGAS_unifiedTypeMapEntry & in_mPropertyType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertyMap_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_AccessControl & inOperand1,
                                                                     const class GALGAS_bool & inOperand2,
                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_AccessControl & inOperand1,
                                                                     const class GALGAS_bool & inOperand2,
                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand3,
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
 
} ; // End of GALGAS_propertyMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: propertyMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_propertyMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_propertyMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_propertyMap_2D_element_3F_ (const GALGAS_propertyMap_2D_element & inValue) ;
  public: static GALGAS_propertyMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_propertyMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_propertyMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classFunctionMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_classFunctionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GALGAS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: inline GALGAS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnedType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mReturnedType (void) const {
    return mProperty_mReturnedType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_classFunctionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMReturnedType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_classFunctionMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_classFunctionMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_functionSignature & in_mArgumentTypeList,
                                              const GALGAS_bool & in_mHasCompilerArgument,
                                              const GALGAS_unifiedTypeMapEntry & in_mReturnedType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_classFunctionMap_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_functionSignature & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_classFunctionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_classFunctionMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_functionSignature & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand3,
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
 
} ; // End of GALGAS_classFunctionMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classFunctionMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: classFunctionMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_classFunctionMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_classFunctionMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_classFunctionMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_classFunctionMap_2D_element_3F_ (const GALGAS_classFunctionMap_2D_element & inValue) ;
  public: static GALGAS_classFunctionMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_classFunctionMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_classFunctionMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_classFunctionMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classFunctionMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getterMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_methodKind mProperty_mKind ;
  public: inline GALGAS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GALGAS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

  public: GALGAS_location mProperty_mDeclarationLocation ;
  public: inline GALGAS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: inline GALGAS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnedType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mReturnedType (void) const {
    return mProperty_mReturnedType ;
  }

  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: inline GALGAS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GALGAS_string mProperty_mGetterNameThatObsoletesInvokationName ;
  public: inline GALGAS_string readProperty_mGetterNameThatObsoletesInvokationName (void) const {
    return mProperty_mGetterNameThatObsoletesInvokationName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_getterMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GALGAS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMReturnedType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

  public: inline void setter_setMQualifier (const GALGAS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMGetterNameThatObsoletesInvokationName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterNameThatObsoletesInvokationName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_getterMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_getterMap_2D_element (const GALGAS_lstring & in_lkey,
                                       const GALGAS_methodKind & in_mKind,
                                       const GALGAS_functionSignature & in_mArgumentTypeList,
                                       const GALGAS_location & in_mDeclarationLocation,
                                       const GALGAS_bool & in_mHasCompilerArgument,
                                       const GALGAS_unifiedTypeMapEntry & in_mReturnedType,
                                       const GALGAS_methodQualifier & in_mQualifier,
                                       const GALGAS_string & in_mGetterNameThatObsoletesInvokationName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_getterMap_2D_element init_21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_methodKind & inOperand1,
                                                                                   const class GALGAS_functionSignature & inOperand2,
                                                                                   const class GALGAS_location & inOperand3,
                                                                                   const class GALGAS_bool & inOperand4,
                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                                   const class GALGAS_methodQualifier & inOperand6,
                                                                                   const class GALGAS_string & inOperand7,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_getterMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_methodKind & inOperand1,
                                                                   const class GALGAS_functionSignature & inOperand2,
                                                                   const class GALGAS_location & inOperand3,
                                                                   const class GALGAS_bool & inOperand4,
                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                   const class GALGAS_methodQualifier & inOperand6,
                                                                   const class GALGAS_string & inOperand7,
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
 
} ; // End of GALGAS_getterMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: getterMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getterMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_getterMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_getterMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_getterMap_2D_element_3F_ (const GALGAS_getterMap_2D_element & inValue) ;
  public: static GALGAS_getterMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_getterMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_getterMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getterMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setterMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_setterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_methodKind mProperty_mKind ;
  public: inline GALGAS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GALGAS_formalParameterSignature mProperty_mParameterList ;
  public: inline GALGAS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: inline GALGAS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: inline GALGAS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GALGAS_string mProperty_mErrorMessage ;
  public: inline GALGAS_string readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_setterMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GALGAS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMParameterList (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMQualifier (const GALGAS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_setterMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_setterMap_2D_element (const GALGAS_lstring & in_lkey,
                                       const GALGAS_methodKind & in_mKind,
                                       const GALGAS_formalParameterSignature & in_mParameterList,
                                       const GALGAS_bool & in_mHasCompilerArgument,
                                       const GALGAS_methodQualifier & in_mQualifier,
                                       const GALGAS_string & in_mErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_setterMap_2D_element init_21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_methodKind & inOperand1,
                                                                           const class GALGAS_formalParameterSignature & inOperand2,
                                                                           const class GALGAS_bool & inOperand3,
                                                                           const class GALGAS_methodQualifier & inOperand4,
                                                                           const class GALGAS_string & inOperand5,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_setterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_setterMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_methodKind & inOperand1,
                                                                   const class GALGAS_formalParameterSignature & inOperand2,
                                                                   const class GALGAS_bool & inOperand3,
                                                                   const class GALGAS_methodQualifier & inOperand4,
                                                                   const class GALGAS_string & inOperand5,
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
 
} ; // End of GALGAS_setterMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: setterMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_setterMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_setterMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_setterMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_setterMap_2D_element_3F_ (const GALGAS_setterMap_2D_element & inValue) ;
  public: static GALGAS_setterMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_setterMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_setterMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_setterMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instanceMethodMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_instanceMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_methodKind mProperty_mKind ;
  public: inline GALGAS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GALGAS_formalParameterSignature mProperty_mParameterList ;
  public: inline GALGAS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GALGAS_location mProperty_mDeclarationLocation ;
  public: inline GALGAS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: inline GALGAS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: inline GALGAS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GALGAS_string mProperty_mErrorMessage ;
  public: inline GALGAS_string readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_instanceMethodMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GALGAS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMParameterList (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMQualifier (const GALGAS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_instanceMethodMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_instanceMethodMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_methodKind & in_mKind,
                                               const GALGAS_formalParameterSignature & in_mParameterList,
                                               const GALGAS_location & in_mDeclarationLocation,
                                               const GALGAS_bool & in_mHasCompilerArgument,
                                               const GALGAS_methodQualifier & in_mQualifier,
                                               const GALGAS_string & in_mErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_instanceMethodMap_2D_element init_21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_methodKind & inOperand1,
                                                                                       const class GALGAS_formalParameterSignature & inOperand2,
                                                                                       const class GALGAS_location & inOperand3,
                                                                                       const class GALGAS_bool & inOperand4,
                                                                                       const class GALGAS_methodQualifier & inOperand5,
                                                                                       const class GALGAS_string & inOperand6,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instanceMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_instanceMethodMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_methodKind & inOperand1,
                                                                           const class GALGAS_formalParameterSignature & inOperand2,
                                                                           const class GALGAS_location & inOperand3,
                                                                           const class GALGAS_bool & inOperand4,
                                                                           const class GALGAS_methodQualifier & inOperand5,
                                                                           const class GALGAS_string & inOperand6,
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
 
} ; // End of GALGAS_instanceMethodMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: instanceMethodMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_instanceMethodMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_instanceMethodMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_instanceMethodMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_instanceMethodMap_2D_element_3F_ (const GALGAS_instanceMethodMap_2D_element & inValue) ;
  public: static GALGAS_instanceMethodMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_instanceMethodMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_instanceMethodMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_instanceMethodMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classMethodMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_classMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_formalParameterSignature mProperty_mParameterList ;
  public: inline GALGAS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: inline GALGAS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_classMethodMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMParameterList (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_classMethodMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_classMethodMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_formalParameterSignature & in_mParameterList,
                                            const GALGAS_bool & in_mHasCompilerArgument) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_classMethodMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_formalParameterSignature & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_classMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_classMethodMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_formalParameterSignature & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
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
 
} ; // End of GALGAS_classMethodMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: classMethodMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_classMethodMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_classMethodMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_classMethodMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_classMethodMap_2D_element_3F_ (const GALGAS_classMethodMap_2D_element & inValue) ;
  public: static GALGAS_classMethodMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_classMethodMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_classMethodMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_classMethodMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @subscriptMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_subscriptMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_subscriptMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_subscriptMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_subscriptMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_subscriptMap (const GALGAS_subscriptMap & inSource) ;
  public: GALGAS_subscriptMap & operator = (const GALGAS_subscriptMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_subscriptMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_subscriptMap extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_subscriptMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_subscriptMap class_func_mapWithMapToOverride (const class GALGAS_subscriptMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_functionSignature & inOperand1,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_subscriptMap add_operation (const GALGAS_subscriptMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature constinArgument1,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setArgumentTypeListForKey (class GALGAS_functionSignature constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setValueTypeForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature & outArgument1,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_argumentTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_subscriptMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_valueTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_subscriptMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_subscriptMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_subscriptMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_subscriptMap ;
 
} ; // End of GALGAS_subscriptMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_subscriptMap : public cGenericAbstractEnumerator {
  public: cEnumerator_subscriptMap (const GALGAS_subscriptMap & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_functionSignature current_argumentTypeList (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_valueType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_subscriptMap_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_functionSignature mProperty_argumentTypeList ;
  public: GALGAS_unifiedTypeMapEntry mProperty_valueType ;

//--- Constructors
  public: cMapElement_subscriptMap (const GALGAS_subscriptMap_2D_element & inValue
                                    COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_subscriptMap (const GALGAS_lstring & inKey,
                                    const GALGAS_functionSignature & in_argumentTypeList,
                                    const GALGAS_unifiedTypeMapEntry & in_valueType
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
// Phase 1: @subscriptMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_subscriptMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_functionSignature mProperty_argumentTypeList ;
  public: inline GALGAS_functionSignature readProperty_argumentTypeList (void) const {
    return mProperty_argumentTypeList ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_valueType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_valueType (void) const {
    return mProperty_valueType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_subscriptMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setArgumentTypeList (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_argumentTypeList = inValue ;
  }

  public: inline void setter_setValueType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_valueType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_subscriptMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_subscriptMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_functionSignature & in_argumentTypeList,
                                          const GALGAS_unifiedTypeMapEntry & in_valueType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_subscriptMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_functionSignature & inOperand1,
                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_subscriptMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_subscriptMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_functionSignature & inOperand1,
                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand2,
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
 
} ; // End of GALGAS_subscriptMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: subscriptMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_subscriptMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_subscriptMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_subscriptMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_subscriptMap_2D_element_3F_ (const GALGAS_subscriptMap_2D_element & inValue) ;
  public: static GALGAS_subscriptMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_subscriptMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_subscriptMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_subscriptMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDescriptorList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumerationDescriptorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mEnumeratedType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mEnumeratedType (void) const {
    return mProperty_mEnumeratedType ;
  }

  public: GALGAS_string mProperty_mEnumerationName ;
  public: inline GALGAS_string readProperty_mEnumerationName (void) const {
    return mProperty_mEnumerationName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_enumerationDescriptorList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumeratedType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedType = inValue ;
  }

  public: inline void setter_setMEnumerationName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_enumerationDescriptorList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_enumerationDescriptorList_2D_element (const GALGAS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                       const GALGAS_string & in_mEnumerationName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_enumerationDescriptorList_2D_element init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationDescriptorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumerationDescriptorList_2D_element class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
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
 
} ; // End of GALGAS_enumerationDescriptorList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionSignature_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GALGAS_string mProperty_mFormalArgumentName ;
  public: inline GALGAS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GALGAS_bool mProperty_isConstant ;
  public: inline GALGAS_bool readProperty_isConstant (void) const {
    return mProperty_isConstant ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_functionSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setIsConstant (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConstant = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_functionSignature_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_functionSignature_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                               const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                               const GALGAS_string & in_mFormalArgumentName,
                                               const GALGAS_bool & in_isConstant) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_functionSignature_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                           const class GALGAS_string & inOperand2,
                                                                           const class GALGAS_bool & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionSignature_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                           const class GALGAS_string & inOperand2,
                                                                           const class GALGAS_bool & inOperand3,
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
 
} ; // End of GALGAS_functionSignature_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionSignature_2D_element ;

//--------------------------------------------------------------------------------------------------
//   enum headerKind
//--------------------------------------------------------------------------------------------------

class GALGAS_headerKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_headerKind (void) ;

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
  public: static GALGAS_headerKind extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_headerKind class_func_noHeader (LOCATION_ARGS) ;

  public: static class GALGAS_headerKind class_func_oneHeader (LOCATION_ARGS) ;

  public: static class GALGAS_headerKind class_func_twoHeaders (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_headerKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoHeader (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOneHeader (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTwoHeaders (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_headerKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerKind ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKindEnum string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_typeKindEnum & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constantIndexMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constantIndexMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;
  public: GALGAS_associatedValueDescriptorList mProperty_mAssociatedTypeList ;

//--- Constructors
  public: cMapElement_constantIndexMap (const GALGAS_constantIndexMap_2D_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_constantIndexMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex,
                                        const GALGAS_associatedValueDescriptorList & in_mAssociatedTypeList
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

class GALGAS_bool extensionGetter_generateCppObjectComparison (const class GALGAS_typeFeatures & inObject,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableAttributes boolset
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVariableAttributes : public AC_GALGAS_root {
//--------------------------------- Properties
  private: uint64_t mFlags ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GALGAS_localVariableAttributes (void) ;

//--------------------------------- Private constructor
  private: GALGAS_localVariableAttributes (const uint64_t inFlags) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localVariableAttributes init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableAttributes extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localVariableAttributes class_func_acceptInitializedStateAsFinalState (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes class_func_acceptReadStateAsFinalState (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes class_func_all (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes class_func_none (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes class_func_rejectDeclaredStateAsFinalState (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes class_func_rejectWriteInInitializedAndReadStates (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes class_func_suggestDeclareUnusedParameterAsUnused (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes class_func_warnsOnAnyAcces (LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GALGAS_localVariableAttributes operator_and (const GALGAS_localVariableAttributes & inOperand
                                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GALGAS_localVariableAttributes operator_or (const GALGAS_localVariableAttributes & inOperand
                                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GALGAS_localVariableAttributes operator_xor (const GALGAS_localVariableAttributes & inOperand
                                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GALGAS_localVariableAttributes operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GALGAS_localVariableAttributes substract_operation (const GALGAS_localVariableAttributes & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_localVariableAttributes & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_acceptInitializedStateAsFinalState (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_acceptReadStateAsFinalState (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_all (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_none (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_rejectDeclaredStateAsFinalState (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_rejectWriteInInitializedAndReadStates (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_suggestDeclareUnusedParameterAsUnused (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_warnsOnAnyAcces (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVariableAttributes class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableAttributes ;

//--------------------------------------------------------------------------------------------------
//   enum localVarValuation
//--------------------------------------------------------------------------------------------------

class GALGAS_localVarValuation : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_localVarValuation (void) ;

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
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_declared (class GALGAS_bool & out_usedInSubscope) const ;

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
  public: static GALGAS_localVarValuation extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localVarValuation class_func_declared (const class GALGAS_bool & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_localVarValuation class_func_initialized (LOCATION_ARGS) ;

  public: static class GALGAS_localVarValuation class_func_invalid (LOCATION_ARGS) ;

  public: static class GALGAS_localVarValuation class_func_mutated (LOCATION_ARGS) ;

  public: static class GALGAS_localVarValuation class_func_read (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_localVarValuation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_declared (class GALGAS_bool & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_localVarValuation_2D_declared_3F_ getter_declared (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDeclared (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInitialized (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInvalid (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMutated (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRead (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVarValuation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVarValuation_2D_declared struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVarValuation_2D_declared : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_usedInSubscope ;
  public: inline GALGAS_bool readProperty_usedInSubscope (void) const {
    return mProperty_usedInSubscope ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_localVarValuation_2D_declared (void) ;

//--------------------------------- Property setters
  public: inline void setter_setUsedInSubscope (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_usedInSubscope = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_localVarValuation_2D_declared (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_localVarValuation_2D_declared (const GALGAS_bool & in_usedInSubscope) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localVarValuation_2D_declared init_21_ (const class GALGAS_bool & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVarValuation_2D_declared extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localVarValuation_2D_declared class_func_new (const class GALGAS_bool & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_localVarValuation_2D_declared & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVarValuation_2D_declared class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation_2D_declared ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: localVarValuation-declared? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVarValuation_2D_declared_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_localVarValuation_2D_declared mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_localVarValuation_2D_declared_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_localVarValuation_2D_declared_3F_ (const GALGAS_localVarValuation_2D_declared & inValue) ;
  public: static GALGAS_localVarValuation_2D_declared_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_localVarValuation_2D_declared unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_localVarValuation_2D_declared_3F_ extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVarValuation_2D_declared_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation_2D_declared_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @scopeLocalVarMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_scopeLocalVarMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_scopeLocalVarMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_scopeLocalVarMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_scopeLocalVarMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_scopeLocalVarMap (const GALGAS_scopeLocalVarMap & inSource) ;
  public: GALGAS_scopeLocalVarMap & operator = (const GALGAS_scopeLocalVarMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_scopeLocalVarMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_scopeLocalVarMap extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_scopeLocalVarMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_scopeLocalVarMap class_func_mapWithMapToOverride (const class GALGAS_scopeLocalVarMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_localVariableAttributes & inOperand4,
                                                     const class GALGAS_localVarValuation & inOperand5,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_scopeLocalVarMap add_operation (const GALGAS_scopeLocalVarMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument1,
                                                  class GALGAS_string constinArgument2,
                                                  class GALGAS_string constinArgument3,
                                                  class GALGAS_localVariableAttributes constinArgument4,
                                                  class GALGAS_localVarValuation constinArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_localVariableAttributes & outArgument4,
                                                  class GALGAS_localVarValuation & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributesForKey (class GALGAS_localVariableAttributes constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameForKey (class GALGAS_string constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameForCheckingFormalParameterUsingForKey (class GALGAS_string constinArgument0,
                                                                                      class GALGAS_string constinArgument1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateForKey (class GALGAS_localVarValuation constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_localVariableAttributes & outArgument4,
                                                  class GALGAS_localVarValuation & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_localVariableAttributes getter_mAttributesForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppNameForKey (const class GALGAS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mNameForCheckingFormalParameterUsingForKey (const class GALGAS_string & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localVarValuation getter_mStateForKey (const class GALGAS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scopeLocalVarMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_scopeLocalVarMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_scopeLocalVarMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_scopeLocalVarMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_scopeLocalVarMap ;
 
} ; // End of GALGAS_scopeLocalVarMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_scopeLocalVarMap : public cGenericAbstractEnumerator {
  public: cEnumerator_scopeLocalVarMap (const GALGAS_scopeLocalVarMap & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;
  public: class GALGAS_localVariableAttributes current_mAttributes (LOCATION_ARGS) const ;
  public: class GALGAS_localVarValuation current_mState (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_scopeLocalVarMap_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: GALGAS_string mProperty_mCppName ;
  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GALGAS_localVariableAttributes mProperty_mAttributes ;
  public: GALGAS_localVarValuation mProperty_mState ;

//--- Constructors
  public: cMapElement_scopeLocalVarMap (const GALGAS_scopeLocalVarMap_2D_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_scopeLocalVarMap (const GALGAS_lstring & inKey,
                                        const GALGAS_unifiedTypeMapEntry & in_mType,
                                        const GALGAS_string & in_mCppName,
                                        const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                        const GALGAS_localVariableAttributes & in_mAttributes,
                                        const GALGAS_localVarValuation & in_mState
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
// Phase 1: @scopeLocalVarMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_scopeLocalVarMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_string mProperty_mCppName ;
  public: inline GALGAS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: inline GALGAS_string readProperty_mNameForCheckingFormalParameterUsing (void) const {
    return mProperty_mNameForCheckingFormalParameterUsing ;
  }

  public: GALGAS_localVariableAttributes mProperty_mAttributes ;
  public: inline GALGAS_localVariableAttributes readProperty_mAttributes (void) const {
    return mProperty_mAttributes ;
  }

  public: GALGAS_localVarValuation mProperty_mState ;
  public: inline GALGAS_localVarValuation readProperty_mState (void) const {
    return mProperty_mState ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_scopeLocalVarMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

  public: inline void setter_setMNameForCheckingFormalParameterUsing (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNameForCheckingFormalParameterUsing = inValue ;
  }

  public: inline void setter_setMAttributes (const GALGAS_localVariableAttributes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributes = inValue ;
  }

  public: inline void setter_setMState (const GALGAS_localVarValuation & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mState = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_scopeLocalVarMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_scopeLocalVarMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_unifiedTypeMapEntry & in_mType,
                                              const GALGAS_string & in_mCppName,
                                              const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                              const GALGAS_localVariableAttributes & in_mAttributes,
                                              const GALGAS_localVarValuation & in_mState) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_scopeLocalVarMap_2D_element init_21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_localVariableAttributes & inOperand4,
                                                                                  const class GALGAS_localVarValuation & inOperand5,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_scopeLocalVarMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_scopeLocalVarMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                          const class GALGAS_string & inOperand2,
                                                                          const class GALGAS_string & inOperand3,
                                                                          const class GALGAS_localVariableAttributes & inOperand4,
                                                                          const class GALGAS_localVarValuation & inOperand5,
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
 
} ; // End of GALGAS_scopeLocalVarMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: scopeLocalVarMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_scopeLocalVarMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_scopeLocalVarMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_scopeLocalVarMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_scopeLocalVarMap_2D_element_3F_ (const GALGAS_scopeLocalVarMap_2D_element & inValue) ;
  public: static GALGAS_scopeLocalVarMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_scopeLocalVarMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_scopeLocalVarMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_scopeLocalVarMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVarMapListForLLVM list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVarMapListForLLVM : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_localVarMapListForLLVM (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_localVarMapListForLLVM (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_scopeLocalVarMap & in_mMap
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localVarMapListForLLVM init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVarMapListForLLVM extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localVarMapListForLLVM class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_localVarMapListForLLVM class_func_listWithValue (const class GALGAS_scopeLocalVarMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_localVarMapListForLLVM inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_scopeLocalVarMap & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_localVarMapListForLLVM add_operation (const GALGAS_localVarMapListForLLVM & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_scopeLocalVarMap constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_scopeLocalVarMap constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_scopeLocalVarMap & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_scopeLocalVarMap & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_scopeLocalVarMap & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapAtIndex (class GALGAS_scopeLocalVarMap constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_scopeLocalVarMap & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_scopeLocalVarMap & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_scopeLocalVarMap getter_mMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localVarMapListForLLVM getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localVarMapListForLLVM getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localVarMapListForLLVM getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_localVarMapListForLLVM_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_localVarMapListForLLVM ;
 
} ; // End of GALGAS_localVarMapListForLLVM class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_localVarMapListForLLVM : public cGenericAbstractEnumerator {
  public: cEnumerator_localVarMapListForLLVM (const GALGAS_localVarMapListForLLVM & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_scopeLocalVarMap current_mMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_localVarMapListForLLVM_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVarMapListForLLVM_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVarMapListForLLVM_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_scopeLocalVarMap mProperty_mMap ;
  public: inline GALGAS_scopeLocalVarMap readProperty_mMap (void) const {
    return mProperty_mMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_localVarMapListForLLVM_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMap (const GALGAS_scopeLocalVarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_localVarMapListForLLVM_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_localVarMapListForLLVM_2D_element (const GALGAS_scopeLocalVarMap & in_mMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localVarMapListForLLVM_2D_element init_21_ (const class GALGAS_scopeLocalVarMap & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVarMapListForLLVM_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localVarMapListForLLVM_2D_element class_func_new (const class GALGAS_scopeLocalVarMap & inOperand0,
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
 
} ; // End of GALGAS_localVarMapListForLLVM_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM_2D_element ;

//--------------------------------------------------------------------------------------------------
//   enum overrideKind
//--------------------------------------------------------------------------------------------------

class GALGAS_overrideKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_overrideKind (void) ;

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
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selectOverrideFirstBranch (class GALGAS_currentVarManager & out_savedManager) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selectOverrideNextBranches (class GALGAS_currentVarManager & out_savedManager,
                                                                                   class GALGAS_currentVarManager & out_referenceManager) const ;

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
  public: static GALGAS_overrideKind extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overrideKind class_func_repeatOverride (LOCATION_ARGS) ;

  public: static class GALGAS_overrideKind class_func_selectOverrideFirstBranch (const class GALGAS_currentVarManager & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_overrideKind class_func_selectOverrideNextBranches (const class GALGAS_currentVarManager & inOperand0,
                                                                                  const class GALGAS_currentVarManager & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_selectOverrideFirstBranch (class GALGAS_currentVarManager & outArgument0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selectOverrideNextBranches (class GALGAS_currentVarManager & outArgument0,
                                                                   class GALGAS_currentVarManager & outArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRepeatOverride (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelectOverrideFirstBranch (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelectOverrideNextBranches (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ getter_selectOverrideFirstBranch (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ getter_selectOverrideNextBranches (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overrideKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @currentVarManager struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_currentVarManager : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_scopeLocalVarMap mProperty_mLocalVarMap ;
  public: inline GALGAS_scopeLocalVarMap readProperty_mLocalVarMap (void) const {
    return mProperty_mLocalVarMap ;
  }

  public: GALGAS_localVarMapListForLLVM mProperty_mSubMaps ;
  public: inline GALGAS_localVarMapListForLLVM readProperty_mSubMaps (void) const {
    return mProperty_mSubMaps ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_currentVarManager (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLocalVarMap (const GALGAS_scopeLocalVarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocalVarMap = inValue ;
  }

  public: inline void setter_setMSubMaps (const GALGAS_localVarMapListForLLVM & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSubMaps = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_currentVarManager (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_currentVarManager (const GALGAS_scopeLocalVarMap & in_mLocalVarMap,
                                    const GALGAS_localVarMapListForLLVM & in_mSubMaps) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_currentVarManager init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_currentVarManager extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_currentVarManager class_func_new (Compiler * inCompiler
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
 
} ; // End of GALGAS_currentVarManager class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_currentVarManager ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overrideKind_2D_selectOverrideFirstBranch struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overrideKind_2D_selectOverrideFirstBranch : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_currentVarManager mProperty_savedManager ;
  public: inline GALGAS_currentVarManager readProperty_savedManager (void) const {
    return mProperty_savedManager ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_overrideKind_2D_selectOverrideFirstBranch (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSavedManager (const GALGAS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_savedManager = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_overrideKind_2D_selectOverrideFirstBranch (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_overrideKind_2D_selectOverrideFirstBranch (const GALGAS_currentVarManager & in_savedManager) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overrideKind_2D_selectOverrideFirstBranch init_21_ (const class GALGAS_currentVarManager & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overrideKind_2D_selectOverrideFirstBranch extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overrideKind_2D_selectOverrideFirstBranch class_func_new (const class GALGAS_currentVarManager & inOperand0,
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
 
} ; // End of GALGAS_overrideKind_2D_selectOverrideFirstBranch class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideFirstBranch ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: overrideKind-selectOverrideFirstBranch? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_overrideKind_2D_selectOverrideFirstBranch mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ (const GALGAS_overrideKind_2D_selectOverrideFirstBranch & inValue) ;
  public: static GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_overrideKind_2D_selectOverrideFirstBranch unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overrideKind_2D_selectOverrideNextBranches struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overrideKind_2D_selectOverrideNextBranches : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_currentVarManager mProperty_savedManager ;
  public: inline GALGAS_currentVarManager readProperty_savedManager (void) const {
    return mProperty_savedManager ;
  }

  public: GALGAS_currentVarManager mProperty_referenceManager ;
  public: inline GALGAS_currentVarManager readProperty_referenceManager (void) const {
    return mProperty_referenceManager ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_overrideKind_2D_selectOverrideNextBranches (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSavedManager (const GALGAS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_savedManager = inValue ;
  }

  public: inline void setter_setReferenceManager (const GALGAS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_referenceManager = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_overrideKind_2D_selectOverrideNextBranches (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_overrideKind_2D_selectOverrideNextBranches (const GALGAS_currentVarManager & in_savedManager,
                                                             const GALGAS_currentVarManager & in_referenceManager) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overrideKind_2D_selectOverrideNextBranches init_21__21_ (const class GALGAS_currentVarManager & inOperand0,
                                                                                 const class GALGAS_currentVarManager & inOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overrideKind_2D_selectOverrideNextBranches extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overrideKind_2D_selectOverrideNextBranches class_func_new (const class GALGAS_currentVarManager & inOperand0,
                                                                                         const class GALGAS_currentVarManager & inOperand1,
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
 
} ; // End of GALGAS_overrideKind_2D_selectOverrideNextBranches class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideNextBranches ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: overrideKind-selectOverrideNextBranches? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_overrideKind_2D_selectOverrideNextBranches mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ (const GALGAS_overrideKind_2D_selectOverrideNextBranches & inValue) ;
  public: static GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_overrideKind_2D_selectOverrideNextBranches unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @openedOverrideList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_openedOverrideList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_openedOverrideList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_openedOverrideList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_overrideKind & in_mOverrideKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_openedOverrideList init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_openedOverrideList extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_openedOverrideList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_openedOverrideList class_func_listWithValue (const class GALGAS_overrideKind & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_openedOverrideList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_overrideKind & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_openedOverrideList add_operation (const GALGAS_openedOverrideList & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_overrideKind constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_overrideKind constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_overrideKind & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_overrideKind & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_overrideKind & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOverrideKindAtIndex (class GALGAS_overrideKind constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_overrideKind & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_overrideKind & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_overrideKind getter_mOverrideKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_openedOverrideList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_openedOverrideList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_openedOverrideList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_openedOverrideList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_openedOverrideList ;
 
} ; // End of GALGAS_openedOverrideList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_openedOverrideList : public cGenericAbstractEnumerator {
  public: cEnumerator_openedOverrideList (const GALGAS_openedOverrideList & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_overrideKind current_mOverrideKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_openedOverrideList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedOverrideList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @openedOverrideList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_openedOverrideList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_overrideKind mProperty_mOverrideKind ;
  public: inline GALGAS_overrideKind readProperty_mOverrideKind (void) const {
    return mProperty_mOverrideKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_openedOverrideList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOverrideKind (const GALGAS_overrideKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOverrideKind = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_openedOverrideList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_openedOverrideList_2D_element (const GALGAS_overrideKind & in_mOverrideKind) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_openedOverrideList_2D_element init_21_ (const class GALGAS_overrideKind & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_openedOverrideList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_openedOverrideList_2D_element class_func_new (const class GALGAS_overrideKind & inOperand0,
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
 
} ; // End of GALGAS_openedOverrideList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedOverrideList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const class GALGAS_currentVarManager inObject,
                                                        const class GALGAS_location constin_inErrorLocation,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GALGAS_currentVarManager & ioObject,
                                    const class GALGAS_lstring constin_inVarName,
                                    class GALGAS_unifiedTypeMapEntry & out_outType,
                                    class GALGAS_string & out_outCppName,
                                    class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GALGAS_localVarMapListForLLVM & ioObject,
                                    const class GALGAS_lstring constin_inVarName,
                                    const class GALGAS_uint constin_inIndex,
                                    class GALGAS_unifiedTypeMapEntry & out_outType,
                                    class GALGAS_string & out_outCppName,
                                    class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (class GALGAS_currentVarManager & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation checkFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalState (const class GALGAS_localVarValuation inObject,
                                      const class GALGAS_lstring constin_inVarName,
                                      const class GALGAS_localVariableAttributes constin_inAttributes,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (class GALGAS_currentVarManager & ioObject,
                                           const class GALGAS_lstring constin_inVarName,
                                           class GALGAS_unifiedTypeMapEntry & out_outType,
                                           class GALGAS_string & out_outCppName,
                                           class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM writeAccessInSubMap'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeAccessInSubMap (class GALGAS_localVarMapListForLLVM & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          const class GALGAS_uint constin_inIndex,
                                          class GALGAS_unifiedTypeMapEntry & out_outType,
                                          class GALGAS_string & out_outCppName,
                                          class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarValuation writeTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeTransition (class GALGAS_localVarValuation & ioObject,
                                      const class GALGAS_lstring constin_inVarName,
                                      const class GALGAS_bool constin_inOverridenMap,
                                      const class GALGAS_localVariableAttributes constin_inAttributes,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (class GALGAS_currentVarManager & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          class GALGAS_unifiedTypeMapEntry & out_outType,
                                          class GALGAS_string & out_outCppName,
                                          class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (class GALGAS_localVarMapListForLLVM & ioObject,
                                 const class GALGAS_lstring constin_inVarName,
                                 const class GALGAS_uint constin_inIndex,
                                 class GALGAS_unifiedTypeMapEntry & out_outType,
                                 class GALGAS_string & out_outCppName,
                                 class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarValuation readTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readTransition (class GALGAS_localVarValuation & ioObject,
                                     const class GALGAS_lstring constin_inVarName,
                                     const class GALGAS_localVariableAttributes constin_inAttributes,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (class GALGAS_currentVarManager & ioObject,
                                               const class GALGAS_lstring constin_inVarName,
                                               class GALGAS_unifiedTypeMapEntry & out_outType,
                                               class GALGAS_string & out_outCppName,
                                               class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM readWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteAccess (class GALGAS_localVarMapListForLLVM & ioObject,
                                      const class GALGAS_lstring constin_inVarName,
                                      const class GALGAS_uint constin_inIndex,
                                      class GALGAS_unifiedTypeMapEntry & out_outType,
                                      class GALGAS_string & out_outCppName,
                                      class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarValuation readWriteTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteTransition (class GALGAS_localVarValuation & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          const class GALGAS_bool constin_inOverridenMap,
                                          const class GALGAS_localVariableAttributes constin_inAttributes,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager openScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openScope (class GALGAS_currentVarManager & ioObject,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager closeScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeScope (class GALGAS_currentVarManager & ioObject,
                                 const class GALGAS_location constin_inErrorLocation,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@scopeLocalVarMap checkFinalStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalStates (const class GALGAS_scopeLocalVarMap inObject,
                                       const class GALGAS_location constin_inErrorLocation,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GALGAS_currentVarManager & ioObject,
                                const class GALGAS_lstring constin_inVarName,
                                const class GALGAS_unifiedTypeMapEntry constin_inType,
                                const class GALGAS_string constin_inCppName,
                                const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                const class GALGAS_localVariableAttributes constin_inAttributes,
                                const class GALGAS_localVarValuation constin_inState,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const class GALGAS_currentVarManager inObject,
                                           const class GALGAS_location constin_inErrorLocation,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation combineValuationWith'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_combineValuationWith (const class GALGAS_localVarValuation inObject,
                                           const class GALGAS_localVarValuation constin_inOther,
                                           class GALGAS_localVarValuation & out_outResult,
                                           class GALGAS_string & io_ioErrorMessage,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@scopeLocalVarMap combineMapWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineMapWith (class GALGAS_scopeLocalVarMap & ioObject,
                                     const class GALGAS_scopeLocalVarMap constin_inOtherMap,
                                     class GALGAS_string & io_ioErrorMessage,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager combineManagerWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineManagerWith (class GALGAS_currentVarManager & ioObject,
                                         const class GALGAS_currentVarManager constin_inOtherManager,
                                         const class GALGAS_location constin_inErrorLocation,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_unifiedTypeMapElementClass mProperty_mElement ;
  public: inline GALGAS_unifiedTypeMapElementClass readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMElement (const GALGAS_unifiedTypeMapElementClass & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_unifiedTypeMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_unifiedTypeMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_unifiedTypeMapElementClass & in_mElement) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unifiedTypeMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_unifiedTypeMapElementClass & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_unifiedTypeMapElementClass & inOperand1,
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
 
} ; // End of GALGAS_unifiedTypeMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: unifiedTypeMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_unifiedTypeMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_unifiedTypeMap_2D_element_3F_ (const GALGAS_unifiedTypeMap_2D_element & inValue) ;
  public: static GALGAS_unifiedTypeMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_unifiedTypeMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_unifiedTypeMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (class GALGAS_unifiedTypeMap & ioObject,
                                const class GALGAS_lstring constin_inLKey,
                                class GALGAS_unifiedTypeMapEntry & out_outEntry,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GALGAS_unifiedTypeMap & ioObject,
                                          const class GALGAS_string constin_inKey,
                                          class GALGAS_unifiedTypeMapEntry & out_outEntry,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeMapEntryForLKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntry extensionGetter_typeMapEntryForLKey (const class GALGAS_unifiedTypeMap & inObject,
                                                                      const class GALGAS_lstring & constinArgument0,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (class GALGAS_unifiedTypeMap & ioObject,
                                 const class GALGAS_lstring constin_inTypeName,
                                 const class GALGAS_unifiedTypeDefinition constin_inTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeDefinition struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeDefinition : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_typeName ;
  public: inline GALGAS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GALGAS_bool mProperty_isPredefined ;
  public: inline GALGAS_bool readProperty_isPredefined (void) const {
    return mProperty_isPredefined ;
  }

  public: GALGAS_bool mProperty_isConcrete ;
  public: inline GALGAS_bool readProperty_isConcrete (void) const {
    return mProperty_isConcrete ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_superType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_superType (void) const {
    return mProperty_superType ;
  }

  public: GALGAS_typeKindEnum mProperty_typeKind ;
  public: inline GALGAS_typeKindEnum readProperty_typeKind (void) const {
    return mProperty_typeKind ;
  }

  public: GALGAS_bool mProperty_supportCollectionValue ;
  public: inline GALGAS_bool readProperty_supportCollectionValue (void) const {
    return mProperty_supportCollectionValue ;
  }

  public: GALGAS_typedPropertyList mProperty_allTypedPropertyList ;
  public: inline GALGAS_typedPropertyList readProperty_allTypedPropertyList (void) const {
    return mProperty_allTypedPropertyList ;
  }

  public: GALGAS_propertyMap mProperty_propertyMap ;
  public: inline GALGAS_propertyMap readProperty_propertyMap (void) const {
    return mProperty_propertyMap ;
  }

  public: GALGAS_typedPropertyList mProperty_currentTypedPropertyList ;
  public: inline GALGAS_typedPropertyList readProperty_currentTypedPropertyList (void) const {
    return mProperty_currentTypedPropertyList ;
  }

  public: GALGAS_initializerMap mProperty_initializerMap ;
  public: inline GALGAS_initializerMap readProperty_initializerMap (void) const {
    return mProperty_initializerMap ;
  }

  public: GALGAS_classFunctionMap mProperty_classFunctionMap ;
  public: inline GALGAS_classFunctionMap readProperty_classFunctionMap (void) const {
    return mProperty_classFunctionMap ;
  }

  public: GALGAS_getterMap mProperty_getterMap ;
  public: inline GALGAS_getterMap readProperty_getterMap (void) const {
    return mProperty_getterMap ;
  }

  public: GALGAS_setterMap mProperty_setterMap ;
  public: inline GALGAS_setterMap readProperty_setterMap (void) const {
    return mProperty_setterMap ;
  }

  public: GALGAS_instanceMethodMap mProperty_instanceMethodMap ;
  public: inline GALGAS_instanceMethodMap readProperty_instanceMethodMap (void) const {
    return mProperty_instanceMethodMap ;
  }

  public: GALGAS_classMethodMap mProperty_classMethodMap ;
  public: inline GALGAS_classMethodMap readProperty_classMethodMap (void) const {
    return mProperty_classMethodMap ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_unwrappedType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_unwrappedType (void) const {
    return mProperty_unwrappedType ;
  }

  public: GALGAS_subscriptMap mProperty_readSubscriptMap ;
  public: inline GALGAS_subscriptMap readProperty_readSubscriptMap (void) const {
    return mProperty_readSubscriptMap ;
  }

  public: GALGAS_enumerationDescriptorList mProperty_enumerationDescriptorList ;
  public: inline GALGAS_enumerationDescriptorList readProperty_enumerationDescriptorList (void) const {
    return mProperty_enumerationDescriptorList ;
  }

  public: GALGAS_typeFeatures mProperty_features ;
  public: inline GALGAS_typeFeatures readProperty_features (void) const {
    return mProperty_features ;
  }

  public: GALGAS_functionSignature mProperty_addAssignOperatorArguments ;
  public: inline GALGAS_functionSignature readProperty_addAssignOperatorArguments (void) const {
    return mProperty_addAssignOperatorArguments ;
  }

  public: GALGAS_mapSearchMethodListAST mProperty_mapSearchMethodList ;
  public: inline GALGAS_mapSearchMethodListAST readProperty_mapSearchMethodList (void) const {
    return mProperty_mapSearchMethodList ;
  }

  public: GALGAS_bool mProperty_generateHeaderInSeparateFile ;
  public: inline GALGAS_bool readProperty_generateHeaderInSeparateFile (void) const {
    return mProperty_generateHeaderInSeparateFile ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_typeForEnumeratedElement ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_typeForEnumeratedElement (void) const {
    return mProperty_typeForEnumeratedElement ;
  }

  public: GALGAS_string mProperty_headerFileName ;
  public: inline GALGAS_string readProperty_headerFileName (void) const {
    return mProperty_headerFileName ;
  }

  public: GALGAS_headerKind mProperty_headerKind ;
  public: inline GALGAS_headerKind readProperty_headerKind (void) const {
    return mProperty_headerKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeDefinition (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setIsPredefined (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isPredefined = inValue ;
  }

  public: inline void setter_setIsConcrete (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConcrete = inValue ;
  }

  public: inline void setter_setSuperType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superType = inValue ;
  }

  public: inline void setter_setTypeKind (const GALGAS_typeKindEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeKind = inValue ;
  }

  public: inline void setter_setSupportCollectionValue (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_supportCollectionValue = inValue ;
  }

  public: inline void setter_setAllTypedPropertyList (const GALGAS_typedPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_allTypedPropertyList = inValue ;
  }

  public: inline void setter_setPropertyMap (const GALGAS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyMap = inValue ;
  }

  public: inline void setter_setCurrentTypedPropertyList (const GALGAS_typedPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_currentTypedPropertyList = inValue ;
  }

  public: inline void setter_setInitializerMap (const GALGAS_initializerMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initializerMap = inValue ;
  }

  public: inline void setter_setClassFunctionMap (const GALGAS_classFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_classFunctionMap = inValue ;
  }

  public: inline void setter_setGetterMap (const GALGAS_getterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_getterMap = inValue ;
  }

  public: inline void setter_setSetterMap (const GALGAS_setterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_setterMap = inValue ;
  }

  public: inline void setter_setInstanceMethodMap (const GALGAS_instanceMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instanceMethodMap = inValue ;
  }

  public: inline void setter_setClassMethodMap (const GALGAS_classMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_classMethodMap = inValue ;
  }

  public: inline void setter_setUnwrappedType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_unwrappedType = inValue ;
  }

  public: inline void setter_setReadSubscriptMap (const GALGAS_subscriptMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_readSubscriptMap = inValue ;
  }

  public: inline void setter_setEnumerationDescriptorList (const GALGAS_enumerationDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumerationDescriptorList = inValue ;
  }

  public: inline void setter_setFeatures (const GALGAS_typeFeatures & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_features = inValue ;
  }

  public: inline void setter_setAddAssignOperatorArguments (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_addAssignOperatorArguments = inValue ;
  }

  public: inline void setter_setMapSearchMethodList (const GALGAS_mapSearchMethodListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mapSearchMethodList = inValue ;
  }

  public: inline void setter_setGenerateHeaderInSeparateFile (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_generateHeaderInSeparateFile = inValue ;
  }

  public: inline void setter_setTypeForEnumeratedElement (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeForEnumeratedElement = inValue ;
  }

  public: inline void setter_setHeaderFileName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_headerFileName = inValue ;
  }

  public: inline void setter_setHeaderKind (const GALGAS_headerKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_headerKind = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_unifiedTypeDefinition (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_unifiedTypeDefinition (const GALGAS_lstring & in_typeName,
                                        const GALGAS_bool & in_isPredefined,
                                        const GALGAS_bool & in_isConcrete,
                                        const GALGAS_unifiedTypeMapEntry & in_superType,
                                        const GALGAS_typeKindEnum & in_typeKind,
                                        const GALGAS_bool & in_supportCollectionValue,
                                        const GALGAS_typedPropertyList & in_allTypedPropertyList,
                                        const GALGAS_propertyMap & in_propertyMap,
                                        const GALGAS_typedPropertyList & in_currentTypedPropertyList,
                                        const GALGAS_initializerMap & in_initializerMap,
                                        const GALGAS_classFunctionMap & in_classFunctionMap,
                                        const GALGAS_getterMap & in_getterMap,
                                        const GALGAS_setterMap & in_setterMap,
                                        const GALGAS_instanceMethodMap & in_instanceMethodMap,
                                        const GALGAS_classMethodMap & in_classMethodMap,
                                        const GALGAS_unifiedTypeMapEntry & in_unwrappedType,
                                        const GALGAS_subscriptMap & in_readSubscriptMap,
                                        const GALGAS_enumerationDescriptorList & in_enumerationDescriptorList,
                                        const GALGAS_typeFeatures & in_features,
                                        const GALGAS_functionSignature & in_addAssignOperatorArguments,
                                        const GALGAS_mapSearchMethodListAST & in_mapSearchMethodList,
                                        const GALGAS_bool & in_generateHeaderInSeparateFile,
                                        const GALGAS_unifiedTypeMapEntry & in_typeForEnumeratedElement,
                                        const GALGAS_string & in_headerFileName,
                                        const GALGAS_headerKind & in_headerKind) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unifiedTypeDefinition init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (const class GALGAS_lstring & inOperand0,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_bool & inOperand1,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_bool & inOperand2,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_typeKindEnum & inOperand4,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_bool & inOperand5,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_typedPropertyList & inOperand6,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_propertyMap & inOperand7,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_typedPropertyList & inOperand8,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_initializerMap & inOperand9,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_classFunctionMap & inOperand10,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_getterMap & inOperand11,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_setterMap & inOperand12,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_instanceMethodMap & inOperand13,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_classMethodMap & inOperand14,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand15,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_subscriptMap & inOperand16,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_enumerationDescriptorList & inOperand17,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_typeFeatures & inOperand18,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_functionSignature & inOperand19,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_mapSearchMethodListAST & inOperand20,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_bool & inOperand21,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand22,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_string & inOperand23,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          const class GALGAS_headerKind & inOperand24,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeDefinition extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeDefinition class_func_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_bool & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                    const class GALGAS_typeKindEnum & inOperand4,
                                                                    const class GALGAS_bool & inOperand5,
                                                                    const class GALGAS_typedPropertyList & inOperand6,
                                                                    const class GALGAS_propertyMap & inOperand7,
                                                                    const class GALGAS_typedPropertyList & inOperand8,
                                                                    const class GALGAS_initializerMap & inOperand9,
                                                                    const class GALGAS_classFunctionMap & inOperand10,
                                                                    const class GALGAS_getterMap & inOperand11,
                                                                    const class GALGAS_setterMap & inOperand12,
                                                                    const class GALGAS_instanceMethodMap & inOperand13,
                                                                    const class GALGAS_classMethodMap & inOperand14,
                                                                    const class GALGAS_unifiedTypeMapEntry & inOperand15,
                                                                    const class GALGAS_subscriptMap & inOperand16,
                                                                    const class GALGAS_enumerationDescriptorList & inOperand17,
                                                                    const class GALGAS_typeFeatures & inOperand18,
                                                                    const class GALGAS_functionSignature & inOperand19,
                                                                    const class GALGAS_mapSearchMethodListAST & inOperand20,
                                                                    const class GALGAS_bool & inOperand21,
                                                                    const class GALGAS_unifiedTypeMapEntry & inOperand22,
                                                                    const class GALGAS_string & inOperand23,
                                                                    const class GALGAS_headerKind & inOperand24,
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
 
} ; // End of GALGAS_unifiedTypeDefinition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeDefinition ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeDefinition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeDefinition extensionGetter_typeDefinition (const class GALGAS_unifiedTypeMap & inObject,
                                                                   const class GALGAS_lstring & constinArgument0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeDefinition_2D_solved struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeDefinition_2D_solved : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeDefinition mProperty_definition ;
  public: inline GALGAS_unifiedTypeDefinition readProperty_definition (void) const {
    return mProperty_definition ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typeDefinition_2D_solved (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDefinition (const GALGAS_unifiedTypeDefinition & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_definition = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typeDefinition_2D_solved (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typeDefinition_2D_solved (const GALGAS_unifiedTypeDefinition & in_definition) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeDefinition_2D_solved init_21_ (const class GALGAS_unifiedTypeDefinition & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeDefinition_2D_solved extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeDefinition_2D_solved class_func_new (const class GALGAS_unifiedTypeDefinition & inOperand0,
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
 
} ; // End of GALGAS_typeDefinition_2D_solved class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition_2D_solved ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeDefinition-solved? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeDefinition_2D_solved_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_typeDefinition_2D_solved mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_typeDefinition_2D_solved_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_typeDefinition_2D_solved_3F_ (const GALGAS_typeDefinition_2D_solved & inValue) ;
  public: static GALGAS_typeDefinition_2D_solved_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_typeDefinition_2D_solved unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_typeDefinition_2D_solved_3F_ extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeDefinition_2D_solved_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition_2D_solved_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry definition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeDefinition extensionGetter_definition (const class GALGAS_unifiedTypeMapEntry & inObject,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry identifierRepresentation' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_identifierRepresentation (const class GALGAS_unifiedTypeMapEntry & inObject,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry typeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_typeName (const class GALGAS_unifiedTypeMapEntry & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry baseType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntry extensionGetter_baseType (const class GALGAS_unifiedTypeMapEntry & inObject,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const class GALGAS_unifiedTypeMapEntry inObject,
                                        class GALGAS_stringset & io_ioInclusions,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const class GALGAS_unifiedTypeMapEntry inObject,
                                            class GALGAS_stringset & io_ioInclusions,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_actualParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_actualParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_actualParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_actualParameterAST & in_mActualParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_actualParameterListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualParameterListAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_actualParameterListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_actualParameterListAST class_func_listWithValue (const class GALGAS_actualParameterAST & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_actualParameterListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_actualParameterAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST add_operation (const GALGAS_actualParameterListAST & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_actualParameterAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_actualParameterAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_actualParameterAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_actualParameterAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_actualParameterAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterAtIndex (class GALGAS_actualParameterAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_actualParameterAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_actualParameterAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterAST getter_mActualParameterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_actualParameterListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_actualParameterListAST ;
 
} ; // End of GALGAS_actualParameterListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_actualParameterListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_actualParameterListAST (const GALGAS_actualParameterListAST & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_actualParameterAST current_mActualParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_actualParameterListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_actualParameterAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_actualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_actualParameterAST (const class cPtr_actualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_actualParameterAST init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualParameterAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_actualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_actualParameterAST class


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
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
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
// Phase 1: @actualParameterListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_actualParameterListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_actualParameterAST mProperty_mActualParameter ;
  public: inline GALGAS_actualParameterAST readProperty_mActualParameter (void) const {
    return mProperty_mActualParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_actualParameterListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActualParameter (const GALGAS_actualParameterAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualParameter = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_actualParameterListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_actualParameterListAST_2D_element (const GALGAS_actualParameterAST & in_mActualParameter) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_actualParameterListAST_2D_element init_21_ (const class GALGAS_actualParameterAST & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualParameterListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_actualParameterListAST_2D_element class_func_new (const class GALGAS_actualParameterAST & inOperand0,
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
 
} ; // End of GALGAS_actualParameterListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterParameterInSemanticContext (class cPtr_actualParameterAST * inObject,
                                                          class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@actualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isCompatibleWith (const class cPtr_actualParameterAST * inObject,
                                                        const class GALGAS_formalArgumentPassingModeAST constin_inFormalPassingMode,
                                                        const class GALGAS_string constin_inSelector,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInActualOutputParameterList (class cPtr_actualParameterAST * inObject,
                                                           class GALGAS_actualOutputArgumentList & io_ioActualOutputArgumentList,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualOutputArgumentList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_actualOutputArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_actualOutputArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_actualOutputArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mActualSelector,
                                                 const class GALGAS_semanticExpressionAST & in_mExpression,
                                                 const class GALGAS_location & in_mEndOfExpressionLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_actualOutputArgumentList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualOutputArgumentList extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_actualOutputArgumentList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_actualOutputArgumentList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                 const class GALGAS_location & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_actualOutputArgumentList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                     const class GALGAS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_actualOutputArgumentList add_operation (const GALGAS_actualOutputArgumentList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_semanticExpressionAST constinArgument1,
                                               class GALGAS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_semanticExpressionAST constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_semanticExpressionAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_semanticExpressionAST & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_semanticExpressionAST & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionLocationAtIndex (class GALGAS_location constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_semanticExpressionAST constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_semanticExpressionAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_semanticExpressionAST & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualOutputArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualOutputArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualOutputArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_actualOutputArgumentList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_actualOutputArgumentList ;
 
} ; // End of GALGAS_actualOutputArgumentList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_actualOutputArgumentList : public cGenericAbstractEnumerator {
  public: cEnumerator_actualOutputArgumentList (const GALGAS_actualOutputArgumentList & inEnumeratedObject,
                                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public: class GALGAS_semanticExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_actualOutputArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualOutputArgumentList ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkAgainstFormalArgument (class cPtr_actualParameterAST * inObject,
                                                     const class GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                     class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const class GALGAS_analysisContext constin_inAnalysisContext,
                                                     class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                     const class GALGAS_lstring constin_inFormalSelector,
                                                     const class GALGAS_unifiedTypeMapEntry constin_inFormalArgumentType,
                                                     const class GALGAS_formalArgumentPassingModeAST constin_inFormalArgumentPassingMode,
                                                     class GALGAS_localVarManager & io_ioVariableMap,
                                                     class GALGAS_actualParameterListForGeneration & io_ioActualParameterListForGeneration,
                                                     class GALGAS_stringset & io_ioExclusiveVariableSet,
                                                     class GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_actualParameterListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_actualParameterListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_actualParameterListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_actualParameterForGeneration & in_mActualParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_actualParameterListForGeneration init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualParameterListForGeneration extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_actualParameterListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_actualParameterListForGeneration class_func_listWithValue (const class GALGAS_actualParameterForGeneration & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_actualParameterListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_actualParameterForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration add_operation (const GALGAS_actualParameterListForGeneration & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_actualParameterForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_actualParameterForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_actualParameterForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_actualParameterForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_actualParameterForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterAtIndex (class GALGAS_actualParameterForGeneration constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_actualParameterForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_actualParameterForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterForGeneration getter_mActualParameterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_actualParameterListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_actualParameterListForGeneration ;
 
} ; // End of GALGAS_actualParameterListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_actualParameterListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_actualParameterListForGeneration (const GALGAS_actualParameterListForGeneration & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_actualParameterForGeneration current_mActualParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_actualParameterListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration ;

//--------------------------------------------------------------------------------------------------
//   enum selfAvailability
//--------------------------------------------------------------------------------------------------

class GALGAS_selfAvailability : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_selfAvailability (void) ;

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
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_available (class GALGAS_unifiedTypeMapEntry & out_type,
                                                                  class GALGAS_selfMutability & out_selfMutability) const ;

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
  public: static GALGAS_selfAvailability extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_selfAvailability class_func_available (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                     const class GALGAS_selfMutability & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_selfAvailability class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_selfAvailability & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_available (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                  class GALGAS_selfMutability & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_selfAvailability_2D_available_3F_ getter_available (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAvailable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_selfAvailability class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAvailability ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @analysisContext struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_analysisContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticContext mProperty_semanticContext ;
  public: inline GALGAS_semanticContext readProperty_semanticContext (void) const {
    return mProperty_semanticContext ;
  }

  public: GALGAS_predefinedTypes mProperty_predefinedTypes ;
  public: inline GALGAS_predefinedTypes readProperty_predefinedTypes (void) const {
    return mProperty_predefinedTypes ;
  }

  public: GALGAS_string mProperty_selfObjectCppName ;
  public: inline GALGAS_string readProperty_selfObjectCppName (void) const {
    return mProperty_selfObjectCppName ;
  }

  public: GALGAS_selfAvailability mProperty_selfAvailability ;
  public: inline GALGAS_selfAvailability readProperty_selfAvailability (void) const {
    return mProperty_selfAvailability ;
  }

  public: GALGAS_string mProperty_selfObjectCppPrefixForAccessingProperty ;
  public: inline GALGAS_string readProperty_selfObjectCppPrefixForAccessingProperty (void) const {
    return mProperty_selfObjectCppPrefixForAccessingProperty ;
  }

  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: inline GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const {
    return mProperty_requiresSelfForAccessingProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_analysisContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSemanticContext (const GALGAS_semanticContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_semanticContext = inValue ;
  }

  public: inline void setter_setPredefinedTypes (const GALGAS_predefinedTypes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_predefinedTypes = inValue ;
  }

  public: inline void setter_setSelfObjectCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfObjectCppName = inValue ;
  }

  public: inline void setter_setSelfAvailability (const GALGAS_selfAvailability & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfAvailability = inValue ;
  }

  public: inline void setter_setSelfObjectCppPrefixForAccessingProperty (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfObjectCppPrefixForAccessingProperty = inValue ;
  }

  public: inline void setter_setRequiresSelfForAccessingProperty (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_requiresSelfForAccessingProperty = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_analysisContext (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_analysisContext (const GALGAS_semanticContext & in_semanticContext,
                                  const GALGAS_predefinedTypes & in_predefinedTypes,
                                  const GALGAS_string & in_selfObjectCppName,
                                  const GALGAS_selfAvailability & in_selfAvailability,
                                  const GALGAS_string & in_selfObjectCppPrefixForAccessingProperty,
                                  const GALGAS_bool & in_requiresSelfForAccessingProperty) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_analysisContext init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (const class GALGAS_semanticContext & inOperand0,
                                                                                                                                                                              const class GALGAS_predefinedTypes & inOperand1,
                                                                                                                                                                              const class GALGAS_string & inOperand2,
                                                                                                                                                                              const class GALGAS_selfAvailability & inOperand3,
                                                                                                                                                                              const class GALGAS_string & inOperand4,
                                                                                                                                                                              const class GALGAS_bool & inOperand5,
                                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_analysisContext extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_analysisContext class_func_new (const class GALGAS_semanticContext & inOperand0,
                                                              const class GALGAS_predefinedTypes & inOperand1,
                                                              const class GALGAS_string & inOperand2,
                                                              const class GALGAS_selfAvailability & inOperand3,
                                                              const class GALGAS_string & inOperand4,
                                                              const class GALGAS_bool & inOperand5,
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
 
} ; // End of GALGAS_analysisContext class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_analysisContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVarManager struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVarManager : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_currentVarManager mProperty_mCurrentManager ;
  public: inline GALGAS_currentVarManager readProperty_mCurrentManager (void) const {
    return mProperty_mCurrentManager ;
  }

  public: GALGAS_openedOverrideList mProperty_mOverridenManagers ;
  public: inline GALGAS_openedOverrideList readProperty_mOverridenManagers (void) const {
    return mProperty_mOverridenManagers ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_localVarManager (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCurrentManager (const GALGAS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCurrentManager = inValue ;
  }

  public: inline void setter_setMOverridenManagers (const GALGAS_openedOverrideList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOverridenManagers = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_localVarManager (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_localVarManager (const GALGAS_currentVarManager & in_mCurrentManager,
                                  const GALGAS_openedOverrideList & in_mOverridenManagers) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localVarManager init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVarManager extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localVarManager class_func_new (Compiler * inCompiler
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
 
} ; // End of GALGAS_localVarManager class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarManager ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_actualParameterAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_actualParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_actualParameterAST_2D_weak (const class GALGAS_actualParameterAST & inSource) ;

  public: GALGAS_actualParameterAST_2D_weak & operator = (const class GALGAS_actualParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_actualParameterAST bang_actualParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_actualParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_actualParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_actualParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_semanticExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticExpressionAST (const class cPtr_semanticExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticExpressionAST init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticExpressionAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionAST ;

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
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
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

class GALGAS_outputActualParameterAST : public GALGAS_actualParameterAST {
//--------------------------------- Default constructor
  public: GALGAS_outputActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_outputActualParameterAST (const class cPtr_outputActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mActualSelector (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mOutputActualParameterExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_outputActualParameterAST init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   const class GALGAS_location & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputActualParameterAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                       const class GALGAS_location & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputActualParameterAST class


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
  public: void outputActualParameterAST_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                          const class GALGAS_semanticExpressionAST & inOperand1,
                                                          const class GALGAS_location & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: GALGAS_semanticExpressionAST mProperty_mOutputActualParameterExpression ;
  public: GALGAS_location mProperty_mEndOfExpressionLocation ;


//--- Default constructor
  public: cPtr_outputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                         const GALGAS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                         const GALGAS_location & in_mEndOfExpressionLocation
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
// Phase 1: @outputActualParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outputActualParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outputActualParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outputActualParameterAST_2D_weak (const class GALGAS_outputActualParameterAST & inSource) ;

  public: GALGAS_outputActualParameterAST_2D_weak & operator = (const class GALGAS_outputActualParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outputActualParameterAST bang_outputActualParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputActualParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputActualParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputActualParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputActualParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputActualParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outputInputActualParameterAST : public GALGAS_actualParameterAST {
//--------------------------------- Default constructor
  public: GALGAS_outputInputActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_outputInputActualParameterAST (const class cPtr_outputInputActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mActualSelector (void) const ;

  public: class GALGAS_lstring readProperty_mOutputInputActualParameterName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_outputInputActualParameterAST init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstringlist & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputInputActualParameterAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstringlist & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputInputActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputInputActualParameterAST class


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
  public: void outputInputActualParameterAST_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_lstring & inOperand1,
                                                               const class GALGAS_lstringlist & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: GALGAS_lstring mProperty_mOutputInputActualParameterName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;


//--- Default constructor
  public: cPtr_outputInputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                              const GALGAS_lstring & in_mOutputInputActualParameterName,
                                              const GALGAS_lstringlist & in_mStructAttributeList
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
// Phase 1: @outputInputActualParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outputInputActualParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outputInputActualParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outputInputActualParameterAST_2D_weak (const class GALGAS_outputInputActualParameterAST & inSource) ;

  public: GALGAS_outputInputActualParameterAST_2D_weak & operator = (const class GALGAS_outputInputActualParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outputInputActualParameterAST bang_outputInputActualParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputActualParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputInputActualParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputInputActualParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputInputActualParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputJokerParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outputInputJokerParameterAST : public GALGAS_actualParameterAST {
//--------------------------------- Default constructor
  public: GALGAS_outputInputJokerParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_outputInputJokerParameterAST (const class cPtr_outputInputJokerParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mActualSelector (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_expression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_outputInputJokerParameterAST init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputJokerParameterAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputInputJokerParameterAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_semanticExpressionAST & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputInputJokerParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputInputJokerParameterAST class


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
  public: void outputInputJokerParameterAST_init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                          const class GALGAS_semanticExpressionAST & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: GALGAS_semanticExpressionAST mProperty_expression ;


//--- Default constructor
  public: cPtr_outputInputJokerParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputJokerParameterAST (const GALGAS_lstring & in_mActualSelector,
                                             const GALGAS_semanticExpressionAST & in_expression
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
// Phase 1: @outputInputJokerParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outputInputJokerParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outputInputJokerParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outputInputJokerParameterAST_2D_weak (const class GALGAS_outputInputJokerParameterAST & inSource) ;

  public: GALGAS_outputInputJokerParameterAST_2D_weak & operator = (const class GALGAS_outputInputJokerParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outputInputJokerParameterAST bang_outputInputJokerParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputJokerParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputInputJokerParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputInputJokerParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputInputJokerParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputSelfParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outputInputSelfParameterAST : public GALGAS_actualParameterAST {
//--------------------------------- Default constructor
  public: GALGAS_outputInputSelfParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_outputInputSelfParameterAST (const class cPtr_outputInputSelfParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mActualSelector (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_outputInputSelfParameterAST init_21_ (const class GALGAS_lstring & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputSelfParameterAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputInputSelfParameterAST class_func_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputInputSelfParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputInputSelfParameterAST class


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
  public: void outputInputSelfParameterAST_init_21_ (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;


//--- Default constructor
  public: cPtr_outputInputSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputSelfParameterAST (const GALGAS_lstring & in_mActualSelector
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
// Phase 1: @outputInputSelfParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outputInputSelfParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outputInputSelfParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outputInputSelfParameterAST_2D_weak (const class GALGAS_outputInputSelfParameterAST & inSource) ;

  public: GALGAS_outputInputSelfParameterAST_2D_weak & operator = (const class GALGAS_outputInputSelfParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outputInputSelfParameterAST bang_outputInputSelfParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputSelfParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputInputSelfParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputInputSelfParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputInputSelfParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSelfParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualExistingVariableParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualExistingVariableParameterAST : public GALGAS_actualParameterAST {
//--------------------------------- Default constructor
  public: GALGAS_inputActualExistingVariableParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inputActualExistingVariableParameterAST (const class cPtr_inputActualExistingVariableParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mActualSelector (void) const ;

  public: class GALGAS_lstring readProperty_mInputActualParameterName (void) const ;

  public: class GALGAS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inputActualExistingVariableParameterAST init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstringlist & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualExistingVariableParameterAST extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualExistingVariableParameterAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstringlist & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualExistingVariableParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualExistingVariableParameterAST class


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
  public: void inputActualExistingVariableParameterAST_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstringlist & inOperand2,
                                                                         Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: GALGAS_lstring mProperty_mInputActualParameterName ;
  public: GALGAS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualExistingVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualExistingVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                        const GALGAS_lstring & in_mInputActualParameterName,
                                                        const GALGAS_lstringlist & in_mPoisonedVarNameList
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
// Phase 1: @inputActualExistingVariableParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualExistingVariableParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputActualExistingVariableParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputActualExistingVariableParameterAST_2D_weak (const class GALGAS_inputActualExistingVariableParameterAST & inSource) ;

  public: GALGAS_inputActualExistingVariableParameterAST_2D_weak & operator = (const class GALGAS_inputActualExistingVariableParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputActualExistingVariableParameterAST bang_inputActualExistingVariableParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualExistingVariableParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualExistingVariableParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualExistingVariableParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualExistingVariableParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualSelfPropertyParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualSelfPropertyParameterAST : public GALGAS_actualParameterAST {
//--------------------------------- Default constructor
  public: GALGAS_inputActualSelfPropertyParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inputActualSelfPropertyParameterAST (const class cPtr_inputActualSelfPropertyParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mActualSelector (void) const ;

  public: class GALGAS_lstring readProperty_mInputActualSelfPropertyName (void) const ;

  public: class GALGAS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inputActualSelfPropertyParameterAST init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lstringlist & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualSelfPropertyParameterAST extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualSelfPropertyParameterAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstringlist & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualSelfPropertyParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualSelfPropertyParameterAST class


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
  public: void inputActualSelfPropertyParameterAST_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstringlist & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: GALGAS_lstring mProperty_mInputActualSelfPropertyName ;
  public: GALGAS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualSelfPropertyParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualSelfPropertyParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                    const GALGAS_lstring & in_mInputActualSelfPropertyName,
                                                    const GALGAS_lstringlist & in_mPoisonedVarNameList
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
// Phase 1: @inputActualSelfPropertyParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualSelfPropertyParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputActualSelfPropertyParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputActualSelfPropertyParameterAST_2D_weak (const class GALGAS_inputActualSelfPropertyParameterAST & inSource) ;

  public: GALGAS_inputActualSelfPropertyParameterAST_2D_weak & operator = (const class GALGAS_inputActualSelfPropertyParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputActualSelfPropertyParameterAST bang_inputActualSelfPropertyParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualSelfPropertyParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualSelfPropertyParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualSelfPropertyParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualSelfPropertyParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualSelfParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualSelfParameterAST : public GALGAS_actualParameterAST {
//--------------------------------- Default constructor
  public: GALGAS_inputActualSelfParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inputActualSelfParameterAST (const class cPtr_inputActualSelfParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mActualSelector (void) const ;

  public: class GALGAS_location readProperty_mSelfLocation (void) const ;

  public: class GALGAS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inputActualSelfParameterAST init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_location & inOperand1,
                                                                      const class GALGAS_lstringlist & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualSelfParameterAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualSelfParameterAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_lstringlist & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualSelfParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualSelfParameterAST class


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
  public: void inputActualSelfParameterAST_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_location & inOperand1,
                                                             const class GALGAS_lstringlist & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: GALGAS_location mProperty_mSelfLocation ;
  public: GALGAS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualSelfParameterAST (const GALGAS_lstring & in_mActualSelector,
                                            const GALGAS_location & in_mSelfLocation,
                                            const GALGAS_lstringlist & in_mPoisonedVarNameList
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
// Phase 1: @inputActualSelfParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualSelfParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputActualSelfParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputActualSelfParameterAST_2D_weak (const class GALGAS_inputActualSelfParameterAST & inSource) ;

  public: GALGAS_inputActualSelfParameterAST_2D_weak & operator = (const class GALGAS_inputActualSelfParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputActualSelfParameterAST bang_inputActualSelfParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualSelfParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualSelfParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualSelfParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualSelfParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualNewVariableParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualNewVariableParameterAST : public GALGAS_actualParameterAST {
//--------------------------------- Default constructor
  public: GALGAS_inputActualNewVariableParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inputActualNewVariableParameterAST (const class cPtr_inputActualNewVariableParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mActualSelector (void) const ;

  public: class GALGAS_lstring readProperty_mInputOptionalActualTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mInputActualParameterName (void) const ;

  public: class GALGAS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inputActualNewVariableParameterAST init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_lstringlist & inOperand3,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualNewVariableParameterAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualNewVariableParameterAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_lstringlist & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualNewVariableParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualNewVariableParameterAST class


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
  public: void inputActualNewVariableParameterAST_init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_lstringlist & inOperand3,
                                                                        Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: GALGAS_lstring mProperty_mInputOptionalActualTypeName ;
  public: GALGAS_lstring mProperty_mInputActualParameterName ;
  public: GALGAS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualNewVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualNewVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                   const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                   const GALGAS_lstring & in_mInputActualParameterName,
                                                   const GALGAS_lstringlist & in_mPoisonedVarNameList
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
// Phase 1: @inputActualNewVariableParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualNewVariableParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputActualNewVariableParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputActualNewVariableParameterAST_2D_weak (const class GALGAS_inputActualNewVariableParameterAST & inSource) ;

  public: GALGAS_inputActualNewVariableParameterAST_2D_weak & operator = (const class GALGAS_inputActualNewVariableParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputActualNewVariableParameterAST bang_inputActualNewVariableParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualNewVariableParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualNewVariableParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualNewVariableParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualNewVariableParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualNewConstantParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualNewConstantParameterAST : public GALGAS_actualParameterAST {
//--------------------------------- Default constructor
  public: GALGAS_inputActualNewConstantParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inputActualNewConstantParameterAST (const class cPtr_inputActualNewConstantParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mActualSelector (void) const ;

  public: class GALGAS_lstring readProperty_mInputOptionalActualTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mInputActualParameterName (void) const ;

  public: class GALGAS_bool readProperty_mMarkedAsUnused (void) const ;

  public: class GALGAS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inputActualNewConstantParameterAST init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_bool & inOperand3,
                                                                                     const class GALGAS_lstringlist & inOperand4,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualNewConstantParameterAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualNewConstantParameterAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3,
                                                                                 const class GALGAS_lstringlist & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualNewConstantParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualNewConstantParameterAST class


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
  public: void inputActualNewConstantParameterAST_init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_bool & inOperand3,
                                                                            const class GALGAS_lstringlist & inOperand4,
                                                                            Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: GALGAS_lstring mProperty_mInputOptionalActualTypeName ;
  public: GALGAS_lstring mProperty_mInputActualParameterName ;
  public: GALGAS_bool mProperty_mMarkedAsUnused ;
  public: GALGAS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualNewConstantParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualNewConstantParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                   const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                   const GALGAS_lstring & in_mInputActualParameterName,
                                                   const GALGAS_bool & in_mMarkedAsUnused,
                                                   const GALGAS_lstringlist & in_mPoisonedVarNameList
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
// Phase 1: @inputActualNewConstantParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualNewConstantParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputActualNewConstantParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputActualNewConstantParameterAST_2D_weak (const class GALGAS_inputActualNewConstantParameterAST & inSource) ;

  public: GALGAS_inputActualNewConstantParameterAST_2D_weak & operator = (const class GALGAS_inputActualNewConstantParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputActualNewConstantParameterAST bang_inputActualNewConstantParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualNewConstantParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualNewConstantParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualNewConstantParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualNewConstantParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputSingleJokerActualParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputSingleJokerActualParameterAST : public GALGAS_actualParameterAST {
//--------------------------------- Default constructor
  public: GALGAS_inputSingleJokerActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inputSingleJokerActualParameterAST (const class cPtr_inputSingleJokerActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mActualSelector (void) const ;

  public: class GALGAS_lstringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inputSingleJokerActualParameterAST init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstringlist & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputSingleJokerActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputSingleJokerActualParameterAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstringlist & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputSingleJokerActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputSingleJokerActualParameterAST class


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
  public: void inputSingleJokerActualParameterAST_init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_lstringlist & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: GALGAS_lstringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputSingleJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputSingleJokerActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                   const GALGAS_lstringlist & in_mPoisonedVarNameList
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
// Phase 1: @inputSingleJokerActualParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputSingleJokerActualParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputSingleJokerActualParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputSingleJokerActualParameterAST_2D_weak (const class GALGAS_inputSingleJokerActualParameterAST & inSource) ;

  public: GALGAS_inputSingleJokerActualParameterAST_2D_weak & operator = (const class GALGAS_inputSingleJokerActualParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputSingleJokerActualParameterAST bang_inputSingleJokerActualParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputSingleJokerActualParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputSingleJokerActualParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputSingleJokerActualParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputSingleJokerActualParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputJokerActualParameterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputJokerActualParameterAST : public GALGAS_actualParameterAST {
//--------------------------------- Default constructor
  public: GALGAS_inputJokerActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inputJokerActualParameterAST (const class cPtr_inputJokerActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mQualifierLocation (void) const ;

  public: class GALGAS_uint readProperty_mJokerIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inputJokerActualParameterAST init_21__21_ (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_uint & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputJokerActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputJokerActualParameterAST class_func_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_uint & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputJokerActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputJokerActualParameterAST class


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
  public: void inputJokerActualParameterAST_init_21__21_ (const class GALGAS_location & inOperand0,
                                                          const class GALGAS_uint & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension getter isCompatibleWith
  public: virtual class GALGAS_bool getter_isCompatibleWith (const class GALGAS_formalArgumentPassingModeAST inFormalPassingMode,
           const class GALGAS_string inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_lstring arg_inFormalSelector,
           const class GALGAS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GALGAS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_actualParameterListForGeneration & arg_ioActualParameterListForGeneration,
           class GALGAS_stringset & arg_ioExclusiveVariableSet,
           class GALGAS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GALGAS_actualOutputArgumentList & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mQualifierLocation ;
  public: GALGAS_uint mProperty_mJokerIndex ;


//--- Default constructor
  public: cPtr_inputJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputJokerActualParameterAST (const GALGAS_location & in_mQualifierLocation,
                                             const GALGAS_uint & in_mJokerIndex
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
// Phase 1: @inputJokerActualParameterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputJokerActualParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputJokerActualParameterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputJokerActualParameterAST_2D_weak (const class GALGAS_inputJokerActualParameterAST & inSource) ;

  public: GALGAS_inputJokerActualParameterAST_2D_weak & operator = (const class GALGAS_inputJokerActualParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputJokerActualParameterAST bang_inputJokerActualParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputJokerActualParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputJokerActualParameterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputJokerActualParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputJokerActualParameterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externProcedureDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externProcedureDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_externProcedureDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_externProcedureDeclarationAST (const class cPtr_externProcedureDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_isFilePrivate (void) const ;

  public: class GALGAS_lstring readProperty_mRoutineName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mFormalArgumentListAST (void) const ;

  public: class GALGAS_bool readProperty_usefullProcedure (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externProcedureDeclarationAST init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const class GALGAS_bool & inOperand0,
                                                                                                                         const class GALGAS_bool & inOperand1,
                                                                                                                         const class GALGAS_lstring & inOperand2,
                                                                                                                         const class GALGAS_formalParameterListAST & inOperand3,
                                                                                                                         const class GALGAS_bool & inOperand4,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externProcedureDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externProcedureDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_bool & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_formalParameterListAST & inOperand3,
                                                                            const class GALGAS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_externProcedureDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externProcedureDeclarationAST class


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
  public: void externProcedureDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const class GALGAS_bool & inOperand0,
                                                                                                                const class GALGAS_bool & inOperand1,
                                                                                                                const class GALGAS_lstring & inOperand2,
                                                                                                                const class GALGAS_formalParameterListAST & inOperand3,
                                                                                                                const class GALGAS_bool & inOperand4,
                                                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_isFilePrivate ;
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_formalParameterListAST mProperty_mFormalArgumentListAST ;
  public: GALGAS_bool mProperty_usefullProcedure ;


//--- Default constructor
  public: cPtr_externProcedureDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externProcedureDeclarationAST (const GALGAS_bool & in_isPredefined,
                                              const GALGAS_bool & in_isFilePrivate,
                                              const GALGAS_lstring & in_mRoutineName,
                                              const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                              const GALGAS_bool & in_usefullProcedure
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
// Phase 1: @externProcedureDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externProcedureDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_externProcedureDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_externProcedureDeclarationAST_2D_weak (const class GALGAS_externProcedureDeclarationAST & inSource) ;

  public: GALGAS_externProcedureDeclarationAST_2D_weak & operator = (const class GALGAS_externProcedureDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_externProcedureDeclarationAST bang_externProcedureDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externProcedureDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externProcedureDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_externProcedureDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externProcedureDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_procDeclarationAST : public GALGAS_externProcedureDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_procDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_procDeclarationAST (const class cPtr_procDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticInstructionListAST readProperty_mRoutineInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfRoutineInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_procDeclarationAST init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                      const class GALGAS_bool & inOperand1,
                                                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                                                      const class GALGAS_formalParameterListAST & inOperand3,
                                                                                                                      const class GALGAS_bool & inOperand4,
                                                                                                                      const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                                                                      const class GALGAS_location & inOperand6,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_procDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_procDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_bool & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_formalParameterListAST & inOperand3,
                                                                 const class GALGAS_bool & inOperand4,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                 const class GALGAS_location & inOperand6
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_procDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_procDeclarationAST class


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
  public: void procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                             const class GALGAS_bool & inOperand1,
                                                                                                             const class GALGAS_lstring & inOperand2,
                                                                                                             const class GALGAS_formalParameterListAST & inOperand3,
                                                                                                             const class GALGAS_bool & inOperand4,
                                                                                                             const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                                                             const class GALGAS_location & inOperand6,
                                                                                                             Compiler * inCompiler) ;


//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticInstructionListAST mProperty_mRoutineInstructionList ;
  public: GALGAS_location mProperty_mEndOfRoutineInstructionList ;


//--- Default constructor
  public: cPtr_procDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_procDeclarationAST (const GALGAS_bool & in_isPredefined,
                                   const GALGAS_bool & in_isFilePrivate,
                                   const GALGAS_lstring & in_mRoutineName,
                                   const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                   const GALGAS_bool & in_usefullProcedure,
                                   const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                   const GALGAS_location & in_mEndOfRoutineInstructionList
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
// Phase 1: @procDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_procDeclarationAST_2D_weak : public GALGAS_externProcedureDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_procDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_procDeclarationAST_2D_weak (const class GALGAS_procDeclarationAST & inSource) ;

  public: GALGAS_procDeclarationAST_2D_weak & operator = (const class GALGAS_procDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_procDeclarationAST bang_procDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_procDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_procDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_procDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_procDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxExtensionsDictionary dict
//
//--------------------------------------------------------------------------------------------------

class cSharedDictRoot_syntaxExtensionsDictionary ;

//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxExtensionsDictionary : public AC_GALGAS_root {
//--------------------------------- Attributes
  private: cSharedDictRoot_syntaxExtensionsDictionary * mSharedDict ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxExtensionsDictionary (void) ;

//--------------------------------- Destructor
  public: virtual ~ GALGAS_syntaxExtensionsDictionary (void) ;

//--------------------------------- Handle copy
  public: GALGAS_syntaxExtensionsDictionary (const GALGAS_syntaxExtensionsDictionary & inSource) ;
  public: GALGAS_syntaxExtensionsDictionary & operator = (const GALGAS_syntaxExtensionsDictionary & inSource) ;

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
  public: VIRTUAL_IN_DEBUG ComparisonResult objectCompare (const GALGAS_syntaxExtensionsDictionary & inOperand) const ;

//--- Enumeration
  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxExtensionsDictionary init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxExtensionsDictionary extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxExtensionsDictionary class_func_emptyDict (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GALGAS_string constinArgument0,
                                               class GALGAS_galgas_33_SyntaxExtensionListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_string constinArgument0,
                                                  class GALGAS_galgas_33_SyntaxExtensionListAST & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setExtensionListForKey (class GALGAS_galgas_33_SyntaxExtensionListAST constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_string constinArgument0,
                                                  class GALGAS_galgas_33_SyntaxExtensionListAST & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_extensionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_hasKey (const class GALGAS_string & constinOperand0
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxExtensionsDictionary_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_syntaxExtensionsDictionary_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syntaxExtensionsDictionary ;
 
} ; // End of GALGAS_syntaxExtensionsDictionary class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxExtensionsDictionary : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxExtensionsDictionary (const GALGAS_syntaxExtensionsDictionary & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_key (LOCATION_ARGS) const ;
  public: class GALGAS_galgas_33_SyntaxExtensionListAST current_extensionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxExtensionsDictionary_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3SyntaxExtensionListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxExtensionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxExtensionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_galgas_33_SyntaxExtensionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSyntaxComponentName,
                                                 const class GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                 const class GALGAS_syntaxRuleListAST & in_mRuleList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_galgas_33_SyntaxExtensionListAST init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxExtensionListAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_galgas_33_SyntaxExtensionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_galgas_33_SyntaxExtensionListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                         const class GALGAS_syntaxRuleListAST & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_SyntaxExtensionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                     const class GALGAS_syntaxRuleListAST & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_galgas_33_SyntaxExtensionListAST add_operation (const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_nonterminalDeclarationListAST constinArgument1,
                                               class GALGAS_syntaxRuleListAST constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_nonterminalDeclarationListAST constinArgument1,
                                                      class GALGAS_syntaxRuleListAST constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                 class GALGAS_syntaxRuleListAST & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                class GALGAS_syntaxRuleListAST & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                      class GALGAS_syntaxRuleListAST & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationListAtIndex (class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleListAtIndex (class GALGAS_syntaxRuleListAST constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                              class GALGAS_syntaxRuleListAST & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                             class GALGAS_syntaxRuleListAST & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_galgas_33_SyntaxExtensionListAST ;
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_galgas_33_SyntaxExtensionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxExtensionsDictionary_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxExtensionsDictionary_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;
  public: inline GALGAS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GALGAS_galgas_33_SyntaxExtensionListAST mProperty_extensionList ;
  public: inline GALGAS_galgas_33_SyntaxExtensionListAST readProperty_extensionList (void) const {
    return mProperty_extensionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxExtensionsDictionary_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setExtensionList (const GALGAS_galgas_33_SyntaxExtensionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_extensionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_syntaxExtensionsDictionary_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxExtensionsDictionary_2D_element (const GALGAS_string & in_key,
                                                        const GALGAS_galgas_33_SyntaxExtensionListAST & in_extensionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxExtensionsDictionary_2D_element init_21__21_ (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxExtensionsDictionary_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxExtensionsDictionary_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                                    const class GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1,
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
 
} ; // End of GALGAS_syntaxExtensionsDictionary_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: syntaxExtensionsDictionary-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxExtensionsDictionary_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_syntaxExtensionsDictionary_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxExtensionsDictionary_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_syntaxExtensionsDictionary_2D_element_3F_ (const GALGAS_syntaxExtensionsDictionary_2D_element & inValue) ;
  public: static GALGAS_syntaxExtensionsDictionary_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_syntaxExtensionsDictionary_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_syntaxExtensionsDictionary_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxExtensionsDictionary_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalDeclarationListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_nonterminalDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mNonterminalName,
                                                 const class GALGAS_nonTerminalLabelListAST & in_mLabels
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonterminalDeclarationListAST init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonterminalDeclarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_nonterminalDeclarationListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_nonTerminalLabelListAST & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonterminalDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_nonTerminalLabelListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonterminalDeclarationListAST add_operation (const GALGAS_nonterminalDeclarationListAST & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_nonTerminalLabelListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_nonTerminalLabelListAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelsAtIndex (class GALGAS_nonTerminalLabelListAST constinArgument0,
                                                          class GALGAS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_nonTerminalLabelListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_nonTerminalLabelListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_mLabelsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_nonterminalDeclarationListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_nonterminalDeclarationListAST ;
 
} ; // End of GALGAS_nonterminalDeclarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonterminalDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_nonterminalDeclarationListAST (const GALGAS_nonterminalDeclarationListAST & inEnumeratedObject,
                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GALGAS_nonTerminalLabelListAST current_mLabels (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonterminalDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxRuleListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_syntaxRuleListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_syntaxRuleListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mNonterminalName,
                                                 const class GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxRuleListAST init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxRuleListAST extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxRuleListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_syntaxRuleListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_syntaxRuleLabelListAST & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxRuleListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_syntaxRuleLabelListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_syntaxRuleListAST add_operation (const GALGAS_syntaxRuleListAST & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_syntaxRuleLabelListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_syntaxRuleLabelListAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelListAtIndex (class GALGAS_syntaxRuleLabelListAST constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_mLabelListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_syntaxRuleListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syntaxRuleListAST ;
 
} ; // End of GALGAS_syntaxRuleListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxRuleListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxRuleListAST (const GALGAS_syntaxRuleListAST & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxRuleLabelListAST current_mLabelList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxRuleListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxExtensionListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSyntaxComponentName ;
  public: inline GALGAS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GALGAS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: inline GALGAS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GALGAS_syntaxRuleListAST mProperty_mRuleList ;
  public: inline GALGAS_syntaxRuleListAST readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GALGAS_nonterminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GALGAS_syntaxRuleListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (const GALGAS_lstring & in_mSyntaxComponentName,
                                                              const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                              const GALGAS_syntaxRuleListAST & in_mRuleList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                      const class GALGAS_syntaxRuleListAST & inOperand2,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                          const class GALGAS_syntaxRuleListAST & inOperand2,
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
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2D_element ;

