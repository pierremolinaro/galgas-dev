#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structuredCastInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structuredCastInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structuredCastInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structuredCastInstructionAST_2D_weak (const class GALGAS_structuredCastInstructionAST & inSource) ;

  public: GALGAS_structuredCastInstructionAST_2D_weak & operator = (const class GALGAS_structuredCastInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structuredCastInstructionAST bang_structuredCastInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structuredCastInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structuredCastInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structuredCastInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structuredCastInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_castInstructionBranchListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_castInstructionBranchListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_castInstructionBranchListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mType,
                                                 const class GALGAS_string & in_mCastedVarCppName,
                                                 const class GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_castInstructionBranchListForGeneration extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_castInstructionBranchListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_castInstructionBranchListForGeneration constructor_listWithValue (const class GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                                const class GALGAS_string & inOperand2,
                                                                                                const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_castInstructionBranchListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_castInstructionBranchListForGeneration add_operation (const GALGAS_castInstructionBranchListForGeneration & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_dynamicTypeComparisonKind constinArgument0,
                                               class GALGAS_unifiedTypeMapEntry constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               class GALGAS_semanticInstructionListForGeneration constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_dynamicTypeComparisonKind constinArgument0,
                                                      class GALGAS_unifiedTypeMapEntry constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_semanticInstructionListForGeneration constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_dynamicTypeComparisonKind & outArgument0,
                                                 class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_dynamicTypeComparisonKind & outArgument0,
                                                class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_dynamicTypeComparisonKind & outArgument0,
                                                      class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCastedVarCppNameAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_semanticInstructionListForGeneration constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeComparisonKindAtIndex (class GALGAS_dynamicTypeComparisonKind constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_dynamicTypeComparisonKind & outArgument0,
                                              class GALGAS_unifiedTypeMapEntry & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_dynamicTypeComparisonKind & outArgument0,
                                             class GALGAS_unifiedTypeMapEntry & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCastedVarCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_dynamicTypeComparisonKind getter_mTypeComparisonKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_castInstructionBranchListForGeneration ;
 
} ; // End of GALGAS_castInstructionBranchListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_castInstructionBranchListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_dynamicTypeComparisonKind current_mTypeComparisonKind (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCastedVarCppName (LOCATION_ARGS) const ;
  public: class GALGAS_semanticInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_castInstructionBranchListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_castInstructionBranchListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: inline GALGAS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const {
    return mProperty_mTypeComparisonKind ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_string mProperty_mCastedVarCppName ;
  public: inline GALGAS_string readProperty_mCastedVarCppName (void) const {
    return mProperty_mCastedVarCppName ;
  }

  public: GALGAS_semanticInstructionListForGeneration mProperty_mInstructionList ;
  public: inline GALGAS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_castInstructionBranchListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeComparisonKind (const GALGAS_dynamicTypeComparisonKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeComparisonKind = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCastedVarCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCastedVarCppName = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_castInstructionBranchListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_castInstructionBranchListForGeneration_2D_element (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                    const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                    const GALGAS_string & in_mCastedVarCppName,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_castInstructionBranchListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_castInstructionBranchListForGeneration_2D_element constructor_new (const class GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                 const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                                 const class GALGAS_string & inOperand2,
                                                                                                 const class GALGAS_semanticInstructionListForGeneration & inOperand3,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_castInstructionBranchListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_castInstructionBranchListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structuredCastInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structuredCastInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_structuredCastInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_structuredCastInstructionForGeneration (const class cPtr_structuredCastInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_castInstructionBranchListForGeneration readProperty_mCastBranchList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mElseInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structuredCastInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structuredCastInstructionForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                      const class GALGAS_castInstructionBranchListForGeneration & inOperand1,
                                                                                      const class GALGAS_semanticInstructionListForGeneration & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structuredCastInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structuredCastInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structuredCastInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_structuredCastInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_castInstructionBranchListForGeneration mProperty_mCastBranchList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mElseInstructionList ;

//--- Constructor
  public: cPtr_structuredCastInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                       const GALGAS_castInstructionBranchListForGeneration & in_mCastBranchList,
                                                       const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structuredCastInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structuredCastInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structuredCastInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structuredCastInstructionForGeneration_2D_weak (const class GALGAS_structuredCastInstructionForGeneration & inSource) ;

  public: GALGAS_structuredCastInstructionForGeneration_2D_weak & operator = (const class GALGAS_structuredCastInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structuredCastInstructionForGeneration bang_structuredCastInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structuredCastInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structuredCastInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structuredCastInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structuredCastInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualElementsInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_plusEqualElementsInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualElementsInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_plusEqualElementsInstructionAST (const class cPtr_plusEqualElementsInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_actualOutputExpressionList readProperty_mExpressions (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualElementsInstructionAST extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualElementsInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_bool & inOperand1,
                                                                               const class GALGAS_lstring & inOperand2,
                                                                               const class GALGAS_lstringlist & inOperand3,
                                                                               const class GALGAS_actualOutputExpressionList & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualElementsInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_plusEqualElementsInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @plusEqualElementsInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_plusEqualElementsInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_actualOutputExpressionList mProperty_mExpressions ;

//--- Constructor
  public: cPtr_plusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_bool & in_mPrefixedBySelf,
                                                const GALGAS_lstring & in_mReceiverName,
                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                const GALGAS_actualOutputExpressionList & in_mExpressions
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualElementsInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_plusEqualElementsInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualElementsInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_plusEqualElementsInstructionAST_2D_weak (const class GALGAS_plusEqualElementsInstructionAST & inSource) ;

  public: GALGAS_plusEqualElementsInstructionAST_2D_weak & operator = (const class GALGAS_plusEqualElementsInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_plusEqualElementsInstructionAST bang_plusEqualElementsInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualElementsInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualElementsInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualElementsInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_plusEqualElementsInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualExpressionInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_plusEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_plusEqualExpressionInstructionAST (const class cPtr_plusEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_bool & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_lstringlist & inOperand3,
                                                                                 const class GALGAS_semanticExpressionAST & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_plusEqualExpressionInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @plusEqualExpressionInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_plusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_plusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_bool & in_mPrefixedBySelf,
                                                  const GALGAS_lstring & in_mReceiverName,
                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                  const GALGAS_semanticExpressionAST & in_mExpression
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualExpressionInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_plusEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_plusEqualExpressionInstructionAST_2D_weak (const class GALGAS_plusEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_plusEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_plusEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_plusEqualExpressionInstructionAST bang_plusEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_plusEqualExpressionInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @minusEqualExpressionInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_minusEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_minusEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_minusEqualExpressionInstructionAST (const class cPtr_minusEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_minusEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_minusEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_bool & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_lstringlist & inOperand3,
                                                                                  const class GALGAS_semanticExpressionAST & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_minusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_minusEqualExpressionInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @minusEqualExpressionInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_minusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_minusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_bool & in_mPrefixedBySelf,
                                                   const GALGAS_lstring & in_mReceiverName,
                                                   const GALGAS_lstringlist & in_mStructAttributeList,
                                                   const GALGAS_semanticExpressionAST & in_mExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @minusEqualExpressionInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_minusEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_minusEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_minusEqualExpressionInstructionAST_2D_weak (const class GALGAS_minusEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_minusEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_minusEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_minusEqualExpressionInstructionAST bang_minusEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_minusEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_minusEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_minusEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_minusEqualExpressionInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mulEqualExpressionInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_mulEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_mulEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_mulEqualExpressionInstructionAST (const class cPtr_mulEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_mulEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mulEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_lstringlist & inOperand3,
                                                                                const class GALGAS_semanticExpressionAST & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mulEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_mulEqualExpressionInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mulEqualExpressionInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_mulEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_mulEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_bool & in_mPrefixedBySelf,
                                                 const GALGAS_lstring & in_mReceiverName,
                                                 const GALGAS_lstringlist & in_mStructAttributeList,
                                                 const GALGAS_semanticExpressionAST & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mulEqualExpressionInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_mulEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_mulEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_mulEqualExpressionInstructionAST_2D_weak (const class GALGAS_mulEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_mulEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_mulEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_mulEqualExpressionInstructionAST bang_mulEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_mulEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mulEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mulEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_mulEqualExpressionInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @divEqualExpressionInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_divEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_divEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_divEqualExpressionInstructionAST (const class cPtr_divEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_divEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_divEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_lstringlist & inOperand3,
                                                                                const class GALGAS_semanticExpressionAST & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_divEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_divEqualExpressionInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @divEqualExpressionInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_divEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_divEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_bool & in_mPrefixedBySelf,
                                                 const GALGAS_lstring & in_mReceiverName,
                                                 const GALGAS_lstringlist & in_mStructAttributeList,
                                                 const GALGAS_semanticExpressionAST & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @divEqualExpressionInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_divEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_divEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_divEqualExpressionInstructionAST_2D_weak (const class GALGAS_divEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_divEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_divEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_divEqualExpressionInstructionAST bang_divEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_divEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_divEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_divEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_divEqualExpressionInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualnstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_plusEqualnstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualnstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_plusEqualnstructionForGeneration (const class cPtr_plusEqualnstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mReceiverCppName (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GALGAS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionListForGeneration readProperty_mExpressionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualnstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualnstructionForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_location & inOperand3,
                                                                                const class GALGAS_lstringlist & inOperand4,
                                                                                const class GALGAS_semanticExpressionListForGeneration & inOperand5
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualnstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_plusEqualnstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @plusEqualnstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_plusEqualnstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mReceiverCppName ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionListForGeneration mProperty_mExpressionList ;

//--- Constructor
  public: cPtr_plusEqualnstructionForGeneration (const GALGAS_string & in_mReceiverCppName,
                                                 const GALGAS_unifiedTypeMapEntry & in_mTargetType,
                                                 const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                 const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstringlist & in_mStructAttributeList,
                                                 const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualnstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_plusEqualnstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualnstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_plusEqualnstructionForGeneration_2D_weak (const class GALGAS_plusEqualnstructionForGeneration & inSource) ;

  public: GALGAS_plusEqualnstructionForGeneration_2D_weak & operator = (const class GALGAS_plusEqualnstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_plusEqualnstructionForGeneration bang_plusEqualnstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualnstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualnstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualnstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_plusEqualnstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @opEqualInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_opEqualInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_opEqualInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_opEqualInstructionForGeneration (const class cPtr_opEqualInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GALGAS_string readProperty_mTargetVariableCppName (void) const ;

  public: class GALGAS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

  public: class GALGAS_string readProperty_mGeneratedMethod (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_opEqualInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_opEqualInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
                                                                               const class GALGAS_string & inOperand3,
                                                                               const class GALGAS_lstringlist & inOperand4,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand5,
                                                                               const class GALGAS_string & inOperand6
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_opEqualInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_opEqualInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opEqualInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @opEqualInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_opEqualInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GALGAS_string mProperty_mTargetVariableCppName ;
  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mSourceExpression ;
  public: GALGAS_string mProperty_mGeneratedMethod ;

//--- Constructor
  public: cPtr_opEqualInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_unifiedTypeMapEntry & in_mTargetType,
                                                const GALGAS_string & in_mTargetVariableCppName,
                                                const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                const GALGAS_semanticExpressionForGeneration & in_mSourceExpression,
                                                const GALGAS_string & in_mGeneratedMethod
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @opEqualInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_opEqualInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_opEqualInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_opEqualInstructionForGeneration_2D_weak (const class GALGAS_opEqualInstructionForGeneration & inSource) ;

  public: GALGAS_opEqualInstructionForGeneration_2D_weak & operator = (const class GALGAS_opEqualInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_opEqualInstructionForGeneration bang_opEqualInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_opEqualInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_opEqualInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_opEqualInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_opEqualInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opEqualInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dropInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dropInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_dropInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_dropInstructionAST (const class cPtr_dropInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstringlist readProperty_mDropList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dropInstructionAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dropInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_lstringlist & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dropInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dropInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dropInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dropInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dropInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstringlist mProperty_mDropList ;

//--- Constructor
  public: cPtr_dropInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_lstringlist & in_mDropList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dropInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dropInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dropInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dropInstructionAST_2D_weak (const class GALGAS_dropInstructionAST & inSource) ;

  public: GALGAS_dropInstructionAST_2D_weak & operator = (const class GALGAS_dropInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dropInstructionAST bang_dropInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dropInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dropInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dropInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dropInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dropInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @fixitElementAST enum                                           *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitElementAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_fixitElementAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_fixItRemove,
    kEnum_fixItReplace,
    kEnum_fixItInsertAfter,
    kEnum_fixItInsertBefore
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitElementAST extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitElementAST constructor_fixItInsertAfter (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                            const class GALGAS_location & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementAST constructor_fixItInsertBefore (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                             const class GALGAS_location & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementAST constructor_fixItRemove (LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementAST constructor_fixItReplace (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                        const class GALGAS_location & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fixitElementAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_fixItInsertAfter (class GALGAS_semanticExpressionAST & outArgument0,
                                                         class GALGAS_location & outArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_fixItInsertBefore (class GALGAS_semanticExpressionAST & outArgument0,
                                                          class GALGAS_location & outArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_fixItReplace (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class GALGAS_location & outArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItRemove (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItReplace (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_fixItInsertAfter (class GALGAS_semanticExpressionAST & outOperand0,
                                                           class GALGAS_location & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItInsertBefore (class GALGAS_semanticExpressionAST & outOperand0,
                                                            class GALGAS_location & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItRemove () const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItReplace (class GALGAS_semanticExpressionAST & outOperand0,
                                                       class GALGAS_location & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fixitElementAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @fixitElementAST enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementAST_fixItReplace : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionAST mAssociatedValue0 ;
  public: const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementAST_fixItReplace (const GALGAS_semanticExpressionAST inAssociatedValue0,
                                                              const GALGAS_location inAssociatedValue1
                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementAST_fixItReplace (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementAST_fixItInsertAfter : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionAST mAssociatedValue0 ;
  public: const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementAST_fixItInsertAfter (const GALGAS_semanticExpressionAST inAssociatedValue0,
                                                                  const GALGAS_location inAssociatedValue1
                                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementAST_fixItInsertAfter (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementAST_fixItInsertBefore : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionAST mAssociatedValue0 ;
  public: const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementAST_fixItInsertBefore (const GALGAS_semanticExpressionAST inAssociatedValue0,
                                                                   const GALGAS_location inAssociatedValue1
                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementAST_fixItInsertBefore (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_fixitListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_fixitListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_fixitElementAST & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitListAST extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_fixitListAST constructor_listWithValue (const class GALGAS_fixitElementAST & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_fixitListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_fixitElementAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_fixitListAST add_operation (const GALGAS_fixitListAST & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_fixitElementAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_fixitElementAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_fixitElementAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_fixitElementAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_fixitElementAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GALGAS_fixitElementAST constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_fixitElementAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_fixitElementAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_fixitElementAST getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_fixitListAST ;
 
} ; // End of GALGAS_fixitListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_fixitListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_fixitListAST (const GALGAS_fixitListAST & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_fixitElementAST current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_fixitListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_fixitElementAST mProperty_mElement ;
  public: inline GALGAS_fixitElementAST readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_fixitListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GALGAS_fixitElementAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_fixitListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_fixitListAST_2D_element (const GALGAS_fixitElementAST & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitListAST_2D_element constructor_new (const class GALGAS_fixitElementAST & inOperand0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fixitListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fixitListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @errorInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_errorInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_errorInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_errorInstructionAST (const class cPtr_errorInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mLocationExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mMessageExpression (void) const ;

  public: class GALGAS_lstringlist readProperty_mBuiltVariableList (void) const ;

  public: class GALGAS_fixitListAST readProperty_mFixitListAST (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_errorInstructionAST extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_errorInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   const class GALGAS_semanticExpressionAST & inOperand2,
                                                                   const class GALGAS_lstringlist & inOperand3,
                                                                   const class GALGAS_fixitListAST & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_errorInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_errorInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @errorInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_errorInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mLocationExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mMessageExpression ;
  public: GALGAS_lstringlist mProperty_mBuiltVariableList ;
  public: GALGAS_fixitListAST mProperty_mFixitListAST ;

//--- Constructor
  public: cPtr_errorInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                    const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                    const GALGAS_semanticExpressionAST & in_mMessageExpression,
                                    const GALGAS_lstringlist & in_mBuiltVariableList,
                                    const GALGAS_fixitListAST & in_mFixitListAST
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @errorInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_errorInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_errorInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_errorInstructionAST_2D_weak (const class GALGAS_errorInstructionAST & inSource) ;

  public: GALGAS_errorInstructionAST_2D_weak & operator = (const class GALGAS_errorInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_errorInstructionAST bang_errorInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_errorInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_errorInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_errorInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_errorInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListAST enterFixItListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const class GALGAS_fixitListAST inObject,
                                                      class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @fixitElementForGeneration enum                                      *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitElementForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_fixitElementForGeneration (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_fixItRemove,
    kEnum_fixItReplace,
    kEnum_fixItInsertBefore,
    kEnum_fixItInsertAfter
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitElementForGeneration extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitElementForGeneration constructor_fixItInsertAfter (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementForGeneration constructor_fixItInsertBefore (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementForGeneration constructor_fixItRemove (LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementForGeneration constructor_fixItReplace (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fixitElementForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_fixItInsertAfter (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_fixItInsertBefore (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_fixItReplace (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItRemove (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItReplace (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_fixItInsertAfter (class GALGAS_semanticExpressionForGeneration & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItInsertBefore (class GALGAS_semanticExpressionForGeneration & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItRemove () const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItReplace (class GALGAS_semanticExpressionForGeneration & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fixitElementForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @fixitElementForGeneration enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementForGeneration_fixItReplace : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionForGeneration mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementForGeneration_fixItReplace (const GALGAS_semanticExpressionForGeneration inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementForGeneration_fixItReplace (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionForGeneration mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore (const GALGAS_semanticExpressionForGeneration inAssociatedValue0
                                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionForGeneration mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter (const GALGAS_semanticExpressionForGeneration inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_fixitListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_fixitListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_fixitElementForGeneration & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitListForGeneration extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_fixitListForGeneration constructor_listWithValue (const class GALGAS_fixitElementForGeneration & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_fixitListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_fixitElementForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_fixitListForGeneration add_operation (const GALGAS_fixitListForGeneration & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_fixitElementForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_fixitElementForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_fixitElementForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_fixitElementForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_fixitElementForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GALGAS_fixitElementForGeneration constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_fixitElementForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_fixitElementForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_fixitElementForGeneration getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_fixitListForGeneration ;
 
} ; // End of GALGAS_fixitListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_fixitListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_fixitListForGeneration (const GALGAS_fixitListForGeneration & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_fixitElementForGeneration current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_fixitListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_fixitElementForGeneration mProperty_mElement ;
  public: inline GALGAS_fixitElementForGeneration readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_fixitListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GALGAS_fixitElementForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_fixitListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_fixitListForGeneration_2D_element (const GALGAS_fixitElementForGeneration & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitListForGeneration_2D_element constructor_new (const class GALGAS_fixitElementForGeneration & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fixitListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fixitListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListForGeneration generateFixIt'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const class GALGAS_fixitListForGeneration inObject,
                                    class GALGAS_stringset & io_ioInclusionSet,
                                    class GALGAS_uint & io_ioTemporaryVariableIndex,
                                    class GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                    const class GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                    class GALGAS_string & io_ioGeneratedCode,
                                    class GALGAS_string & out_outFixItArrayCppName,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (class cPtr_semanticExpressionForGeneration * inObject,
                                             class GALGAS_string & io_ioGeneratedCode,
                                             class GALGAS_stringset & io_ioInclusionSet,
                                             class GALGAS_uint & io_ioTemporaryVariableIndex,
                                             class GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                             class GALGAS_string & out_outCppExpression,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @errorInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_errorInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_errorInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_errorInstructionForGeneration (const class cPtr_errorInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mErrorExpression (void) const ;

  public: class GALGAS_stringlist readProperty_mBuiltVariableCppNameList (void) const ;

  public: class GALGAS_fixitListForGeneration readProperty_mFixitListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_errorInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_errorInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                             const class GALGAS_stringlist & inOperand3,
                                                                             const class GALGAS_fixitListForGeneration & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_errorInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_errorInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @errorInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_errorInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mErrorExpression ;
  public: GALGAS_stringlist mProperty_mBuiltVariableCppNameList ;
  public: GALGAS_fixitListForGeneration mProperty_mFixitListForGeneration ;

//--- Constructor
  public: cPtr_errorInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                              const GALGAS_semanticExpressionForGeneration & in_mErrorExpression,
                                              const GALGAS_stringlist & in_mBuiltVariableCppNameList,
                                              const GALGAS_fixitListForGeneration & in_mFixitListForGeneration
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @errorInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_errorInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_errorInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_errorInstructionForGeneration_2D_weak (const class GALGAS_errorInstructionForGeneration & inSource) ;

  public: GALGAS_errorInstructionForGeneration_2D_weak & operator = (const class GALGAS_errorInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_errorInstructionForGeneration bang_errorInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_errorInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_errorInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_errorInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_errorInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectElementListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectElementListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectElementListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_forInstructionEnumeratedObjectElementListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mOptionalTypeName,
                                                 const class GALGAS_bool & in_mDeclaredAsUnused,
                                                 const class GALGAS_lstring & in_mOptionalConstantName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectElementListAST extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectElementListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_forInstructionEnumeratedObjectElementListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_bool & inOperand1,
                                                                                                      const class GALGAS_lstring & inOperand2
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_forInstructionEnumeratedObjectElementListAST add_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_bool constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_bool constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_bool & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclaredAsUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionalConstantNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionalTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_bool & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mDeclaredAsUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectElementListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectElementListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectElementListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_forInstructionEnumeratedObjectElementListAST ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectElementListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_forInstructionEnumeratedObjectElementListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mOptionalTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mDeclaredAsUnused (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOptionalConstantName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectElementListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mOptionalTypeName ;
  public: inline GALGAS_lstring readProperty_mOptionalTypeName (void) const {
    return mProperty_mOptionalTypeName ;
  }

  public: GALGAS_bool mProperty_mDeclaredAsUnused ;
  public: inline GALGAS_bool readProperty_mDeclaredAsUnused (void) const {
    return mProperty_mDeclaredAsUnused ;
  }

  public: GALGAS_lstring mProperty_mOptionalConstantName ;
  public: inline GALGAS_lstring readProperty_mOptionalConstantName (void) const {
    return mProperty_mOptionalConstantName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionalTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalTypeName = inValue ;
  }

  public: inline void setter_setMDeclaredAsUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaredAsUnused = inValue ;
  }

  public: inline void setter_setMOptionalConstantName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalConstantName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (const GALGAS_lstring & in_mOptionalTypeName,
                                                                          const GALGAS_bool & in_mDeclaredAsUnused,
                                                                          const GALGAS_lstring & in_mOptionalConstantName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                       const class GALGAS_bool & inOperand1,
                                                                                                       const class GALGAS_lstring & inOperand2,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractEnumeratedCollectionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractEnumeratedCollectionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractEnumeratedCollectionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractEnumeratedCollectionAST (const class cPtr_abstractEnumeratedCollectionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractEnumeratedCollectionAST extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractEnumeratedCollectionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractEnumeratedCollectionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractEnumeratedCollectionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractEnumeratedCollectionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_localConstantList & ioLocalConstantListForDoBranch,
           class GALGAS_string & outEnumeratorCppName,
           class GALGAS_semanticExpressionForGeneration & outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractEnumeratedCollectionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractEnumeratedCollectionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractEnumeratedCollectionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractEnumeratedCollectionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractEnumeratedCollectionAST_2D_weak (const class GALGAS_abstractEnumeratedCollectionAST & inSource) ;

  public: GALGAS_abstractEnumeratedCollectionAST_2D_weak & operator = (const class GALGAS_abstractEnumeratedCollectionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractEnumeratedCollectionAST bang_abstractEnumeratedCollectionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractEnumeratedCollectionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractEnumeratedCollectionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractEnumeratedCollectionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractEnumeratedCollectionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionImplicitVarInExpAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionImplicitVarInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST (const class cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mPrefix (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfAnonymousEnumeration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionImplicitVarInExpAST extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionImplicitVarInExpAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                       const class GALGAS_location & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumeratedCollectionImplicitVarInExpAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumeratedCollectionImplicitVarInExpAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionImplicitVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_localConstantList & ioLocalConstantListForDoBranch,
           class GALGAS_string & outEnumeratorCppName,
           class GALGAS_semanticExpressionForGeneration & outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mPrefix ;
  public: GALGAS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GALGAS_location mProperty_mEndOfAnonymousEnumeration ;

//--- Constructor
  public: cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                        const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                        const GALGAS_location & in_mEndOfAnonymousEnumeration
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionImplicitVarInExpAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak : public GALGAS_abstractEnumeratedCollectionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (const class GALGAS_enumeratedCollectionImplicitVarInExpAST & inSource) ;

  public: GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak & operator = (const class GALGAS_enumeratedCollectionImplicitVarInExpAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST bang_enumeratedCollectionImplicitVarInExpAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionVarInExpAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionVarInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionVarInExpAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_enumeratedCollectionVarInExpAST (const class cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mEnumerationOptionalTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mEnumerationVariable (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfEnumerationExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionVarInExpAST extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionVarInExpAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_semanticExpressionAST & inOperand2,
                                                                               const class GALGAS_location & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumeratedCollectionVarInExpAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumeratedCollectionVarInExpAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_localConstantList & ioLocalConstantListForDoBranch,
           class GALGAS_string & outEnumeratorCppName,
           class GALGAS_semanticExpressionForGeneration & outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mEnumerationOptionalTypeName ;
  public: GALGAS_lstring mProperty_mEnumerationVariable ;
  public: GALGAS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GALGAS_location mProperty_mEndOfEnumerationExpression ;

//--- Constructor
  public: cPtr_enumeratedCollectionVarInExpAST (const GALGAS_lstring & in_mEnumerationOptionalTypeName,
                                                const GALGAS_lstring & in_mEnumerationVariable,
                                                const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                const GALGAS_location & in_mEndOfEnumerationExpression
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionVarInExpAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionVarInExpAST_2D_weak : public GALGAS_abstractEnumeratedCollectionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionVarInExpAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumeratedCollectionVarInExpAST_2D_weak (const class GALGAS_enumeratedCollectionVarInExpAST & inSource) ;

  public: GALGAS_enumeratedCollectionVarInExpAST_2D_weak & operator = (const class GALGAS_enumeratedCollectionVarInExpAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumeratedCollectionVarInExpAST bang_enumeratedCollectionVarInExpAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionVarInExpAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionVarInExpAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionVarInExpAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumeratedCollectionVarInExpAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionCstListInExpAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionCstListInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionCstListInExpAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_enumeratedCollectionCstListInExpAST (const class cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_forInstructionEnumeratedObjectElementListAST readProperty_mElementList (void) const ;

  public: class GALGAS_bool readProperty_mEndsWithEllipsis (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfEnumerationExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionCstListInExpAST extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionCstListInExpAST constructor_new (const class GALGAS_forInstructionEnumeratedObjectElementListAST & inOperand0,
                                                                                   const class GALGAS_bool & inOperand1,
                                                                                   const class GALGAS_semanticExpressionAST & inOperand2,
                                                                                   const class GALGAS_location & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionCstListInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumeratedCollectionCstListInExpAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumeratedCollectionCstListInExpAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionCstListInExpAST : public cPtr_abstractEnumeratedCollectionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_localConstantList & ioLocalConstantListForDoBranch,
           class GALGAS_string & outEnumeratorCppName,
           class GALGAS_semanticExpressionForGeneration & outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_forInstructionEnumeratedObjectElementListAST mProperty_mElementList ;
  public: GALGAS_bool mProperty_mEndsWithEllipsis ;
  public: GALGAS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GALGAS_location mProperty_mEndOfEnumerationExpression ;

//--- Constructor
  public: cPtr_enumeratedCollectionCstListInExpAST (const GALGAS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                    const GALGAS_bool & in_mEndsWithEllipsis,
                                                    const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                    const GALGAS_location & in_mEndOfEnumerationExpression
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionCstListInExpAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionCstListInExpAST_2D_weak : public GALGAS_abstractEnumeratedCollectionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionCstListInExpAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumeratedCollectionCstListInExpAST_2D_weak (const class GALGAS_enumeratedCollectionCstListInExpAST & inSource) ;

  public: GALGAS_enumeratedCollectionCstListInExpAST_2D_weak & operator = (const class GALGAS_enumeratedCollectionCstListInExpAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumeratedCollectionCstListInExpAST bang_enumeratedCollectionCstListInExpAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionCstListInExpAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionCstListInExpAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionCstListInExpAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumeratedCollectionCstListInExpAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_forInstructionEnumeratedObjectListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_bool & in_mAscending,
                                                 const class GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectListAST extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_forInstructionEnumeratedObjectListAST constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                               const class GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                     const class GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_forInstructionEnumeratedObjectListAST add_operation (const GALGAS_forInstructionEnumeratedObjectListAST & inOperand,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_bool constinArgument0,
                                               class GALGAS_abstractEnumeratedCollectionAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                      class GALGAS_abstractEnumeratedCollectionAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                 class GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                class GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                      class GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAscendingAtIndex (class GALGAS_bool constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratedCollectionAtIndex (class GALGAS_abstractEnumeratedCollectionAST constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                              class GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                             class GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAscendingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractEnumeratedCollectionAST getter_mEnumeratedCollectionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_forInstructionEnumeratedObjectListAST ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_forInstructionEnumeratedObjectListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_forInstructionEnumeratedObjectListAST (const GALGAS_forInstructionEnumeratedObjectListAST & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bool current_mAscending (LOCATION_ARGS) const ;
  public: class GALGAS_abstractEnumeratedCollectionAST current_mEnumeratedCollection (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_forInstructionEnumeratedObjectListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_mAscending ;
  public: inline GALGAS_bool readProperty_mAscending (void) const {
    return mProperty_mAscending ;
  }

  public: GALGAS_abstractEnumeratedCollectionAST mProperty_mEnumeratedCollection ;
  public: inline GALGAS_abstractEnumeratedCollectionAST readProperty_mEnumeratedCollection (void) const {
    return mProperty_mEnumeratedCollection ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAscending (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscending = inValue ;
  }

  public: inline void setter_setMEnumeratedCollection (const GALGAS_abstractEnumeratedCollectionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedCollection = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_forInstructionEnumeratedObjectListAST_2D_element (const GALGAS_bool & in_mAscending,
                                                                   const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectListAST_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                                const class GALGAS_abstractEnumeratedCollectionAST & inOperand1,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_forInstructionAST (const class cPtr_forInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_forInstructionEnumeratedObjectListAST readProperty_mEnumeratedObjectList (void) const ;

  public: class GALGAS_lstring readProperty_mIndexVariableName (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mWhileExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_while_5F_expression (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mBeforeInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_before_5F_branch (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mBetweenInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_between_5F_branch (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mDoInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_do_5F_branch (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mAfterInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_after_5F_branch (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_foreach_5F_instruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionAST extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_semanticExpressionAST & inOperand3,
                                                                 const class GALGAS_location & inOperand4,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                 const class GALGAS_location & inOperand6,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                 const class GALGAS_location & inOperand8,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand9,
                                                                 const class GALGAS_location & inOperand10,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand11,
                                                                 const class GALGAS_location & inOperand12,
                                                                 const class GALGAS_location & inOperand13
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_forInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_forInstructionEnumeratedObjectListAST mProperty_mEnumeratedObjectList ;
  public: GALGAS_lstring mProperty_mIndexVariableName ;
  public: GALGAS_semanticExpressionAST mProperty_mWhileExpression ;
  public: GALGAS_location mProperty_mEndOf_5F_while_5F_expression ;
  public: GALGAS_semanticInstructionListAST mProperty_mBeforeInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_before_5F_branch ;
  public: GALGAS_semanticInstructionListAST mProperty_mBetweenInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_between_5F_branch ;
  public: GALGAS_semanticInstructionListAST mProperty_mDoInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_do_5F_branch ;
  public: GALGAS_semanticInstructionListAST mProperty_mAfterInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_after_5F_branch ;
  public: GALGAS_location mProperty_mEndOf_5F_foreach_5F_instruction ;

//--- Constructor
  public: cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                  const GALGAS_forInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                  const GALGAS_lstring & in_mIndexVariableName,
                                  const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                  const GALGAS_location & in_mEndOf_5F_while_5F_expression,
                                  const GALGAS_semanticInstructionListAST & in_mBeforeInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_before_5F_branch,
                                  const GALGAS_semanticInstructionListAST & in_mBetweenInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_between_5F_branch,
                                  const GALGAS_semanticInstructionListAST & in_mDoInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_do_5F_branch,
                                  const GALGAS_semanticInstructionListAST & in_mAfterInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_after_5F_branch,
                                  const GALGAS_location & in_mEndOf_5F_foreach_5F_instruction
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forInstructionAST_2D_weak (const class GALGAS_forInstructionAST & inSource) ;

  public: GALGAS_forInstructionAST_2D_weak & operator = (const class GALGAS_forInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forInstructionAST bang_forInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeEnumeration (class cPtr_abstractEnumeratedCollectionAST * inObject,
                                             const class GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                             class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                             const class GALGAS_analysisContext constin_inAnalysisContext,
                                             class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                             class GALGAS_localVarManager & io_ioVariableMap,
                                             class GALGAS_localConstantList & io_ioLocalConstantListForDoBranch,
                                             class GALGAS_string & out_outEnumeratorCppName,
                                             class GALGAS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_forInstructionEnumeratedObjectListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mEnumerationOrder,
                                                 const class GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                 const class GALGAS_string & in_mEnumeratorCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_forInstructionEnumeratedObjectListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                         const class GALGAS_string & inOperand2
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_forInstructionEnumeratedObjectListForGeneration add_operation (const GALGAS_forInstructionEnumeratedObjectListForGeneration & inOperand,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_semanticExpressionForGeneration constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_semanticExpressionForGeneration constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_semanticExpressionForGeneration & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_semanticExpressionForGeneration & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_semanticExpressionForGeneration & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratedExpressionAtIndex (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumerationOrderAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratorCppNameAtIndex (class GALGAS_string constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_semanticExpressionForGeneration & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_semanticExpressionForGeneration & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mEnumeratedExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumerationOrderAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumeratorCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_forInstructionEnumeratedObjectListForGeneration ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_forInstructionEnumeratedObjectListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_forInstructionEnumeratedObjectListForGeneration (const GALGAS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject,
                                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mEnumerationOrder (LOCATION_ARGS) const ;
  public: class GALGAS_semanticExpressionForGeneration current_mEnumeratedExpression (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mEnumeratorCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mEnumerationOrder ;
  public: inline GALGAS_string readProperty_mEnumerationOrder (void) const {
    return mProperty_mEnumerationOrder ;
  }

  public: GALGAS_semanticExpressionForGeneration mProperty_mEnumeratedExpression ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_mEnumeratedExpression (void) const {
    return mProperty_mEnumeratedExpression ;
  }

  public: GALGAS_string mProperty_mEnumeratorCppName ;
  public: inline GALGAS_string readProperty_mEnumeratorCppName (void) const {
    return mProperty_mEnumeratorCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumerationOrder (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationOrder = inValue ;
  }

  public: inline void setter_setMEnumeratedExpression (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedExpression = inValue ;
  }

  public: inline void setter_setMEnumeratorCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratorCppName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (const GALGAS_string & in_mEnumerationOrder,
                                                                             const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                             const GALGAS_string & in_mEnumeratorCppName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                          const class GALGAS_string & inOperand2,
                                                                                                          class Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_forInstructionForGeneration (const class cPtr_forInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_forInstructionEnumeratedObjectListForGeneration readProperty_mEnumeratedObjectList (void) const ;

  public: class GALGAS_string readProperty_mIndexVariableCppName (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mWhileExpression (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mBeforeInstructionList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mBetweenInstructionList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mDoInstructionList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mAfterInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_forInstructionEnumeratedObjectListForGeneration & inOperand1,
                                                                           const class GALGAS_string & inOperand2,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                           const class GALGAS_semanticInstructionListForGeneration & inOperand4,
                                                                           const class GALGAS_semanticInstructionListForGeneration & inOperand5,
                                                                           const class GALGAS_semanticInstructionListForGeneration & inOperand6,
                                                                           const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_forInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_forInstructionEnumeratedObjectListForGeneration mProperty_mEnumeratedObjectList ;
  public: GALGAS_string mProperty_mIndexVariableCppName ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mWhileExpression ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mBeforeInstructionList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mBetweenInstructionList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mDoInstructionList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mAfterInstructionList ;

//--- Constructor
  public: cPtr_forInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_forInstructionEnumeratedObjectListForGeneration & in_mEnumeratedObjectList,
                                            const GALGAS_string & in_mIndexVariableCppName,
                                            const GALGAS_semanticExpressionForGeneration & in_mWhileExpression,
                                            const GALGAS_semanticInstructionListForGeneration & in_mBeforeInstructionList,
                                            const GALGAS_semanticInstructionListForGeneration & in_mBetweenInstructionList,
                                            const GALGAS_semanticInstructionListForGeneration & in_mDoInstructionList,
                                            const GALGAS_semanticInstructionListForGeneration & in_mAfterInstructionList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forInstructionForGeneration_2D_weak (const class GALGAS_forInstructionForGeneration & inSource) ;

  public: GALGAS_forInstructionForGeneration_2D_weak & operator = (const class GALGAS_forInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forInstructionForGeneration bang_forInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak & operator = (const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult bang_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultNone reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class
//
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_string inSyntaxDirectedTranslationResultVarName,
           class GALGAS_stringlist & ioAssignementList,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           const class GALGAS_string inAccessMethodName,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak & operator = (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone bang_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationDropResult reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (const class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult constructor_new (const class GALGAS_location & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class
//
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_string inSyntaxDirectedTranslationResultVarName,
           class GALGAS_stringlist & ioAssignementList,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           const class GALGAS_string inAccessMethodName,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GALGAS_location & in_mLocation
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak (const class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak & operator = (const class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult bang_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar constructor_new (const class GALGAS_lstring & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class
//
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_string inSyntaxDirectedTranslationResultVarName,
           class GALGAS_stringlist & ioAssignementList,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           const class GALGAS_string inAccessMethodName,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GALGAS_lstring & in_mActualParameterName
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak & operator = (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                              const class GALGAS_lstring & inOperand1
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class
//
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_string inSyntaxDirectedTranslationResultVarName,
           class GALGAS_stringlist & ioAssignementList,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           const class GALGAS_string inAccessMethodName,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterTypeName ;
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                               const GALGAS_lstring & in_mActualParameterName
                                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak & operator = (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                                const class GALGAS_lstring & inOperand1
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class
//
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_string inSyntaxDirectedTranslationResultVarName,
           class GALGAS_stringlist & ioAssignementList,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           const class GALGAS_string inAccessMethodName,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterTypeName ;
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                 const GALGAS_lstring & in_mActualParameterName
                                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & operator = (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInFileInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInFileInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_grammarInFileInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInFileInstructionAST (const class cPtr_grammarInFileInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mLabelName (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfSourceExpression (void) const ;

  public: class GALGAS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInFileInstructionAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInFileInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_semanticExpressionAST & inOperand3,
                                                                           const class GALGAS_location & inOperand4,
                                                                           const class GALGAS_actualParameterListAST & inOperand5,
                                                                           const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInFileInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInFileInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInFileInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInFileInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mGrammarComponentName ;
  public: GALGAS_lstring mProperty_mLabelName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GALGAS_location mProperty_mEndOfSourceExpression ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public: cPtr_grammarInFileInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_lstring & in_mGrammarComponentName,
                                            const GALGAS_lstring & in_mLabelName,
                                            const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                            const GALGAS_location & in_mEndOfSourceExpression,
                                            const GALGAS_actualParameterListAST & in_mActualParameterList,
                                            const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInFileInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInFileInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInFileInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInFileInstructionAST_2D_weak (const class GALGAS_grammarInFileInstructionAST & inSource) ;

  public: GALGAS_grammarInFileInstructionAST_2D_weak & operator = (const class GALGAS_grammarInFileInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInFileInstructionAST bang_grammarInFileInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInFileInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInFileInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInFileInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInFileInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInStringInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInStringInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_grammarInStringInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInStringInstructionAST (const class cPtr_grammarInStringInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mLabelName (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfSourceExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mNameExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfNameExpression (void) const ;

  public: class GALGAS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInStringInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInStringInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_semanticExpressionAST & inOperand3,
                                                                             const class GALGAS_location & inOperand4,
                                                                             const class GALGAS_semanticExpressionAST & inOperand5,
                                                                             const class GALGAS_location & inOperand6,
                                                                             const class GALGAS_actualParameterListAST & inOperand7,
                                                                             const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInStringInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInStringInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInStringInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInStringInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mGrammarComponentName ;
  public: GALGAS_lstring mProperty_mLabelName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GALGAS_location mProperty_mEndOfSourceExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mNameExpression ;
  public: GALGAS_location mProperty_mEndOfNameExpression ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public: cPtr_grammarInStringInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mGrammarComponentName,
                                              const GALGAS_lstring & in_mLabelName,
                                              const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                              const GALGAS_location & in_mEndOfSourceExpression,
                                              const GALGAS_semanticExpressionAST & in_mNameExpression,
                                              const GALGAS_location & in_mEndOfNameExpression,
                                              const GALGAS_actualParameterListAST & in_mActualParameterList,
                                              const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInStringInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInStringInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInStringInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInStringInstructionAST_2D_weak (const class GALGAS_grammarInStringInstructionAST & inSource) ;

  public: GALGAS_grammarInStringInstructionAST_2D_weak & operator = (const class GALGAS_grammarInStringInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInStringInstructionAST bang_grammarInStringInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInStringInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInStringInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInStringInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInStringInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionWithSourceFileForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionWithSourceFileForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionWithSourceFileForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionWithSourceFileForGeneration (const class cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_string readProperty_mGrammarName (void) const ;

  public: class GALGAS_string readProperty_mLabelName (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSourceFileExpression (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GALGAS_bool readProperty_mGrammarHasTranslateFeature (void) const ;

  public: class GALGAS_stringlist readProperty_mAssignementList (void) const ;

  public: class GALGAS_string readProperty_mSyntaxDirectedTranslationResultVarName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionWithSourceFileForGeneration extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionWithSourceFileForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_string & inOperand1,
                                                                                             const class GALGAS_string & inOperand2,
                                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                                             const class GALGAS_actualParameterListForGeneration & inOperand4,
                                                                                             const class GALGAS_bool & inOperand5,
                                                                                             const class GALGAS_stringlist & inOperand6,
                                                                                             const class GALGAS_string & inOperand7
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionWithSourceFileForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionWithSourceFileForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionWithSourceFileForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionWithSourceFileForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_string mProperty_mGrammarName ;
  public: GALGAS_string mProperty_mLabelName ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mSourceFileExpression ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GALGAS_bool mProperty_mGrammarHasTranslateFeature ;
  public: GALGAS_stringlist mProperty_mAssignementList ;
  public: GALGAS_string mProperty_mSyntaxDirectedTranslationResultVarName ;

//--- Constructor
  public: cPtr_grammarInstructionWithSourceFileForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_string & in_mGrammarName,
                                                              const GALGAS_string & in_mLabelName,
                                                              const GALGAS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                              const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                              const GALGAS_bool & in_mGrammarHasTranslateFeature,
                                                              const GALGAS_stringlist & in_mAssignementList,
                                                              const GALGAS_string & in_mSyntaxDirectedTranslationResultVarName
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionWithSourceFileForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (const class GALGAS_grammarInstructionWithSourceFileForGeneration & inSource) ;

  public: GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak & operator = (const class GALGAS_grammarInstructionWithSourceFileForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionWithSourceFileForGeneration bang_grammarInstructionWithSourceFileForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionWithSourceExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionWithSourceExpressionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionWithSourceExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionWithSourceExpressionForGeneration (const class cPtr_grammarInstructionWithSourceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_string readProperty_mGrammarName (void) const ;

  public: class GALGAS_string readProperty_mLabelName (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSourceStringExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mNameStringExpression (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GALGAS_bool readProperty_mGrammarHasTranslateFeature (void) const ;

  public: class GALGAS_stringlist readProperty_mAssignementList (void) const ;

  public: class GALGAS_string readProperty_mSyntaxDirectedTranslationResultVarName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionWithSourceExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionWithSourceExpressionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_string & inOperand1,
                                                                                                   const class GALGAS_string & inOperand2,
                                                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand4,
                                                                                                   const class GALGAS_actualParameterListForGeneration & inOperand5,
                                                                                                   const class GALGAS_bool & inOperand6,
                                                                                                   const class GALGAS_stringlist & inOperand7,
                                                                                                   const class GALGAS_string & inOperand8
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionWithSourceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionWithSourceExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionWithSourceExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionWithSourceExpressionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_string mProperty_mGrammarName ;
  public: GALGAS_string mProperty_mLabelName ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mSourceStringExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mNameStringExpression ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GALGAS_bool mProperty_mGrammarHasTranslateFeature ;
  public: GALGAS_stringlist mProperty_mAssignementList ;
  public: GALGAS_string mProperty_mSyntaxDirectedTranslationResultVarName ;

//--- Constructor
  public: cPtr_grammarInstructionWithSourceExpressionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_string & in_mGrammarName,
                                                                    const GALGAS_string & in_mLabelName,
                                                                    const GALGAS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                    const GALGAS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                    const GALGAS_bool & in_mGrammarHasTranslateFeature,
                                                                    const GALGAS_stringlist & in_mAssignementList,
                                                                    const GALGAS_string & in_mSyntaxDirectedTranslationResultVarName
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionWithSourceExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak (const class GALGAS_grammarInstructionWithSourceExpressionForGeneration & inSource) ;

  public: GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak & operator = (const class GALGAS_grammarInstructionWithSourceExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionWithSourceExpressionForGeneration bang_grammarInstructionWithSourceExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                              Phase 1: @incDecKind enum                                              *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_incDecKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_incDecKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_increment,
    kEnum_decrement
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecKind extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecKind constructor_decrement (LOCATION_ARGS) ;

  public: static class GALGAS_incDecKind constructor_increment (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDecrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIncrement (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_decrement () const ;

  public: VIRTUAL_IN_DEBUG bool optional_increment () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_incDecKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_incDecInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_incDecInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_incDecInstructionAST (const class cPtr_incDecInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_incDecKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecInstructionAST extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_bool & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_lstringlist & inOperand3,
                                                                    const class GALGAS_incDecKind & inOperand4
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_incDecInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @incDecInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_incDecInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public: cPtr_incDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_bool & in_mPrefixedBySelf,
                                     const GALGAS_lstring & in_mReceiverName,
                                     const GALGAS_lstringlist & in_mStructAttributeList,
                                     const GALGAS_incDecKind & in_mKind
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_incDecInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_incDecInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_incDecInstructionAST_2D_weak (const class GALGAS_incDecInstructionAST & inSource) ;

  public: GALGAS_incDecInstructionAST_2D_weak & operator = (const class GALGAS_incDecInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_incDecInstructionAST bang_incDecInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_incDecInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecNoOVFInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_incDecNoOVFInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_incDecNoOVFInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_incDecNoOVFInstructionAST (const class cPtr_incDecNoOVFInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_incDecKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecNoOVFInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecNoOVFInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_lstringlist & inOperand3,
                                                                         const class GALGAS_incDecKind & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecNoOVFInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_incDecNoOVFInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @incDecNoOVFInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_incDecNoOVFInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public: cPtr_incDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_bool & in_mPrefixedBySelf,
                                          const GALGAS_lstring & in_mReceiverName,
                                          const GALGAS_lstringlist & in_mStructAttributeList,
                                          const GALGAS_incDecKind & in_mKind
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecNoOVFInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_incDecNoOVFInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_incDecNoOVFInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_incDecNoOVFInstructionAST_2D_weak (const class GALGAS_incDecNoOVFInstructionAST & inSource) ;

  public: GALGAS_incDecNoOVFInstructionAST_2D_weak & operator = (const class GALGAS_incDecNoOVFInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_incDecNoOVFInstructionAST bang_incDecNoOVFInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecNoOVFInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecNoOVFInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecNoOVFInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_incDecNoOVFInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfIncDecInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_selfIncDecInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_selfIncDecInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selfIncDecInstructionAST (const class cPtr_selfIncDecInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_incDecKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_selfIncDecInstructionAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfIncDecInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_incDecKind & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfIncDecInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_selfIncDecInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfIncDecInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_selfIncDecInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public: cPtr_selfIncDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                         const GALGAS_incDecKind & in_mKind
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfIncDecInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_selfIncDecInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfIncDecInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfIncDecInstructionAST_2D_weak (const class GALGAS_selfIncDecInstructionAST & inSource) ;

  public: GALGAS_selfIncDecInstructionAST_2D_weak & operator = (const class GALGAS_selfIncDecInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfIncDecInstructionAST bang_selfIncDecInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_selfIncDecInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfIncDecInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfIncDecInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_selfIncDecInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfIncDecNoOVFInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_selfIncDecNoOVFInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_selfIncDecNoOVFInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selfIncDecNoOVFInstructionAST (const class cPtr_selfIncDecNoOVFInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_incDecKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_selfIncDecNoOVFInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfIncDecNoOVFInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_incDecKind & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfIncDecNoOVFInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_selfIncDecNoOVFInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfIncDecNoOVFInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_selfIncDecNoOVFInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public: cPtr_selfIncDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_incDecKind & in_mKind
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfIncDecNoOVFInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_selfIncDecNoOVFInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfIncDecNoOVFInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfIncDecNoOVFInstructionAST_2D_weak (const class GALGAS_selfIncDecNoOVFInstructionAST & inSource) ;

  public: GALGAS_selfIncDecNoOVFInstructionAST_2D_weak & operator = (const class GALGAS_selfIncDecNoOVFInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfIncDecNoOVFInstructionAST bang_selfIncDecNoOVFInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_selfIncDecNoOVFInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfIncDecNoOVFInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfIncDecNoOVFInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_selfIncDecNoOVFInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_incDecInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_incDecInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_incDecInstructionForGeneration (const class cPtr_incDecInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_string readProperty_mReceiverCppName (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_incDecKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                              const class GALGAS_lstringlist & inOperand3,
                                                                              const class GALGAS_incDecKind & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_incDecInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @incDecInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_incDecInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_string mProperty_mReceiverCppName ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public: cPtr_incDecInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_string & in_mReceiverCppName,
                                               const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                               const GALGAS_lstringlist & in_mStructAttributeList,
                                               const GALGAS_incDecKind & in_mKind
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_incDecInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_incDecInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_incDecInstructionForGeneration_2D_weak (const class GALGAS_incDecInstructionForGeneration & inSource) ;

  public: GALGAS_incDecInstructionForGeneration_2D_weak & operator = (const class GALGAS_incDecInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_incDecInstructionForGeneration bang_incDecInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_incDecInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecNoOVFInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_incDecNoOVFInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_incDecNoOVFInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_incDecNoOVFInstructionForGeneration (const class cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_string readProperty_mReceiverCppName (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_incDecKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecNoOVFInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecNoOVFInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                   const class GALGAS_lstringlist & inOperand3,
                                                                                   const class GALGAS_incDecKind & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_incDecNoOVFInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @incDecNoOVFInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_incDecNoOVFInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_string mProperty_mReceiverCppName ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public: cPtr_incDecNoOVFInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_string & in_mReceiverCppName,
                                                    const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                    const GALGAS_lstringlist & in_mStructAttributeList,
                                                    const GALGAS_incDecKind & in_mKind
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecNoOVFInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_incDecNoOVFInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (const class GALGAS_incDecNoOVFInstructionForGeneration & inSource) ;

  public: GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & operator = (const class GALGAS_incDecNoOVFInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_incDecNoOVFInstructionForGeneration bang_incDecNoOVFInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecNoOVFInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecNoOVFInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_incDecNoOVFInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @ifExpressionKind enum                                           *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_regularExp,
    kEnum_letExp,
    kEnum_optionalMethodCall
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionKind extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifExpressionKind constructor_letExp (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   const class GALGAS_location & inOperand2,
                                                                   const class GALGAS_lstring & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_ifExpressionKind constructor_optionalMethodCall (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_optionalMethodActualArgumentList & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_ifExpressionKind constructor_regularExp (const class GALGAS_semanticExpressionAST & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifExpressionKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_letExp (class GALGAS_lstring & outArgument0,
                                               class GALGAS_semanticExpressionAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_optionalMethodCall (class GALGAS_semanticExpressionAST & outArgument0,
                                                           class GALGAS_lstring & outArgument1,
                                                           class GALGAS_optionalMethodActualArgumentList & outArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_regularExp (class GALGAS_semanticExpressionAST & outArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLetExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOptionalMethodCall (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegularExp (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_letExp (class GALGAS_lstring & outOperand0,
                                                 class GALGAS_semanticExpressionAST & outOperand1,
                                                 class GALGAS_location & outOperand2,
                                                 class GALGAS_lstring & outOperand3) const ;

  public: VIRTUAL_IN_DEBUG bool optional_optionalMethodCall (class GALGAS_semanticExpressionAST & outOperand0,
                                                             class GALGAS_lstring & outOperand1,
                                                             class GALGAS_optionalMethodActualArgumentList & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_regularExp (class GALGAS_semanticExpressionAST & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodActualArgumentList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_optionalMethodActualArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSelector,
                                                 const class GALGAS_optionalMethodActualArgument & in_mActualArgument
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgumentList extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodActualArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_optionalMethodActualArgumentList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_optionalMethodActualArgument & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_optionalMethodActualArgumentList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_optionalMethodActualArgument & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_optionalMethodActualArgumentList add_operation (const GALGAS_optionalMethodActualArgumentList & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_optionalMethodActualArgument constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_optionalMethodActualArgument constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_optionalMethodActualArgument & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_optionalMethodActualArgument & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_optionalMethodActualArgument & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualArgumentAtIndex (class GALGAS_optionalMethodActualArgument constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_optionalMethodActualArgument & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_optionalMethodActualArgument & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodActualArgument getter_mActualArgumentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodActualArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodActualArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodActualArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_optionalMethodActualArgumentList ;
 
} ; // End of GALGAS_optionalMethodActualArgumentList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_optionalMethodActualArgumentList : public cGenericAbstractEnumerator {
  public: cEnumerator_optionalMethodActualArgumentList (const GALGAS_optionalMethodActualArgumentList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GALGAS_optionalMethodActualArgument current_mActualArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_optionalMethodActualArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgumentList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @ifExpressionKind enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_ifExpressionKind_regularExp : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionAST mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_ifExpressionKind_regularExp (const GALGAS_semanticExpressionAST inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_ifExpressionKind_regularExp (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_ifExpressionKind_letExp : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_semanticExpressionAST mAssociatedValue1 ;
  public: const GALGAS_location mAssociatedValue2 ;
  public: const GALGAS_lstring mAssociatedValue3 ;

//--- Constructor
  public: cEnumAssociatedValues_ifExpressionKind_letExp (const GALGAS_lstring inAssociatedValue0,
                                                         const GALGAS_semanticExpressionAST inAssociatedValue1,
                                                         const GALGAS_location inAssociatedValue2,
                                                         const GALGAS_lstring inAssociatedValue3
                                                         COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_ifExpressionKind_letExp (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_ifExpressionKind_optionalMethodCall : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionAST mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;
  public: const GALGAS_optionalMethodActualArgumentList mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_ifExpressionKind_optionalMethodCall (const GALGAS_semanticExpressionAST inAssociatedValue0,
                                                                     const GALGAS_lstring inAssociatedValue1,
                                                                     const GALGAS_optionalMethodActualArgumentList inAssociatedValue2
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_ifExpressionKind_optionalMethodCall (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
//                                     Phase 1: @optionalMethodActualArgument enum                                     *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgument : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgument (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_actualOutput,
    kEnum_actualLetInput,
    kEnum_actualVarInput,
    kEnum_actualInputJoker
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgument extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodActualArgument constructor_actualInputJoker (const class GALGAS_bool & inOperand0,
                                                                                         const class GALGAS_location & inOperand1,
                                                                                         const class GALGAS_uint & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_optionalMethodActualArgument constructor_actualLetInput (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_optionalMethodActualArgument constructor_actualOutput (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                                     const class GALGAS_location & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_optionalMethodActualArgument constructor_actualVarInput (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionalMethodActualArgument & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_actualInputJoker (class GALGAS_bool & outArgument0,
                                                         class GALGAS_location & outArgument1,
                                                         class GALGAS_uint & outArgument2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_actualLetInput (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_actualOutput (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class GALGAS_location & outArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_actualVarInput (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isActualInputJoker (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isActualLetInput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isActualOutput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isActualVarInput (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_actualInputJoker (class GALGAS_bool & outOperand0,
                                                           class GALGAS_location & outOperand1,
                                                           class GALGAS_uint & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_actualLetInput (class GALGAS_lstring & outOperand0,
                                                         class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_actualOutput (class GALGAS_semanticExpressionAST & outOperand0,
                                                       class GALGAS_location & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_actualVarInput (class GALGAS_lstring & outOperand0,
                                                         class GALGAS_lstring & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalMethodActualArgument class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgument ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @optionalMethodActualArgument enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_optionalMethodActualArgument_actualOutput : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionAST mAssociatedValue0 ;
  public: const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_optionalMethodActualArgument_actualOutput (const GALGAS_semanticExpressionAST inAssociatedValue0,
                                                                           const GALGAS_location inAssociatedValue1
                                                                           COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_optionalMethodActualArgument_actualOutput (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput (const GALGAS_lstring inAssociatedValue0,
                                                                             const GALGAS_lstring inAssociatedValue1
                                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput (const GALGAS_lstring inAssociatedValue0,
                                                                             const GALGAS_lstring inAssociatedValue1
                                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker : public cEnumAssociatedValues {
  public: const GALGAS_bool mAssociatedValue0 ;
  public: const GALGAS_location mAssociatedValue1 ;
  public: const GALGAS_uint mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker (const GALGAS_bool inAssociatedValue0,
                                                                               const GALGAS_location inAssociatedValue1,
                                                                               const GALGAS_uint inAssociatedValue2
                                                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodActualArgumentList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSelector ;
  public: inline GALGAS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GALGAS_optionalMethodActualArgument mProperty_mActualArgument ;
  public: inline GALGAS_optionalMethodActualArgument readProperty_mActualArgument (void) const {
    return mProperty_mActualArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgumentList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMActualArgument (const GALGAS_optionalMethodActualArgument & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualArgument = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_optionalMethodActualArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodActualArgumentList_2D_element (const GALGAS_lstring & in_mSelector,
                                                              const GALGAS_optionalMethodActualArgument & in_mActualArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodActualArgumentList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_optionalMethodActualArgument & inOperand1,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionalMethodActualArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalMethodActualArgumentList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgumentList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_ifExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_ifExpressionKind & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionList extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifExpressionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ifExpressionList constructor_listWithValue (const class GALGAS_ifExpressionKind & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ifExpressionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_ifExpressionKind & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ifExpressionList add_operation (const GALGAS_ifExpressionList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_ifExpressionKind constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_ifExpressionKind constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_ifExpressionKind & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_ifExpressionKind & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_ifExpressionKind & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_ifExpressionKind constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_ifExpressionKind & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_ifExpressionKind & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_ifExpressionKind getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ifExpressionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ifExpressionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ifExpressionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_ifExpressionList ;
 
} ; // End of GALGAS_ifExpressionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ifExpressionList : public cGenericAbstractEnumerator {
  public: cEnumerator_ifExpressionList (const GALGAS_ifExpressionList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_ifExpressionKind current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ifExpressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_ifExpressionKind mProperty_mExpression ;
  public: inline GALGAS_ifExpressionKind readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ifExpressionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GALGAS_ifExpressionKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ifExpressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ifExpressionList_2D_element (const GALGAS_ifExpressionKind & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifExpressionList_2D_element constructor_new (const class GALGAS_ifExpressionKind & inOperand0,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifExpressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_ifInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ifInstructionAST (const class cPtr_ifInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_ifExpressionList readProperty_mExpressions (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_m_5F_then_5F_instructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_then_5F_branch (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_m_5F_else_5F_instructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_if_5F_instruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifInstructionAST extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_ifExpressionList & inOperand1,
                                                                const class GALGAS_semanticInstructionListAST & inOperand2,
                                                                const class GALGAS_location & inOperand3,
                                                                const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                const class GALGAS_location & inOperand5
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ifInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ifExpressionList mProperty_mExpressions ;
  public: GALGAS_semanticInstructionListAST mProperty_m_5F_then_5F_instructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_then_5F_branch ;
  public: GALGAS_semanticInstructionListAST mProperty_m_5F_else_5F_instructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_if_5F_instruction ;

//--- Constructor
  public: cPtr_ifInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                 const GALGAS_ifExpressionList & in_mExpressions,
                                 const GALGAS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                 const GALGAS_location & in_mEndOf_5F_then_5F_branch,
                                 const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                 const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifInstructionAST_2D_weak (const class GALGAS_ifInstructionAST & inSource) ;

  public: GALGAS_ifInstructionAST_2D_weak & operator = (const class GALGAS_ifInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifInstructionAST bang_ifInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @ifTestForGeneration enum                                         *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifTestForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_ifTestForGeneration (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_regular,
    kEnum_letExp,
    kEnum_optionalMethodCall
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifTestForGeneration extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifTestForGeneration constructor_letExp (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_ifTestForGeneration constructor_optionalMethodCall (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_optionalMethodActualArgumentListForGeneration & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_ifTestForGeneration constructor_regular (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifTestForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_letExp (class GALGAS_string & outArgument0,
                                               class GALGAS_semanticExpressionForGeneration & outArgument1,
                                               class GALGAS_unifiedTypeMapEntry & outArgument2,
                                               class GALGAS_unifiedTypeMapEntry & outArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_optionalMethodCall (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                           class GALGAS_lstring & outArgument1,
                                                           class GALGAS_optionalMethodActualArgumentListForGeneration & outArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_regular (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLetExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOptionalMethodCall (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegular (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_letExp (class GALGAS_string & outOperand0,
                                                 class GALGAS_semanticExpressionForGeneration & outOperand1,
                                                 class GALGAS_unifiedTypeMapEntry & outOperand2,
                                                 class GALGAS_unifiedTypeMapEntry & outOperand3) const ;

  public: VIRTUAL_IN_DEBUG bool optional_optionalMethodCall (class GALGAS_semanticExpressionForGeneration & outOperand0,
                                                             class GALGAS_lstring & outOperand1,
                                                             class GALGAS_optionalMethodActualArgumentListForGeneration & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_regular (class GALGAS_semanticExpressionForGeneration & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifTestForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodActualArgumentListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgumentListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgumentListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_optionalMethodActualArgumentListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_optionalMethodActualArgumentForGeneration & in_mParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgumentListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodActualArgumentListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_optionalMethodActualArgumentListForGeneration constructor_listWithValue (const class GALGAS_optionalMethodActualArgumentForGeneration & inOperand0
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_optionalMethodActualArgumentListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_optionalMethodActualArgumentForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_optionalMethodActualArgumentListForGeneration add_operation (const GALGAS_optionalMethodActualArgumentListForGeneration & inOperand,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_optionalMethodActualArgumentForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_optionalMethodActualArgumentForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_optionalMethodActualArgumentForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_optionalMethodActualArgumentForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_optionalMethodActualArgumentForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterAtIndex (class GALGAS_optionalMethodActualArgumentForGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_optionalMethodActualArgumentForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_optionalMethodActualArgumentForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodActualArgumentForGeneration getter_mParameterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodActualArgumentListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodActualArgumentListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodActualArgumentListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_optionalMethodActualArgumentListForGeneration ;
 
} ; // End of GALGAS_optionalMethodActualArgumentListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_optionalMethodActualArgumentListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_optionalMethodActualArgumentListForGeneration (const GALGAS_optionalMethodActualArgumentListForGeneration & inEnumeratedObject,
                                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_optionalMethodActualArgumentForGeneration current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_optionalMethodActualArgumentListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgumentListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @ifTestForGeneration enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_ifTestForGeneration_regular : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionForGeneration mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_ifTestForGeneration_regular (const GALGAS_semanticExpressionForGeneration inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_ifTestForGeneration_regular (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_ifTestForGeneration_letExp : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;
  public: const GALGAS_semanticExpressionForGeneration mAssociatedValue1 ;
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue2 ;
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue3 ;

//--- Constructor
  public: cEnumAssociatedValues_ifTestForGeneration_letExp (const GALGAS_string inAssociatedValue0,
                                                            const GALGAS_semanticExpressionForGeneration inAssociatedValue1,
                                                            const GALGAS_unifiedTypeMapEntry inAssociatedValue2,
                                                            const GALGAS_unifiedTypeMapEntry inAssociatedValue3
                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_ifTestForGeneration_letExp (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionForGeneration mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;
  public: const GALGAS_optionalMethodActualArgumentListForGeneration mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall (const GALGAS_semanticExpressionForGeneration inAssociatedValue0,
                                                                        const GALGAS_lstring inAssociatedValue1,
                                                                        const GALGAS_optionalMethodActualArgumentListForGeneration inAssociatedValue2
                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
//                               Phase 1: @optionalMethodActualArgumentForGeneration enum                              *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgumentForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgumentForGeneration (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_actualOutput,
    kEnum_actualLetInput,
    kEnum_actualVarInput
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgumentForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodActualArgumentForGeneration constructor_actualLetInput (const class GALGAS_string & inOperand0,
                                                                                                    const class GALGAS_string & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_optionalMethodActualArgumentForGeneration constructor_actualOutput (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_optionalMethodActualArgumentForGeneration constructor_actualVarInput (const class GALGAS_string & inOperand0,
                                                                                                    const class GALGAS_string & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionalMethodActualArgumentForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_actualLetInput (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_actualOutput (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_actualVarInput (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isActualLetInput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isActualOutput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isActualVarInput (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_actualLetInput (class GALGAS_string & outOperand0,
                                                         class GALGAS_string & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_actualOutput (class GALGAS_semanticExpressionForGeneration & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_actualVarInput (class GALGAS_string & outOperand0,
                                                         class GALGAS_string & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalMethodActualArgumentForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgumentForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @optionalMethodActualArgumentForGeneration enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionForGeneration mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput (const GALGAS_semanticExpressionForGeneration inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;
  public: const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput (const GALGAS_string inAssociatedValue0,
                                                                                          const GALGAS_string inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;
  public: const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput (const GALGAS_string inAssociatedValue0,
                                                                                          const GALGAS_string inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodActualArgumentListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgumentListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_optionalMethodActualArgumentForGeneration mProperty_mParameter ;
  public: inline GALGAS_optionalMethodActualArgumentForGeneration readProperty_mParameter (void) const {
    return mProperty_mParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgumentListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameter (const GALGAS_optionalMethodActualArgumentForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameter = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_optionalMethodActualArgumentListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodActualArgumentListForGeneration_2D_element (const GALGAS_optionalMethodActualArgumentForGeneration & in_mParameter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgumentListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodActualArgumentListForGeneration_2D_element constructor_new (const class GALGAS_optionalMethodActualArgumentForGeneration & inOperand0,
                                                                                                        class Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionalMethodActualArgumentListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalMethodActualArgumentListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgumentListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifTestListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifTestListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_ifTestListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_ifTestListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_ifTestForGeneration & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifTestListForGeneration extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifTestListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ifTestListForGeneration constructor_listWithValue (const class GALGAS_ifTestForGeneration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ifTestListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_ifTestForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ifTestListForGeneration add_operation (const GALGAS_ifTestListForGeneration & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_ifTestForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_ifTestForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_ifTestForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_ifTestForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_ifTestForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_ifTestForGeneration constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_ifTestForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_ifTestForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_ifTestForGeneration getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ifTestListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ifTestListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ifTestListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_ifTestListForGeneration ;
 
} ; // End of GALGAS_ifTestListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ifTestListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_ifTestListForGeneration (const GALGAS_ifTestListForGeneration & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_ifTestForGeneration current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ifTestListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifTestListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifTestListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_ifTestForGeneration mProperty_mExpression ;
  public: inline GALGAS_ifTestForGeneration readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ifTestListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GALGAS_ifTestForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ifTestListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ifTestListForGeneration_2D_element (const GALGAS_ifTestForGeneration & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifTestListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifTestListForGeneration_2D_element constructor_new (const class GALGAS_ifTestForGeneration & inOperand0,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifTestListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifTestListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_ifInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ifInstructionForGeneration (const class cPtr_ifInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_ifTestListForGeneration readProperty_mExpressions (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_m_5F_then_5F_instructionList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_m_5F_else_5F_instructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_ifTestListForGeneration & inOperand1,
                                                                          const class GALGAS_semanticInstructionListForGeneration & inOperand2,
                                                                          const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ifInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_ifTestListForGeneration mProperty_mExpressions ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_m_5F_then_5F_instructionList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_m_5F_else_5F_instructionList ;

//--- Constructor
  public: cPtr_ifInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                           const GALGAS_ifTestListForGeneration & in_mExpressions,
                                           const GALGAS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                           const GALGAS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifInstructionForGeneration_2D_weak (const class GALGAS_ifInstructionForGeneration & inSource) ;

  public: GALGAS_ifInstructionForGeneration_2D_weak & operator = (const class GALGAS_ifInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifInstructionForGeneration bang_ifInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableOrConstantDeclarationWithAssignmentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (const class cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsConstant (void) const ;

  public: class GALGAS_lstring readProperty_mOptionalTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mVariableName (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableOrConstantDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_bool & inOperand1,
                                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                                   const class GALGAS_semanticExpressionAST & inOperand4
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithAssignmentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_localVariableOrConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsConstant ;
  public: GALGAS_lstring mProperty_mOptionalTypeName ;
  public: GALGAS_lstring mProperty_mVariableName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_localVariableOrConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_bool & in_mIsConstant,
                                                                    const GALGAS_lstring & in_mOptionalTypeName,
                                                                    const GALGAS_lstring & in_mVariableName,
                                                                    const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableOrConstantDeclarationWithAssignmentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (const class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) ;

  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak & operator = (const class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST bang_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @undefinedLocalConstantDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_undefinedLocalConstantDeclarationAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_undefinedLocalConstantDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_undefinedLocalConstantDeclarationAST (const class cPtr_undefinedLocalConstantDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mConstantTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mConstantName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_undefinedLocalConstantDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_undefinedLocalConstantDeclarationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_undefinedLocalConstantDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @undefinedLocalConstantDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_undefinedLocalConstantDeclarationAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mConstantTypeName ;
  public: GALGAS_lstring mProperty_mConstantName ;

//--- Constructor
  public: cPtr_undefinedLocalConstantDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_lstring & in_mConstantTypeName,
                                                     const GALGAS_lstring & in_mConstantName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @undefinedLocalConstantDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_undefinedLocalConstantDeclarationAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (const class GALGAS_undefinedLocalConstantDeclarationAST & inSource) ;

  public: GALGAS_undefinedLocalConstantDeclarationAST_2D_weak & operator = (const class GALGAS_undefinedLocalConstantDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_undefinedLocalConstantDeclarationAST bang_undefinedLocalConstantDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_undefinedLocalConstantDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_undefinedLocalConstantDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_undefinedLocalConstantDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localConstantDeclarationWithAssignmentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localConstantDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_localConstantDeclarationWithAssignmentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_localConstantDeclarationWithAssignmentAST (const class cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mVariableName (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localConstantDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localConstantDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_semanticExpressionAST & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localConstantDeclarationWithAssignmentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localConstantDeclarationWithAssignmentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_localConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mVariableName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_localConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_lstring & in_mVariableName,
                                                          const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localConstantDeclarationWithAssignmentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (const class GALGAS_localConstantDeclarationWithAssignmentAST & inSource) ;

  public: GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak & operator = (const class GALGAS_localConstantDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_localConstantDeclarationWithAssignmentAST bang_localConstantDeclarationWithAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @undefinedLocalConstantDeclarationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_undefinedLocalConstantDeclarationForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_undefinedLocalConstantDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_undefinedLocalConstantDeclarationForGeneration (const class cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GALGAS_string readProperty_mCppVariableName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_undefinedLocalConstantDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_undefinedLocalConstantDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                              const class GALGAS_string & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_undefinedLocalConstantDeclarationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @undefinedLocalConstantDeclarationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_undefinedLocalConstantDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GALGAS_string mProperty_mCppVariableName ;

//--- Constructor
  public: cPtr_undefinedLocalConstantDeclarationForGeneration (const GALGAS_unifiedTypeMapEntry & in_mTargetType,
                                                               const GALGAS_string & in_mCppVariableName
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @undefinedLocalConstantDeclarationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (const class GALGAS_undefinedLocalConstantDeclarationForGeneration & inSource) ;

  public: GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak & operator = (const class GALGAS_undefinedLocalConstantDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_undefinedLocalConstantDeclarationForGeneration bang_undefinedLocalConstantDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableOrConstantDeclarationWithSourceExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const class cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GALGAS_bool readProperty_mIsConstant (void) const ;

  public: class GALGAS_string readProperty_mCppVariableName (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                                   const class GALGAS_bool & inOperand1,
                                                                                                                   const class GALGAS_string & inOperand2,
                                                                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localVariableOrConstantDeclarationWithSourceExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GALGAS_bool mProperty_mIsConstant ;
  public: GALGAS_string mProperty_mCppVariableName ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mTargetType,
                                                                                    const GALGAS_bool & in_mIsConstant,
                                                                                    const GALGAS_string & in_mCppVariableName,
                                                                                    const GALGAS_semanticExpressionForGeneration & in_mSourceExpression
                                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak (const class GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) ;

  public: GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak & operator = (const class GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration bang_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_logListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_logListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_logListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLogMessage,
                                                 const class GALGAS_semanticExpressionAST & in_mLogExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_logListAST extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_logListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_semanticExpressionAST & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_logListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_semanticExpressionAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_logListAST add_operation (const GALGAS_logListAST & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_semanticExpressionAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_semanticExpressionAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_semanticExpressionAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_semanticExpressionAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_semanticExpressionAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLogExpressionAtIndex (class GALGAS_semanticExpressionAST constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLogMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_semanticExpressionAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_semanticExpressionAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLogExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLogMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_logListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_logListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_logListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_logListAST ;
 
} ; // End of GALGAS_logListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_logListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_logListAST (const GALGAS_logListAST & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLogMessage (LOCATION_ARGS) const ;
  public: class GALGAS_semanticExpressionAST current_mLogExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_logListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_logListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLogMessage ;
  public: inline GALGAS_lstring readProperty_mLogMessage (void) const {
    return mProperty_mLogMessage ;
  }

  public: GALGAS_semanticExpressionAST mProperty_mLogExpression ;
  public: inline GALGAS_semanticExpressionAST readProperty_mLogExpression (void) const {
    return mProperty_mLogExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_logListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLogMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLogMessage = inValue ;
  }

  public: inline void setter_setMLogExpression (const GALGAS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLogExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_logListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_logListAST_2D_element (const GALGAS_lstring & in_mLogMessage,
                                        const GALGAS_semanticExpressionAST & in_mLogExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_logListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_logListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_logInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_logInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_logInstructionAST (const class cPtr_logInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_logListAST readProperty_mLogList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_logInstructionAST extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_logListAST & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_logInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @logInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_logInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_logListAST mProperty_mLogList ;

//--- Constructor
  public: cPtr_logInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                  const GALGAS_logListAST & in_mLogList
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_logInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_logInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_logInstructionAST_2D_weak (const class GALGAS_logInstructionAST & inSource) ;

  public: GALGAS_logInstructionAST_2D_weak & operator = (const class GALGAS_logInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_logInstructionAST bang_logInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_logInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_logInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_logInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_logInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_logInstructionForGeneration (const class cPtr_logInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLogMessage (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mLogExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_logInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logInstructionForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_logInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @logInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_logInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLogMessage ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mLogExpression ;

//--- Constructor
  public: cPtr_logInstructionForGeneration (const GALGAS_lstring & in_mLogMessage,
                                            const GALGAS_semanticExpressionForGeneration & in_mLogExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_logInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_logInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_logInstructionForGeneration_2D_weak (const class GALGAS_logInstructionForGeneration & inSource) ;

  public: GALGAS_logInstructionForGeneration_2D_weak & operator = (const class GALGAS_logInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_logInstructionForGeneration bang_logInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_logInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_logInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @loopInstructionWithVariantAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_loopInstructionWithVariantAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_loopInstructionWithVariantAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_loopInstructionWithVariantAST (const class cPtr_loopInstructionWithVariantAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mVariantExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfVariantExpression (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mFirstInstructions (void) const ;

  public: class GALGAS_location readProperty_mEndOfFirstInstructions (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLoopExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfLoopExpression (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mSecondInstructions (void) const ;

  public: class GALGAS_location readProperty_mEndOfSecondInstructions (void) const ;

  public: class GALGAS_location readProperty_mEndOfLoopInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_loopInstructionWithVariantAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_loopInstructionWithVariantAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_semanticExpressionAST & inOperand1,
                                                                             const class GALGAS_location & inOperand2,
                                                                             const class GALGAS_semanticInstructionListAST & inOperand3,
                                                                             const class GALGAS_location & inOperand4,
                                                                             const class GALGAS_semanticExpressionAST & inOperand5,
                                                                             const class GALGAS_location & inOperand6,
                                                                             const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                             const class GALGAS_location & inOperand8,
                                                                             const class GALGAS_location & inOperand9
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_loopInstructionWithVariantAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_loopInstructionWithVariantAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @loopInstructionWithVariantAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_loopInstructionWithVariantAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mVariantExpression ;
  public: GALGAS_location mProperty_mEndOfVariantExpression ;
  public: GALGAS_semanticInstructionListAST mProperty_mFirstInstructions ;
  public: GALGAS_location mProperty_mEndOfFirstInstructions ;
  public: GALGAS_semanticExpressionAST mProperty_mLoopExpression ;
  public: GALGAS_location mProperty_mEndOfLoopExpression ;
  public: GALGAS_semanticInstructionListAST mProperty_mSecondInstructions ;
  public: GALGAS_location mProperty_mEndOfSecondInstructions ;
  public: GALGAS_location mProperty_mEndOfLoopInstruction ;

//--- Constructor
  public: cPtr_loopInstructionWithVariantAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                              const GALGAS_location & in_mEndOfVariantExpression,
                                              const GALGAS_semanticInstructionListAST & in_mFirstInstructions,
                                              const GALGAS_location & in_mEndOfFirstInstructions,
                                              const GALGAS_semanticExpressionAST & in_mLoopExpression,
                                              const GALGAS_location & in_mEndOfLoopExpression,
                                              const GALGAS_semanticInstructionListAST & in_mSecondInstructions,
                                              const GALGAS_location & in_mEndOfSecondInstructions,
                                              const GALGAS_location & in_mEndOfLoopInstruction
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

